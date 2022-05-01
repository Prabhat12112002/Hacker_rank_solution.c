#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i;
    int *ptr;
    int *ptr2;
    scanf("%d", &num);
    ptr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", ptr + i);
    }
    ptr2 = (int*) malloc(num * sizeof(int));
    for(i=1;i<=num;i++)
    {
        ptr2[i-1] = ptr[num-i];
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(ptr2 + i));
    return 0;
}
