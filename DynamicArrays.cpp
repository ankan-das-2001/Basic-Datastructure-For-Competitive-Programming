#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        v.push_back(a); //An element is being added to the array like this 1->2->3->4
    }

    // To check the above constraint lets print the value of array
    cout<<"Output\n";
    for(auto x : v ){   //We can implement this kind of for loop for parsing the array
        cout<<x<<"\n";
    }
}
