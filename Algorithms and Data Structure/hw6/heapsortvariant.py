from math import pow, ceil, sqrt
from decimal import Decimal
import time
from random import seed
from random import randint

def maxheapify(arr, size, root):
    left = 2 * root + 1
    right = 2 * root + 2
    largest = root
    if (left < size and arr[left] > arr[root]):
        largest = left
    else:
        largest = root
    
    if (right < size and arr[right] > arr[largest]):
        largest = right
    
    if (largest != root):    
        temp = arr[root]
        arr[root] = arr[largest]
        arr[largest] = temp
        maxheapify(arr, size, largest)

def buildmaxheap(arr, size):
    for i in range(size // 2, -1, -1):
        maxheapify(arr, size, i)


def bottomup(arr, size, root):
    index = root
    left = 2 * root + 1
    right = 2 * root + 2
    if (left >= size):    
        return root   

    if (right >= size):
        temp = arr[left]
        arr[left] = arr[root]
        arr[root] = temp
        return left
    
    if (arr[left] > arr[right]):
        index = left
    else:
        index = right

    temp2 = arr[root]
    arr[root] = arr[index]
    arr[index] = temp2
    return bottomup(arr, size, index)


def checkheap(arr, size, root):
    parent = (root - 1) // 2
    if (arr[parent] < arr[root]):
        temp = arr[root]
        arr[root] = arr[parent]
        arr[parent] = temp
        checkheap(arr, size, root)
    


def heapSort(arr):
    n = len(arr)
    buildmaxheap(arr, n)
    for i in range(n - 1, 0, -1):
        temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp
        n = n - 1
        pos = bottomup(arr, n, 0)
        checkheap(arr, n, pos)


def main():
    data = open("DataVariant.txt", "w")
    for i in range(0, 100000, 1000):
        arr = []
        for k in range(0, i):
            arr.append(randint(0, i))

        start = time.time()
        heapSort(arr)
        stop = time.time()
        data.write(str(i) + " " + str(stop - start) + "\n")
        print(f"for size {i} it took {stop - start} seconds")
    
  
main()