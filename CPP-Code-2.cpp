Object Oriented Programming in C ++ Date: 31/05/2023
1. Write a program that creates an ADT, time that stores three private integer values. hours, minute & 
  seconds. Implement these using classes. The ADT should contain the function to ask the time from the 
user & display the time.
#include<iostream.h>
#include<conio.h>
class time{
  int hour,min,sec;
  public:
    time(){
      hour=0; min=0; sec=0;
    }
  void setdata(int h,int m,int s){
    hour=h; min=m; sec=s;
  }
  void setdata(){
    cin>>hour>>min>>sec;
  }
  void display(void){
    cout<<"\n The entered time is given as:\n";
    cout<<hour<<" hr:"<<min<<" min:"<<sec<<" sec";
  }
}t1;
void main(){
  cout<<"Enter time as hour-minuite-second";
  t1.setdata(); t1.display();
  getch();
}
Q2) Create a class student that stores the information about a student. This information is entered a using 
the constructors. Create three different formats of the constructors. Implicit, parameterized and copy 
constructor
#include<iostream.h>
#include<conio.h>
class student{
  int roll,dob[3];
  char gen,name,gra;
  public:
    student(){
      cout<<"constructor called \n";
      roll=0; name='s'; gen='m'; dob[0]=10;dob[1]=1;dob[2]=2001; gra='P';
    }
  student(int r,char n,char g,int d0,int d1,int d2,char grd){
    cout<<"implicitely parameterised constructor called \n";
    roll=r; name=n; gen=g; dob[0]=d0;dob[1]=d1;dob[2]=d2; gra=grd;
  }
  student(student *a){
    cout<<"\ncopy constructor called \n";
    roll=a->roll; name=a->name; gen=a->gen; gra=a->gra;
    dob[0]=a->dob[0]; dob[1]=a->dob[1]; dob[2]=a->dob[2];
  }
  void display(){
    cout<<"the information is:\n";
    cout<<"Name:"<<name<<" Roll:"<<roll<<" gender:"<<gen<<"\n grade:"<<gra;
    cout<<" DOB:"<<dob[0]<<":"<<dob[1]<<":"<<dob[2]<<"\n";
  }
}s1,s2,s3;
void main(){
  cout<<"information in s1\n"; s1.display();
  cout<<"information in s2\n"; s2.display();
  student s2(2,'t','m',29,05,2001,'P');
  cout<<"information in s2 after parameterized constructor called\n";
  s2.display(); student s3(&s2);
  cout<<"\n data copied to s3 from s2 \n"; s3.display();
  getch();
}
Q3) Write overloaded function absolute( ) to find absolute value of given number.
#include<iostream.h>
#include<conio.h>
void absolute(int);
void absolute(float); void absolute(float,float);
void main(){
  int x=25635;float y=73.764, z=72.76;
  absolute(x); absolute(y); absolute(y,z);
  getch();
}
void absolute(int a){
  cout<<"absolute value for "<<a<<" is "<<(int)a<"\n";
}
void absolute(float a){
  cout<<"\nabsolute value for "<<a<<" is "<<(int)a<<"\n";
}
void absolute (float a,float b){
  cout<<"absolute value for "<<a<<" is "<<(int)a<<"\n";
  cout<<"absolute value for "<<b<<" is "<<(int)b<<"\n";
}
Q4) Write overloaded function mean( ) to find arithmetic mean of int/float/double type array.
#include<iostream.h>
#include<conio.h>
#define n 5
float mean(int[10]);
float mean(float[10]);
double mean(double[10]);
void main(){
  float amean, a[10]={1,3,2,1,7};
  float bmean, b[10]={2.32,21.43,22.543,211.32,4.221};
  double cmean, c[10]={211111323,32134573,462725325,448947465,53434232};
  amean=mean(a); bmean=mean(b); cmean=mean(c);
  cout<<"sum os a is: "<<amean<<"\n";
  cout<<"sum os b is: "<<bmean<<"\n";
  cout<<"sum os c is: "<<cmean<<"\n";
  getch();
}
float mean(int x[]){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+x[i];
  }; return((float)sum/n);
}
float mean(float y[]){
  float sum=0;
  for (int i=0;i<n;i++){
    sum=sum+y[i];
  }; return(sum/n);
}
double mean(double z[]){
  double sum=0;
  for (int i=0;i<n;i++){
    sum=sum+z[i];
  };return(sum/n);
}
Q5) Overload an operator ‘+’ and ‘*’ to carry out the addition and multiplication of two complex 
numbers.
#include<iostream.h>
#include<conio.h>
class complex{
  int real,imag;
  public:
    complex(){ //default constructor
      real=0; imag=0;
    }
  void setdata(int r, int i){
    real=r; imag=i;
  }
  complex operator + (complex a){
    complex c;
    c.real=a.real+real;
    c.imag=a.imag+imag;
    return(c);
  }
  complex operator * (complex a){
    complex c;
    c.real=real*a.real-imag*a.imag; //ac-db
    c.imag=real*a.imag+imag*a.real; //ad+bc
    return(c);
  }
  void display(){
    if(imag<0)
      cout<<"\nthe number is "<<real<<imag<<"i";
    else
      cout<<"\nthe number is "<<real<<"+"<<imag<<"i";
  }
};
//complex operator +(complex,complex);
void main(){
  complex c1,c2,c3,c4;
  c1.setdata(2,-3);c2.setdata(4,5);
  c1.display();c2.display();
  c3=c1+c2;
  c3.display();
  c4=c1*c2;
  c4.display();
  getch();
}
Q6) Create two classes Car & truck. First class had the data members, manufacturer, and max speed and 
second class has the data members max speed and capacity. Create a friend function greater_speed that 
is friendly with both the classes & it takes arguments of both class type & output the max_speed value 
of the two classes. 
#include<iostream.h>
#include<conio.h>
#include<string.h>
class truck;
class cars{
  protected:
    char mfr_na[10];
  float mx_sp;
  public:
    void setdata(char a[10],float b){
      strcpy(mfr_na, a);
      mx_sp=b;
    }
  friend void greater_speed (cars ,truck);
}ca;
class truck{
  protected:
    float mx_sp;
  float capa;
  public:
    void setdata(float a,float b){
      mx_sp=a;
      capa=b;
    }
  friend void greater_speed(cars , truck);
}tr;
void main(){
  ca.setdata("tushar",4.6);
  tr.setdata(48.6,1234.6);
  greater_speed(ca,tr);
  getch();
}
void greater_speed(cars a,truck b){
  if(a.mx_sp>b.mx_sp)
    cout<<"\n max speed is of cars is "<<a.mx_sp<<endl;
  else
    cout<<"\n max speed is of truck is "<<b.mx_sp<<endl;
}
Q7) Develop a matrix class that can handle integer matrices of different dimensions. Also overload 
operators ‘+’, ‘*’, ‘=’ to carry out addition, multiplication & comparison of two matrices.
#include<iostream.h>
#include<conio.h>
class matrix{
  int nrow,ncol,arr[10][10];
  public:
    matrix(int n,int m){
      nrow=n; ncol=m;
      for(int i=0;i<nrow;i++){
        for(int j=0;j<ncol;j++){
          arr[i][j]=0;
        }}
    }
  matrix(){
    nrow=2;ncol=2;
    for(int i=0;i<nrow;i++){
      for(int j=0;j<ncol;j++){
        arr[i][j]=0;
      }}
  }
  void setdim(){
    cout<<"\n Enter dimension of matrix";
    cin>>nrow>>ncol;
  }
  void setdim(int a,int b){
    nrow=a; ncol=b;
  }
  void getmatrix(){
    cout<<"enter elements of matrix rowwise";
    for(int i=0;i<nrow;i++){
      for(int j=0;j<ncol;j++){
        cin>>arr[i][j];
      }}}
  void display(){
    for(int i=0;i<nrow;i++){
      for(int j=0;j<ncol;j++){
        cout<<"\t"<<arr[i][j];
      }
      cout<<"\n";
    } }
  matrix operator + (matrix b){
    matrix c;
    for(int i=0;i<nrow;i++){
      for(int j=0;j<ncol;j++){
        c.arr[i][j]=arr[i][j]+b.arr[i][j];
      }}
    return(c);
  }
  matrix operator * (matrix a){
    if(ncol==a.nrow){
      matrix c;c.setdim(nrow,a.ncol);
      for(int i=0;i<nrow;i++){
        for(int j=0;j<a.ncol;j++){
          for(int k=0;k<ncol;k++){
            c.arr[i][j]=c.arr[i][j]+arr[i][k]*a.arr[k][j];
          }
        }
      }
      return(c);
    }
    else{
      cout<<"\n multiplication cannot done";
    }
  }
  int operator ==(matrix a){
    if(nrow==a.nrow && ncol==a.ncol){
      for(int i=0;i<nrow;i++){
        for(int j=0;j<ncol;j++){
          if(arr[i][j]!=a.arr[i][j]){
            cout<<"\n matrices are not equal";
            return(0);
          }
        }
      }
      cout<<"\n matrices are equal";
    }else
      cout<<"\n matrices are not eqaul";
    return(0);
  }
};
void main(){
  matrix m1(2,2),m2(2,2),m3(2,2),m4(2,2);
  clrscr();
  m1.setdim(); m2.setdim();
  m1.display(); m2.display(); m3.display();
  m1.getmatrix(); m1.display();
  m2.getmatrix(); m2.display();
  m3=m1+m2; cout<<"matrix addition is \n"; m3.display();
  m4=m1*m2; cout<<"matrix multiplication\n"; m4.display();
  m1==m2;
  getch();
}
Q8) 
#include<iostream.h>; #include<conio.h>
const int min_bal=500;
class account{
  public:
    char name[20];
  long int a_c;
  char type; //c for current and s for saving acc.//
    float bal;
  void getdata(){
    cout<<"\nEnter customer name, account no, type of acccount (c/s), intial balance:\n";
    cin>>name>>a_c>>type>>bal;
  }
  void showdata(){
    cout<<"\nAccount holder's name: "<<name<<"\nAccount no.: "<<a_c<<"\nType of 
account: "<<type<<"\nAvailable balance: "<<bal;
  }
  void deposit(){
    float amt;
    cout<<"\nEnter amount of deposite:";
    cin>>amt;
    bal+=amt;
  }
  void display(){
    cout<<"\nAvailable balance: "<<bal;
  }
};
class cur_acct: public account{
  void penalty(){
    if(bal<min_bal){
      cout<<"\nPenalty imposed\n";
      bal-=100;
    }
  }
  public:
    void withdraw(){
      float amt;
      cout<<"\nEnter amount to be withdrawn:\n";
      cin>>amt;
      if(bal<amt){
        cout<<"\nNot enough amount available:\n";
        return;
      }
      else if((bal-amt)<min_bal){
        bal=bal-amt;
        penalty();
        display();
      }
      else {
        bal-=amt;
        display();
      }
    }
};
class sav_acct: public account{
  public:
    void interest(){
      float r;
      int p;
      cout<<"\nEnter rate and period:";
      cin>>r>>p;
      float i=bal*r*p;
      bal+=i;
      //display();
    }
  void withdraw(){
    float amt;
    cout<<"\nEnter amount to be withdrawn: ";
    cin>>amt;
    bal-=amt;
    display();4
  }
};
int main(){
  cur_acct c;
  clrscr();
  c.getdata();
  c.showdata();
  c.deposit();
  c.display();
  c.withdraw();
  c.display();
  c.withdraw();
  sav_acct s;
  s.getdata();
  s.showdata();
  s.deposit();
  s.interest();
  s.display();
  s.withdraw();
  s.display();
  getch();
}