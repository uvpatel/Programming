# Moore's Voting Algorithm

- frquency is power and like most frequency will be for moore.
- you don't need any sorting just try freq. and element start with 1. 
- same element -> freq++
- diffrent => freq--
- after this mj is big freq > diff element--



```c++
int freq = 0,ans;
for(int i = 0; i <n ;i++){

    if(freq == 0){
        ans = nums[i];
    }
    if(ans == nums[i]){
        freq++;
    }
    else{
        freq--;
    }
    return ans;
}

```
## Example.
1) Candidate like in Voting
- one candidate lost in one but if he win more then other state it will definately win any time.
