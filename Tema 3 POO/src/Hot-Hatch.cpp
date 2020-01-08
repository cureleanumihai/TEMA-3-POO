#include "Hot-Hatch.h"
Hot-Hatch& Hot-Hatch::operator=(Hot-Hatch& a)
{ culoare=a.culoare;
}
istream &operator>>(istream &in,Hot-Hatch& a)
{   in>>(Masini&) a;
    cout<<a.culoare;
}
