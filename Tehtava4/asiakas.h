#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class Asiakas
{
    public:
    Asiakas(string n, double lr);
    string getNimi() const;
    void showSaldo();
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tilisiirto(double summa, Asiakas &saaja);

    void setNimi(const string &newNimi);

    private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
