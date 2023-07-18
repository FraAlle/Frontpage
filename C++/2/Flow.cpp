/*
LOGICAL OP
if a number has at least one bit true, the sentence is true
 int x = 2, y = 5;
    (x && y) ? printf("True ") : printf("False "); True


BITWISE OP
returns int
&: and with 2 numbers
|: or with 2 numbers
^: xor with 2 numbers
 int x = 2, y = 5;
    (x & y) ? printf("True ") : printf("False "); False
*/
#include <iostream>

using namespace std;

int main() {
    int i = 15, logneg = !i;    //logneg  = 0 bc i is true
    int bitneg = ~i;            //bitneg = -16(15's bits inverted)
}