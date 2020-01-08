#include "Masini.h"
istream& operator>>(istream& in,Masini& a)
{   cout<<"Introduceti anul:\n";
    in>>a.an;
}
Masini& Masini::operator=(Masini& a)
{ an=a.an;

}

