#include <iostream>
using namespace std;

void selection_sort(int n,int a[]);
void print_array(int n,int a[]);
int main (){
  int n =8;
  int a[] = {6 ,3 ,8,5, 2, 7, 4, 1};
  selection_sort(n,a);
  print_array(n,a);
  return 0;
}

void selection_sort(int n,int a[]){
  for(int i=0;i<=n-2;i++){
    int minIndex = i;
    for(int j = i+1; j<= n -1;j++){
      if(a[j] < a[minIndex]){
        minIndex = j;
      }
    }
    if(minIndex != i){
      swap(a[minIndex],a[i]);
    }
  }
}

void print_array(int n,int a[]){
  for(int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout <<endl;
}
