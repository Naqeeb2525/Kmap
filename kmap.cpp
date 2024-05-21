#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to print K-map for 3 variables
void print3VariableKMap() {
    cout << "3-variable K-map:\n\n";
    cout << "   | 00 | 01 | 11 | 10 |\n";
    cout << "------------------------\n";
    cout << " 0 |    |    |    |    |\n";
    cout << "   |----|----|----|----|\n";
    cout << " 1 |    |    |    |    |\n";
    cout << "------------------------\n\n";
    cout << "Expression: F(A, B, C) = ?\n";
}

// Function to print K-map for 4 variables
void print4VariableKMap() {
    cout << "4-variable K-map:\n\n";
    cout << "    | 00 | 01 | 11 | 10 |\n";
    cout << "-------------------------\n";
    cout << " 00 |    |    |    |    |\n";
    cout << "    |----|----|----|----|\n";
    cout << " 01 |    |    |    |    |\n";
    cout << "    |----|----|----|----|\n";
    cout << " 11 |    |    |    |    |\n";
    cout << "    |----|----|----|----|\n";
    cout << " 10 |    |    |    |    |\n";
    cout << "-------------------------\n\n";
    cout << "Expression: F(A, B, C, D) = ?\n";
}

// Function to print K-map for 5 variables
void print5VariableKMap() {
    cout << "5-variable K-map:\n\n";
    cout << "      | 000 | 001 | 011 | 010 | 110 | 111 | 101 | 100 |\n";
    cout << "---------------------------------------------------------\n";
    cout << " 00   |     |     |     |     |     |     |     |     |\n";
    cout << "      |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    cout << " 01   |     |     |     |     |     |     |     |     |\n";
    cout << "      |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    cout << " 11   |     |     |     |     |     |     |     |     |\n";
    cout << "      |-----|-----|-----|-----|-----|-----|-----|-----|\n";
    cout << " 10   |     |     |     |     |     |     |     |     |\n";
    cout << "---------------------------------------------------------\n\n";
    cout << "Expression: F(A, B, C, D, E) = ?\n";
}

int main() {
    int choice;
    
    cout << "Choose the number of variables (3, 4, or 5): ";
    cin >> choice;
    
    switch (choice) {
        case 3:
            print3VariableKMap();
            break;
        case 4:
            print4VariableKMap();
            break;
        case 5:
            print5VariableKMap();
            break;
        default:
            cout << "Invalid choice. Please choose 3, 4, or 5.\n";
            break;
    }
    
    return 0;
}
