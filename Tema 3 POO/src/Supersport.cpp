#include "Supersport.h"
Supersport& Supersport::operator=(Supersport& a)
{ pret=a.pret;
}
istream &operator>>(istream &in,Supersport& a)
{   in>>(Masini&) a;
    cout<<"Introduceti pretul:";
    in>>a.pret;
}
int Supersport::getPret()
{ return pret;

}
