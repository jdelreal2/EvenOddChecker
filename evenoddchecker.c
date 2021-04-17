#include <stdio.h>
int main(void) {
    int num;
    printf ("Enter an integer: ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
        printf("%d is even.", num);
        // if TRUE
    else
        printf("%d is odd.", num);
	    // else FALSE
	return 0;
}
