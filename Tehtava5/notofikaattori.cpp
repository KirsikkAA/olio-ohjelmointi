#include "notofikaattori.h"
#include "seuraaja.h"

using namespace std;

Notofikaattori::Notofikaattori() {}

void Notofikaattori::lisaa(Seuraaja *seur)
{
    cout << "Notifikaattori lisaa seuraajan: "<< seur->getNimi() << endl;
    seur->next = seuraajat;
    seuraajat = seur;
}

void Notofikaattori::poista(Seuraaja *poist)
{
    cout << "poistetaan seuraaja " << poist->getNimi() << endl;

    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        if(alku->next == poist){
            alku->next = poist-> next;
        } else {
            alku = alku->next;
        }
    }
}

void Notofikaattori::tulosta()
{
  Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        cout << "Listassa nyt: " << alku->getNimi() << endl;
        alku = alku->next;
        if (alku != nullptr){
        } else {
            cout << "Lista loppui" << endl;
       }
    }
}

void Notofikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        alku->paivitys(viesti);
        alku = alku->next;
    }
    cout << endl;
}


