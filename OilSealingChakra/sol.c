#include <stdio.h>

int maxArea(int height[], int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max_area = 0;

    while (left < right) {
        int width = right - left;
        int minHeight = (height[left] < height[right]) ?height[left]: height[right];
        int area = width * minHeight;
        
        if (area > max_area) {
            max_area = area;
        }
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return max_area;
}

int main() {
    int size;
    scanf("%d", &size);
    
    int height[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &height[i]);
    }
    
    int result = maxArea(height, size);
    printf("%d\n", result);
    
    return 0;
}
