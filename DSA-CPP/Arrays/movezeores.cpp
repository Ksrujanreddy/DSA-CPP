#include<iostream>
#include<vector>
using namespace std;
void movezeroes(vector<int>&nums){
    int n =nums.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
         }
    }
}
int main(){
    vector<int>nums={0,4,6,0,7,0};
    movezeroes(nums);
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}