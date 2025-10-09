#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int digit;

    
    printf("Enter five integers: ");
    scanf("%d", &num);
    
    while(num>0) 
    {
    	digit=num%10;
    	sum += digit;
    	num /=10;
	}


    // Print the sum
    printf("Sum digit: %d\n", sum);
    return 0;
}
