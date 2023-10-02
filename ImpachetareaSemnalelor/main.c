#include <stdio.h>
#define True 1
#define False 0

int main()
{
    unsigned char reg[5] = {0x01, 0xA5, 0x64, 0x5A, 0x99};

    int i,j;
    int bits = sizeof(reg)*8;
    int binar[bits];
    int decimal;
    int z = 0;
    int k;
    int exitFlag = False;
    int a;
    for (i = 0; i<sizeof(reg); i++)
    {
        decimal = reg[i];


        k = 15+(8*(i-1));



        a = k;
        exitFlag = False;
        while (exitFlag == False)
        {
            binar[k] = decimal % 2;
            decimal = decimal / 2;
            k = k - 1;

            if(a-k == a+1 || decimal == 0)
            {
                exitFlag = True;
            }

        }


    }

    i = 0;
    for (i = 0; i<5; i++)
    {
        j = i*8;
        printf("Byte[%d]  = [%d, %d, %d, %d,    %d, %d, %d, %d]\n", i, binar[j], binar[j+1], binar[j+2], binar[j+3], binar[j+4], binar[j+5], binar[j+6], binar[j+7]);
    }


    int size;
    size = (sizeof(binar)/4)-1;
    printf("%d\n", size);

    int second = (binar[39]*1) + (binar[38]*2) + (binar[37]*4) + (binar[36]*8) + (binar[35]*16) + (binar[34]*32);
    printf("%d\n", second);

    int minute = (binar[31]*1) + (binar[30]*2) + (binar[29]*4) + (binar[28]*8)+ (binar[27]*16) + (binar[26]*32);
    printf("%d\n", minute);



    return 0;
}
