/*************************************************************************
	> File Name: p1044.c
	> Author: zhengdongqi
	> Mail: 1821260963@qq.com
	> Created Time: 日  4/14 15:49:47 2019
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int func(int n, int x) {
    if (n == 0 || n == 1) return 1;
    if (n > 1) return (func(n - 1) * func(n - x));
    return 0;
}

int main() {
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 0, i <= n; i++) {
        num = func(n, i);
    }
    printf("%d\n", num);
    return 0;
}
