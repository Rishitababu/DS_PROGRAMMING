// wap to print factor of a natural number.
#include <stdio.h> 
void printDivisors(int n) 
{ 
    for (int i = 1; i <= n; i++) 
        if (n % i == 0) 
            printf("%d ", i); 
} 
int main() 
{ 
    printf("The divisors of 100 are: "); 
    printDivisors(100); 
  
    return 0; 
}