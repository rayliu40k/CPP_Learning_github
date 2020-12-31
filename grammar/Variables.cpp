//
// Created by Rayliu40k on 2020/12/31.
//

#include "Variables.h"

void Variables::show() {
    
    /**
    * 定义变量
    */
    //int 变量类型，name 变量名称
    //语句意思：定义了一个int类型的变量，名称为name
    int name;

    /**
     * 变量赋值
     */
    //= 赋值符号，8 变量的值
    //语句意思：给一个int类型的变量一个值为8
    name = 8;

    /**
     * 定义变量并赋值
     */
    //语句意思：定义了一个int类型的变量，名称为other，并且给它一个值为7
    int other = 7;

    /**
     * 打印变量
     */
    //语句意思：打印变量name到控制台
    cout << name << endl;

    /**
     * 基本变量类型
     */
    //短整形，放整数，范围：-32768 ~ 32767
    short name1 = 32767;
    //无符号短整形，放整数，范围：0 ~ 65535
    unsigned short name2 = 65535;

    //整形，放整数，范围：-2147483648 ~ 2147483647
    int name3 = 2147483647;
    //无符号整形，放整数，范围：0 ~ 4294967295
    unsigned int name4 = 4294967295;

    //长整形，放整数，范围：-9223372036854775808 ~ 9223372036854775807
    long name5 = 9223372036854775807l;
    //无符号长整形，放整数，范围：0 ~ 18446744073709551615
    unsigned long name6 = 18446744073709551615;

    //小数类型，单精度，放小数
    float name7 = 1.3f;

    //小数类型，双精度，放小数
    double name8 = 1.5;
    //字符类型，放字符，只能放一个字符

    char name9 = 'a';
    //截取一个字符
    char name10 = 'b';
    cout << name10 << endl;
    //char放不下中文
    //char name7 = '中';
    //只能用char数组 or string
    char name11[4] = "中";
    string name12 = "中";

    //布尔类型，值只可以为true或者false
    bool name13 = true;
    bool name14 = false;
    //但cout输出为1和0
    cout << name13 << endl;
    cout << name14 << endl;

}
