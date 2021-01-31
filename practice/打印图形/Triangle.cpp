//
// Created by Rayliu40k on 2021/1/31.
//

#include "Triangle.h"

void printTriangle() {
    cout << "please input line number:";
    int input;
    cin >> input;
    input++;
    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input - 1 - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}