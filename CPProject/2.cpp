//
//  main.cpp
//  CPProject
//
//  Created by Aleksandr Morozov on 2/4/25.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    
    bool isHappy = true;
    int age;
    cin >> age;
    if (age > 18 || isHappy) {
        cout << "Your age is bigger than 18" << endl;
    } else if (age == 18) {
        cout << "Your age is equal to 18" << endl;
    } else if (age == 17) {
        if (isHappy)
            cout << "You are happy!" << endl;
        cout << "Your age is equal to 17" << endl;
    } else {
        cout << "Your age is less than 18" << endl;
    }
        
    return 0;
}
