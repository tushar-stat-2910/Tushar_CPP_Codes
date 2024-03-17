#Q1) Write a C++ program to calculate factorial of given numbers.
#include<iostream.h>
#include<conio.h>
long int fact(int);
void main(){
  long int f;int num;
  cout<<"Enter number to get factorial";
  cin>>num;
  cout<<"\n factorial of given number is:"<<fact(num);
  getch();
}
long int fact(int num){
  long int y;
  if (num==1) return 1;
  else
    y=num*fact(num-1);
  return(y);
}
Q2) Write a C++ programs for the following pyramids.
I) #include<iostream.h>;
#include<conio.h>
void main(){
  for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
      cout<<"* ";
    }
    cout<<"\n";
  }
  getch();
}
II) #include<iostream.h>
#include<conio.h>
void main(){
  clrscr();
  for(int i=0;i<=5;i++){
    for(int j=1;j<=i;j++){
      cout<<" "<<j;
    }
    cout<<"\n";
  }
  getch();
}
III) #include<iostream.h>
#include<conio.h>
void main(){
  char arr[5]={'A','B','C','D','E'};
  for(int i=0;i<5;i++){
    for(int j=0;j<=i;j++){
      cout<<" "<<arr[i];
    }
    cout<<"\n";
  }
  getch();
}
IV) #include<iostream.h>
#include<conio.h>
int main()
{
  clrscr();
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=5-(i-1);j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  getch();
  return 0;
}
V) #include<iostream.h>
#include<conio.h>
void main(){
  clrscr();
  for(int i=5;i>0;i--){
    for(int j=1;j<=i;j++){
      cout<<" "<<j;
    }
    cout<<"\n";
  }
  getch();
}
VI) #include<iostream.h>
#include<conio.h>
void main(){
  clrscr();
  int l1=1;int l2=1,n=1;
  for(int i=0;i<5;i++){
    for(int j=4;j>i;j--)
      cout<<" ";
    int m=i+1;
    for(int k=0;k<l1;k++){
      cout<<" "<<m;
      m=m+1;
      if(m==n)break;
    }
    n=n+2;l1=l1+1;
    if(i!=0){
      for(k=0;k<l2;k++){
        cout<<" "<<m;
        m=m-1;
      }}
    l2=l2+1;
    cout<<"\n";
  }
  getch();
}
Q3) Write a C++ program to accept numbers and print even numbers among them.
#include<iostream.h>
#include<conio.h>
void main(){
  clrscr();
  int a[10],b[10],n,j=0;
  cout<<"enter the count of number";
  cin>>n;
  cout<<"enter the numbers";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(i=0;i<n;i++){
    if(a[i]%2==0){
      b[j]=a[i];
      cout<<"even number:"<<b[j];
      j+=1;
    }
  }
  getch();
}
Q4) Write a program to check whether given number is prime or not. 
Extend the above program to calculate the mean and variance on prime numbers between 101 to 200.
#include<iostream.h>
#include<conio.h>
int prime (int);
void main(){
  int a[100],num,b,j=0,sum=0,ssq=0,ct=0;
  float mean,var1;
  cout<<"Enter the number:";
  cin>>num;
  b=prime(num);
  if (b==8) {cout<<"\n Given number"<<num<<"is prime\n"; }
  else cout<<"given number "<<num<<"is not prime number\n";
  for (int i=101;i<200;i++){
    b=prime(i);
    if(b==8){ a[j]=i;ct=ct+1;sum=sum+i;ssq=(float)ssq+(float)(i*i);j=j+1;}
  }
  mean=(float)sum/ct;
  var1=(float)((float) (ssq/ct)-(float)( mean*mean));
  cout<<"\n summary statistic of prime numbers between 101:200\n";
  cout<<"Mean= "<<mean<<"\t Variance="<<(float)var1;
  getch();
}
int prime (int num){
  int flag=0;
  if(num==1) {return(0);}
  else{
    for(int i=1;i<=num;i++)
      if (num%i==0) flag=flag+1;
    if(flag>2) return (0);
    else return 8;
  }}
Q6) Write a program to obtain N random numbers from Binomial, Poisson, Negative binomial, 
Hypergeometric and Multinomial distribution
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void cunif(){
  int i;
  randomize();
  for(i=0;i<10;i++){
    printf("\n number is %f ",(float)random(100)/100);
  }
}
void cbinom(int r,int n,float p){
  int i;
  randomize();
  for(i=0;i<r;i++){
    int a=0,m=1;
    while(m<=n){
      if((float)random(100)/100<p) {
        a+=1;
      }
      m=m+1;
    }
    printf("\n binomial random nu. is %d",a);
  }
}
void cpoiss(int n,float lm){
  randomize();
  for(int i=0;i<n;i++){
    float p=1; int n=-1;
    while(p>exp(-lm)){
      p=p*(float)random(100)/100;
      n=n+1;
    }
    cout<<"\n poisson rn is "<<n;
  }
}
void cnbd(int n, float k, float p){
  randomize();
  for(int i=0;i<n;i++){
    int x=0, c1=0;
    while(c1<k){
      x=x+(int)log((float)random(100)/100)/log(1-p);
      c1=c1+1;
    }
    cout<<"\n nbd random num "<<x;
  }}
void chyper(int r,int N, int M, int n){
  randomize();
  for(int j=1;j<r;j++){
    int x=0;
    for(int i=1;i<=n;i++){
      float a=(float)random(100)/100 ;
      float b=(float)(M-x)/(N-i+1);
      if(a<=b) x+=1;
      cout<<"\n hyper geom rn "<<x<<"\n";
    }
  }
}
void cmult(int r,int N,float p1, float p2, float p3){
  randomize();
  for(int j=0;j<r;j++){
    int x1,x2,x3; x1=x2=x3=0;
    for(int i=1;i<=N;i++){
      float u=(float)random(100)/100;
      if(u<=p1) x1++;
      else if(u>p1 && u<=p1+p2) x2++;
      else if(u>p1+p2 && u<=p1+p2+p3) x3++;
    }
    cout<<"\n"<<x1<<" "<<x2<<" "<<x3;
  }
}
void main(){
  cbinom(10, 5,0.6);
  cpoiss(10,3);
  cnbd(10,5,0.6);
  chyper(10,10,5,0.4);
  cmult(10,7,0.1,0.5,0.4); getch();}
Q6)Write a C++ program to arrange the given numbers in ascending and descending order.
#include<iostream.h>
#include<conio.h>
void pri(int [],int);
void copy(int*,int*,int);
void main(){
  int a[10]={2,5,1,3,1,8,9},b[10],c[10];
  int i,j,n=7,key;
  copy(a,b,n);copy(a,c,n);
  cout<<"Given array is:";pri(b,n);
  for(i=1;i<n;i++){
    key=b[i];
    j=i-1;
    while(j>=0 & key<b[j]){
      b[j+1]=b[j]; j-=1;
    }; b[j+1]=key;
  };
  cout<<endl<<"Array in ascending order: ";pri(b,n);
  for(i=1;i<n;i++){
    key=c[i]; j=i-1;
    while(key>c[j] & j>=0){
      c[j+1]=c[j]; j=j-1;
    }; c[j+1]=key;
  }
  cout<<endl<<"Array in descending order: ";pri(c,n);
  getch();
}
void pri(int a[],int n){
  cout<<"Array is given by";
  for(int i=0;i<n;i++)
    cout<<","<<a[i];
}
void copy(int *p,int *q, int n){
  for(int i=0;i<n;i++){
    *(q+i)=*(p+i);
  }}
Q7) Write a C++ Program to find mean, variance of two variables separately and calculate covariance, 
correlation coefficient between two variables.
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
void main(){
  float sumsqx=0,sumsqy=0,covar,corr,sumx=0,sumy=0,varx,vary;
  int n,a[10],b[10];
  cout<<"enter length of variable";
  cin>>n;
  cout<<"\n enter observations of x";
  for(int i=0;i<n;i++){
    cin>>a[i];
    sumx=sumx+a[i];
    sumsqx=sumsqx+a[i]*a[i];
  }
  cout<<"\n enter observations of y";
  for( i=0;i<n;i++){
    cin>>a[i];
    sumy=sumy+a[i];
    sumsqy=sumsqy+a[i]*a[i];
  };int ms=0;
  for(i=0;i<n;i++){
    ms=ms+a[i]*b[i];
  };
  varx=sumsqx/n-pow(sumx/n,2); vary=sumsqy/n-pow(sumy/n,2);
  covar=(float)ms/n-(float)sumx/n*sumy/n;
  corr=(float)covar/(sqrt(varx*vary));
  cout<<"\n Discriptive Statistics:\n\t\t\t X \t\t\t Y\n";
  cout<<"mean: "<<"\t\t\t"<<sumx/n<<"\t\t\t"<<sumy/n<<"\n";
  cout<<"variance:"<<"\t\t"<<varx<<"\t\t\t"<<vary<<"\n";
  cout<<"covariance:"<<"\t\t"<<covar<<"\n";
  cout<<"correlation:"<<"\t\t"<<corr;
  getch();
}
Q8.Write a C++ program to accept two matrices and print their addition and 
multiplication.
#include<iostream.h>
#include<conio.h>
int main()
{
  int i,j,a[10][10],b[10][10],x[10][10],r,c;
  clrscr();
  cout<<"Enter no.of rows :";
  cin>>r;
  cout<<"Enter no. of coloumns :";
  cin>>c;
  cout<<"Enter 1st matrix:\n";
  cout<<"Enter elements :";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>a[i][j];
      cout<<"\t"<<a[i][j];
    }
    cout<<"\n";
  }
  cout<<"Enter 2nd matrix :\n";
  cout<<"Enter elements :";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      cin>>b[i][j];
      cout<<"\t"<<b[i][j];
    }
    cout<<"\n";
  }
  cout<<"Addition of two matrices :\n";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      x[i][j]=a[i][j]+b[i][j];
      cout<<"\t"<<x[i][j];
    }
    cout<<"\n";
  }
  cout<<"multiplication of two matrix :\n";
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      x[i][j]=0;
      for(int k=0;k<c;k++)
      {
        x[i][j]=x[i][j]+a[i][k]*b[k][j];
      }
      cout<<"\t"<<x[i][j];
    }
    cout<<"\n";
  }
  getch();
  return 0;
}
Q9) 9.Write a C++ program to evaluate ∫ 𝐱
𝟐
𝟏𝟎
𝟎
𝐝𝐱 by trapezoidal, Simpsons 1/3rd and 
Simpsons 3/8th rule .
1) Trapezoidal Method
#include<iostream.h>
#include<conio.h>
#include<math.h>
float fx(float x)
{
  return(x*x);
}
int main()
{
  double a,b,h,s=0;
  double x[100],y[100];
  int n,i;
  clrscr();
  cout<<"Enter the lower limit:";
  cin>>a;
  cout<<"Enter the upper limit:";
  cin>>b;
  cout<<"Enter interval:";
  cin>>n;
  h=(b-a)/n;
  cout<<n<<"\n";
  cout<<"xi\t";
  for(i=0;i<=n;i++)
  {
    x[i]=a;
    cout<<x[i]<<"\t";
    y[i]=fx(x[i]);
    a=a+h;
  }
  a=0;
  cout<<"\n\nyi\t";
  for(i=0;i<=n;i++)
  {
    cout<<y[i]<<"\t";
    a=a+h;
  }
  for(i=1;i<=n-1;i++)
  {
    s=s+y[i];
  }
  double f=(h/2)*(y[0]+2*s+y[n]);
  cout<<"\n integreal of given function is:"<<f<<endl;
  getch();
  return 0;
}
2) Simpsons 1/3rd Rule
#include<iostream.h>
#include<conio.h>
#include<math.h>
float fx(float x)
{
  return(x*x);
}
int main()
{
  double a,b,h,s=0,t=0;
  double x[100],y[100];
  int n,i;
  clrscr();
  cout<<"Enter the lower limit:";
  cin>>a;
  cout<<"Enter the upper limit:";
  cin>>b;
  cout<<"Enter interval:";
  cin>>n;
  h=(b-a)/n;
  cout<<n<<"\n";
  cout<<"xi\t";
  for(i=0;i<=n;i++)
  {
    x[i]=a;
    cout<<x[i]<<"\t";
    y[i]=fx(x[i]);
    a=a+h;
  }
  a=0;
  cout<<"\n\nyi\t";
  for(i=0;i<=n;i++)
  {
    cout<<y[i]<<"\t";
    a=a+h;
  }
  for(i=1;i<=n-1;i++)
  {
    if(i%2!=0)
    {
      s=s+y[i];
    }
    if(i%2==0)
    {
      t=t+y[i];
    }
  }
  double f=(h/3)*(y[0]+4*s+2*t+y[n]);
  cout<<"Integreal of given function is:"<<f<<endl;
  getch();
  return 0;
}
3) Simpsons 3/8th rule 
#include<iostream.h>
#include<conio.h>
#include<math.h>
float fx(float x)
{
  return(x*x);
}
int main()
{
  double a,b,h,s=0,t=0;
  double x[100],y[100];
  int n,i;
  clrscr();
  cout<<"Enter the lower limit:";
  cin>>a;
  cout<<"Enter the upper limit:";
  cin>>b;
  cout<<"Enter interval:";
  cin>>n;
  h=(b-a)/n;
  cout<<n<<"\n";
  cout<<"xi\t";
  for(i=0;i<=n;i++)
  {
    x[i]=a;
    cout<<x[i]<<"\t";
    y[i]=fx(x[i]);
    a=a+h;
  }
  a=0;
  cout<<"\n\nyi\t";
  for(i=0;i<=n;i++)
  {
    cout<<y[i]<<"\t";
    a=a+h;
  }
  for(i=1;i<=n-1;i++)
  {
    if(i%3!=0)
    {
      s=s+y[i];
    }
    if(i%3==0)
    {
      t=t+y[i];
    }
  }
  double f=((3*h/8)*(y[0]+3*s+2*t+y[n]));
  cout<<"Integreal of given function is:"<<f<<endl;
  getch();
  return 0;
}

Q10) Write a C++ program to approximate the root of the equation x
3 + 2x
2 − 3 = 0 using Bisection 
method, Regula-Falsi method and Newton-Raphson method.
#include<iostream.h>
#include<conio.h>
#include<math.h>
void bisection(void); void regula(void); void newton(void); float funct(float);
float fdash(float);
void main(){
  bisection(); regula(); newton();
  getch();
}
void newton(){
  float diff=1,a,x0,x1;
  cout<<"Enter choice value"<<endl;
  cin>>a;
  while(diff>0.0002){
    x1=x0-funct(x0)/fdash(x0);
    diff=fabs(funct(x1));
    x0=x1;
  }
  cout<<"answer by newton raphson method="<<x0<<endl;
}
void bisection(){
  float a,b,c,diff=1;
  cout<<"enter choices of a & b"<<endl;
  cin>>a>>b;
  while(diff>0.000001){
    c=(a+b)/2;
    diff=fabs(funct(c));
    if(funct(a)*funct(c)<0) b=c;
    else a=c;
  }
  cout<<"root by bisection method:"<<c;
}
void regula(){
  float diff=1,a,b,c;
  cout<<"enter values of a & b";
  cin>>a>>b;
  while(diff>0.00001){
    c=(a*funct(b)-b*funct(a))/(funct(b)-funct(a));
    diff=fabs(funct(c));
    if(funct(a)*funct(c)<0) b=c;
    else a=c;
  }
  cout<<"root by regula method is:"<<c;
}
float funct(float x){
  return(pow(x,3)+2*x-3);
}
float fdash(float x){
  return(3*pow(x,2)+2);
}