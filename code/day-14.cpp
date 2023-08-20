#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    // Add your code here
    Difference (vector<int>numbers){
        elements=numbers;
    }
    void  computeDifference(){
        maximumDifference=elements[elements.size()-1]-elements[0];
        for(int i=0;i<elements.size();i++)
            for(int j=0;j<elements.size();j++)
                if(i!=j&&elements[i]-elements[j]>=maximumDifference)
                    maximumDifference=elements[i]-elements[j];
    }
 // End of Difference 
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
