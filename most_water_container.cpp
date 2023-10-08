static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  // int maxArea(vector<int>& height) {
  //     int i,j;
  //     int n = height.size();
  //     vector<int> arr;
  //     //arr = height;
  //     int area;
  //     //sort(arr.end(), arr.begin());
  //      int start=0;
  //     int end= n-1;
  //     //for(i=0; i<n; i++){
  //         start = i;
  //         end = n-1;
  //         area = (end - start) * (min(height[start],height[end]));
  //         area = abs(area);
  //         arr.push_back(area);
  //         // for(j=i+1; j<n; j++){
  //         //     if(i == j){
  //         //         continue;
  //         //     }
  //         //     else{
  //         //         area = (i - j) * (min(height[i],height[j]));
  //         //         area = abs(area);
  //         //         arr.push_back(area);
  //         //     }
  //         // }
  //     //}
  //     sort(arr.begin(), arr.end());
  //     n = arr.size();
  //     return arr[n-1];

  // }
  int maxArea(vector<int> &height) {
    int left = 0; // Left pointer starting from the leftmost edge
    int right =
        height.size() - 1; // Right pointer starting from the rightmost edge
    int maxWater = 0;      // Initialize the maximum water capacity

    while (left < right) {
      // Calculate the width of the container
      int width = right - left;

      // Calculate the height of the container (the minimum height between the
      // two lines)
      int h = min(height[left], height[right]);

      // Calculate the water capacity of the current container
      int water = width * h;

      // Update the maximum water capacity if the current container holds more
      // water
      maxWater = max(maxWater, water);

      // Move the pointers towards each other
      if (height[left] < height[right]) {
        left++;
      } else {
        right--;
      }
    }

    return maxWater;
  }
};