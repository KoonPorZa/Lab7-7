#include <stdio.h>
int main(void) {
  int temp[7][12];
  int Max,Min;
  float SumH,SumL;
  int midH,midL;
  Max = 0;
  Min = 100;
  SumH = 0;
  SumL = 0;
  char name[20];
  char day[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  printf("Enter your name : ");
  scanf("%s",name);
  printf("\nHello %s\n",name);
  printf("********************************\n");
  for(int i=0;i<7;i++) {
      printf("High  Temp %s     : ",day[i]);
      scanf("%d",&temp[i][0]);
      printf("Low   Temp %s     : ",day[i]);
      scanf("%d",&temp[i][1]);
  }
  printf("********************************\n");  
  for(int i=0;i<7;i++) {
    for(int j=0;j<2;j++) {
      if(temp[i][j]>Max) {
        Max = temp[i][j];
      }
      else if(Min > temp[i][j]) {
        Min = temp[i][j];
      }
    }
  }
  printf("Max Temperature is %d C\n",Max);
  printf("Min Temperature is %d C\n",Min);
  for(int i=0;i<7;i++) {
    SumH += temp[i][0];
  }
  printf("Average High Temperature is %.2f C\n",SumH/7);
  for(int i=0;i<7;i++) {
    SumL += temp[i][1];
  }
  printf("Average Low Temperature is %.2f C\n",SumL/7);
  
  printf("Median High Temperature is %d C\n",midH);
  printf("Median Low Temperature is %d C\n",midL);

  return 0;
}