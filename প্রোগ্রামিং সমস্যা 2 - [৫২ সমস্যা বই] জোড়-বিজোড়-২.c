#include<stdio.h>
int main() {
    int t;
    char n[120];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", n);
        int x=strlen(n);
        if(n[x-1]%2) printf("odd\n");
        else printf("even\n");
    }
    return 0;
}
