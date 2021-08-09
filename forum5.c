#include <stdio.h>
int main(){
    int celsius = 0, fahrenheit =0, kelvin = 0;

    printf("Insert the celcius temperature: ");
    scanf("%d",&celsius);

    fahrenheit = 9/5*celsius + 32;
    kelvin = celsius + 273;

    printf("Converted temperature to Fahrenheit: %d \n",fahrenheit);
    printf("Converted temperature to Kelvin: %d",kelvin);

    return 0;
}