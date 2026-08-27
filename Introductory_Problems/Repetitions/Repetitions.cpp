/*
 * Problem Name: Repetitions
 * Language: C++
 * Category: Introductory_Problems
 * Date: 2026-08-27
 */

input/code.cpp: In function 'int main()':
input/code.cpp:12:12: warning: comparison of integer expressions of different signedness: 'int' and 'std::__cxx11::basic_string<char>::size_type' {aka 'long unsigned int'} [-Wsign-compare]
   12 |     while(l<s.size()){
      |           ~^~~~~~~~~
input/code.cpp:13:18: warning: comparison of integer expressions of different signedness: 'int' and 'std::__cxx11::basic_string<char>::size_type' {aka 'long unsigned int'} [-Wsign-compare]
   13 |         while (r < s.size() && s[r] == s[l]) {
      |                ~~^~~~~~~~~~