/*
 * Problem Name: Permutations
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-27
 */

#include<bits/stdc++.h>
 
using namespace std; 
 
int main(){
    int n; 
    cin>>n; 
    if (n%2 == 0){
        if (n == 2) {
            cout<<"NO SOLUTION"; 
            return 0; 
        }
        int cur = n/2 + 1; 
        for (int i = 0; i<n; i++){
            cout<<cur<<" "; 
            cur += (i%2 == 0)?(-n/2):(n/2 + 1); 
        }
    }
    else {
        if (n == 3){ 
            cout<<"NO SOLUTION";
            return 0; 
        }
        int cur = 1; 
        for(int i = 0; i<n; i++){
            cout<<cur<<" "; 
            cur += (i%2 == 0)?(n/2 +1):(-n/2); 
        }
    }
    return 0; 
}