/* Calculates average temperature from hourly readings
 * over a month
 */

#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
    int i, j, temperature_readings[DAYS][HOURS], sum = 0;
    float average_temperature;

    for (i = 0; i < DAYS; i++) {
        for (j = 0; j < HOURS; j++) {
            scanf ( "%d", &temperature_readings[i][j] );
        }
    }

    for (i = 0; i < DAYS; i++) {
        for (j = 0; j < HOURS; j++)
            printf ( " %d", temperature_readings[i][j] );
        printf ( "\n" );
    }

    for (i = 0; i < DAYS; i++) {
        for (j = 0; j < HOURS; j++)
            sum += temperature_readings[i][j];
    }

    average_temperature = (float) sum / 720.00f;
    printf ( "Average Temperature: %.2f\n", average_temperature );
    return 0;
}
