package Homework7;

import java.io.*;
import java.util.Random;

public class Quicksort {

    public static void main(String[] args) {

        int[] array;
        int[] timeLQuickSort = new int[200];
        int[] timeHQuickSort = new int[200];
        int[] timeM3QuickSort = new int[200];
        long start, stop;
        int index = 0;
        try {
            
            String filename = "quicksort" + ".txt";
            File outfile = new File(filename);
            FileOutputStream os = new FileOutputStream(outfile);
            OutputStreamWriter osw = new OutputStreamWriter(os);
            Writer writer = new BufferedWriter(osw);

            for (int i = 0; i < 100000; i+= 500) {

                array = randomCase(1000);

                
                
                start = System.nanoTime();

                hquickSort(array, 0, array.length - 1);

                stop = System.nanoTime();

                writer.write(i + " " + Long.toString(stop - start) + " ");

                timeHQuickSort[index] = Long.valueOf(stop - start).intValue(); 

                start = System.nanoTime();

                lquickSort(array, 0, array.length - 1);

                stop = System.nanoTime();

                writer.write( Long.toString(stop - start) + " ");

                timeLQuickSort[index] =  Long.valueOf(stop - start).intValue(); 

                start = System.nanoTime();

                m3quickSort(array, 0, array.length - 1);

                stop = System.nanoTime();

                writer.write(Long.toString(stop - start) + "\n");

                timeM3QuickSort[index] = Long.valueOf(stop - start).intValue(); 

                System.out.printf("for size %d it took %d seconds\n", new Object[] { i, Long.valueOf(stop - start).intValue() });
                
                index++;
            }

            System.out.printf("Avarage for hoare's is %d\n", new Object[] {sum(timeHQuickSort) / timeHQuickSort.length });
            System.out.printf("Avarage for lomuto is %d\n", new Object[] {sum(timeLQuickSort) / timeHQuickSort.length });
            System.out.printf("Avarage for median3 is %d\n", new Object[] {sum(timeM3QuickSort) / timeHQuickSort.length });

           writer.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }

    }

    // Partition using Hoare's Partitioning scheme
    public static int hoarePartition(int[] a, int low, int high) {
        int x = (int) Math.floor((high + low) / 2);
        int pivot = a[x];
        int i = low - 1;
        int j = high + 1;

        while (true) {
            do {
                i++;
            } while (a[i] < pivot);

            do {
                j--;
            } while (a[j] > pivot);

            if (i >= j) {
                return j;
            }

            swap(a, i, j);
        }
    }

    public static int lomotoPartition(int arr[], int p, int q) {

        int x = arr[p];
        int i = p;

        for (int j = p + 1; j <= q; j++) {

            if (arr[j] <= x) {
                i++;
                swap(arr, i, j);
            }
        }

        swap(arr, p, i);

        return i;
    }

    public static void hquickSort(int arr[], int p, int r) {
        if (p < r) {
            int q = hoarePartition(arr, p, r);
            hquickSort(arr, p, q - 1);
            hquickSort(arr, q + 1, r);
        }
    }

    private static void lquickSort(int arr[], int p, int r) {
        if (p < r) {
            int q = lomotoPartition(arr, p, r);
            lquickSort(arr, p, q - 1);
            lquickSort(arr, q + 1, r);
        }
    }

    private static void m3quickSort(int[] arr, int left, int right) {

        // If both cursor scanned the complete array, quicksort exits
        if (left >= right)
            return;

        // Pivot using median of 3 approach
        int pivot = getMedian(arr, left, right);
        int partition = pm3artition(arr, left, right, pivot);

        // Recursively, calls the quicksort with the different left and right parameters
        // of the sub-array
        m3quickSort(arr, left, partition - 1);
        m3quickSort(arr, partition + 1, right);
    }

    // This method is used to partition the given array and returns the integer
    // which points to the sorted pivot index
    private static int pm3artition(int arr[], int left, int right, int pivot) {
        int leftCursor = left - 1;
        int rightCursor = right;
        while (leftCursor < rightCursor) {
            while (arr[++leftCursor] < pivot)
                ;
            while (rightCursor > 0 && arr[--rightCursor] > pivot)
                ;
            if (leftCursor >= rightCursor) {
                break;
            } else {
                swap(arr, leftCursor, rightCursor);
            }
        }
        swap(arr, leftCursor, right);
        return leftCursor;
    }

    public static int getMedian(int arr[], int left, int right) {
        int center = (left + right) / 2;

        if (arr[left] > arr[center])
            swap(arr, left, center);

        if (arr[left] > arr[right])
            swap(arr, left, right);

        if (arr[center] > arr[right])
            swap(arr, center, right);

        swap(arr, center, right);
        return arr[right];
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

    public static int sum(int[] arr) {
        int sum = 0;
       for (int i = 0; i < arr.length; i++) {
            sum += arr[i]; 
       }
       return sum;
    }

}