/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rami Amm
 */
#include "std_lib_facilities.h"

class test {
string label;
public:
test(string _l) :label(_l) {};
void print(const int);
};

void test::print(const int n) {
cout << label << n << "\n";
}

int main()
try
{
const int n = 2;
test myTest("o ");
myTest.print(n);

keep_window_open();
}

catch (runtime_error e) {
cout << e.what() << "\n";
keep_window_open();
}