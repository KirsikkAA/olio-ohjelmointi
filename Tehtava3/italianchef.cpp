#include "italianchef.h"


ItalianChef::ItalianChef()
{
    cout << "defaultti, ei nimea" << endl;
}

ItalianChef::ItalianChef(string name)
    :Chef(name)
{
    cout << "ItalianChef konstruktori, kokin nimi on " << name << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "\n" << "ItalianChef destruktori, " << chefName << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    flour = f;
    water = w;

    if (pw == password)
    {
        cout << "\n" << "Annoit oikean salasanan!" << endl;
        makePizza();
        return true;
    }
    else
    {
        cout << "Et antanut oikeaa salasanaa" << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    cout << "\n" << "ItalianChef " << chefName << ", Jauhoja on " << flour <<
    ", " "Vetta on " << water <<
        ", joten pizzoja voi tehda " << min(flour/5, water/5) << endl;
    return min(flour/5, water/5);
}
