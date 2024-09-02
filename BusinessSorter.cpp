//
//  main.cpp
//  It's Raining Strings
//
//  Created by Zachary Nesvacil on 9/1/24.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    string businessIn;
    string YorN;
    string lYorN;
    vector<string> businessVector;
    int looper = 0;
    
    cout << "Welcome to the Business Sorting Algorithm!\n";
    
    while (looper == 0) {
        businessIn.clear();
        YorN.clear();
        lYorN.clear();
        
        cout << "\nPlease enter the name of a business:  ";
        
        getline(cin, businessIn);
        
        businessVector.push_back(businessIn);
        sort(businessVector.begin(), businessVector.end());
        
        cout << "\nYour inputs are: \n";
        
        for (int i = 0; i < businessVector.size(); i++) {
            cout << businessVector[i] <<"\n";
        }
        
        cout << "\nDo you want to enter another business? ";
        
        getline(cin, YorN);
        
        lYorN = static_cast<char>(tolower(YorN[0]));
        
        if (lYorN != "y") {
            looper = 1;
        }
        
    }
    cout << "\nThanks for using my program!!\n\n";
    
    return 0;
}
