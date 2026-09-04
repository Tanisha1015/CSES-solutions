/*
 * Problem Name: Trailing_Zeros
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-09-04
 */

#include<bits/stdc++.h> 
 
using namespace std; 
 
int main(){
    int n; 
    cin>>n; 
    int count = 0; 
     while (n >= 5) {
        count += n / 5;
        n /= 5;
    }
    cout<<count<<endl;
    return 0; 
}