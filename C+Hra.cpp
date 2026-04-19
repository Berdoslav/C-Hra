#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

int classa, hp, silaU;
bool paladin, mage;

paladin = false;
mage = false;

cout << "Vitej ve hre jaka classa si ? ";
cin >> classa;

switch(classa) {

case 1:
    cout << "Vitej BOJOVNIKU! ";
    hp = 100;
    silaU = 10;
    break;

case 2:
    cout << "Vitej KOUZELNIKU! ";
    hp = 65;
    silaU = 15;
    mage = true;
    break;

case 3:
    cout << "Vitej PALADINE! ";
    hp = 140;
    silaU = 6;
    paladin = true;
    break;

case 4:
    cout << "Vitej LUCISTNIKU!";
    hp = 80;
    silaU = 12;
    break;

default:
    cout << "Neplatna classa!";
}


}
