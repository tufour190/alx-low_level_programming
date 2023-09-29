#include <stdio.h>
int main() {
    double kilometer;
    double miles;
    

    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometer);
    
    miles = 0.62 * kilometer;
    printf("The distance in miles is: %.2lf", miles);
    return 0;
}
