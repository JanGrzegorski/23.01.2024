#include <iostream>
using namespace std;

struct Hobby
{
    string nazwa, rodzaj, kierunek;
};

struct Osoba
{
    char imie[50];
    char nazwisko[50];
    int wiek;
    Hobby mojeHobby;
};



int main()
{
    
    Osoba* wsk;

    Osoba o1 = { "Arkadiusz","Waliczek",47,{"programowanie","JS","Frontend"} };
    Osoba o2 = { "Mariusz","Waliczek",40,{"betonowanie","na sucho","wykonczeniowka"} };
    Osoba o3 = { "Arkadiusz","Waliczek",35,{"fryzjer","trendy","dredy"} };
    
    wsk = &o1;
    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->mojeHobby.nazwa << " " << wsk->mojeHobby.rodzaj << " " << wsk->mojeHobby.kierunek << endl;
    wsk = &o2;
    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->mojeHobby.nazwa << " " << wsk->mojeHobby.rodzaj << " " << wsk->mojeHobby.kierunek << endl;
    wsk = &o3;
    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->mojeHobby.nazwa << " " << wsk->mojeHobby.rodzaj << " " << wsk->mojeHobby.kierunek << endl;
    return EXIT_SUCCESS;
}
