#include <iostream>
using namespace std;


 void explainpair() {

        pair<int, int> p = {1, 3};
        //it holds two date types in pair being first and second inside

        cout<< p.first << " " << p.second;

        pair<int, pair<int, int>> p2 ={1, {3,4}};
        //when we have 3 elements we can use nested pair

        cout <<p.first << " " << p2.second.second<< " " << p2.second.first;

        pair<int, int> arr[] = { {1,2}, {2,5}, {5,1}};
        //can use pair for array

        cout<< arr[1].second;
    }
int main() {
    explainpair();
    return 0;
}
