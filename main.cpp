//引入头文件
#include "grammar/Variables.h"
#include "grammar/Range.h"
#include "grammar/Function.h"

/**
 * 主方法（程序入口）
 */
int main() {
    //变量
    variables();

    //变量作用域
    range1();
    range2();
    range3();

    //函数
    int a = 25, b = 68;
    int num = max(a, b);
    cout << "a和b中较大数为" << num << endl;

    return 0;
}
