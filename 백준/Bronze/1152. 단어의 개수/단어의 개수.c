#include <stdio.h>
#include<string.h>



int main()
{
    char a[1000002];
    int k = 0;
    gets(a);
    int i = 0;

    //공백은 아스키코드로 32 NULL문자는 0 , +1을 해준건 널도 포함시키기때
 
     for (int i = 0; i < strlen(a) + 1; i++)
     {
         if ((a[i] == 32) || (a[i] == 0))
             k++;
     }
     i = 0;
     //처음 공백, 마지막 공백
     if (a[strlen(a)-1] == 32)
         i++;
     if (a[0] == 32)
         i++;
    printf("%d", k-i);

    
    return 0;

}