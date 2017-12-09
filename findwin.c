#include<stdio.h>

int find_win(int row,int col,int player)
{
    int a;
    if((sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player)&&(sam[row][col+3]==player))
    {
        a=1;
    }
    if((sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player)&&(sam[row][col+2]==player))
    {
        a=1;
    }
    if((sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player)&&(sam[row][col+1]==player))
    {
        a=1;
    }
    if((sam[row][col-3]==player)&&(sam[row][col-2]==player)&&(sam[row][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row+1][col]==player)&&(sam[row+2][col]==player)&&(sam[row+4][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player)&&(sam[row-3][col+3]==player))
    {
        a=1;
    }
    if((sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player)&&(sam[row-2][col+2]==player))
    {
        a=1;
    }
    if((sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player)&&(sam[row-1][col+1]==player))
    {
        a=1;
    }
    if((sam[row+3][col-3]==player)&&(sam[row+2][col-2]==player)&&(sam[row+1][col-1]==player)&&(sam[row][col]==player))
    {
        a=1;
    }
    if((sam[row][col]==player)&&(sam[row-1][col-1]==player)&&(sam[row-2][col-2]==player)&&(sam[row-3][col-3]==player))
    {
        a=1;
    }
    if((sam[row+1][col+1]==player)&&(sam[row][col]==player)&&(sam[row-1][col-1]==player)&&(sam[row-2][col-2]==player))
    {
        a=1;
    }
    if((sam[row+2][col+2]==player)&&(sam[row+1][col+1]==player)&&(sam[row][col]==player)&&(sam[row-1][col-1]==player))
    {
        a=1;
    }
    if((sam[row+3][col+3]==player)&&(sam[row+2][col+2]==player)&&(sam[row+1][col+1]==player)&&(sam[row][col]==player))

    return (a);
}
