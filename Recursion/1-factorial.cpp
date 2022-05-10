//
//  main.cpp
//  test
//
//  Created by Tathagat on 07/05/22.
//  Copyright © 2022 Tathagat. All rights reserved.
//

#include <iostream>
using namespace std;
int fact(int n){
    if(n==0){                           //base case
        return 1;
    }
    int ans = n*fact(n-1);              //recursive case
    return ans;
}

int main (){
    int n ;
    cin>>n;
    cout<<fact(n)<<endl; 
}
