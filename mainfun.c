#include<stdio.h>

int sam[7][7]={{0}};

void main_func(int player,int number);

int main(void)
{
    int num;
    int pl;
    while(1)
    {
        pl=1;
        printf("p1 turn! \n");
        printf("enter the number! \n");
        scanf("%d",&num);
        main_func(pl,num);
        pl=2;
        printf("p2 turn! \n");
        printf("enter the number! \n");
        scanf("%d",&num);
        main_func(pl,num);

    }
}

void main_func(int player, int number)
{
    static int a=6;
    static int b=6;
    static int c=6;
    static int d=6;
    static int e=6;
    static int f=6;
    static int g=6;
    int i,j;
    if(number==0)
    {
        for(i=0;i<7;i++)
        {
            for(j=0;j<7;j++)
            {
                printf("%5d",sam[i][j]);
            }
            printf("\n");
        }
    }
    if(number==1)
    {
        if(a<=-1)
        {
            printf("mistake. again.\n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[a][number-1]=player;
        a--;
    }
    if(number==2)
    {
        if(b<=-1)
        {
            printf("mistake. again.\n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[b][number-1]=player;
        b--;
    }
    if(number==3)
    {
        if(c<=-1)
        {
            printf("mistake. again.\n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[c][number-1]=player;
        c--;
    }
    if(number==4)
    {
        if(d<=-1)
        {
            printf("mistake. again. \n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[d][number-1]=player;
        d--;
    }
    if(number==5)
    {
        if(e<=-1)
        {
            printf("mistake. again. \n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[e][number-1]=player;
        e--;
    }
    if(number==6)
    {
        if(f<=-1)
        {
            printf("mistake. again. \n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[f][number-1]=player;
        f--;
    }
    if(number==7)
    {
        if(g<=-1)
        {
            printf("mistake. again. \n");
            scanf("%d",&number);
            main_func(player,number);
        }
        sam[g][number-1]=player;
        g--;
    }
    if((number!=0)&&(number!=1)&&(number!=2)&&(number!=3)&&(number!=4)&&(number!=5)&&(number!=6)&&(number!=7))
    {
        printf("mistake. again.\n");
        main_func(player,number);
    }

}
