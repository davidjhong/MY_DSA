#include <iostream>

using namespace std;

int addThreeNums(int a, int b, int c) {
    int sum = a+b+c;

    return sum;
}

int main() {
    int a, b, c = 0;

    cout << "Enter three numbers!\n";

    cin >> a >> b >> c;

    cout << "The Sum is: " << addThreeNums(a,b,c) << "\n";

    return 0;
}
