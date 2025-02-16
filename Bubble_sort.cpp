#include <iostream>
using namespace std;

void bubble_sort(int n,int a[]);
void print_array(int n,int a[]);
int main (){
  int n =8;
  int a[] = {6 ,4,7,1,3,2,5,8};
  bubble_sort(n,a);
  print_array(n,a);
  return 0;
}

void bubble_sort(int n,int a[]){
  bool swaped = false;
  for(int i=0;i<=n-2;i++){
    for(int j=0;j<=n -i-2;j++){
      if(a[j] > a[j+1]){
        swap(a[j],a[j+1]);
        swaped = true;
      }
    }
    if(swaped == false){
      break;
    }
  }
}

void print_array(int n,int a[]){
  for(int i=0;i<=n-1;i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
