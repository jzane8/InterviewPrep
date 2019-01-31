#define __USE_XOPEN
#define _GNU_SOURCE
#include<stdio.h>
#include <time.h>
#include "hw4_provided.h"
#include "hw4.h"

int main(){
  char filename[] = "data.csv";
  struct tm first_day;
  int num_days, num_records_per_day;
  // read data from the csv file
  record*** rs = read_spotify_data(filename,
      &num_days, &num_records_per_day, &first_day);

  printf("read data of %d days, and %d records per day. \n",
      num_days, num_records_per_day);

  printf("huh?");

  // print the data
  printf("reeee %lu\n%d\n",sizeof(rs),num_days);
  for (int i = 0; i < num_days; ++i){
    for (int j = 0; j < num_records_per_day; ++j){
      if (rs[i][j] == NULL){
        printf("data of day %d and rank %d does not exist\n", i+1, j+1);
      } else {
        print_record(rs[i][j]);
      }
    }
  }

  // free memories
  printf("before function");
  find_highest_record_by_date("2017-12-31",rs,num_days);
  printf("after function");
  free_records(rs, num_days, num_records_per_day);
  return 0;
}
