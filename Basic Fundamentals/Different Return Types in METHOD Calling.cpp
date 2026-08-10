/* Here, 👉 Shows how methods can return different data types.
----------------
addi() → returns int
ad() → void method (just prints, doesn’t return)
ap() → returns boolean
a() → returns String
----------------
👉 Since all methods are static, they’re called directly from main() without creating an object.
*/
#include <bits/stdc++.h>
using namespace std;
                              // Remember these lines 👇
int addi(int a, int b) {              // a, b are parameters // In an int return type function // there should be a return statement.
    return a + b;
}

void ad(int a, int b) {
    cout << a + b;
}

bool ap(int a) {
    if (a > 0) {
        return true;
    }
    return false;
}

string a(string p) {
    return "name";
}

int main() {
    int a = 10, b = 11;
    char ch = 'a';
    ad(a, b);
    cout << endl;  // New line
    cout << addi(a, b) << endl;   // a, b are arguments which are passed with values
    cout << a("") << endl;
    cout << boolalpha << ap(a) << endl; // C++ normally prints 1/0... by using the boolalpha it prints true/false.
    // cout << ap(a) << endl;
    return 0;
}
