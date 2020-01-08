#ifndef CABRIO_H
#define CABRIO_H
#include<Masini.h>

class Cabrio:public Masini
{   private:
        string mat_acoperis;
    public:
        Cabrio():Masini(){mat_acoperis=" ";}
        Cabrio(int an,string mat_acoperis=" "):Masini(an),mat_acoperis(mat_acoperis){}
        Cabrio(const Cabrio& copie):Masini(copie),mat_acoperis(copie.mat_acoperis){}
        Cabrio& operator=(Cabrio& a);
        ~Cabrio(){an=0;}
        void afisare(){cout<<an<<" "<<mat_acoperis<<'\n';}
        friend istream &operator>>(istream &in,Cabrio& a);

};

#endif // COUPE_H
