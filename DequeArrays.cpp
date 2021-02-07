#include<bits/stdc++.h>
using namespace std;

int main(){
    //Unlike normal dynamic arrays we can insert an element to its begining and its end
    //Lets see this in an example below

    deque<int> d;
    d.push_back(5);     //Present Array: [5]
    d.push_back(12);    //Present Array: [5,12]
    d.push_front(3);    //Present Array: [3,5,12]

    //Printing our array
    for(auto x:d){
        cout<<x<<" ";
    }
    cout<<"\n";
    //Popping our array contains from backside and front-side

    cout<<"Beginning element array popped out and so the array is: ";
    d.pop_front();      //taking out the front element
    //Printing our array
    for(auto x:d){
        cout<<x<<" ";
    }
    cout<<"\n";

    cout<<"Last element array popped out and so the array is: ";

    
    d.pop_back();       //taking out the last element out of the array
    //Printing our array
    for(auto x:d){
        cout<<x<<" ";
    }


}