/*
 * Problem Name: Number_Spiral
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-27
 */

#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t; 
    cin>>t; 
    while(t--){
        int x, y; 
        cin>>y>>x; 
        long long num; 
        if (x >= y){
            int rem = x%2; 
            long long col = (long long)(x + rem - 2)*(x + rem - 1) + x; 
            
            if (x%2 == 0){
                num = col + (y - 1); 
            }
            else num = col - (y - 1); 
            //cout<<col<<" "; 
        }
        else{
            int rem = x%2; 
            long long row = (long long)(y - rem - 1)*(y - rem) + y; 
            
            if (y%2 == 0){
                num = row - (x - 1); 
            }
            else num = row + (x - 1); 
            //cout<<col<<" "; 
        }
        cout<<num<<endl; 
    }
    return 0; 
}