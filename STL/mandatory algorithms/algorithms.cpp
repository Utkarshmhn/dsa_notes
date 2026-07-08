#include <iostream>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
	if(p1.second < p2.second) return true;
	if(p1.second > p2.second) return false; //basically swaps when false

    //they are same
	if (p1.first > p2.first) return true;
	return false;
	
}

void explainExtra(){
	sort(a, a+4); //for array of size 4
	sort(v.begin, v.end); //for vector

	sort(a+2, a+4); //sorting selctive portion
	sort(a, a+n, greater<int>); //sorting in descending order

	//sort it according to increasing of second element 
	//if second element is same then sort
	//it according to first element but in descending order

	sort(a, a+n, comp); //comp is a self written compreator explained above in bool as it is boolean
	
}