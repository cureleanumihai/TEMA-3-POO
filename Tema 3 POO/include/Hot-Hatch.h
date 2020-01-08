#ifndef COUPE_H
#define COUPE_H
#include<Masini.h>
#include<Hot-Hatch.h>
class Hot-Hatch:public Masini
{   private:
        string culoare;
    public:
        Hot-Hatch():Masini(){culoare=" ";}
        Hot-Hatch(int an,string culoare=" "):Masini(an),culoare(culoare){}
        Hot-Hatch(const Hot-Hatch& copie):Masini(copie),culoare(copie.culoare){}
        Hot-Hatch& operator=(Hot-Hatch& a);
        ~Hot-Hatch(){an=0;}
        void afisare(){cout<<an<<" "<<culoare<<'\n';}
        friend istream &operator>>(istream &in,Hot-Hatch& a);

};

#endif // COUPE_H
