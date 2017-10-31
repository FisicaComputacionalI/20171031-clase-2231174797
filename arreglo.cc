#include<iostream>
using namespace std;
int main()
{
  size_t talla=16;
  cout<<"¿Cuantos alumnos encuestaras?"<<endl;
  cin>>talla;
int sum=0;
int*edad=new int[talla];
for(int i=0;i<talla;i++)
  {
    cout<<"Dame tu edad"<<endl;
    cin>>edad[i];
  }
for(int j=0;j<talla;j++)
  sum+=(edad[j]+3);
for(int j=0;j<talla;j++)
  cout<<edad[j]<<" , ";
cout<<endl;
cout<<"el promedio de edad a la que se graduara este grupo es_"<<sum/talla<<endl;
return 0;
}
