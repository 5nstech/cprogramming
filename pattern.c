#include <stdio.h>

int main() {
    int i,j;
    char c[2]="01";
    for(i=1;i<=6;++i)
    {
        for(j=0;j<i;++j)
        {
            printf("%s",c);
        }
        printf("\n");
    }
    return 0;
}
