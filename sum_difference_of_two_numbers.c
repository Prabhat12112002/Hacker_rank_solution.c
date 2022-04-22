#include<stdio.h>

int main()
{
    int a, b, add, negative;
    float c, d, sum, substance;
    printf("");
    scanf("%d%d", &a,&b);
    add = a+b;
    negative = a-b;
    printf("%d %d\n", add, negative);
    


    printf("");
    scanf("%f%f", &c, &d);
	
    sum = c+d;
    substance = c-d;
    printf("%0.1f %0.1f ", sum, substance);

    return 0;
}
