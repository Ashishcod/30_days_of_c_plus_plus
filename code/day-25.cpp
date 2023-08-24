#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        if(n == 1){
            cout << "Not prime\n";
            continue;
        }
        else if(n == 2){
            cout << "Prime\n";
            continue;
        }
        else if(n % 2 == 0){
            cout << "Not prime\n";
            continue;
        }
        else{
            bool prime = true;
            for(int j = 3; j < n; j = j + 2){                
                if (n % j == 0){
                    cout << "Not prime\n";
                    prime = false;
                    break;
                }
            }
            if(prime){
                cout << "Prime\n";
            }
        }
        

    }   
    return 0;
}
