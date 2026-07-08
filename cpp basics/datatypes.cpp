#include <iostream>
using namespace std;
int main()
{
    //int, used to store integers
    int x=10;//we are assinging value 10 to variable x and int has its own range to store the value 

    // if our value lies outside the range we use long or long long

    long y=1500;
    long long z=  140000;

    //float, double (for decimal values)

    float k= 5.14;
    float o= 5; // we can give int value to float it will give the output


    //string, getline
    string s1;
    string s2;
    cin>> s1 >> s2;
    cout << s1 << " " << s2;
    //here first input is picked at s1 and second one is picked at s2 and printed with space, basically a string picks up anything before the space and after the space its a new string 

    // so if we want our complete string assigned to 1 sttring only we used getline

    /*string str;
    getline (cin, str);
    cout << str;*/
    // we have to define a string and then use getline where we use cin inside getline with the string variable name then simply cout

    //character
    char ch= 'g';


 
    return 0;

}