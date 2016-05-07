main(){
	int A, B, a=1, b=1, cnt=1;
	scanf("%d%d",&A,&B);
	for(int i=2, j=2; i<=B; i++, cnt++){
		if(cnt>j) cnt=1, j++;
		if(i<A) a+=j;
		b+=j;
	}
	if(A==1) printf("%d",b-a+1);
	else printf("%d",b-a);
}
