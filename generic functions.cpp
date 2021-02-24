// generic functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//we create one function to handle data of different data types from the template class

#include <iostream>
using namespace std;

template<typename T> // can also be ***template<class type>*** or template<class T> , T is used alot in textbooks
void Swap(T& a, T& b) {// using passing parameters by reference. function code copied into execution area at call
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 5;
    cout << a << " <--> " << b << "\n";
    Swap<int>(a, b);
    //or just swap (a,b)..data type determination happens automatically.
    cout << a << " <--> " << b << "\n";
    float c = 4.4, d = 4.5;
    cout << c << " <--> " << d << "\n";
    Swap<float>(c,d);
    cout << c << " <--> " << d << "\n";

    string firstName = "hamza", secondName = "me";
    cout << firstName << " <--> " << secondName << "\n";
    Swap(firstName, secondName);
    cout << firstName << " <--> " << secondName << "\n";
    
    

    system("pause>0");
}

