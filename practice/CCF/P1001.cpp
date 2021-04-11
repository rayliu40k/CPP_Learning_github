//
// Created by Rayliu40k on 2021/3/21.
//

#include "P1001.h"

void P1001() {
    cout << "Please input number:" << endl;
    float F;
    cin >> F;
    float C;
    C = (F - 32) * 5 / 9;
    cout << "Number is:" << fixed << setprecision(4) << C << endl;
}
