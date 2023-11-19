#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    while(n--)
    {
        int a,j,count=0;
        scanf("%d",&a);
        char s[a+1];
        char r[a];
        scanf("%s",s);
        for(int i=a,j=0; i>=0;j++){
            if(s[i]=='0')
            {
                int num1 = s[i-1]-48;
                int num2 = s[i-2]-48;
                int t=num2*10+num1;
                if(t==10){
                    r[j]='j';
                }
                else if(t==11){
                    r[j]='k';
                }
                else if(t==12){
                    r[j]='l';
                }
                else if(t==13){
                    r[j]='m';
                }
                else if(t==14){
                    r[j]='n';
                }
                else if(t==15){
                    r[j]='o';
                }
                else if(t==16){
                    r[j]='p';
                }
                else if(t==17){
                    r[j]='q';
                }
                else if(t==18){
                    r[j]='r';
                }
                else if(t==19){
                    r[j]='s';
                }
                else if(t==20){
                    r[j]='t';
                }
                else if(t==21){
                    r[j]='u';
                }
                else if(t==22){
                    r[j]='v';
                }
                else if(t==23){
                    r[j]='w';
                }
                else if(t==24){
                    r[j]='x';
                }
                else if(t==25){
                    r[j]='y';
                }
                else if(t==26){
                    r[j]='z';
                }
                i=i-3;
            }
            else{
                int t = s[i]-48;
                if(t==1){
                    r[j]='a';
                }
                else if(t==2){
                    r[j]='b';
                }
                else if(t==3){
                    r[j]='c';
                }
                else if(t==4){
                    r[j]='d';
                }
                else if(t==5){
                    r[j]='e';
                }
                else if(t==6){
                    r[j]='f';
                }
                else if(t==7){
                    r[j]='g';
                }
                else if(t==8){
                    r[j]='h';
                }
                else if(t==9){
                    r[j]='i';
                }
                i--;
            }
            count++;
        }
        r[count+1]='\0';
        int k=count-1;
        while(k!='\0')
        {
            printf("%c",r[k]);
            k--;
        }
        printf("\n");
    }
    return 0;
}