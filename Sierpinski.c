#include <graphics.h>

int main()
{
    int i, d, gd, gm, x, y;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, null);
    delay(2000);

    x=650;
    y=650;

    for(i=0;i<10000;i++)
    {
        d = rand()%3;

        if(d==0)
        {
            x=(x+650)/2;
            y=y/2;
        }
        else if(d==1)
        {
            x=(x+1300)/2;
            y=(y+650)/2;
        }
        else if(d==2)
        {
            x=x/2;
            y=(y+650)/2;
        }
        putpixel(x,y,1);
        if(i%100 == 0)
        {
            delay(1);
        }
    }
    getch();
    closegraph();
    return 0;
}
