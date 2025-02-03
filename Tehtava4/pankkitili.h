#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
    public:
    Pankkitili();
    Pankkitili(string o);
    double getBalance();
    bool deposit(double);
    virtual bool withdraw(double);

    protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
