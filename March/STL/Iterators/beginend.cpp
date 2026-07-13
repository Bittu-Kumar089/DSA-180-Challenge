#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> vec = {1,2,3,4,5};

//     cout << "vec.begin() = " << *(vec.begin()) << endl;  // returns an iterator pointing to the first element of the vector 
//     cout << "vec.end() = " << *(vec.end()) << endl;  // returns an iterator pointing to the past-the-end element of the vector
//     return 0;
// }


int main(){
    vector<int> vec = {1,2,3,4,5};

    vector<int>::iterator it; 
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    return 0;
}
