#include "stats.h"
#include "stdlib.h"
// #include "studio.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;

    return s;

    // printf("Hello There!!!");
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

// sending the mail alert if max is greater than threshold
void emailAlerter()
{
    //TBD later
}

// providing the LED alert if max is greater than threshold
void ledAlerter()
{
    //TBD later
}
