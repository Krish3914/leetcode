class Solution {
    public int incremovableSubarrayCount(int[] nums) {
        int n = nums.length;
        int result = 0;
        int i,j;
        for(i=0; i<n; i++){
            for(j=i; j<n; j++){
                int[] subarray = Arrays.copyOfRange(nums, i, j+1);
                if(isTrue(concatArrays(Arrays.copyOfRange(nums,0,i), Arrays.copyOfRange(nums, j+1, n))) && subarray.length > 0){
                    result++;
                }
            }
        }
        return result;
    }
    public boolean isTrue(int[] arr){
        int i;
        for(i=1; i<arr.length; i++){
            if(arr[i] <= arr[i-1]){
                return false;
            }
        }
        return true;
    }
    public int[] concatArrays(int[] arr1, int[] arr2){
        int len1 = arr1.length;
        int len2 = arr2.length;
        int[] result = new int[len1 + len2];
        System.arraycopy(arr1, 0, result, 0, len1);
        System.arraycopy(arr2, 0, result, len1, len2);
        return result;
    }
}