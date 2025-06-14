class Solution {
  public:
    void merge(vector<int>&arr,int left,int mid,int right){
        int i = left;
        int j = mid+1;
        int n = right-left+1;
        int k = 0;
        vector<int>new_arr(n);
        
        while(i<=mid&&j<=right){
            if(arr[i]<arr[j]){
                new_arr[k]=arr[i];
                i++;
                k++;
            }
            else{
                new_arr[k]=arr[j];
                j++;
                k++;
            }
        }
        while(i<=mid){
            new_arr[k]=arr[i];
            i++;
            k++;
        }
        while(j<=right){
            new_arr[k]=arr[j];
            j++;
            k++;
        }
        for(int k=0;k<n;k++){
            arr[left+k]=new_arr[k];
        }
    }
    
    void mergeSort(vector<int>& arr, int l, int r) {
        if(l == r){
            return;
        }
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
};