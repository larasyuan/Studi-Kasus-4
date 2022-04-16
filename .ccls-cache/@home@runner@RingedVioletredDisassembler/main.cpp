#include<iostream>
using namespace std;

class Operator{
  friend ostream& operator << (ostream&, Operator&);
  friend istream& operator << (istream&, Operator&);

public:
  int iteratif_fibo(int n);
  int rekursif_fibo(int n);

private:
  int fibo1, fibo2, fn, n;
};

int Operator :: iteratif_fibo(int n){
  fibo1 = 1;
  fibo2 = 1;
  cout<<fibo1<<" "<<fibo2<<" ";
  for (int i=3; i<=n; i++){
    fn=fibo1+fibo2;
    fibo1=fibo2;
    fibo2=fn;
    cout<<fn<<" ";
  }
  return fn;
}

int Operator::rekursif_fibo(int n){
  if(n==0){
    return 0;
  }
  else if (n==1){
    return 1;
  }
  else{
    return rekursif_fibo(n-1) + rekursif_fibo(n-2);
  }
  cout<<rekursif_fibo(n)<<" ";
}

int main(){
  int a;
  Operator run;
  cout<<"FIBONACI"<<endl;
  cout<<"Masukkan nilai a = ";
  cin>>a;
  cout<<endl;
  cout<<"Fibonaci "<<a<<" dengan iteratif = "<<run.iteratif_fibo(a);
  cout<<"\n\n";
  for(int  i=1; i<=a; i++){
    cout<<run.rekursif_fibo(i)<<" ";
  }
  cout<<"Fibonaci "<<a<<" dengan rekursif = "<<run.rekursif_fibo(a);
}