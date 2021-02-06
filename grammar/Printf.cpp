/**
 * 格式打印
 */

#include "Printf.h"

void printf() {
    float a = 0.26701534;
    //保留小数点后面4位小数（省略零）
    cout << "C++ a=" << setprecision(4) << a << endl;
    //保留小数点后面4位小数（不省略零）
    cout << "C++ a=" << fixed << setprecision(4) << a << endl;
}
