#include<iostream>
using namespace std;

void explain vector() {
    vector<int> v; //declaration

    //when we use an array we cant change the size of it as its a constant container so there comes vector which is a dyanamic container whose change can be modified.

    v.push_back(1);
    //initially v is an empty container so what push back does is takes 1 into it
    v.empace_bank(2);
    //same as push back and dynamically increases the size and puts 2 in it as commanded 

    vector<pair<int, int>>vec; //declaring pair in vector

    v.push_back({1, 2});
    v.emplace_back(1,2);


    vector<int> v(5,100);
    //its like container of 5 instances of 100 {100, 100, 100, 100, 100}

    vector<int> v(5);
    //similar {0, 0, 0, 0, 0}
    
    vector<int> v1(5, 20);
    vector<int> v2(v1); //copying one vector into another instead of writing again


//iterators
//it refers to memory not the element (it is just a name here)
    vector<int>::iterator it= v.begin();
    it++ //for moving next
    cout << *(it) << " "; //in cpp we * when printing memory and not the element

    it = it +2;
    cout<< *(it) << " ";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";
    
//to print a vector
    for (vector<int>::iterator it = v.begin(); it !=v.end(); it++){
    cout<< *(it)<< " ";
    }
//we started loop for element-vise start with begin to print and goes to end which is not equals to makes it print till last element

//we are having long syntax therefore we will shorter syntax like auto which automatically takes it as iterator.
for (auto it+v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
}
//using for each loop
for (auto it: v){
    cout<<it<< " ";
}

//deletion of a vector
//{10, 20, 12, 23,}
v.erase(v.begin()+1); //this would erase 20

//{10, 20, 12, 23, 35}
v.erase(v.begin() +2, v.begin() +4); // if we want to erase an segment we start with the first element of that segement like for 12 and 23 as segment we would do begi()+2 and end with the next element of the last element
//like [start, end)



//insert function
vector<int>(2,100); //{100,100}
v.insert(v.begin(), 300)> //{300, 200, 200}
v.insert(v.begin() +1, 2, 10)
//when we need to insert multipls elementd.

//some other functions
//{10, 20}
cout<< v.size(); //2

//{10, 20}
v.pop_back(); //{10}

//v1 -> {10, 20}
//v2 -> {30, 40}
v1.swap(v2); //v1 ->{20, 40} , v2-> {10, 20}

v.clear(); //erases the entire vector

cout<< v.empty();


}    