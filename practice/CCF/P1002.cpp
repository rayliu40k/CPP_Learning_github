//
// Created by Rayliu40k on 2021/4/3.
//

#include "P1002.h"

//void P1002() {
//    cout << "Please input number:" << endl;
//    int i;
//    cin >> i;
//    int p = 1;
//    for (int o = 1; o <= i; o++) {
//        p = o * p;
//    }
//    cout << p << endl;
//}

int P1002(int num) {
    if (num > 1) {
        return num * P1002(num - 1);
    } else {
        return 1;
    }
}
