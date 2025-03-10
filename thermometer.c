#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> 

float getTemperature() {
    return (rand() % 4000) / 100.0 - 10; 
}


void displayThermometer(float temp) {
    int bars = (int)(temp + 10); 
    printf("Temperature: %.2f°C\n", temp);
    printf("[" );
    for (int i = 0; i < bars; i++) {
        printf("#");
    }
    printf("]\n\n");
}

int main() {
    srand(time(0));
    
    while (1) {
        float temp = getTemperature();
        displayThermometer(temp);
        sleep(1); 
    }
    
    return 0;
}
