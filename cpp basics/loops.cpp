#include <iostream>
using namespace std;
int main(){
    int i;
//for loop    
    for(i=1; i<=10; i=i+1){
        cout<< "oatkrs"<<endl;
    } 
//while loop    
    int i=1;
    while (i<5){
        cout<<"oatkrs"<<i<<endl;
        i=i+1;
    }
//do while loop    
//when we want our code to execute atleast once we use do while 
int i=2;
    do{
        cout<<"oatkrs"<<i<<endl;
        i=i+1;
    }while(i<=1);
    //here our original initiation is false according to the condition but it still runs once 
    
    return 0;
}