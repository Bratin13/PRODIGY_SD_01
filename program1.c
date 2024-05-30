#include <stdio.h>

int main() {
    char scale;
    float temperature;

    // Get user input for scale and temperature
    printf("Enter the temperature scale (C, F, or K): ");
    scanf(" %c", &scale); // Use space before %c to consume whitespace
    printf("Enter the temperature value: ");
    scanf("%f", &temperature);

    // Perform conversion based on user input
    float converted_temp;
    switch (scale) {
        case 'C':
            printf("Converting from Celsius...\n");
            converted_temp = (temperature * 1.8) + 32.0;  // Celsius to Fahrenheit
            printf("Temperature in Fahrenheit: %.2f\n", converted_temp);
            converted_temp = temperature + 273.15;    // Celsius to Kelvin
            printf("Temperature in Kelvin: %.2f\n", converted_temp);
            break;
        case 'F':
            printf("Converting from Fahrenheit...\n");
            converted_temp = (temperature - 32.0) * 5.0 / 9.0;  // Fahrenheit to Celsius
            printf("Temperature in Celsius: %.2f\n", converted_temp);
            converted_temp = (temperature - 32.0) * 5.0 / 9.0 + 273.15;  // Fahrenheit to Kelvin
            printf("Temperature in Kelvin: %.2f\n", converted_temp);
            break;
        case 'K':
            printf("Converting from Kelvin...\n");
            converted_temp = temperature - 273.15;    // Kelvin to Celsius
            printf("Temperature in Celsius: %.2f\n", converted_temp);
            converted_temp = (temperature - 273.15) * 1.8 + 32.0;  // Kelvin to Fahrenheit
            printf("Temperature in Fahrenheit: %.2f\n", converted_temp);
            break;
        default:
            printf("Invalid scale. Please enter C, F, or K.\n");
    }

    return 0;
}
