#include <iostream>

using namespace std;

int s;
bool intern_exp;

void calculate(int s, bool intern_exp) {
    int finalSalary;

    if (s < 0 || s > 100) {
        cout << "So lieu khong hop le" << endl;
        return ;
    }
    else if (s <= 10) {
        cout << "So lieu hop le" << endl;
        cout << "Duoi muc luong co ban" << endl;
        return ;
    }
    else {
        cout << "So lieu hop le" << endl;
        if (intern_exp == true) {
            finalSalary = s + 20;
        }
        else {
            finalSalary = s;
        }
        cout << finalSalary << "$" << endl;
        return ;
    }
}

int main () {
    cin >> s >> intern_exp;

    calculate(s, intern_exp);
        
    return 0;
}
