#include<graphics.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<mmsystem.h>
int *a,*b;
int xstart[7]={50,330,150,250,200,100,300},index=1,status[5]={1,0,0,0,0},randoms=0,yyy=1;
int ycode[5]={340,340,340,340,340};
int xcode[5]={50,50,50,50,50};
struct node
{
    char user[20],pass[20],name[20];
    int score;
    struct node *link;
}*root=NULL;

char present[20],presentname[20];
int preshigh;

void activate()
{
    if(index>=5)
    {
        index=0;
    }
    int *p=(int *)malloc(sizeof(int));
    *p=rand()%7;
    xcode[index]=xstart[(*p)];
    status[index++]=1;
    free(p);
}
void deacttivate(int xx)
{
    status[xx]=0;
    ycode[xx]=340;
}
void rectangle1(int  x,int y, int len,int width,int thick,int colour)
{
    setfillstyle(1,colour);
    a=(int *)malloc(sizeof(int));
    bar(x,y,x+len,y+thick);
    for(*a=0;(*a)<width;(*a)++)
    {

        bar(x,(y+(*a)),(x+thick),(y+1+(*a)));
        bar((x+len-thick),(y+(*a)),(x+len),(y+1+(*a)));
    }
    bar(x,y+width-thick,x+len,y+width);
    free(a);
}
void box (int x, int y ,int colour)
{
    rectangle1(x,y,50,20,11,colour);

}
void slabm(int x,int y)
{
    {
        rectangle1(x,y,100,10,10,2);
    }
}
void slabd(int x,int y)
{
    rectangle1(x,y,100,10,10,0);
}
void mcirclerc(int x ,int y)
{
    setfillstyle(SOLID_FILL,14);
    circle(x,y,20);
    floodfill(x,y,getmaxcolor());
    floodfill(x,y,BLACK);
    setfillstyle(1,BLACK);
    circle((x-10),(y-10),5);
    floodfill((x-10),(y-10),getmaxcolor());
    floodfill((x-10),(y-10),14);

}
void mcirclelc(int x ,int y)
{
    setfillstyle(SOLID_FILL,14);
    circle(x,y,20);
    floodfill(x,y,getmaxcolor());
    floodfill(x,y,BLACK);
    setfillstyle(1,BLACK);
    circle((x+7),(y-10),5);
    floodfill((x+7),(y-10),getmaxcolor());
    floodfill((x+7),(y-10),14);

}
void mcirclelo(int x,int y)
{
    setfillstyle(SOLID_FILL,YELLOW);
    sector(x,y,-150,150,20,20);
    floodfill(x,y,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle((x+7),(y-10),5);
    floodfill((x+7),(y-10),getmaxcolor());
    floodfill((x+7),(y-10),YELLOW);

}
void mcirclero(int x,int y)
{
    setfillstyle(SOLID_FILL,YELLOW);
    sector(x,y,30,330,20,20);
    floodfill(x,y,BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    circle((x-7),(y-10),5);
    floodfill((x-7),(y-10),getmaxcolor());
    floodfill((x-7),(y-10),YELLOW);

}
void ecircle(int x,int y)
{
    setfillstyle(SOLID_FILL,0);
    rectangle1((x-20),(y-20),40,40,22,0);
}
void unit(int x,int y,int colour)
{
    rectangle1(x,y,15,15,10,colour);

}
void opening() //BEST USE OF PATTERN..........
{
    int x,y,z;
    y=60;
    z=60;
    //this is for R
    for(x=0;x<=11;x++)
    {
        unit(y,z,4);
        z+=15;
        delay(100);
    }
    z=60;
    for(x=0;x<=6;x++)
    {
        y+=15;
        unit(y,z,4);
        delay(100);
    }
    for(x=0;x<5;x++)
    {
        unit(y,z,4);
        z+=15;
        delay(100);
    }
    for(x=0;x<=6;x++)
    {
        unit(y,z,4);
        y-=15;
        delay(100);
    }
    for(x=0;x<=6;x++)
    {
        unit(y,z,4);
        y+=15;
        z+=15;
        delay(100);
    }
    y+=30;
    z=60;
    //this is o
    for(x=0;x<=10;x++)
    {

        unit(y,z,1);
        z+=15;
        delay(100);
    }
    for(x=0;x<=6;x++)
    {
        unit(y,z,1);
        y+=15;
        delay(100);
    }
    for(x=0;x<=11;x++)
    {
        unit(y,z,1);
        z-=15;
        delay(100);
    }
    z+=15;
    for(x=0;x<=6;x++)
    {
        unit(y,z,1);
        y-=15;
        delay(100);
    }
    y+=9*15;
    for(x=0;x<=11;x++)
    {
        unit(y,z,2);
        z+=15;
        delay(100);
    }
    z-=12*15;
    for(x=0;x<=7;x++)
    {
        unit(y,z,2);
        y+=15;
        delay(100);
    }
    z=60+75;
    y=330;
    for(x=0;x<=6;x++)
    {
        unit(y,z,2);
        y+=15;
        delay(100);
    }
    z=60;
    y+=30;
    for(x=0;x<11;x++)
    {
        unit(y,z,5);
        z+=15;
        delay(100);
    }
    for(x=0;x<=6;x++)
    {
        unit(y,z,5);
        y+=15;
        delay(100);
    }
    y=200;
    z=270;

    //small o
    for(x=0;x<=5;x++)
    {

        unit(y,z,9);
        z+=15;
        delay(100);
    }
    for(x=0;x<=3;x++)
    {
        unit(y,z,9);
        y+=15;
        delay(100);
    }
    for(x=0;x<=6;x++)
    {
        unit(y,z,9);
        z-=15;
        delay(100);
    }
    z+=15;
    for(x=0;x<=3;x++)
    {
        unit(y,z,9);
        y-=15;
        delay(100);
    }

    //small R
    z=270;
    y=290;
     for(x=0;x<=6;x++)
    {
        unit(y,z,9);
        z+=15;
        delay(100);
    }
    z=270;
    for(x=0;x<=2;x++)
    {
        y+=15;
        unit(y,z,9);
        delay(100);
    }
    for(x=0;x<3;x++)
    {
        unit(y,z,9);
        z+=15;
        delay(100);
    }
    for(x=0;x<=2;x++)
    {
        unit(y,z,9);
        y-=15;
        delay(100);
    }
    for(x=0;x<=3;x++)
    {
        unit(y,z,9);
        y+=15;
        z+=15;
        delay(100);
    }

    y+=30;
    z=270;
     for(x=0;x<=5;x++)
    {
        unit(y,z,9);
        z+=15;
        delay(100);
    }
     for(x=0;x<=3;x++)
    {
        unit(y,z,9);
        y+=15;
        delay(100);
    }
     for(x=0;x<=2;x++)
    {
        unit(y,z,9);
        z-=15;
        delay(100);
    }
     for(x=0;x<=3;x++)
    {
        unit(y,z,9);
        y-=15;
        delay(100);
    }
    int check;
  do
    {
        if(kbhit())
        {
            check=getch();
        }
        else
        {
            check='\0';
        }
    }  while(check!='\0');
    outtextxy(200,420,"Press any key to go to the game ......");
    getch();
    rectangle1(0,0,640,480,300,0);
}
int yycod=358,iii=-1;
int xfood,yfood;
void activatef()
{
    xfood=(rand()%350)+90;
    yfood=(rand()%250)+50;
    setfillstyle(SOLID_FILL,RED);
    circle(xfood,yfood,10);
    floodfill(xfood,yfood,getmaxcolor());

}
void mfood()
{
    setfillstyle(SOLID_FILL,RED);
    circle(xfood,yfood,10);
    floodfill(xfood,yfood,getmaxcolor());

}
void deactivatef()
{
    setfillstyle(SOLID_FILL,BLACK);
   bar((xfood-10),(yfood-10),(xfood+10),(yfood+10));
}
void foodupp( int y)
{
    rectangle1(558,y,45,20,11,4);

}
void foodempty()
{
    iii=-1;
    rectangle1(558,yycod,45,250,23,0);
    yycod=358;
}
int foodup()
{
    if(iii<10)
    {
        yycod-=23;
        foodupp(yycod);
        iii++;
        return 1;
    }
    else
    {
        foodempty();
        return 2;
    }
}

int ycod=358,ii=-1;
void levelup()
{
    if(ii<10)
    {
        ycod-=23;
        box(495,ycod,1);
        ii++;
    }

}
int xxx=1;
void leveldown()
{
    if(ii<=-1)
    {
        xxx=0;
        settextstyle(3,HORIZ_DIR,5);
       outtextxy(110,180,"GAME OVER");
    }
    else
    {
        box(495,ycod,0);
        ycod+=23;
        ii--;
    }

}
int xlife,ylife;
void lifeballm(int x,int y)
{
    setfillstyle(SOLID_FILL,BLUE);
    circle(x,y,10);
    floodfill(x,y,getmaxcolor());
}
void activatelife()
{
    xlife=(rand()%400)+50;
    ylife=(rand()%300)+50;
    lifeballm(xlife,ylife);
}
void deactivatelife()
{
    setfillstyle(SOLID_FILL,BLACK);
    bar((xlife-10),(ylife-10),(xlife+10),(ylife+10));
}
void loginwindow()
{
    rectangle1(10,10,620,460,5,4);
    rectangle1(220,100,200,70,35,15);
    rectangle1(220,180,200,70,35,15);
    rectangle1(220,260,200,70,35,15);
    settextstyle(BOLD_FONT,HORIZ_DIR,2);
   // setfillstyle(1,14);
    setcolor(GREEN);
    outtextxy(60,50,"Press the number to select the given option ");
    setcolor(WHITE);
    setbkcolor(WHITE);
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    setcolor(BLUE);
    outtextxy(235,125,"1 . LOG IN ");
    outtextxy(235,200,"2 . SIGN UP ");
    outtextxy(235,275,"3 . EXIT ");
    setcolor(WHITE);
    int check;
    do
    {
        if(kbhit())
        {
            check=getch();
        }
        else
        {
            check='\0';
        }
    }while(check!='\0');
    setbkcolor(0);

    mcirclero(100,200);
    mcirclelo(500,200);
    setcolor(RED);
    outtextxy(100,420,"Press any key to go to proceed ...");
    int x=1;
    setcolor(WHITE);
    char opt;
    while(x)
    {
        opt=getch();
        if(opt=='1')
        {
            login:
                rectangle1(20,20,600,440,222,0);
                setcolor(GREEN);
                settextstyle(6,HORIZ_DIR,7);
                outtextxy(180,50,"Log In");
                settextstyle(6,0,4);
                setcolor(YELLOW);
                outtextxy(50,150,"Enter Username - ");
                rectangle1(370,140,200,40,20,15);
                setcolor(BLUE);
                setbkcolor(WHITE);
                settextstyle(6,0,3);
                char s[20]="",c;
                int i=0;
                do
                {

                    c=getch();
                    s[i]=c;
                    i++;
                    if(c==8||c==127)
                    {
                        s[--i]='\0';
                        s[--i]='\0';
                        rectangle1(370,140,200,40,20,15);
                    }
                    outtextxy(380,150,s);

                }while(c!=' ');
                s[i]='\0';
                s[--i]='\0';
                setbkcolor(0);
                setcolor(YELLOW);
                outtextxy(50,250,"Enter Password - ");
                rectangle1(370,240,200,40,20,15);
                setcolor(BLUE);
                setbkcolor(WHITE);
                char p[20]="";
                i=0;
                do
                {

                    c=getch();
                    p[i]=c;
                    i++;
                    if(c==8||c==127)
                    {
                        p[--i]='\0';
                        p[--i]='\0';
                        rectangle1(370,240,200,40,20,15);
                    }
                    outtextxy(380,240,p);

                }while(c!=' ');
                p[i]='\0';
                p[--i]='\0';
                FILE *fp;
                fp=fopen("score.txt","r");
                int chec=0;
                if(fp==NULL)
                {
                    setbkcolor(BLACK);
                    outtextxy(150,400,"First u need to sign up");
                    getch();
                    goto signup;
                }
                else
                {
                    char user[20],pass[20],name[20];
                    int scor;
                    while(!feof(fp))
                    {
                        fscanf(fp,"%s %s %s %d",user,pass,name,&scor);
                        if(!strcmp(user,s))
                        {
                            if(!strcmp(pass,p))
                            {
                                chec=1;
                                break;
                            }
                        }
                    }
                    setbkcolor(0);
                    if(chec==0)
                    {

                        outtextxy(200,400,"Invalid username or password");
                        getch();
                        goto login;
                    }
                    else
                    {
                        rectangle1(20,20,600,440,222,0);
                        strcpy(present,user);
                        strcpy(presentname,name);
                        preshigh=scor;
                        outtextxy(100,200,"You have successfully logged in");
                        outtextxy(120,250,"press any key to go to game ");
                    }
                }

                setcolor(WHITE);
                getch();
            x=0;
        }
        else if(opt=='2')
        {
            signup:
                setbkcolor(BLACK);
                rectangle1(20,20,600,440,222,0);
                setcolor(GREEN);
                settextstyle(6,HORIZ_DIR,7);
                outtextxy(180,50,"Sign UP");
                settextstyle(6,0,4);
                setcolor(YELLOW);
                outtextxy(50,150,"Create Username - ");
                rectangle1(370,140,200,40,20,15);
                setcolor(BLUE);
                setbkcolor(WHITE);
                settextstyle(6,0,3);
                char s[20]="",c;
                int i=0;
                do
                {

                    c=getch();
                    s[i]=c;
                    i++;
                    if(c==8||c==127)
                    {
                        s[--i]='\0';
                        s[--i]='\0';
                        rectangle1(370,140,200,40,20,15);
                    }
                    outtextxy(380,150,s);

                }while(c!=' ');
                s[i]='\0';
                s[--i]='\0';
                setbkcolor(0);
                setcolor(YELLOW);
                outtextxy(50,200,"Create Password - ");
                rectangle1(370,190,200,40,20,15);
                setcolor(BLUE);
                setbkcolor(WHITE);
                char p[20]="";
                i=0;
                do
                {

                    c=getch();
                    p[i]=c;
                    i++;
                    if(c==8||c==127)
                    {
                        p[--i]='\0';
                        p[--i]='\0';
                        rectangle1(370,190,200,40,20,15);
                    }
                    outtextxy(380,190,p);

                }while(c!=' ');
                p[i]='\0';
                p[--i]='\0';
                setbkcolor(0);
                setcolor(YELLOW);
                outtextxy(50,260,"Your name    - ");
                rectangle1(370,250,200,40,20,15);
                setcolor(BLUE);
                setbkcolor(WHITE);
                char nn[20]="";
                i=0;
                do
                {

                    c=getch();
                    nn[i]=c;
                    i++;
                    if(c==8||c==127)
                    {
                        nn[--i]='\0';
                        nn[--i]='\0';
                        rectangle1(370,250,200,40,20,15);
                    }
                    outtextxy(380,250,nn);

                }while(c!=' ');
                nn[i]='\0';
                nn[--i]='\0';
                setcolor(WHITE);
                setbkcolor(BLACK);
                FILE *fp,*fp1;
                fp1=NULL;
                fp1=fopen("score.txt","r");
                char user[20],pass[20],nam[20];
                int scor;
                int count1=0;
                if(fp1!=NULL)
                {
                    while(!(feof(fp1)))
                    {
                        fscanf(fp1,"%s %s %s %d",user,pass,nam,&scor);
                        if(strcmp(user,s)==0)
                        {
                            outtextxy(150,400,"User name already taken ");
                            getch();
                            goto signup;
                        }

                    }
                }

                fp=fopen("score.txt","a");
                fprintf(fp,"%s %s %s %d \n",s,p,nn,0);
                fclose(fp);
                fclose(fp1);
                goto login;
            x=0;
        }
        else if(opt=='3')
        {
            yyy=0;
            x=0;
        }
        else
        {

        }
    }
    setbkcolor(BLACK);
    //getch();
    rectangle1(0,0,640,480,300,0);
}


int main()
{
    int gd=0,gm=1,i,j;
    initgraph(&gd,&gm,"");
    PlaySound(TEXT("finalsound.wav"),NULL,1);
    putpixel(500,500 ,4);
    opening();
    log:

    loginwindow();
    FILE *fp1;
    fp1=fopen("high.txt","r");
    if(fp1==NULL)
    {
        FILE *fp2;
        fp2=fopen("high.txt","w");
        char n[20],u[20],p[20];
        int sc;
        FILE *f;
        f=fopen("score.txt","r");
        fscanf(f,"%s %s %s %d",u,p,n,&sc);
        fprintf(fp2,"%s %d",u,sc);
        fclose(fp2);
        fclose(fp1);
        fclose(f);
    }
    while(yyy)
    {
        root=NULL;
        FILE *fp;
        fp=fopen("score.txt","r");
        fp1=fopen("high.txt","r");
        int highest;
        char highn[20];
        fscanf(fp1,"%s %d",highn,&highest);
        while(!feof(fp))
        {
            struct node *temp;
            temp=(struct node *)malloc(sizeof(struct node));
            char u[20],p[20],n[20];
            int scor;
            fscanf(fp,"%s %s %s %d",u,p,n,&scor);
            strcpy(temp->user,u);
            strcpy(temp->pass,p);
            strcpy(temp->name,n);
            temp->score=scor;
            temp->link=NULL;
            if(root==NULL)
            {
                root=temp;

            }
            else
            {
                struct node *p;
                p=root;
                while(p->link!=NULL)
                {
                    p=p->link;
                }
                p->link=temp;
            }
        }
        fclose(fp);
        char o[100];
        sprintf(o,"Highest Scorer - %s  Score - %d ",highn,highest);
        outtextxy(40,425,o);
        rectangle1(10,10,620,460,5,4);
        rectangle1(20,20 ,450,350,4,15); //this is the area where game is to be displayed
        rectangle1(480,20,136,350,4,15);
        rectangle1(20,380,596,80,4,15);


        rectangle1(490,70,60,290,3,3);
        rectangle1(553,70,55,290,3,4);
        setfillstyle(SOLID_FILL,BLACK);
        bar(490,70,610,75);
        for(int na=0;na<6;na++)
        {
            levelup();
        }
        settextstyle(8,HORIZ_DIR,1);
        outtextxy(500,75,"LIFE");
        outtextxy(558,75,"FOOD");
        settextstyle(BOLD_FONT,HORZRES,3);
        outtextxy(490,30,"ROFL Orb");
        int xb,yb,ch;
        xb=300;
        yb=80;
        int time=0,t1=0,time1=50;
        int fstatus=0,scoreg=0;
        int timeball=0,dir=1,checkb=1;
        int tt,lifet1=0,activ=0,lifet2=0;
        char aa[100];
        settextstyle(6,HORIZ_DIR,1);
        sprintf(aa,"Hy %s ,you scored till now - %d highest %d",presentname,scoreg,preshigh);
        outtextxy(30,400,aa);
        while(xxx)
        {
            {
            //here code for the ball
            if(yb<330&&yb>59&&xb>50&&xb<440)
            {


                if(kbhit())
                {
                    char ch=getch();
                    if(ch=='a'||ch=='A')
                    {
                        xb-=10;
                        dir=1;
                    }
                    else if(ch=='d'||ch=='D')
                    {
                        xb+=10;
                        dir=2;
                    }
                    else if(ch=='s'||ch=='S')
                    {
                        yb+=5;
                    }
                }
                if(timeball<5)
                {
                    timeball++;
                }
                else
                {
                    timeball=0;
                    if(checkb==1)
                    {
                        checkb=2;

                    }
                    else
                    {
                        checkb=1;
                    }

                }
                if(checkb==1)
                 {
                     if(dir==2)
                     {
                         mcirclero(xb,yb);
                     }
                     else
                     {
                         mcirclelo(xb,yb);
                     }
                 }
                 else
                 {
                     if(dir==2)
                     {
                         mcirclerc(xb,yb);
                     }
                     else
                     {
                         mcirclelc(xb,yb);
                     }
                 }
                if(activ==0)
                {
                    if(lifet1>100)
                    {
                        activ=1;
                        lifet1=0;
                    }
                    else
                    {
                        lifet1++;
                    }
                }
                else
                {
                    if(lifet2==0)
                    {
                        activatelife();
                        lifet2++;
                    }
                    else if(lifet2<30)
                    {
                        lifet2++;
                        lifeballm(xlife,ylife);
                    }
                    else
                    {
                        lifet2=0;
                        activ=0;
                        deactivatelife();
                    }

                }
                if(fstatus==0)
                {
                    fstatus=1;
                    activatef();
                }
                else
                {
                    mfood();
                }
                if(fstatus==1)
                {
                    if((xfood>(xb-20))&&(xfood<(xb+20))&&(yfood<(yb+20))&&(yfood>(yb-20)))
                    {
                        fstatus=0;
                        deactivatef();
                        int h=foodup();
                        scoreg+=10;
                        if(scoreg>=preshigh)
                        {
                            preshigh=scoreg;
                        }
                        sprintf(aa,"Hy %s ,you scored till now - %d highest %d",presentname,scoreg,preshigh);
                        outtextxy(30,400,aa);
                        if(h==2)
                        {
                            time1-=5;
                        }
                    }
                }
                if(activ==1)
                {
                    if((xlife>(xb-20))&&(xlife<(xb+20))&&(ylife<(yb+20))&&(ylife>(yb-20)))
                    {
                        lifet2=0;
                        activ=0;
                        deactivatelife();
                        levelup();

                    }
                }


                int check;
                do
                {
                    if(kbhit())
                    {
                        check=getch();
                    }
                    else
                    {
                        check='\0';
                    }
                }  while(check!='\0');
                 {
                     time++;
                     if(time>50)
                     {
                         activate();
                         time=0;

                     }
                         //here we are writing code for the slabs ..
                     for(tt=0;tt<5;tt++)
                     {
                         if(status[tt]==1)
                         {
                             slabm(xcode[tt],ycode[tt]);
                             ycode[tt]-=2;
                         }
                     }

                 }
                 delay(time1);
                    for(tt=0;tt<5;tt++)
                    {
                        if(status[tt]==1)
                        {

                            slabd(xcode[tt],(ycode[tt]+10));
                        }
                        if(ycode[tt]<86)
                        {
                            slabd(xcode[tt],(ycode[tt]));
                            deacttivate(tt);
                        }
                    }

                    ecircle(xb,yb);

                    for(tt=0;tt<5;tt++)
                    {
                        if(status[tt]==1)
                        {
                            if(xb>=(xcode[tt]-20)&&xb<=(xcode[tt]+120)&&(yb+20)>=(ycode[tt]-5)&&(yb+20)<=(ycode[tt]+5))
                            {
                                yb=ycode[tt]-32;

                            }
                            else
                            {
                                yb++;

                            }
                        }
                    }


            }
            else
            {
                setbkcolor(BLACK);
                rectangle1(10,10,620,460,5,4);
                rectangle1(20,20 ,450,350,4,15); //this is the area where game is to be displayed
                rectangle1(480,20,136,350,4,15);
                rectangle1(20,380,596,80,4,15);
                fflush(stdin);
                yb=80;
                xb=150;
                leveldown();
                getch();

            }
        }

        }
        int check;
        do
        {
            if(kbhit())
            {
                check=getch();
            }
            else
            {
                check='\0';
            }
            }while(check!='\0');
        getch();
        rectangle1(0,0,640,480,250,0);
        struct node *nav;
        nav=NULL;
        while(root!=NULL)
        {
            if(nav==NULL)
            {
                nav=(struct node *)malloc(sizeof(struct node));
                strcpy(nav->user,root->user);
                strcpy(nav->pass,root->pass);
                strcpy(nav->name,root->name);
                nav->score=root->score;
                nav->link=NULL;
            }
            else
            {
                struct node *pnav;
                pnav=nav;
                int countnav=0;
                while(pnav!=NULL)
                {
                    if(!strcmp(pnav->user,root->user))
                    {
                        countnav++;
                    }
                    pnav=pnav->link;

                }
                if(countnav==0)
                {
                    pnav=nav;
                    while(pnav->link!=NULL)
                    {
                        pnav=pnav->link;
                    }
                    struct node *tempnav;
                    tempnav=(struct node *)malloc(sizeof(struct node));
                    strcpy(tempnav->user,root->user);
                    strcpy(tempnav->pass,root->pass);
                    strcpy(tempnav->name,root->name);
                    tempnav->score=root->score;
                    tempnav->link=NULL;
                    pnav->link=tempnav;
                }
            }
            root=root->link;
        }
       // outtext("done");
        root=nav;
        struct node *p,*p1;
        p=root;
        while(p!=NULL)
        {
            if(strcmp(p->user,present)==0)
            {
                break;
            }
            p=p->link;
        }
        p->score=preshigh;
        p=root;
        FILE *ff,*f2;
        ff=fopen("score.txt","w");
        int maxsc=0;
        while(p!=NULL)
        {
            fprintf(ff,"%s %s %s %d\n",p->user,p->pass,p->name,p->score);
            if(maxsc<p->score)
            {
                p1=p;
                maxsc=p->score;
            }
            p=p->link;

        }
        f2=fopen("high.txt","w");
        fprintf(f2,"%s %d",p1->user,p1->score);
        fclose(ff);
        fclose(f2);
        yyy=0;
        goto log;
       // loginwindow();
}
   return 0;


}
