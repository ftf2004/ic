#include <stdio.h>
int main(){
    if("a"=="a"){
        printf("primary if\n");
        if(999>99){
            printf("secondary if\n");
        }
        else if(9999>999){
            printf("secondary else if\n");
        }
        else{
            printf("secondary else\n");
        }
    }
    else if(9==9){
        printf("primary else if\n");
    }
    else{
        printf("primary else\n");
    }
}