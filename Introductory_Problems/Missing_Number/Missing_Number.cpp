/*
 * Problem Name: Missing_Number
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-23
 */

#include<bits/stdc++.h>
 
using namespace std; 
 
int main(){
    int n; 
    cin>>n; 
    long long sum = n*(n+1)/2; 
    for (int i=0; i<n-1; i++){
        int x; 
        cin>>x; 
        sum -= x; 
    }
    cout<<sum; 
    return 0; 
}