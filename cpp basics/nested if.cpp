#include <iostream>
using namespace std;
/*
Take the age from the user and then decide accordingly
1. if age <18,
  print - not eligible for job
2. if age >= 18 and age <=54,
  print - eligible for job
3. if age >=55 and <= 57,
  print - eligible for job, but retirement soon.
4. if age >57,
  print -  retirement time  
*/

int main(){
    int age;
    cin>> age;
    cout<< "Enter your age: "<< age;

    if(age<18){
        cout<<"Not eligible for job!";
    }

    else if(age<=54){
        cout<<"Eligible for job";
        if (age>=55){
            cout<<",but retirement soon";
        }
    }
    else if(age>57){
        cout<<"Retirement time";

    }
    return 0;

    //nested if refers to that we can put additional conditions inside an existing condition creating a nest.
}