#include "seuraaja.h"

Seuraaja::Seuraaja() {}

Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << " Luodaan seuraaja " << nimi << endl;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " sai viestin" << viesti << endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}



