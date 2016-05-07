#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d,e;
    scanf("%f%f%f",&a,&b,&c);
    e=sqrt(c*c+b*b);
    printf("%d %d", (int)(a*b/e), (int)(a*c/e));
}
