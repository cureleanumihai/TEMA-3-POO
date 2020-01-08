#include "HotHatch.h"
HotHatch& HotHatch::operator=(HotHatch& a)
{ culoare=a.culoare;
}
istream &operator>>(istream &in,HotHatch& a)
{   in>>(Masini&) a;
    cout<<"Introduceti culoarea:\n";
    in>>a.culoare;
}
