#include <stdio.h>


int main(int argc, char const *argv[]) {

    int REG_VALUES [] = {
      0x95,
      0x3D,
      0xD3,
      0x7B,
      0x95
    };

    int mask = 0x08;

  for(int val=0; val<5; ++val){
      if((REG_VALUES[val]&mask) == 0){
        printf("%X : %s \n", REG_VALUES[val], "Reset");
      }
      else{
        printf("%X : %s \n", REG_VALUES[val], "Set");
      }

    }
  return 0;
}
