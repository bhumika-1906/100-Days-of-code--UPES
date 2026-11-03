#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char light[20];
    enum TrafficLight signal;

    scanf("%s", light);

    if (strcmp(light, "RED") == 0) {
        signal = RED;
    } 
    else if (strcmp(light, "YELLOW") == 0) {
        signal = YELLOW;
    } 
    else if (strcmp(light, "GREEN") == 0) {
        signal = GREEN;
    }

    switch (signal) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}