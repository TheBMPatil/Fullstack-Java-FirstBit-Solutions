

#include "television.h"

int main() {
    Television tv;
    try {
        tv.inputDetails();
        tv.displayDetails();
    } catch (...) {
        cout << "\nException caught. Setting all values to zero." << endl;
        tv.displayDetails();
    }

    return 0;
}
