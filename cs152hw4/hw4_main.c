#define __USE_XOPEN
#define _GNU_SOURCE
#include<stdio.h>
#include <time.h>
#include "hw4_provided.h"

int main(){
  char filename[] = "data.csv";
  struct tm first_day;
  int num_days, num_records_per_day;
  // read data from the csv file
  record*** rs = read_spotify_data(filename,
      &num_days, &num_records_per_day, &first_day);

  printf("read data of %d days, and %d records per day. \n",
      num_days, num_records_per_day);

  // print the data
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
  free_records(rs, num_days, num_records_per_day);
  return 0;
}
