#include "Condition.h"

/**
 * if
 */
void condition1() {
    /**
     * 定义条件判断(表达式)
     */
    int a = 5;
    int b = 3;
    //条件：a - b > 3
    //如果条件满足，执行分支1
    //如果条件不满足，执行分支2代码
    if (a - b > 3) {
        //分支1代码
    } else {
        //分支2代码
    }

    /**
     * 定义多条件判断
     */
    //如果条件满足（a - b > 0），执行分支1
    //如果条件满足（a - b == 0），执行分支2代码
    //如果条件满足（a - b < 0），执行分支3代码
    //以上3个条件都不满足，执行分支4代码
    if (a - b > 0) {
        //分支1代码
    } else if (a - b == 0) {
        //分支2代码
    } else if (a - b <= 0) {
        //分支3代码
    } else {
        //分支4代码
    }
}

/**
 * switch
 */
void condition2() {
    /**
     * 定义条件判断(变量)
     */
    //定义变量name，支持类型：short、int、char，不支持string
    char name = 'c';
    //当变量的值与某个case匹配，执行那个case的分支语句，如果遇到break，则结束switch语句，否者继续向下执行
    switch (name) {
        case 'a':
            //分支语句1
            break; //可选
        case 'b':
            //分支语句2
            break; //可选
        case 'c':
            //分支语句3
            break; //可选
            //你可以有任意数量的case语句
        default: //可选
            //分支语句4
            cout << "Hello World" << endl;
    }

    /**
     * 例子1
     * 选择星期几
     */
    int day = 5;
    switch (day) {
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4:
            cout << "星期四" << endl;
            break;
        case 5:
            cout << "星期五" << endl;
            break;
        case 6:
            cout << "星期六" << endl;
            break;
        case 7:
            cout << "星期天" << endl;
            break;
        default:
            cout << "输入的数字不正确..." << endl;
    }

    /**
     * 例子2
     * 选择工作日
     */
    cout << "-------华丽的分割线-------" << endl;
    int workday = 2;
    switch (workday) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            //当workday满足值1、2、3、4、5中任意一个，执行分支语句1
            //分支语句1
            cout << "今天是工作日" << endl;
            break;
        case 6:
        case 7:
            //当workday满足值6、7中任意一个时，执行分支语句2
            //分支语句2
            cout << "今天是休息日" << endl;
            break;
    }
}

/**
 * ?:
 */
void condition3() {
    int sun = 0;
    sun > 0 ? cout << "Good Day" : cout << "Bad Day" << endl;
}
