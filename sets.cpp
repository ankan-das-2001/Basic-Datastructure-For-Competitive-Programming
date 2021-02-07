#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    //Inserting elements i our set
    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout<<s.count(3)<<"\n";   //return the number of occurances of the parameter inside the set

    s.erase(3);
    s.insert(4);

    cout<<s.count(3)<<"\n"; 
    cout<<s.count(4)<<"\n"; 

    //Sets have only unique element so count() can have either  0 or 1 value.
}