#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int z;
    if(x>y)
    {
        z = x;
        z = z-1;
        if( (x == 10 && y == 1 ) || z == y)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    else
    {
        z = y;
        z = z - 1;
        if( (y == 10 && x == 1 ) || z == x)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        
    }
    
}
