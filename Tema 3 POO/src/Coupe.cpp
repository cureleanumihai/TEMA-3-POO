#include "Coupe.h"
#include <typeinfo>
Coupe& Coupe::operator=(Coupe& a)
{ colectie=a.colectie;
}
istream &operator>>(istream &in,Coupe& a)
{   in>>(Masini&) a;
    cout<<"Daca este de colectie tastati 1, daca nu tastati 0:\n";
    try
    {   if(typeid(a.colectie)!=typeid(bool))
            throw a.colectie;
        in>>a.colectie;

    }
    catch(int x)
    {   cout<<"Valoarea introdusa este incorecta.\n";
    }
}
