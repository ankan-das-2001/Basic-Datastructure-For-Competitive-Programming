#include<bits/stdc++.h>

using namespace std;

int main(){
    // A queue a data structure that is similar to stack but uses FIFO - First In First Out
    //So here we can access the first and last element in O(1)
    //But here the pop function will pop out the first element that was implemented

    queue<int> q;
    q.push(32);
    q.push(23);
    cout<<"Front"<<q.front()<<"\n";
    cout<<"End"<<q.back()<<"\n";
    q.pop();
    cout<<q.front()<<"\n";
}