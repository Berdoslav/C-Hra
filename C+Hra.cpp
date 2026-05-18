#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    srand(time(0));

    int classa, maxHp, hp, maxMana, mana,
        utok, gold = 0, level = 1, exp = 0;

    string jmenoClassy;
    string typEnergie;



    bool potvrzeni = false;

    while(potvrzeni == false) {

        cout << "==========================" << endl;
        cout << "1 - Bojovnik" << endl;
        cout << "2 - Kouzelnik" << endl;
        cout << "3 - Paladin" << endl;
        cout << "4 - Lucistnik" << endl;
        cout << "==========================" << endl;

        cout << "Vyber classu: ";
        cin >> classa;

        switch(classa) {

        case 1:
            jmenoClassy = "Bojovnik";

            maxHp = 120;
            hp = maxHp;

            typEnergie = "Energie";
            maxMana = 50;
            mana = maxMana;

            utok = 10;
            break;

        case 2:
            jmenoClassy = "Kouzelnik";

            maxHp = 70;
            hp = maxHp;

            typEnergie = "Mana";
            maxMana = 100;
            mana = maxMana;

            utok = 15;
            break;

        case 3:
            jmenoClassy = "Paladin";

            maxHp = 140;
            hp = maxHp;

            typEnergie = "Mana";
            maxMana = 50;
            mana = maxMana;

            utok = 7;
            break;

        case 4:
            jmenoClassy = "Lucistnik";

            maxHp = 90;
            hp = maxHp;

            typEnergie = "Energie";
            maxMana = 60;
            mana = maxMana;

            utok = 12;
            break;

        default:
            cout << "Neplatna classa!" << endl;
            continue;
        }

        cout << endl;
        cout << "===== TVOJE CLASSA =====" << endl;

        cout << "Classa: " << jmenoClassy << endl;

        cout << "HP: " << hp << "/" << maxHp << endl;

        cout << typEnergie << ": "
             << mana << "/" << maxMana << endl;

        cout << "Utok: " << utok << endl;

        cout << "Level: " << level << endl;
        cout << "Gold: " << gold << endl;
        cout << "EXP: " << exp << endl;

        char odpoved;

        cout << endl;
        cout << "Chces potvrdit classu? (a/n): ";
        cin >> odpoved;

        if(odpoved == 'a') {
            potvrzeni = true;
        }

        cout << endl;
    }

    cout << "Hra zacina..." << endl;

    return 0;
}
