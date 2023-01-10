// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,space,space2=1,m;
    space =12/2;
    for(i=0;i<12;i++){
        if(i == 0){
            printf("Diamond\n");
        }
        else if(i%2 !=0){
            for(k=1;k<=space;k++){
                    printf(" ");
            };
            for(j=0;j<i;j++){
             printf("*");
            };
          printf("\n");
          space = space -1;
        };
    };
    
    for(m=12;m>0;m--){
            if(m%2 !=0){
                for(k=1;k<=space2;k++){
                    printf(" ");
            };
            
                for(j=0;j<m;j++){
             printf("*");
            };
            printf("\n");
            space2 = space2+1;
            };
    };

    return 0;
}
