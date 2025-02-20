#include <stdio.h>

int main(){
  int d, year = 0, month = 0, day = 0;
  scanf("%d", &d);
  while(d!=0){
    if(d>=365){
      d -= 365;
      year++;
    }
    else if(d>=30){
      d -= 30;
      month++;
    }
    else if(d>0){
      d--;
      day++;
    }
  }
  printf("%d year %d month %d day", year, month, day);
  return 0;
}
