#include <stdio.h>

int main() {
    int no;
    int digits = 0; // 桁数

    do {
        printf("正の整数を入力してください：");
        scanf("%d", &no);
        if (no <= 0) {
            puts("\a正でない数を入力しないでください。");
        }
    }while(no <= 0);
    
    int no_tmp = no; // no_tmpは桁数をカウントするときに一時的に使う
    
    // 桁数をカウントする。
    while (no_tmp > 0) {
        digits++;
        no_tmp /= 10;
    }
    
    printf("%dは%d桁です。\n", no, digits);

    return 0;
}
