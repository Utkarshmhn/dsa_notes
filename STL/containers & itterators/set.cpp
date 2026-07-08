//sorted order and unique 
#include <iostream>
using namespace std;

    void explainst(){

    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2} // wont store 2 again as stores unique  
    st.insert(4); //{1, 2, 4}
    st.insert(3) //{1, 2, 3, 4} //stored 3 in a sorted manner

    // functionality of insert in vector
	// can be used also, that only increases efficiency

	// begin(), end(), rbegin(), rend(), size(), empty(), and swap() are same as those of above 

	// {1, 2, 3, 4, 5}
	auto it = st.find(3);

	//{1, 2, 3, 4, 5}
	auto it = st.find(6); //if the element is not present it will give st.end()

	//{1, 4, 5}
	st.erase(5); // erases 5 // takes logrithmic time

	int cnt = st.count(1);

	auto it= st.find(3); 
	st.erase(it); //it takes constant time

	//{1, 2, 3, 4, 5}
	auto it1 = st.find (2);
	auto it2 = st.find(4);
	st.erase(it1, it2); //after erase {1, 4, 5} [first, last]

	//lower_bound() and upper_bound() funstion works in the same way
	//as in vector it does

	//this is the syntax
	auto it = st.lower_bound(2)
	auto it= st.upper_bound(3);
	 
}	