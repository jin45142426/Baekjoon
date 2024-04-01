#include <stdio.h>



//H 호텔층, W 각층의 방의 수, N 몇번째 손님
int main()
{

    int H = 0, W = 0, N = 0;
    int T = 0;
    int room = 0, room2 = 0;


    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &H, &W, &N);
        // 손님수가 호텔 층보다 작거나 같을 경우
        if (N <= H)
        {
            room2 = 100 * N;
        }
        // 손님수가 호텔 층보다 클 경우
        else
        {
            if (N % H == 0)
            {
                room2 = ((100 * H) + (N / H)) -1;
            }
            else
            {
                room = N / H;
                room2 = (100 * (N % H)) + room;
            }
            

        }
       printf("%d\n", room2+1);
    }
    return 0;
}