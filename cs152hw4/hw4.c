#define __USE_XOPEN
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "hw4_provided.h"
#include "hw4.h"

record* find_highest_record_by_date(const char* date, record*** rs,
  int num_days)
    {
      printf("in function\n");
      // first: convert date string to tm* struct
      struct tm* convDate = malloc(1+sizeof(struct tm));
      strptime(date, "%F", convDate);
      printf("%lu\n%d",sizeof(rs),num_days);
      //second: find the record!
      for(int i = 0; i < num_days; ++i) {
        if(rs[i][0] != NULL) {
          if((rs[i][0])->date == convDate) {
            printf("date found");
          }
        } else {
          printf("ain't nothing here bitch");
        }
      }
      return NULL;
    }
