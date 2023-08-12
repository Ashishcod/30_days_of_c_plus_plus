#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int test_case;
cin>>test_case;

for(int i = 0;i<test_case;i++){
    string input;
    cin>>input;
    string evenChars, oddChars;
    for (int i = 0; i < input.length(); i++) {
         if (i % 2 == 0) {
        evenChars += input[i];}
         if (i % 2 != 0){
        oddChars += input[i];
    }
}

cout << evenChars<<" "<<oddChars<<endl;
}

    return 0;
}
