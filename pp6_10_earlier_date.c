#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dd, mm, yy, min_yy, min_mm, min_dd;

    printf("Enter a date (mm/dd/yy): ");

    scanf("%d /%d /%d", &mm, &dd, &yy);
    min_yy = yy;
    min_mm = mm;
    min_dd = dd;
    while (mm != 0 && dd != 0) {
        if (yy < min_yy) {
            min_yy = yy;
            min_mm = mm;
            min_dd = dd;
        } else if (yy > min_yy) {
            /*Null statement*/;
        } else if (mm < min_mm) { // When the years are same we compare the months
            min_yy = yy;
            min_mm = mm;
            min_dd = dd;
        } else if (mm > min_mm) {
            /*Null statement*/;
        } else if (dd < min_dd) { // When the months are same we compare the days
            min_yy = yy;
            min_mm = mm;
            min_dd = dd;
            }
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &mm, &dd, &yy);
    }

    printf("%.2d/%.2d/%.2d is the earliest date.\n", min_mm, min_dd, min_yy);

    return 0;
}
