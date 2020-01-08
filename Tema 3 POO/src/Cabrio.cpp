#include "Cabrio.h"
Cabrio& Cabrio::operator=(Cabrio& a)
{ mat_acoperis=a.mat_acoperis;
}
istream &operator>>(istream &in,Cabrio& a)
{   in>>(Masini&) a;
    cout<<"Introduceti materialul acoperisului:\n";
    in>>a.mat_acoperis;
}
