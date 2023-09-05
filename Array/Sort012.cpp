// Sort 0 1 2 leet code
// My approach


class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        int left=0;
        int right=n-1;
        while(left<right){
            while((arr[left]==0||arr[left]==1)&& left<right){left++;}
            while(arr[right]==2 && left<right){right--;}
            if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
        left=0;
        right=n-1;
        while(left<right){
            while((arr[left]==0)&& left<right){left++;}
            while((arr[right]==2||arr[right]==1) && left<right){right--;}
            if(left<right){
                swap(arr[left],arr[right]);
                left++;
                right--;
            }
        }
    }
};






//One more solution found in discussion
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
