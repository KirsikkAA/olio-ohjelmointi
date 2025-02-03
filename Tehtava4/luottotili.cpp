#include "luottotili.h"

Luottotili::Luottotili(){}

Luottotili::Luottotili(string o, double lr)
    : Pankkitili(o)
{
    luottoRaja = lr;
    cout << "Luottotili luotu  " << omistaja
    << ", Luottoraja = " << luottoRaja << endl;
}

bool Luottotili::deposit(double summa)
{
    if(summa <= 0)
    {
        cout << "ei voi tallettaa, " << "saldo on = " << saldo << endl;
        return false;
    }

    else
    {
        cout << "saldo = " << saldo << " talleta = " << summa << endl;
        saldo = (saldo + summa);
        cout << "uusi saldo on = " << (saldo) << endl;
        return true;
    }
}

bool Luottotili::withdraw(double summa)
{
     cout << " saldo = " << saldo << " nostetaan summa = " << summa << endl;

    if (summa <= 0){
        cout << "Annettu summa on negatiivinen eli et voi nostaa, ";
        cout << "saldo = " << saldo << endl;
        return false;
    }

    if (saldo + summa > luottoRaja)
    {
        cout << "Summa menee luottorajan yli" << endl;
        return false;
    }

    else
    {
    saldo = (saldo - summa);
    cout << "uusi saldosi on " << saldo << endl;
    return true;
    }
}
