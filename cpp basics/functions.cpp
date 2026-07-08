#include<iostream>
using namespace std;
//functions are set of code which performs something for you
//functions are used to modularise code
//functions are used to increase readability
//functions are used to used same code multiple times

//void function - which does not return anything
/*void printname(){
    cout<<"hey oatkrs";
}
int main(){
    printname();

    return 0;*/
//here we used void function outside the int structure which does not print anything and has no parameter (nothing inside ())
//and when we call our printname function inside int we get our result


/*void printname(string name){
cout<<"hey "<<name;
}
int main(){
    string name;
    cin>>name;
    printname(name);

    string name2;
    cin>>name2;
    printname(name2);
}*/
//here we gave the void a parameter like we wanted to print a string with a name taken from the user so defined a string and gave it to void function

//take two numbers and print its sum
//this is return function
int sum(int num1, int num2){
    int num3=num1+num2;
    return num3;
}
int main(){
    int num1, num2;
    cin>>num1>>num2;
    int res=sum(num1, num2);
    cout<< res;

    return 0;
}