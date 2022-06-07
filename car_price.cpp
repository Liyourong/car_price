#include <iostream>
#include <string>
#include "leeselection.h"
#define maxx 1000

using namespace std;

int receive()
{
    return (in("Enter the price, entering -1 to exit:           "));
}

double collectaverage()
{
    double temp = receive();
    int count = 0;
    double sum = 0;
   // int flag = 0;
    while (temp > 0)
    {
        count++;
        sum = sum + temp;
        temp = receive();
    }
    print(count);
    print(" data entered, average is ");
    return sum/double(count);
}



int main()
{
    print(collectaverage());
}

