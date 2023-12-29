#include <stdio.h>
#include <stdbool.h>
#define  IF_LEAP 0
bool is_leap_year(int year){  //A leap year has to be divisible by 4 and NOT divisible by 100 
  if(year % 4 == 0){          //except when the year is divisible by 400.
    if(year % 100 == 0){
      return true;
    }
  }else if(year % 400 == 0){
    return true;
  }else{
    return false;
  }
}

int days_in_months[] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

void add_days_to_date(int * dd, int * mm, int * yy, int  days_left_to_add)
{
   while(days_left_to_add > 0){
    int days_left_in_month = days_in_months[*mm] - *dd;
    if(*mm == 2 && is_leap_year(*yy)){
        days_left_in_month++;
    }
    if(days_left_to_add >= days_left_in_month) {
      days_left_to_add -= days_left_in_month;
      *dd = 1;
      if(*mm == 12) {
        *mm = 1;
        *yy += 1;
      } else {
        *mm +=1;
      }
    }
    else{
        *dd += days_left_to_add; //  simply add the days
        days_left_to_add = 0; // no more days to add!
  }
 }



}
int main() {
  int year;
  int mm;
  int dd;
  int yy;
  int days_left_to_add;
  #if IF_LEAP
  printf("Please input a year between 1800 to 10000\n");
  scanf("%i", &year);
  int lpy = is_leap_year(year);
  if(lpy == 0){
    printf("It is not a leap year\n");
  }else{
    printf("It is a leap year\n");
  }
  #endif
  printf("Please input a year in the format dd/mm/yy and provide the number of days to add to this date\n");
  scanf("%i %i %i %i", &dd, &mm, &yy, &days_left_to_add);
  add_days_to_date(&dd, &mm, &yy, days_left_to_add);
  printf("The date is: %i/%i/%i", dd, mm, yy);
  return 0;


}

