#include "Function.h"

/**
 * 返回两个数中较大的那个数
 *
 * @param a 第1个数
 * @param b 第2个数
 * @return 较大的那个数
 */
int max(int a, int b) {
    int max;

    if (a > b) {
        max = a;
    } else {
        max = b;
    }

    return max;
}