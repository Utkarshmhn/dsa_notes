#include <iostream>
using namespace std;
/*
take the day no and print the corresponding day

for 1 print monday,
for 2 print tuesday and so on for 7 print sunday
*/
int main(){
    int day;
    cin>> day;
    cout<< "Enter number: ";
    
    switch (day){
        case 1:
        cout<< "Monday";
        break;

        case 2:
        cout<< "Tuesday";
        break;

        case 3:
        cout<< "Wednesday";
        break;

        case 4:
        cout<< "Thrusday";
        break;

        case 5:
        cout<< "Friday";
        break;

        case 6:
        cout<< "Saturday";
        break;

        case 7:
        cout<< "Sunday";
        break;

        default:
        cout<< "invalid";
    }

    //in simple case of switch if the case is valid it will still execute the other cases thats why we use something called break and a default case at the end.
     
    return 0;

}