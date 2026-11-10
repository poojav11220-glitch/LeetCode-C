#include <stdio.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char* s) {
   int maxlength = 0;
   for (int i =0; s[i] != '\0'; i++){
      int visited[256] = {0};
      int length =0;
      for(int j=i; s[j] != '\0'; j++){
        if(visited[(unsigned char) s[j]] == 1){
            break;
        }
        visited[(unsigned char)s[j]] = 1;
        length++;
        if(length > maxlength){
            maxlength =length;
        }
      }
   }
   return maxlength;
}