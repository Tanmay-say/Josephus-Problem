#include <stdio.h>
int main() {
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    int i;
    for (i = 1; i <= n; ) {
        if (i * 2 <= n) {
            i = i * 2 + 1;
        } else {
            break;  // Exit the loop when i*2 exceeds 100
        }
    }
    printf("%d\n", i);
    int sub = n - i;
    sub = sub * 2 - 1;
    printf("%d\n",sub);
    return 0;
}
