#include <stdio.h>
// Masking numbers usin or
int main(){
  int numbers [] = {
    0x95,
    0x3D,
    0xD3,
    0x7B
  };

  int mask = 0x48;

int masked_numbers [4];

for(int i=0; i<4;i++){
  masked_numbers[i] = numbers[i]|mask;
  printf("%X\n",masked_numbers[i]);
}



}
