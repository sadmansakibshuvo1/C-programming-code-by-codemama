#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    string order;
    cin >> order;

    for (char ch : order) {
        if (ch == 'A') {
            swap(A, B);
        } else if (ch == 'B') {
            swap(B, C);
        } else if (ch == 'C') {
            swap(C, A);
        }
    }

    cout << A << " " << B << " " << C << endl;

    return 0;
}

