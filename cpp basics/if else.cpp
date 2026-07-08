#include <iostream>
using namespace std;
int main()
//write a program that takes an input of age and prints if you are adult or not
{
    int age;
    cin>>age;
    if(age>= 18){
        cout<< "You are an adult";
    }
    else{
        cout<< "You are not an adult";
    }


    return 0;
}