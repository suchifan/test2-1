//
//  main.cpp
//  test2-1
//
//  Created by suchao on 5/8/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input x:\n";
    int x;
    cin >> x;
    
    double item = 1 ;
    double sum = 0;
    int i = 1;
    while(item > 0.0000001){
        sum += item;
        item = item * x / i;
        i++;
    }
    
    cout << sum << endl;
    return 0;
}
