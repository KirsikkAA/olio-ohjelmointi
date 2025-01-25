#include <iostream>
#include "chef.h"
#include "Italianchef.h"

using namespace std;

int main()
{
    Chef c_olio("Mario");

    c_olio.makeSalad(11);
    c_olio.makeSoup(15);


    ItalianChef i_olio("Luigi");

    i_olio.makeSalad(10);
    i_olio.askSecret("pizza", 20, 18);

    return 0;
}
