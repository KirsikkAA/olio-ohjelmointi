#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include <iostream>
#include "pankkitili.h"

using namespace std;

class Luottotili : public Pankkitili
{
    public:
    Luottotili();
    Luottotili(string o, double lr);

    virtual bool deposit(double summa);
    virtual bool withdraw(double summa) override;

    protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H
