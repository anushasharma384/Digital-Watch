#include<stdio.h>
#include<windows.h>
#include<unistd.h>

int main()
{

    int h, m, s;
    printf("SET TIME: \n In The Format \n Hour \n Minutes \n seconds \n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
      printf("ERROR!!! \n");
      exit(0); 
    }
    

    // while(1) makes an infinite loop and anything inside this will repeat itself infinitely many times
    while(1)
    {
        printf("CLOCK:");
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }

        // Through the next line code we will be able to get the time in the format: 00:00:00
        printf("\n %02d:%02d:%02d",h,m,s);
        sleep(1);
        system("cls");
    }
    return 0;
}