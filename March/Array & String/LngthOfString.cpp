#include<iostream>
using namespace std;

//Class Containing the method to find string length-

class Solution{
    public:
    //Function to rturn length of a string
    int findlength(string s){
        //Using the length() method of string class to find the length of the string
        return s.length();
    }
};

//Main Function-
int main(){
    //Creating an object of the Solution class to call the findlength method
    Solution obj;
    //Input string
    string s = "Hello";
    cout<<obj.findlength(s)<<endl;
    return 0;
}