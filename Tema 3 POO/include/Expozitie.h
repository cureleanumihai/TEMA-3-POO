#ifndef EXPOZITIE_H
#define EXPOZITIE_H
#include <vector>
#include <utility>
#include<iostream>
#include<Masini.h>
#include<Coupe.h>
#include<Cabrio.h>
#include<HotHatch.h>
#include<Supersport.h>
using namespace std;
template<class T>
class Expozitie
{   private:
        int nr_masini;
        vector<T*>expuse;
    public:
        Expozitie(){nr_masini=0;}
        ~Expozitie(){nr_masini=0;}
        void adaugare()
        {  nr_masini++;
           T* masina;
           int aux;
           cout<<"Introduceti un tip:\nCoupe-1,HotHatch-2,Cabrio-3:\n";
           cin>>aux;
           if(aux==1)
           {  masina=new Coupe;
              cout<<"Masina Coupe:\n";
              cin>>(Coupe&)(*masina);
           }
           if(aux==2)
           {  masina=new HotHatch;
              cout<<"Masina HotHatch:\n";
              cin>>(HotHatch&)(*masina);
           }
           if(aux==3)
           {  masina=new Cabrio;
              cout<<"Masina Cabrio:\n";
              cin>>(Cabrio&)(*masina);
           }
           expuse.push_back(masina);
        }
        void afisare()const
        {    try
             {  if(nr_masini==0)
                   throw 0;
                for(int i=0;i<nr_masini;i++)
                   expuse[i]->afisare();
             }
             catch(int x)
             { cout<<"Nu exista nicio masina in expozitie.\n";

             }
        }
};
template<>
class Expozitie<Supersport>
{  private:
       int nr_expuse;
       int nr_vandute;
       vector<Supersport*>expuse;
       vector<pair<Supersport*,int> >vandute;
   public:
       Expozitie(){nr_expuse=0;
                   nr_vandute=0;}
       ~Expozitie(){nr_expuse=0;
                    nr_vandute=0;}
       void vinde_masina(int nr)
       {   try
           {  if(nr>nr_expuse)
                  throw 0;
              vandute.push_back(make_pair(expuse[nr-1],expuse[nr-1]->getPret()));
              expuse.erase(expuse.begin()+nr-1);
              nr_expuse--;
              nr_vandute++;
           }
           catch(int x)
           {  cout<<"Nu exista aceasta masina in expozitie.\n";
           }
       }
       void adauga_masina()
       {   nr_expuse++;
           Supersport* masina;
           masina=new Supersport;
           cin>>(Supersport&)(*masina);
           expuse.push_back(masina);
       }
       void afisare_expuse()const
       {     try
             {   if(nr_expuse==0)
                     throw 0;
                 for(int i=0;i<nr_expuse;i++)
                    expuse[i]->afisare();
                 cout<<'\n';
             }
             catch(int x)
             { cout<<"Nu exista masini de tipul Supersport expuse.\n";
             }
       }
       void afisare_vandute()const
       { try
         {  if(nr_vandute==0)
                throw 0;
            for(int i=0;i<nr_vandute;i++)
            {     cout<<"Detalii:";
                  vandute[i].first->afisare();
                  cout<<"Pret:"<<vandute[i].second<<" ";
                  cout<<'\n';
            }
         }
         catch(int x)
         {  cout<<"Nu exista masini de tipul Supersport vandute.\n";
         }
       }
       Expozitie &operator-=(int i)
       {  vinde_masina(i);
       }
};

#endif // EXPOZITIE_H
