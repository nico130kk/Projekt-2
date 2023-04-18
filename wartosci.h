#ifndef WARTOSCI_H_INCLUDED
#define WARTOSCI_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

class wartosci{
public:
    string nazwa;   //jaka wartosc jest w tokenie np. '11' '+' itp.
    int prio;       //priorytet wrzucania na liste
    void nadaj();
};

#endif