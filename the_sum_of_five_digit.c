#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int digit, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
//Complete the code to calculate the sum of the five digits on n.
while (n>0) {
        sum += (n%10);
        n=n/10;
    }
    printf("%d\n",sum);
    
    return 0;
}
