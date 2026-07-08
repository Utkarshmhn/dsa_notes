#include <iostream>
using namespace std;
int main (){
	int x;
	cin >> x;

	int dup = x;
	int sum = 0;

	while (x>0){
		int lastdigit = x%10;
		sum = sum + (lastdigit * lastdigit * lastdigit);
		x = x/10;
	}
	if (sum == dup) 
	  cout << dup << " is an armstrong number" << endl;
	else   
	  cout << dup << " is not an armstrong number" << endl;
}