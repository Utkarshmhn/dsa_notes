#include <iostream>
using namespace std;
int cut = 0;
void base(){
	if (cut == 3) return;
	cout<< cut << endl;
	cut++;
	base();
}
int main(){
	base();

	return 0;
}
