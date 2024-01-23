#include <iostream>
using namespace std;

struct Flaga
{
    string kolory;
    unsigned int dd, mm, rr;

};

struct Panstwo
{
    string nazwa;
    int ludnosć;
    int ilość_wojew;
    Flaga opis_flagi;
};



int main()
{
   
    Panstwo* wsk;

    Panstwo p1 = { "Polska",38,16,{"biało-czerwona",01,8,1919} };
    Panstwo p2 = { "Niemcy",83,16,{"czarno-zolto-czerwona",14, 03, 1933} };
    Panstwo p3 = { "Francja",67,18,{"bialo-czerwono-niebieska",05,03,1848} };
    Panstwo p4 = { "USA",331,50,{"czerwono-niebiesko-biala",14,06,1777} };
    Panstwo p5 = { "Hiszpania",47,17,{"czerwono-zolta",19,07,1927} };

 
    int menu;
    cout << "panstwo1,panstwo2,panstwo3,panstwo4,panstwo5" << endl;
    cout << "Wybierz panstwo = "; cin >> menu;

    switch (menu)
    {
    case 1:
        wsk = &p1;
        cout << wsk->nazwa << " " << wsk->ludnosć << " " << wsk->opis_flagi.kolory << " " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
        break;
    case 2:
        wsk = &p2;
        cout << wsk->nazwa << " " << wsk->ludnosć << " " << wsk->opis_flagi.kolory << " " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
        break;
    case 3:
        wsk = &p3;
        cout << wsk->nazwa << " " << wsk->ludnosć << " " << wsk->opis_flagi.kolory << " " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
        break;
    case 4:
        wsk = &p4;
        cout << wsk->nazwa << " " << wsk->ludnosć << " " << wsk->opis_flagi.kolory << " " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
        break;
    case 5:
        wsk = &p5;
        cout << wsk->nazwa << " " << wsk->ludnosć << " " << wsk->opis_flagi.kolory << " " << wsk->opis_flagi.dd << " " << wsk->opis_flagi.mm << " " << wsk->opis_flagi.rr << endl;
        break;
    default:
        cout << "Nie zdefiniowano operacji:rozpocznij od początku" << endl;
        break;
    }

    system("pause");
    return 0;
}


