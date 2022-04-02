from math import pow, ceil, sqrt
from decimal import Decimal
import time
from random import seed
from random import randint

# seed random number generator
seed(1)
# generate some integers

def maxheapify(arr, n, root):
    largest = root  
    l = 2 * root + 1    
    r = 2 * root + 2     
  
    if l < n and arr[root] < arr[l]: 
        largest = l 
  
    if r < n and arr[largest] < arr[r]: 
        largest = r 
  
    if largest != root: 
        arr[root],arr[largest] = arr[largest],arr[root]  # swap 
        maxheapify(arr, n, largest) 
   

def buildmaxheap(arr, n):
    for i in range (n // 2, -1, -1):    
        maxheapify(arr, n, i)
    


def heapSort(arr):
    n = len(arr)
    buildmaxheap(arr, n)
    for i in range(len(arr) - 1, 0,-1):    
        temp = arr[0]
        arr[0] = arr[i]
        arr[i] = temp
        n = n - 1
        maxheapify(arr, n, 0)   


def main():
    data = open("DataNormal.txt", "w")
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