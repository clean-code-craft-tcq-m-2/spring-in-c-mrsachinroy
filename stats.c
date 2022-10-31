#include "stats.h"
#include "stdlib.h"
#include "math.h"

struct Stats compute_statistics(const float *numberset, int setlength)
{
    struct Stats s;
    float sum;
    // int NoOfElement =
    if ((numberset == 0) || (setlength == 0))
    {
        s.average = NAN;
        s.min = NAN;
        s.max = NAN;
    }
    else
    {
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
        s.average = sum / setlength;
    }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

// sending the mail alert if max is greater than threshold
void emailAlerter()
{
    emailAlertCallCount = 1;
}

// providing the LED alert if max is greater than threshold
void ledAlerter()
{
    ledAlertCallCount = 1;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    int size = 2; //sizeof(alerters);/// sizeof(alerters[0]);

    if (maxThreshold > computedStats.max )
    {
        for (int i = 0; i < size; i++)
        {
            (alerters[i])();
            // alerters++;
        }
        
    }
}
