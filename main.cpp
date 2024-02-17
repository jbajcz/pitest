#include<iostream>
using namespace std;

double pi(int n) {
    double sum = 0.0;
    int sign = 1;
    for (int i = 0; i < n; ++i) {           
        sum += sign/(2.0*i+1.0);
        sign *= -1;
    }
    return 4.0*sum;
}

int main() {
    int n[] = {1000000, 10000000, 100000000};
    for (int i = 0; i < 3; i++) {
        cout << "pi is " << pi(n[i]) << endl;
    }
}