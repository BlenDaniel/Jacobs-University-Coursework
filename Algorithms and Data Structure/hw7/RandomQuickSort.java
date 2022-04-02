package Homework7;

import java.util.Random;

public class RandomQuickSort {

    public static void main(String[] args) {
        int[] arry = randomCase(10);
        printArray(arry);
        quicksort(arry, 0, 9);
        printArray(arry);
        

    }

    // function to generate random pivots
    public static int[] generatePivot(int low, int high) {
        Random random = new Random();
        int number1 = 1;
        int number2 = 1;

        while (number1 == number2) {
            number1 = random.nextInt(high - low) + low;
            number2 = random.nextInt(high - low) + low;
        }

        int[] arrays = { number1, number2 };
        return arrays;

    }

    public static int[] partition(int[] arr, int low, int high) {
        int[] randomNumber = generatePivot(low, high);
        int a = randomNumber[0];
        int b = randomNumber[1];

        // making sure the random pivots are swaped to the first and the last position
        // the pivot with the greater value on the last and the lower to the first

        if (arr[a] < arr[b]) {
            swap(arr, a, low);
            swap(arr, b, high);
        } else {
            swap(arr, b, low);
            swap(arr, a, high);
        }
        if (arr[low] > arr[high]) {
            swap(arr, low, high);
        }
        // Other code is same as QuicksortVariant.py
        int pivot1 = arr[low];
        int pivot2 = arr[high];
        int p1 = low + 1;
        int p2 = high - 1;
        int index = low + 1;

        while (index <= p2) {
            if (arr[index] < pivot1) {
                swap(arr, index, p1);
                p1 += 1;
            } else if (arr[index] >= pivot2) {
                while (arr[p2] > pivot2 && index < p2) {
                    p2 -= 1;
                }
                swap(arr, index, p2);
                p2 -= 1;

                if (arr[index] < pivot1) {
                    swap(arr, index, p1);
                    p1 += 1;
                }
            }

            index += 1;
        }
        p1 -= 1;
        p2 += 1;

        // Swapping the end pivots within the array

        swap(arr, low, p1);
        swap(arr, high, p2);

        int[] arrays = { p1, p2 };
        return arrays;
    }

    public static void quicksort(int[] arr, int low, int high) {
        if (low < high) {
            int[] pivots = partition(arr, low, high);
            int pvt_1 = pivots[0];
            int pvt_2 = pivots[1];

            quicksort(arr, low, pvt_1 - 1);
            quicksort(arr, pvt_1 + 1, pvt_2 - 1);
            quicksort(arr, pvt_2 + 1, high);
        }

    }

    static int[] randomCase(int size) {
        Random random = new Random();
        int[] randomArray = new int[size];
        for (int i = 0; i < size; i++)
            randomArray[i] = random.nextInt(size);
        return randomArray;
    }

    static void printArray(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");
        System.out.print("\n");

    }

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}
