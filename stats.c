#include "stats.h"
#include "stdlib.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float sum;
    // int NoOfElement = 
    s.average = 0;
    s.min = 0xFFFF;
    s.max = -99999;

    for (int i = 0; i < setlength; i++)
    {
        sum += *numberset;

        if (*numberset > s.max)
        {
            s.max = *numberset;
        }

        if (*numberset < s.min)
        {
            s.min = *numberset;
        }

        numberset++;
    }
    s.average = sum/setlength;
    return s;

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
