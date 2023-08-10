#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class person{
public:
  int age;
  person(int initAge){
      if(initAge>0) {
          age=initAge;
      }
      else {
          cout<<"Age is not valid, setting age to 0."<<endl;
      }
  }  
  void yearPasses(){
      age++;
  }
  void amIOld(){
      if(age<13) cout<<"You are young."<<endl;
      else if(age<18) cout<<"You are a teenager."<<endl;
      else cout<<"You are old."<<endl;
  }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int a;
        cin>>a;
        person newP(a);
        newP.amIOld();
        for(int i=0;i<3;i++) newP.yearPasses();
        newP.amIOld();
        cout<<endl;
    }
    return 0;
}
