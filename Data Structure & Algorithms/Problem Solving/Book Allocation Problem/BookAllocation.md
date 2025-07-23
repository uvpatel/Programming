# Book Allocation

1) There are N books, each ith book has A[i] number of pages.
2) You have to allocate books to M number of students so that the maximum number of pages allocated to a student in minimum.

- Each book should be allocated to a student.
- Each student has to be allocated at least one book.
- Allotment should be in contiguous order.

Calculate and return that minimum possible number.

return -1 if a valid assignment is not possible.

e.g
arr = [2,1,3,4] , N = 4 , M = 2 if M is greater than N is Not possible return -1.

1) s1 = 2       s2 = 8
2) s1 = 3       s2 = 7
3) s1 = 6       s2 = 4

- 3rd is answer.

## Find Min Possible max pages.

- possible soln 
- min and max page allocation
- 1) min = 0 to max = sum[allpages]
- 2) range min to max and find possible ans.
- 3) Binary search on possible range. (bcz it is a sorted range).
- 4) BS - Search Space
- L and R


## BS Logic:
st = 0 ,end = sum(arr)
while(st <= end){
    mid = s + (e-s)/2;
    if(isValid(mid)){
        ans = mid
        end = mid - 1
    }
    else{
        st = mid + 1
    }
}

- st = 1 pages = 2 + 1 = 3
- st = 2 pages = 3
- st = 3 pages = 4

bool isValid(arr[],n,m,mid){
    int st = 1, pages = 0
    for(i = 0; i < n; i++){
        if(arr[i] > maxAllocatedPages){
            return false;
        }
        if(pages + arr[i] <=  allowedpages){
            pages += arr[i];
        }else{
            st++
            pages = arr[i];
        }
    }
    st > m -> invalid -> false
    st <= m -> valid -> true
}


- TC - O(logN * n)