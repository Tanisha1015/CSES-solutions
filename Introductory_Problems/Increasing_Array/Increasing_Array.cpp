/*
 * Problem Name: Increasing_Array
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-27
 */

#include<bits/stdc++.h> 
 
using namespace std; 
 
int main(){
    int n; 
    cin>>n; 
    vector<int> vec(n); 
    for(int i=0; i<n; i++){
        cin>>vec[i]; 
    }
    int cur = vec[0]; 
    long long cnt = 0; 
 
    for (int i=1; i<n; i++){
        if (vec[i] < cur){
            cnt += (long long)(cur - vec[i]); 
        }
        else cur = vec[i]; 
    }
 
    cout<<cnt; 
    return 0;
}