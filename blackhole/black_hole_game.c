#include<stdio.h>
#include<string.h>
int input[5]={0};
int trans[5]={0};
 main(){
    int in,ten;
    int i=0,j=0,t=0,temp;
    while(1==1){
        scanf("%d",&in);
        ten=1000;
        for(i=0;i<4;++i){
            input[i]=in/ten;
            in=in%ten;
            ten=ten/10;
        }
        /*for(t=0;t<4;++t){
                printf("%d",input[t]);
            }
            printf("\n");*/
        //insertion sorting
        for(i=0;i<4;++i){
            j=i;
            while(j>0 && input[j-1]<input[j]){
                temp=input[j-1];
                input[j-1]=input[j];
                input[j]=temp;
                --j;
            }
           /* for(t=0;t<4;++t){
                printf("%d\n",input[t]);
            }*/
        }

        //calculate the max and min
        int max,min,ans;
        max=input[0]*1000+input[1]*100+input[2]*10+input[3];
        for(i=3;i>=0;--i){
            trans[3-i]=input[i];
        }
        min=trans[0]*1000+trans[1]*100+trans[2]*10+trans[3];
        ans=max-min;
        printf("max=%d\n",max);
        printf("min=%d\n",min);
        printf("ans=%d\n",ans);
    }
    return 0;
 }
