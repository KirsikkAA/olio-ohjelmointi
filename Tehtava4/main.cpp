#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    //Pankkitili pa("MiuMauP");
    //pa.deposit(100);
    //pa.withdraw(20);
    //pa.getBalance();

    //Luottotili lu("MiumauL", 1000);
    //lu.deposit(35);
    //lu.withdraw(50);

    Asiakas A("MiuMauA", 1000);

    A.talletus(250);
    A.nosto(30);
    A.luotonMaksu(500);
    //A.luotonNosto(200);

    A.showSaldo();

    Asiakas B("Myy", 1000);

    //siirtää asiakkaalta A:lta B:lle
    A.tilisiirto(50, B);
    //B.tilisiirto(40, A);

    B.showSaldo();

    return 0;
}
