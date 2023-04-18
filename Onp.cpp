#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
#include "Onp.h"
#include "wartosci.h"

void Onp::dodaj(wartosci znk){  
    wyjscie.push_back(znk);  
}

void Onp::podzial(){
    stringstream stream(dzialanie);
    wartosci token;
    while (stream >> token.nazwa){
        token.nadaj();
        tokeny.push_back(token);
        
    }
}