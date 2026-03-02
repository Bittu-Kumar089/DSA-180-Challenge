//Functions are set of code which performs something for you.
//Functions are used to modularize code
//Functions are used to increase readability
//Functions are used to use same code multiple times

// void -> which does not return anything

//return

//parameterized

//Non-Parameterized

// #include<iostream>
// using namespace std;

// void printName(string name){
//     cout << "Hey! "<< name;
// }  

// int main(){
//     string name;
//     cin >> name;
//     printName(name);

// }


//Take two numbers add print its sum
// #include<iostream>
// using namespace std;


// int sum(int num1, int num2){
//     return num1 + num2;
// }



// int main(){
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << sum(num1, num2);
//     return 0;
    
// }


// #include<iostream>
// using namespace std;

// int maxx(int num1, int num2){
//     if(num1 >= num2) return num1;
//     else return num2;
// }
// int main(){
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin>> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << "Maximum of two number is " << maximum << endl;
//     return 0;
// }

//Pass by Value
#include<iostream>
using namespace std;
void dosomething(int num){
    cout<< num << endl;
    num = num + 5;
    cout << num << endl;

}
int main(){
    int num = 10;
    dosomething(num);  //Copy of num is passed to the function
    cout << num << endl;
    return 0;
}