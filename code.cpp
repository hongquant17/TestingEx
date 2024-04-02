#include <iostream>

using namespace std;

int s;
bool intern_exp;

void calculate(int s, bool intern_exp) {
    int final_salary;

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
            final_salary = s + 20;
        }
        else {
            final_salary = s;
        }
        cout << final_salary << "$" << endl;
        return ;
    }
}

int main () {
    cin >> s >> intern_exp;

    calculate(s, intern_exp);
        
    return 0;
}
