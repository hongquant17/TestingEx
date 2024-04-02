#include <iostream>

using namespace std;

void calculate(int s, bool intern_exp) {
    int final_salary;

    if (s < 0 || s > 100) {
        cout << "So lieu khong hop le" << endl;
        return ;
    }
    else {
        cout << "So lieu hop le" << endl;
        if (s <= 10) {
            cout << "Duoi muc luong co ban" << endl;
        }
        else {
            final_salary = s;
            if (intern_exp == true) {
                final_salary = s + 20;
            }
            cout << final_salary << "$" << endl;
        }
    }
    return ;
}

int main () {
    int s;
    bool intern_exp;
    
    cin >> s >> intern_exp;

    calculate(s, intern_exp);
        
    return 0;
}
