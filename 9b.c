#include <stdio.h>


enum Days {
    Sun = 0,
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat
};

int main() {

    printf("Days of the week and their integer values:\n");
    printf("Sun = %d\n", Sun);
    printf("Mon = %d\n", Mon);
    printf("Tues = %d\n", Tue);
    printf("Wed = %d\n", Wed);
    printf("Thurs = %d\n", Thur);
    printf("Fri = %d\n", Fri);
    printf("Sat = %d\n", Sat);

    return 0;
}
