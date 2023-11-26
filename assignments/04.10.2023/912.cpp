#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recMerge(vector<int>& nums, int left, int mid, int right){
        int n1 = mid-left+1;
        int n2 = right-mid;
        vector<int> leftArr;
        vector<int> rightArr;

        for(int i = 0; i<n1; i++){
            leftArr.push_back(nums[i+left]);
        }
        for(int j = 0; j<n2; j++){
            rightArr.push_back(nums[j+mid+1]);
        }
        
        int i = 0;
        int j = 0;
        int k = left;
        while(i<n1 && j<n2){
            if(leftArr[i]<rightArr[j]){
                nums[k] = leftArr[i];
                i++;
                k++;
            }else{
                nums[k] = rightArr[j];
                j++;
                k++;
            }
        }
        while(i!=n1){
            nums[k] = leftArr[i];
            i++;
            k++;
        }
        while(j!=n2){
            nums[k] = rightArr[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>& nums, int left, int right){
        if(left<right){
            int mid = (left+right)/2;
            mergeSort(nums, left, mid);
            mergeSort(nums, mid+1, right);

            recMerge(nums, left, mid, right);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums, 0, n-1);
        return nums;
    }
};