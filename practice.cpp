
      int KMM(int n,int m){
        for(int i=1;;i++){
          for(int j=1;;j++){
            if(n*i==m*j) return n*i;
            if(n*i<m*j) break;
          }
        }

      }

int Bmm()
{
int x,y;
cin>>x>>y;
int min=x;
int bmm;
if(y<min)
min=y;
for(int i=0;i<min;i++)
{
if( x%i==0 && y%i==0)
bmm=i;
}
cout<<bmm;
return 0;


}
int entekhab(int k , int n){
    int a = 1;
    for (int i = n; i> n- k; i--){
        a*=i;
    }
    for (int i = k; i>1; i--){
        a/=i;
    }
    return a;
}
//third function