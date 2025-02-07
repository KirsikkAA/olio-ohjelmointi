#ifndef NOTOFIKAATTORI_H
#define NOTOFIKAATTORI_H
#include <iostream>
#include "seuraaja.h"

using namespace std;

class Notofikaattori
{
    public:
    Notofikaattori();
    void lisaa(Seuraaja *seur);
    void poista(Seuraaja *seur);
    void tulosta();
    void postita(string viesti);

    private:
    Seuraaja *seuraajat = nullptr;
};

#endif // NOTOFIKAATTORI_H

