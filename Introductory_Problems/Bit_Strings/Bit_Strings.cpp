/*
 * Problem Name: Bit_Strings
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-09-04
 */

#include<bits/stdc++.h> 
 
using namespace std; 
const long long MOD = 10e9 + 7; 
 
int main(){
    long long num = 1; 
    int n; 
    cin>>n; 
    for(int i=1; i<=n; i++){
        num = (num*2); 
        //num = num%MOD; 
    } 
    num = num%MOD; 
    cout<<num;
    return 0; 
}