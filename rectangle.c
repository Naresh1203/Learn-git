#include <stdio.h>
int main()
{
    int length,breath;
    scanf("%d%d",&length,&breath);
    printf("Perimeter of Rectangle = %d",2*(length+breath));
    printf("\nArea of Rectangle = %d",length*breath);
    return 0;
}
