// #include<iostream>
// using namespace std;

// int main(){
//     int marks[5];
//     cout << "Enter marks of 5 students: ";
//     for(int i=0;i<5;i++){
//         cin >> marks[i];
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Length of Array elements: ";
    cin>>n;

    int arr[n];
    

    for(int idx = 0; idx < n; idx++){
        cin>>arr[idx];
    }

    for(int idx = 0; idx < n; idx++){
        cout<<arr[idx]<<" ";
    }
    
    cout<<endl;
    return 0;
}