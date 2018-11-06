#include <iostream>
#include <time.h>
#include <iomanip>
#include <cmath>

using namespace std;

#define IA 16807
#define IM 2147483647
#define AM (1.0/IM)
#define IQ 127773
#define IR 2836
#define MASK 123459876

typedef struct Ran0
{

  float ran0(long *idum)
  {
    long k;
    float ans;

    *idum ^= MASK;
    k=(*idum)/IQ;
    *idum=IA*(*idum-k*IQ)-IR*k;

    if (*idum < 0) *idum += IM;
    ans=AM*(*idum);
    *idum ^= MASK;

    return ans;
  }

  void line()
  {
    for(int i=1;i<30;i++)
    cout<<"--";
    cout<<"\n";
  }

}R0;


int main ()
{
  R0 n;
  long seed= 123456789;
  long *idum=&seed;
  float X[1000000];
  float Y[1000000];
  float Npond;
  float Nbox;
  float Apond;
  float Abox;
  int N;

  cout << "Ingresa el numero de piedras que vas a lanzar: " << endl;
  cin >> N;

  for (int i=0; i<N; i++)
  {
    X[i]= 2*n.ran0(idum) - 1;
  }

  for (int i=0; i<N; i++)
  {
    Y[i]= 2*n.ran0(idum) - 1;
  }

  for (int i=0; i<N; i++)
  {
    if (sqrt((X[i]*X[i])+(Y[i]*Y[i]))<=1)
    Npond += 1;
    else
    Nbox += 1;
  }

  Abox= 2*2;
  Apond = (Npond * Abox) / (Npond + Nbox);


  cout << "El area del circulo es:" << endl;
  cout << Apond << endl;

 return 0;
}
