#include <iostream>
using namespace std;

    void explainmultiset(){
		//eerything is same as set
		//only stores duplicate element also

		multiset<int>ms;
		ms.insert(1); //{1}
		ms.insert(1); //{1, 1}
		ms.insert(1); //{1, 1, 1}

		ms.erase(1); // all 1's erased

		int cnt = ms.count(1);

		//only a single one erased
		ms.erase(ms.find(1));

		ms.erase(ms.find(1), ms.find(1)+2);
		//rest all functions same as set


	}

    