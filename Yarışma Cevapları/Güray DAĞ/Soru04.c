#include <stdio.h>
int main(){
int matris[3][3]={3,5,7,6,8,3,1,4,9};
int yeniMatris[3][3];
for(int i=0;i<3;i++){
        printf("\n");
                for(int j=0;j<3;j++){
                    printf("%d ",matris[i][j]);
                }
        }
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        yeniMatris[i][j] = matris[j][i];
    }
}
printf("\n-----------------------");
for(int i=0;i<3;i++){
        printf("\n");
                for(int j=0;j<3;j++){
                    printf("%d ",yeniMatris[i][j]);
                }
        }
return 0;
}
