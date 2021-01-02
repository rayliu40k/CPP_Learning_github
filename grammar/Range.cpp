#include "Range.h"

/**
 * 方法级变量、块级变量
 */
void range1() {
    //方法级变量j
    int j = 3;
    //if块级变量k
    if (j == 3) {
        int k = 5;
        //可以访问方法级变量j
        cout << "j=" << j << endl;
        //可以访问if块级变量k
        cout << "k=" << k << endl;
    }
    //可以访问方法级变量j
    cout << "j=" << j << endl;
    //不能访问if块级变量k
    //cout << "k=" << k;
}

/**
 * 方法级变量、块级变量
 */
void range2() {
    //方法级变量j
    int j = 3;
    //for块级变量i
    for (int i = 0; i < 3; i++) {
        //可以访问方法级变量j
        cout << "j=" << j << endl;
        //可以访问for块级变量i
        cout << "i=" << i << endl;
    }
    //可以访问方法级变量j
    cout << "j=" << j << endl;
    //这里不能访问变量i
    //cout << "i=" << i;
}

/**
 * 方法级变量、块级变量
 */
void range3() {
    //方法级变量j
    int j = 3;
    //while块级变量k
    while (j > 0) {
        int k = 5;
        //可以访问方法级变量j
        cout << "j=" << j << endl;
        //可以访问while块级变量k
        cout << "k=" << k << endl;
        j--;
    }
    //可以访问方法级变量j
    cout << "j=" << j << endl;
    //不能访问while块级变量k
    //cout << "k=" << k;
}