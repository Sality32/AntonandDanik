#include<stdio.h>
#include<string.h>
int main(){
	int ans=0,i,j;
	char x[100000];
	scanf("%d",&i);
	for(j=0;j<i;j++){
		scanf("%c",&x[j]);
		if(x[j]=='D'){
		ans++;
		}else{
			ans--;
			}
	}
	printf("%s")
	if(ans<0)
	printf("Anton");
	else if (ans>0)
		printf("Danik");
		else printf("Friendship");
}
