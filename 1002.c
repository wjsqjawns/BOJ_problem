main(){
    int T, t, x1, y1, r1, x2, y2, r2, z;
    scanf("%d",&T);
    for(t=0; t<T; t++){
            scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
            x1-=x2, y1-=y2, z=r1+r2, r2-=r1;
            if(x1==0 && y1==0){
                if(r2==0) printf("-1\n");
                else printf("0\n");
            }
            else if(x1*x1+y1*y1==z*z || x1*x1+y1*y1==r2*r2) printf("1\n");
            else if(x1*x1+y1*y1>z*z || x1*x1+y1*y1<r2*r2) printf("0\n");
            else printf("2\n");
    }
}
