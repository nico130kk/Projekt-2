#include "wartosci.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

void wartosci::nadaj(){
    if (nazwa=="+" || nazwa=="-") prio=1;
    else if(nazwa=="*" || nazwa=="/" || nazwa=="%") prio=2;
    else if(nazwa=="^") prio=3;
    else if(nazwa=="(") prio=-1;
    else if(nazwa==")") prio=-2;
    else prio=0;
}