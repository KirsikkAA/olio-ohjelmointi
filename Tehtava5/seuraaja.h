#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
#include <iterator>

using namespace std;

class Seuraaja
{
    public:
    Seuraaja();
    Seuraaja *next = nullptr;
    Seuraaja(string n);
    void paivitys(string viesti);
    string getNimi() const;

    private:
    string nimi;
};


#endif // SEURAAJA_H
