#include <iostream>

using namespace std;

int main()
{
setlocale(0, "");
int count;
int const SIZE=6;
int arr[SIZE]={2, 3, 4, 5, 6, 7};
for(int i=0; i<SIZE; i++){
    cout<<arr[i];
}
for(int j=0; j<SIZE; j++){
    if(arr[j]%3==0){
        count=count+arr[j];
    }
}
cout<<endl<<"количество чисел в массиве: "<<SIZE;
cout<<endl<<"сумма чисел кратных трем в массиве: "<<count;
return 0;
}