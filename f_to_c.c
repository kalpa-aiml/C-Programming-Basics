#include <stdio.h>
int main() {
    int  fahrenheit, celsius;
    printf("Enter fahrenheit as an integer:");
    scanf("%d",&fahrenheit);
    celsius=(fahrenheit-32)/1.8;
    printf("\n %d fahrenheit is %d celsius.\n", fahrenheit,celsius);
    return 0;
}
