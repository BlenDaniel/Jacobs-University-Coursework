import time
from random import seed
from random import randint

# seed random number generator
seed(1)
# generate some integers



def selectionSort(arr):
    print(arr)
    print("Selection Sort Started")
    for i in range(0, len(arr)):
        current_min = i
        for j in range(i + 1, len(arr)):
            if(arr[current_min] > arr[j]):
                current_min = j
        if(i != current_min):
            arr[i], arr[current_min] = arr[current_min], arr[i]
    print("Selection Sort Ended")    
    return arr

def worstCase(size):
    
    arr = getCheckedArray(size)
    # sort the numbers
    arr.sort(reverse = True)
    arr[1 : size] = sorted(arr[1:size])
    
    return arr

def bestCase(size):
    arr = getCheckedArray(size)
    # sort the numbers
    arr.sort()
    return arr

def getArray(size):
    arr = []
    for i in range(0, size):
        arr.append(randint(0, size))
    return arr

def getCheckedArray(size):
    arr = []
    for i in range(0, size):
        value = randint(0, size)
        while(value in arr):
            value = randint(0, size)
        arr.append(value)
            
    return arr

def writeIntoFile():
    f = open("file.txt", "a")
    now = time.time()

    for size in range(0, 500):
        arrayAve = getCheckedArray(size)
        arrayBest = bestCase(size)
        arrayWorst = worstCase(size)

        f.write (str(time.time() - now))
        f.write(" ")

        timeBest = time.time()
        selectionSort(arrayBest)
        timeBestEnd = time.time()   
        f.write (str(timeBestEnd - timeBest))
        f.write(" ")

        timeAve = time.time()
        selectionSort(arrayAve)
        timeAveEnd = time.time()   
        f.write (str(timeAveEnd - timeAve))
        f.write(" ")

        timeWorst = time.time()
        selectionSort(arrayWorst)
        timeWorstEnd = time.time()   
        f.write (str(timeWorstEnd - timeWorst))
        f.write(" \n")

    f.close()
    
def main():
  
    
    size = eval(input("Enter the size of your array to be tested: "))
    arrayAve = getCheckedArray(size)
    arrayBest = bestCase(size)
    arrayWorst = worstCase(size)

    print("Selection sort for the Best case: ")
    timeBest = time.time()
    selectionSort(arrayBest)
    timeBestEnd = time.time()   
    print ("Time elapsed ",  timeBestEnd - timeBest)
    
    print("Selection sort for the Avarage case: ")
    timeAve = time.time()
    selectionSort(arrayAve)
    timeAveEnd = time.time()   
    print ("Time elapsed ",timeAveEnd - timeAve )

    print("Selection sort for the worst case: ")
    timeWorst = time.time()
    selectionSort(arrayWorst)
    timeWorstEnd = time.time()   
    print ("Time elapsed ", timeWorstEnd - timeWorst)
    writeIntoFile()
    
    
    

main()






