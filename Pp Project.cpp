#include<graphics.h>
#include<windows.h>
#include<stdio.h>

int main()
{
    DWORD ScreenWidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD ScreenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(ScreenWidth,ScreenHeight,"");

    int posX=0,page=0,headX,headY,i=0,speed=100,x1,x2,x3,x4,x5,x6,score=0;
    //obstacle declare
    int o1=-100,o2=-300,o3=-500,o4=-700,o5=-900,o6=-1100,o7=-200,o8=-400,o9=-600,o10=-800,o11=-1000,o12=-1200,o13=-300,o14=-500,o15=-700,o16=-900,o17=-1100,o18=-1300;
    char arr[50];
    setcolor(GREEN);
    settextstyle(SOLID_FILL,HORIZ_DIR,5);
    outtextxy(250,220,"WELCOME TO MY GAME");
    settextstyle(SOLID_FILL,HORIZ_DIR,5);
    outtextxy(150,380,"PRESS ANY KEY TO CONTINUE");
    getch();
    /*Road*/
    setfillstyle(SOLID_FILL,DARKGRAY);
    bar(520,0,900,ScreenWidth);

    /*MAN*/
    circle(700+posX,540,25);
    line(700+posX,565,700+posX,620);
    line(700+posX,620,705+posX,650);
    line(700+posX,620,695+posX,650);
    line(700+posX,580,710+posX,610);
    line(700+posX,580,690+posX,610);

    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();
        /*ROAD*/
        setlinestyle(0,0,5);
        setfillstyle(SOLID_FILL,DARKGRAY);
        bar(520,0,900,ScreenWidth);

        /*MAN*/
        setcolor(YELLOW);
        circle(headX=700+posX,headY=540,25);
        line(700+posX,565,700+posX,620);
        line(700+posX,620,705+posX,650);
        line(700+posX,620,695+posX,650);
        line(700+posX,580,710+posX,610);
        line(700+posX,580,690+posX,610);
        if(GetAsyncKeyState(VK_LEFT))
        {
            if(headX-30>520)
            {
                posX-=10;
            }
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            if(headX+30<900)
            {
                posX+=10;
            }

        }

        //Obostacle 1
        setlinestyle(0,0,15);
        setcolor(LIGHTRED);
        line(x1=520,o1,x2=580,o1);
        if(o1==700)
        {
            o1=100;

        }
        o1++;
        setcolor(LIGHTBLUE);
        line(520,o2,580,o2);

        if(o2==700)
        {
            o2=100;

        }
        o2++;

        setcolor(LIGHTRED);
        line(520,o3,580,o3);
        if(o3==700)
        {
            o3=100;

        }

        o3++;
        setcolor(LIGHTRED );
        line(520,o4,580,o4);
        if(o4==700)
        {
            o4=100;

        }
        o4++;

        setcolor(LIGHTRED);
        line(520,o5,580,o5);
        if(o5==700)
        {
            o5=100;

        }
        o5++;
        setcolor(LIGHTBLUE);
        line(520,o6,580,o6);

        if(o6==700)
        {
            o6=100;

        }
        o6++;
        //obstacle 2
        setcolor(LIGHTGREEN);
        line(x3=680,o7,x4=740,o7);
        if(o7==700)
        {
            o7=-500;

        }

        o7++;
        setcolor(LIGHTRED);
        line(680,o8,740,o8);
        if(o8==700)
        {
            o8=-500;

        }
        o8++;
        setcolor(LIGHTBLUE);
        line(680,o9,740,o9);
        if(o9==700)
        {
            o9=-500;

        }
        o9++;
        setcolor(LIGHTRED);
        line(680,o10,740,o10);
        if(o10==700)
        {
            o10=-500;

        }
        o10++;
        setcolor(LIGHTGREEN);
        line(680,o11,740,o11);
        if(o11==700)
        {
            o11=-500;

        }
        o11++;
        setcolor(LIGHTRED);
        line(680,o12,740,o12);
        if(o12==700)
        {
            o12=-500;

        }
        o12++;

        //Obstacle 3
        setcolor(LIGHTRED);
        line(x5=840,o13,x6=900,o13);
        if(o13==700)
        {
            o13=-100;

        }

        o13++;
        setcolor(LIGHTBLUE);
        line(840,o14,900,o14);
        if(o14==700)
        {
            o14=-100;

        }
        o14++;
        setcolor(LIGHTRED);
        line(840,o15,900,o15);
        if(o15==700)
        {
            o15=-100;

        }
        o15++;
        setcolor(LIGHTGREEN);
        line(840,o16,900,o16);
        if(o16==700)
        {
            o16=-100;

        }
        o16++;
        setcolor(LIGHTRED);
        line(840,o17,900,o17);
        if(o17==700)
        {
            o17=-100;

        }
        o17++;
        setcolor(LIGHTBLUE);
        line(840,o18,900,o18);

        if(o18==700)
        {
            o18=-100;

        }
        o18++;
        //condition
        if(o1==headY-25&&x2>=headX&&x1<=headX)
        {
            delay(1000);
            closegraph();
        }
        else  if(o2==headY-25&&x2>=headX&&x1<=headX)
        {
            score+=2;
        }
        else  if(o3==headY-25&&x2>=headX&&x1<=headX)
        {
            score+=2;
        }
        else   if(o4==headY-25&&x2>=headX&&x1<=headX)
        {
            score+=2;
        }
        else   if(o5==headY-25&&x2>=headX&&x1<=headX)
        {
            score+=2;

        }
        else   if(o6==headY-25&&x2>=headX&&x1<=headX)
        {
            score+=2;
        }
        else  if(o7==headY-25&&x4>=headX&&x3<=headX)
        {
            score+=2;
        }
        else    if(o8==headY-25&&x4>=headX&&x3<=headX)
        {
            delay(1000);
            closegraph();
        }
        else if(o9==headY-25&&x4>=headX&&x3<=headX)
        {
            score+=2;

        }
        else if(o10==headY-25&&x4>=headX&&x3<=headX)
        {
            delay(1000);
            closegraph();
        }
        else  if(o11==headY-25&&x4>=headX&&x3<=headX)
        {
            score+=2;
        }
        else  if(o12==headY-25&&x4>=headX&&x3<=headX)
        {
            delay(1000);
            closegraph();
        }
        else  if(o13==headY-25&&x6>=headX&&x5<=headX)
        {
            delay(1000);
            closegraph();
        }
        else  if(o14==headY-25&&x6>=headX&&x5<=headX)
        {
            score+=2;
        }
        else  if(o15==headY-25&&x6>=headX&&x5<=headX)
        {
            delay(1000);
            closegraph();
        }
        else   if(o16==headY-25&&x6>=headX&&x5<=headX)
        {
            score+=2;
        }
        else if(o17==headY-25&&x6>=headX&&x5<=headX)
        {
            delay(1000);
            closegraph();
        }
        else if(o18==headY-22&&x6>=headX&&x5<=headX)
        {
            score+=2;
        }

        //display score
        settextstyle(BOLD_FONT,HORIZ_DIR,3);
        sprintf(arr,"YOUR SCORE IS: %d",score);
        outtextxy(1000,50,arr);
        page=1-page;
        delay(10);
    }
    getch();

}

