/*print the fibonacci series  -  0,1,1,2,3,5,8,13,21......
there are two base cases for which the problem can be succesfully broken down to subtask 
for n==0 and n==1 the recursive case cant be applied so they are the base cases*/


#include <iostream>
using namespace std; 

int fib(int n){
    if(n==0){                                             //base case 1
        return  0;
    }
    if (n==1){                                             //base case 2 
        return 1; 
    }
    int f1 = fib(n-1);                                     //recursive case 
    int f2 = fib(n-2);
    return f1+f2;
}

int main(){
    int n ; 
    cin>>n; 
    cout<<fib(n)<<endl;
    return 0;
}