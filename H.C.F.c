#include<stdio.h>

int a,b,c;


int HCF(int min){
if(a%min==0 && b%min==0 && c%min==0){
return min;

                                    }

else {
	min--;
if(a%min==0 && b%min==0 && c%min==0){

return min;
}

else{
HCF(min);
}
}

}

int main(){
	scanf("%d %d %d",&a,&b,&c);

int minimum=(a<b)?(a<c?a:c):(b<c?b:c);
//printf("min=%d\n",min);
int hf=HCF(minimum);
printf("%d",hf);

}
