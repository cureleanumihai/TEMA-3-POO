#ifndef SUPERSPORT_H
#define SUPERSPORT_H
#include<Masini.h>

class Supersport:public Masini
{   private:
        int pret;
    public:
        Supersport():Masini(){pret=0;}
        Supersport(int an,int pret=0):Masini(an),pret(pret){}
        Supersport(const Supersport& copie):Masini(copie),pret(copie.pret){}
        Supersport& operator=(Supersport& a);
        int getPret();
        ~Supersport(){an=0;}
        void afisare(){cout<<an<<" "<<pret<<'\n';}
        friend istream &operator>>(istream &in,Supersport& a);

};

#endif // COUPE_H
