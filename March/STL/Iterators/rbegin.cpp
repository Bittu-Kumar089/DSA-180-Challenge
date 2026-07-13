#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};

    // for(vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++){  // Ye thoda khatarnaak hai, isme reverse iterator use karte hain, rbegin() se start karte hain aur rend() pe end karte hain
    //     cout<<*it<<" ";
    // }

        for(auto it = vec.rbegin(); it != vec.rend(); it++){
        cout<<*it<<" ";
        }
             

    cout<<endl;
    return 0;
}