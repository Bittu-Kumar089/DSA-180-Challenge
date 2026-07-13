#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec = {1,2,3,4,5};
    
    vec.clear();  // clear the vector, it will remove all the elements but the capacity will remain same

    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"size of vector is "<<vec.size()<<endl;
    cout<<"capacity of vector is "<<vec.capacity()<<endl;
    
    return 0;

}