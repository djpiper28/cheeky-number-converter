#include <stdio.h>
#include <stdlib.h>
#define LEN 50
int main(int argc, char **argv){
    char buffer[LEN];
    char *res = fgets(buffer, LEN, stdin);
    if (res) {
        int val = atoi(res);
        printf("dec %d\noct %o\nhex %x\n",
               val, val, val);
        printf("bin ");
        while(val) {
            printf(val & (1 << (sizeof(val) * 8) - 1) ? "1" : "0");
            val <<= 1;
        }
        printf("\n");
    } else {
        printf("error.\n");
    }
}
