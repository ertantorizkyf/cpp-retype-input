#include <iostream>
#include <string>
#include <ctime>
#include<cstdlib>
using namespace std;

void delay(int duration){

    clock_t delay_clock = clock();
    
    while(clock() < delay_clock+duration);
}

int main()
{
    string str;
    int str_len, loop;

    cout << "Type anything: ";
    getline(cin, str);
    str_len = str.length();
    
    for(loop=0;loop<=(str_len-1);loop++)
    {
        cout << str[loop];
        delay(250);
    }
    
    cin.ignore();

    return 0;
}