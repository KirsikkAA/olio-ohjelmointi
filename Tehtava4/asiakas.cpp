#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"

Asiakas::Asiakas(string n, double lr)
    : kayttotili(n), luottotili(n, lr)
{
    nimi = n;
    cout << "Asiakkuus luotu " << nimi << endl;
}

string Asiakas::getNimi() const
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "\n" <<"Pankkitilin " << kayttotili.getBalance() << endl;
    cout << "\n" <<"Luottotilin " << luottotili.getBalance() << "\n" << endl;
}

bool Asiakas::talletus(double summa)
{
    cout << "Asiakas " << nimi << " tallettaa PA" << endl;
    bool onnistuiko = kayttotili.deposit(summa);

    if (onnistuiko == false) //ylimäärästä
    {
        cout << "Talletus ei onnistunut" << endl;
    }
    return onnistuiko;
}

bool Asiakas::nosto(double summa)
{
    cout << "Asiakas " << nimi << " nostaa PA" << endl;
    bool onnistuiko = kayttotili.withdraw(summa);

    if (onnistuiko == false)
    {
        cout << "Nosto ei onnistunut" << endl;
    }
    return onnistuiko;
}

bool Asiakas::luotonMaksu(double summa)
{
    cout << "Asiakas " << nimi << " tallettaa luotottomaksulle LU" << endl;
    bool onnistuiko = luottotili.deposit(summa);

    if (onnistuiko == false)
    {
        cout << "Talletus ei onnistunut" << endl;
    }
    return onnistuiko;
}

bool Asiakas::luotonNosto(double summa)
{
    cout << "Asiakas " << nimi << " nostaa luotolta LU" << endl;
    bool onnistuiko = luottotili.withdraw(summa);

    if (onnistuiko == false)
    {
        cout << "Nosto ei onnistunut" << endl;
    }
    return onnistuiko;
}

bool Asiakas::tilisiirto(double summa, Asiakas &saaja)
{
    bool onnistuiko = nosto(summa);
    if (onnistuiko == true)
    {
        saaja.talletus(summa);
        cout << "siirto onnistu" << endl;
    }
    else
    {
        cout << "jotain meni pieleen siirrossa" << endl;
    }
    return onnistuiko;
}
