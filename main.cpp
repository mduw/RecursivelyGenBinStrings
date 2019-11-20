//
//  main.cpp
//  generate_binary_string_recursively
//
//  Created by Mitchell Dang on 11/14/19.
//  Copyright © 2019 md. All rights reserved.
//

#include <iostream>

using namespace std;
string TFRecursion(int n, string record)
{
    if (n<=0) { return record+"\n";}
    char cur='0';
    cout << TFRecursion(n-1,record+' '+cur);
    cur='1';
    cout << TFRecursion(n-1, record+' '+cur);
    return "";
}

int main() {
    //test case for string lenght=4
    // replace with the length of string you want
    int StrLength=4;
    cout << TFRecursion(StrLength,"");
    return 0;
}


