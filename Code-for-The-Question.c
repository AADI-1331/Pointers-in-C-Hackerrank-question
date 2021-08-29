#include <stdio.h>
#include<math.h>
#include<stdlib.h>

void update(int *m,int *n);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    //printf("%d\n%d", a, b);
     return 0;
}


void update(int *m,int *n)
{
    int  A=0,B;
    
    scanf("%d %d",&A,&B);
    
    
    A=((*m)+(*n));
    printf("%d\n",A);
    
    
    B=abs((*m)-(*n));
    printf("%d",B);
    
}
