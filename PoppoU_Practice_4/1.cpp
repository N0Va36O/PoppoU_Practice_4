#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int count=99999999, count_num;
int const SIZE=6;
int arr[SIZE]={2, 2, 3, 4, 5, 6};
for(int i=0; i<SIZE; i++){
    cout<<arr[i];
}
for(int j=0; j<SIZE; j++){
    if(arr[j]<=count){
        count=arr[j];
    }
}
for(int a=0; a<SIZE; a++){
    if(arr[a]==count){
        count_num+=1;
    }
}
cout<<endl<<"минимальное число массива: "<<count;
cout<<endl<<"его количество в массиве: "<<count_num;
return 0;
}