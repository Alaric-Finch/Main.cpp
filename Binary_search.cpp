#include <iostream>
using namespace std;

bool binary_search(int a[],int leftIndex,int rightIndex, int target);

int main (){
  int a[] ={1,2,3,4,5,6,7,8};
  int n = sizeof(a) / sizeof(a[0]);
  int target;
  cout << "nhap vao so target muon tim: ";
  cin >> target;
  
  
  bool result = binary_search(a,0,n-1,target);
  if(result == true){
    cout << "Co tim thay so " << target << " trong mang!!!\n";
  }
  else{
    cout << "không tim thay so " << target << " trong mang!!!\n";
  }
  return 0;
}

bool binary_search(int a[],int leftIndex,int rightIndex,int target){
  // nếu leftIndex > rightIndex
  if(leftIndex > rightIndex){
      // return ==> ko tìm thấy
      return false;
  }
  // Tính vị trí của phần tử ở giữa
  //int middle = (leftIndex - rightIndex)/2;
  int middle = leftIndex + (rightIndex - leftIndex)/2;
  
  // kiểm tra xem gtri của phần tử ở g5iữa có bằng số cần tìm hay không
  if(a[middle] == target){
    //nếu bằng thì return có tìm thấy
    return true;
  }
  // bước đệ quy tìm sang nửa bên trái nếu target < a[mid]
  if(a[middle] > target){
    return binary_search(a,leftIndex,middle-1,target);
  }
  // tìm sang nửa bên phải nếu target > a[mid]
  else{
    return binary_search(a,middle-1,rightIndex,target);
  }
}
