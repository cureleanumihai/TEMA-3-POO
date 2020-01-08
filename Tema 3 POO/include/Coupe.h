#ifndef COUPE_H
#define COUPE_H
#include<Masini.h>

class Coupe:public Masini
{   private:
        bool colectie;
    public:
        Coupe():Masini(){colectie=0;}
        Coupe(int an,bool colectie=0):Masini(an),colectie(colectie){}
        Coupe(const Coupe& copie):Masini(copie),colectie(copie.colectie){}
        Coupe& operator=(Coupe& a);
        ~Coupe(){an=0;}
        void afisare(){cout<<an<<" "<<colectie<<'\n';}
        friend istream &operator>>(istream &in,Coupe& a);

};

#endif // COUPE_H
