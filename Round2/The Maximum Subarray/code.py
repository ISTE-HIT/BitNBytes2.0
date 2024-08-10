import sys

def max_subarray(arr):
    maxi = -sys.maxsize
    maxis = -sys.maxsize
    sum = 0
    
    # Find maximum subarray sum using Kadane's algorithm
    for i in range(len(arr)):
        sum += arr[i]
        maxi = max(sum, maxi)
        if sum < 0:
            sum = 0
    
    if maxi < 0:
        return [maxi, maxi]
    
    sum = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            continue
        sum += arr[i]
        maxis = max(sum, maxis)
    
    return [maxi, maxis]

if __name__ == '__main__':
    t = int(input().strip())
    
    for _ in range(t):
        n = int(input().strip())
        arr = list(map(int, input().strip().split()))
        
        result = max_subarray(arr)
        
        print(" ".join(map(str, result)))
