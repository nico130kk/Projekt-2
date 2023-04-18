#ifndef ONP_H_INCLUDED
#define ONP_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
#include "wartosci.h"
using namespace std;

class Onp {    //klasa w ktorej jest
public:
    void dodaj(wartosci znk);     //funkcja dodaj odpowiedni token na wyjscie
    void podzial();             //funkcja ktora dzieli wejście na tokeny klasy "wartosci"
    string dzialanie;           //wejscie
    vector<wartosci> tokeny;    //tablica 
    stack<wartosci> stos;       //stos
    vector<wartosci> wyjscie;  //odpowiedz zapisana w odwrotnej notacji polskiej    
};

#endif