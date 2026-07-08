#include <iostream>
using namespace std;
//array is used to store data types multiple times.
int main(){
    /*int arr[5];
    cin>> arr[0]>> arr[1]>> arr[2]>> arr[3]>> arr[4];*/

    //cout<< arr[3];
    //arr[3] = 16;  we can even apply operators on array also replace them
    //cout<< arr[3]

    //2d array (check 2d array diagram for better understanding)
    int arr[3][5]; // this creates 3 rows of 5 boxes and the indexing same starts with zero
    arr[1][2] = 15; //2nd index of row 1 (according to index)
    cout<< arr[1][2];

    return 0;

}