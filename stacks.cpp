#include<bits/stdc++.h>

using namespace std;

int main(){
    //Stack implements LIFO - Last In First Out
    /*
    */

    //You should know how stack works before watching the c++ implemented template of stack
    stack<int> s;
    s.push(29); //Stack contains: [29]
    s.push(5);  //Stack contains: [29,5]
    cout<<s.top()<<"\n"; // It will show 5 as it is on the top
    s.pop();    //This will take out the top element from the stack i.e, 5
    cout<<s.top()<<"\n"; 
}