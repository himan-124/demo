//Trapping Rain Water


#include <stdio.h>
void trapRainWater(int height[], int n) {
    int leftMax[n], rightMax[n];// Arrays to store the maximum height to the left and right of each bar
    int waterTrapped = 0;

    leftMax[0] = height[0];// Initialize the first element of leftMax
    for (int i = 1; i < n; i++) {// Fill leftMax array
        leftMax[i] = (height[i] > leftMax[i - 1]) ? height[i] : leftMax[i - 1];// Choose the maximum height between current and previous
    }

    rightMax[n - 1] = height[n - 1];// Initialize the last element of rightMax
    for (int i = n - 2; i >= 0; i--) {// Fill rightMax array
        rightMax[i] = (height[i] > rightMax[i + 1]) ? height[i] : rightMax[i + 1];// Choose the maximum height between current and next
    }

    for (int i = 0; i < n; i++) {// Calculate total water trapped
        waterTrapped += (leftMax[i] < rightMax[i] ? leftMax[i] : rightMax[i]) - height[i];// Add the water trapped at each bar
    }

    printf("Total water trapped: %d units\n", waterTrapped);
}
int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};// Example height array
    int n = sizeof(height) / sizeof(height[0]);// Calculate the size of the array
    trapRainWater(height, n);// Call the function to calculate trapped rain water
    return 0;
}
//output
//Total water trapped: 6 units
