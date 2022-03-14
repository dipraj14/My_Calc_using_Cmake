#include "../includes/operation.h"
#include <math.h>
#include <iostream>
using namespace std;
int main() {
    int a, b, res;
    char c, s;
    do {
        cout << "please enter an operation" << endl;
        cin >> c;
        cin >> a >> b;
        operation(a, c, b);
        cout << "do you want to continue" << endl;
        cin >> s;
        cout << s ;
    } while (s == 'y');

    return 0;
}