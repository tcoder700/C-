#include <iostream>
using namespace std; 

bool isSorted(int arr[],int n){
    //base case
if(n==1 || n==0){
    return true;
}
    //recursive case
if(arr[0]<arr[1] && isSorted(arr+1,n-1)){
return true;
}
else{
    return false;
}
}
