#include <iostream>

using namespace std;

int s;
bool intern_exp;

int main () {
    cin >> s >> intern_exp;

    int finalSalary;

    if (s < 0 || s > 100) {
        cout << "So lieu khong hop le" << endl;
    }
    else if (s <= 10) {
        cout << "So lieu hop le" << endl;
        cout << "Duoi muc luong co ban" << endl;
    }
    else {
        if (intern_exp == true) {
            cout << "So lieu hop le" << endl;
            finalSalary = s + 20;
        }
        else {
            cout << "So lieu hop le" << endl;
            finalSalary = s;
        }
        cout << << finalSalary << "$" << endl;
    }
    return 0;
}
