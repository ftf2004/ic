#include <stdio.h>
int sum(int a, int b){
    return a + b;
}
void main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));

}