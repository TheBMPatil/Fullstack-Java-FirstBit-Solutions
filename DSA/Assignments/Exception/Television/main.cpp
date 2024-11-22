// #include <iostream>
// #include <string>
// #include <stdexcept>
// using namespace std;

// class Television {
// private:
//     int modelNumber;
//     int screenSize;
//     float price;

// public:
   
//     Television() : modelNumber(0), screenSize(0), price(0.0) {}

  
//     void inputDetails() {
//         try {
//             cout << "Enter Model Number: ";
//             cin >> modelNumber;
//             if (to_string(modelNumber).length() > 4) {
//                 throw invalid_argument("Model number must not exceed 4 digits.");
//             }

//             cout << "Enter Screen Size (in inches): ";
//             cin >> screenSize;
//             if (screenSize < 12 || screenSize > 70) {
//                 throw invalid_argument("Screen size must be between 12 and 70 inches.");
//             }

//             cout << "Enter Price (in Rs): ";
//             cin >> price;
//             if (price < 0 || price > 5000) {
//                 throw invalid_argument("Price must be between 0 and 5000 Rs.");
//             }

//         } catch (const invalid_argument &e) {
//             cout << "Error: " << e.what() << endl;
//             modelNumber = 0;
//             screenSize = 0;
//             price = 0.0;
//             throw; 
//         }
//     }

   
//     void displayDetails() const {
//         cout << "\nTelevision Details:" << endl;
//         cout << "Model Number: " << modelNumber << endl;
//         cout << "Screen Size: " << screenSize << " inches" << endl;
//         cout << "Price: Rs " << price << endl;
//     }
// };

// int main() {
//     Television tv;
//     try {
//         tv.inputDetails();
//         tv.displayDetails();
//     } catch (...) {
//         cout << "\nException caught. Setting all values to zero." << endl;
//         tv.displayDetails();
//     }

//     return 0;
// }


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
