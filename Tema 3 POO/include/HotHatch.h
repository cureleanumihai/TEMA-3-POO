#ifndef HOTHATCH_H
#define HOTHATCH_H
#include<Masini.h>

class HotHatch:public Masini
{   private:
        string culoare;
    public:
        HotHatch():Masini(){culoare=" ";}
        HotHatch(int an,string culoare=" "):Masini(an),culoare(culoare){}
        HotHatch(const HotHatch& copie):Masini(copie),culoare(copie.culoare){}
        HotHatch& operator=(HotHatch& a);
        ~HotHatch(){an=0;}
        void afisare(){cout<<an<<" "<<culoare<<'\n';}
        friend istream &operator>>(istream &in,HotHatch& a);

};

#endif // COUPE_H
