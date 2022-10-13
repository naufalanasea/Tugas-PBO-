#include <iostream>
using namespace std;

main(){
int i;
int j;
char huruf[2][22]={{"naufal"},{"anas"}};
int angka[2][10]={{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20}};
  for (i=0; i<2; i++){
   cout<<huruf[i]<<endl;
  }

  for (i=0; i<2; i++){
    for (j=0; j<10; j++){
     cout<<"index ["<<i<<"]["<<j<<"] = "<<angka[i][j]<<endl;
    }
  }
}