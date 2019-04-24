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

    int set_numbers [4];
    int reset_numbers [4];
    int toggle_numbers[4];
    // question 1
    printf("%s\n","Set Numbers:" );
    for(int i=0; i<4;i++){
      set_numbers[i] = numbers[i]|mask;
      printf("%X\n",set_numbers[i]);
    }
    // question 2
      printf("%s\n","Reset Numbers:" );
    for (int i=0; i<4;i++){
      // reset_numbers
      reset_numbers[i] = numbers[i]&mask;
      printf("%X\n",reset_numbers[i]);
    }
    // question 3
    printf("%s\n","Toggle Numbers:" );
    for (int i=0; i<4;i++){
      // toggle_numbers
      toggle_numbers[i] = numbers[i]^mask;
      printf("%X\n",toggle_numbers[i]);
    }

}
