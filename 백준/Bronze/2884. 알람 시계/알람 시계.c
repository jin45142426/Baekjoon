#include <stdio.h>



int main()
{
  
    int hour = 0;
    int min = 0;
    int sum = 0;
    int sum1, sum2;
    scanf("%d %d", &hour, &min);
    if (hour == 0 && min < 45)
        hour = 24;
    hour = hour * 60;
    sum = hour + min;
    sum = sum - 45;
    sum1 = sum / 60;
    sum2 = sum - sum1*60;
    printf("%d %d", sum1, sum2);

    
    return 0;

}