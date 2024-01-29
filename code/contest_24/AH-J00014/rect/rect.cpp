#include <cstdio>
using namespace std ;
int main(){
    int h,w,flag;
    char c;
    scanf ("%d%d",&h,&w);
    scanf("%c",&c);
    scanf("%c",&c);
    scanf ("%d",&flag) 
;
    int i,j,k;

    
    for (i=1;i<=w;i++){
        printf("%c",c);
    }
    printf("\n");


    for (i=1;i<=h-2;i++){
        printf("%c",c);
        for (j=1;j<=w-2;j++){
            if(flag)
                printf("%c",c);
            else 
                printf(" ");
        }
        printf("%c\n",c);
    }




    
    for (i=1;i<=w;i++){
        printf("%c",c);
    }
    return 0 ;
}