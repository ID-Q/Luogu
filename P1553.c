/*************************************************************************
	> File Name: P1553.c
	> Author: zhengdongqi
	> Mail: 
	> Created Time: 三  4/17 19:17:30 2019
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = {0};
    char p = 0;
    int head = 0;
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') head++;
        else {
            p = str[i];
            break;
        }
    }
    int flag = head;
    switch (p) {
        case 0 :
        for (int i = head - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        break;
        case '%' :
        for (int i = head - 1; i >= 0; i--) {
            if (str[i] != '0') printf("%c", str[i]);
        }
        printf("%c", p);
        break;
        case '.' :
        for (int i = head - 1; i >= 0; i--) {
            if (str[i] != '0') printf("%c", str[i]);
        }
        printf("%c", p);
        for (int i = len - 1; i > flag; i--) {
            if (str[i] != '0') printf("%c", str[i]);
        }
        break;
        case '/' :
        for (int i = head - 1; i >= 0; i--) {
            if (str[i] != '0') printf("%c", str[i]);
        }
        printf("%c", p);
        for (int i = len - 1; i > flag; i--) {
            if (str[i] != '0') printf("%c", str[i]);
        }
        default :break;
    }
    return 0;
}
