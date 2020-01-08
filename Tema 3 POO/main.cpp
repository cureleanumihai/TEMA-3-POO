#include <iostream>
#include <vector>
#include <typeinfo>
#include<Masini.h>
#include<Coupe.h>
#include<Cabrio.h>
#include<HotHatch.h>
#include<Supersport.h>
#include<Expozitie.h>
using namespace std;
int main()
{   int n,nr;
    Expozitie<Masini>b;
    Expozitie<Supersport>s;
    cout<<"1-adaugare masina Coupe/HotHatch/Cabrio\n2-afisare expozitie(fara Supersport)\n3-adauga masina Supersport\n4-vinde masina Supersport\n";
    cout<<"5-Afisare masini Supersport expuse\n6-afisare masini Supersport vandute\n";
    cin>>n;
    while(n!=0)
    {   switch(n)
        {   case 1:
            {    b.adaugare();
                 break;
            }
            case 2:
            {    b.afisare();
                 break;
            }
            case 3:
            {    s.adauga_masina();
                 break;
            }
            case 4:
            {   cout<<"A cata masina doriti sa fie vanduta:\n";
                cin>>nr;
                s-=nr;
                //s.vinde_masina(nr);
                break;
            }
            case 5:
            {    s.afisare_expuse();
                 break;
            }
            case 6:
            {   s.afisare_vandute();
                break;
            }

        }
        cout<<"Introduceti optiunea dorita:\n";
        cin>>n;
    }
    return 0;
}
