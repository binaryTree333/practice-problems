/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
*/

#include <stdio.h>

int main(){
  int nums[] = {1, 1, 2};
  int numsSize = 3;

  int i = 1, j = 0;
  int newSize;

  for (i = 1; i < numsSize; i++){
    if (nums[i] != nums[j]){
      j++;
      nums[j] = nums[i];
    }
  }

  newSize = j + 1;

  for (i = 0; i < newSize; i++){
    printf("%d ", nums[i]);
  }
  
  return 0;
}
