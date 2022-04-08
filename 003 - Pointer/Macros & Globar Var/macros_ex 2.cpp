#include <iostream>
using namespace std;
// The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
