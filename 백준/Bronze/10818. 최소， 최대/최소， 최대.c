#include <stdio.h>


int main()
{
    int a = 0;
    int max = 0;
    int min = 0;
    int i = 0;
    int k = 0;
    scanf("%d", &k);
    for(int i =0;i<k;i++)
    {
        scanf("%d", &a);
        if (i == 0){
            max = a;
            min = a;
        }
      
        if (max > a)
        {
            max = a;
        }
        if (min < a)
            min = a;
     
    }

    printf("%d\n", max);
    printf("%d", min);
    return 0;

}