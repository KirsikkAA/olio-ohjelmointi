#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int annettunum = 0;
int arvottunum = 0;
int yritykset = 0;

void game(int max);

int main()
{
    game(40);       //mihin asti haluat arvottavan numeron olevan
    cout << "Yritykset:" << yritykset << endl;
}

void game(int max)
{
    srand(time(0));
    arvottunum = rand() % max + 1;


    // cout << arvottunum << endl;
    cout << "Luvut valilla 1 - " << max << endl;

    do {
        cout << "Anna luku" << endl;
        cin >> annettunum;

        if (annettunum > arvottunum){
            cout << "oikea luku on pienempi" << endl;
        }

        if (annettunum < arvottunum){
            cout << "oikea luku on suurempi" << endl;
        }

        if (annettunum == arvottunum){
            cout << "oikea vastaus!" << endl;
        }
        yritykset ++;
    } while (annettunum != arvottunum);

}
