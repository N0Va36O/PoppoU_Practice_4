#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int min_count=99, max_count=-99, max_in, min_in;
int const N=6;
int x[N]={21, 22, 35, 43, 52, 69};
for(int i=0; i<N; i++){
    cout<<x[i];
}
for(int j=0; j<N; j++){
    if(x[j]<min_count){
        min_count=x[j];
        min_in=j;
    }
}
for(int a=0; a<N; a++){
    if(x[a]>max_count){
        max_count=x[a];
        max_in=a;
    }
}
cout<<endl<<"минимальный элемент массива: "<<min_count<<" индекс: "<<min_in;
cout<<endl<<"максимальный элемент массива: "<<max_count<<" индекс: "<<max_in;
return 0;
}