//引入头文件
#include "grammar/Variables.h"
#include "grammar/Range.h"
#include "grammar/Function.h"
#include "grammar/Constant.h"
#include "grammar/Condition.h"
#include "grammar/Loop.h"
#include "grammar/Printf.h"
#include "practice/打印图形/Triangle.h"
#include "practice/打印图形/sb.h"
#include "practice/CCF/P1001.h"
#include "practice/CCF/P1002.h"

/**
 * 本地函数
 */
void demo() {
    cout << "Hello World" << endl;
}

/**
 * 主方法（程序入口）
 */
int main() {
    //本地函数
    demo();

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


    //常量
    cout << DATE_FORMAT << endl;
    cout << PI << endl;
    cout << PROVINCE << endl;
    //无法修改，编译报错
    //PI = 3.15;

    //条件判断
    condition1();
    condition2();
    condition3();

    //循环
    loop1();
    //loop2();
    //forever();

    sb();

//    for (;;) {
//        printTriangle();
//    }

    printf();

    P1001();

    cout << "Please input number:" << endl;
    int i;
    cin >> i;
    cout << P1002(i);

    return 0;
}
