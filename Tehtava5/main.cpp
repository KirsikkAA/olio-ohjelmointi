#include <iostream>
#include "seuraaja.h"
#include "notofikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Bertta");
    Seuraaja *C = new Seuraaja("Cecilia");

    Notofikaattori *N = new Notofikaattori();
    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    N->tulosta();

    N->poista(B);

    N->tulosta();

    N->postita(" 'Tuliko posti perille' ");

    //Seuraaja D("Deeps"); //testailua
    //Seuraaja E("Eemeli"); //testailua
/*
    A->next = B;
    B->next = C;

    Seuraaja *alku = A;
    while (alku != nullptr){
        cout << "Listassa nyt: " << alku->getNimi() << endl;
        alku->paivitys(" Sain, kaikki ok");
        alku = alku->next;

        if (alku != nullptr){
        cout << "Listassa seuraava: " << alku->getNimi() << endl;
        } else {
            cout << "Lista loppu" << endl;
        }
    }*/

    //D.next = &E; //testailua

    delete A;
    delete B;
    delete C;

    return 0;
}
