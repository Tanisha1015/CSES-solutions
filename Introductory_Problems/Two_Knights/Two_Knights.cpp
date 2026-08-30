/*
 * Problem Name: Two_Knights
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-30
 */

#include<bits/stdc++.h> 
 
using namespace std; 
 
int main(){
    int n; 
    cin>>n; 
    vector<long long> vec(max(n, 5), 0); 
    vec[0] = 0;
    vec[1] = 6; 
    vec[2] = 28;
    vec[3] = 96;
    vec[4] = 252; 
    for(int i = 5; i<n; i++){
            long long num = vec[i-2];
            int x = i+1;  
            num += (long long)((2*x - 2)*(4*x - 5) - 8);  
            num += (long long)(4*((x-2)*(x-2) - 2));
            num += (long long)(8*((x-2)*(x-2) - 2)); 
            num += (long long)(8*((x-2)*(x-2) - 3));
            if (x>6){
                int rem = 4*(x - 6); 
                num += (long long)(rem*((x-2)*(x-2) - 4));
            }
            vec[i] = num; 
        
    }
    for (int i = 0; i<n; i++){
        cout<<vec[i]<<endl; 
    }
    return 0; 
}