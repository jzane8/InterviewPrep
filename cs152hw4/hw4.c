#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hw4_provided.h"
#include "hw4.h"

record* find_highest_record_by_date(const char* date, record*** rs, int num_days)
    {
      // first: convert date string to tm* struct
      convDate = malloc(sizeof(struct tm));
      strptime(date, "%F", convDate);

    }
