#include "../includes/operation.h"
#include <math.h>
#include <iostream>
using namespace  std;



void operation(int a, char c, int b) {

    int res;

    switch (c) {
    case '+':

        res = a + b;
        cout << res << endl;
        break;

    case '-':

        res = a - b;
        cout << res << endl;
        break;

    case '*':

        res = a * b;
        cout << res << endl;
        break;

    case '/':

        res = a / b;
        cout << res << endl;
        break;

    default:
        cout << "operator not found" << endl;
        break;
    }
}