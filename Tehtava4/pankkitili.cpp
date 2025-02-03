#include "pankkitili.h"

Pankkitili::Pankkitili() {}

Pankkitili::Pankkitili(string o)
{
    omistaja = o;
    cout << " Pankkitili luotu " << omistaja << endl;
}

double Pankkitili::getBalance()
{
    cout << "saldo on nyt " << saldo << endl;
    return saldo;
}

bool Pankkitili::deposit(double summa)
{
    if (summa <= 0){
        cout << "ei voi tallettaa" << endl;
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

bool Pankkitili::withdraw(double summa)
{
  cout << " saldo = " << saldo << " nostetaan summa = " << summa << endl;

    if (summa <= 0){
        cout << "summa negatiivinen eli ei voi nostaa, ";
        cout << "saldo = " << saldo << endl;
        return false;
    }

    if (summa > saldo){
        cout << " liian iso summa, ";
        cout << "saldo = " << saldo << endl;
        return false;
    }

   else
    {
    saldo = (saldo - summa);
    cout << " uusi saldo on = " << (saldo) << endl;
    return true;
    }
}
