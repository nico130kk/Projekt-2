#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
#include <cmath>
#include "Onp.h"
#include "wartosci.h"
#include "Onp.cpp"
#include "wartosci.cpp"

using namespace std;

int main(){
    cout<<"Witam w kalkulatorze odwrotnej notacji polskiej, prosze podac dzialanie (by program dzialal wszystkie liczby i znaki musza byc rozdzielone spacja np. \"13 + 2\")"<<endl;
    Onp xyz;
    getline(cin,xyz.dzialanie);
    xyz.podzial();
    for(wartosci p : xyz.tokeny){           
        if(p.prio==0) xyz.dodaj(p);
        else{
            while(true){
            if(p.prio==-2){
                while(xyz.stos.top().prio!=-1){
                    xyz.dodaj(xyz.stos.top());
                    xyz.stos.pop();
                }
                xyz.stos.pop();
                break;
                    
            }
            if(xyz.stos.empty() || xyz.stos.top().prio<p.prio || p.prio==-1){ 
                xyz.stos.push(p);
                break;
            }
            else{
                xyz.dodaj(xyz.stos.top());
                xyz.stos.pop();
            }

            }
        }

    }

    while (!xyz.stos.empty())
    {
        xyz.dodaj(xyz.stos.top());
                xyz.stos.pop();
    }

    for(wartosci i : xyz.wyjscie){
        cout<<i.nazwa<<" ";
    }

    vector<float> wynik;
    for(int i=0; i<xyz.wyjscie.size(); ++i){
        if(xyz.wyjscie[i].nazwa=="+"){
            wynik[1]=wynik[1]+wynik[0];
            wynik.erase(wynik.begin());
        }
        else if(xyz.wyjscie[i].nazwa=="-"){
            wynik[1]=wynik[1]-wynik[0];
            wynik.erase(wynik.begin());
        }
        else if(xyz.wyjscie[i].nazwa=="*"){
            wynik[1]=wynik[1]*wynik[0];
            wynik.erase(wynik.begin());
        }
        else if(xyz.wyjscie[i].nazwa=="^"){
            wynik[1]=pow(wynik[1],wynik[0]);
            wynik.erase(wynik.begin());
        }
        else{
            wynik.insert(wynik.begin(),stof(xyz.wyjscie[i].nazwa));
        }        
    }

    cout<<endl<<"wynik to "<<wynik[0];
return 0;
}
