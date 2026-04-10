#include <iostream>
#include <vector>
using namespace std;

// 分区函数（双指针法）
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low]; // 选首元素为基准
    int i = low, j = high;

    while (i < j) {
        // 1. 右指针向左找第一个小于pivot的数
        while (i < j && arr[j] >= pivot)
            j--;
        // 2. 左指针向右找第一个大于pivot的数
        while (i < j && arr[i] <= pivot)
            i++;
        // 交换
        if (i < j)
            swap(arr[i], arr[j]);
    }
    // 基准归位
    swap(arr[low], arr[i]);
    return i; // 返回基准位置
}

// 快排主函数（递归）
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotPos = partition(arr, low, high);
        quickSort(arr, low, pivotPos - 1);  // 左递归
        quickSort(arr, pivotPos + 1, high); // 右递归
    }
}

// 测试
int main() {
    vector<int> arr = {3, 6, 8, 10, 1, 2, 1};
    quickSort(arr, 0, arr.size() - 1);
    for (int x : arr) cout << x << " ";
    return 0;
}
// 输出：1 1 2 3 6 8 10
