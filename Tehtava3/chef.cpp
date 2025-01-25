#include "chef.h"

Chef::Chef() {}

Chef::Chef(string name)
{
    chefName = name;
    cout << " Chef konstruktori, kokin nimi on " << chefName << endl;
}

Chef::~Chef()
{
     cout << "Chef destruktori, " << chefName << endl;
}

string Chef::getName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    cout << "Chef " << chefName << ", Aineksia on " << aines
         << ", Salaattia voi tehda " << aines/5 << " annosta" << endl;
    return aines/5;
}

int Chef::makeSoup(int aines)
{
    cout << "Chef " << chefName << ", Aineksia on " << aines
         << ", Soppaa voi tehda " << aines/3 << " annosta" << "\n"<< endl;
    return aines/3;
}
