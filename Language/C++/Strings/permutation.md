# Permutation in String

s1 = "ab" s2 = "eidbaooo"

ab = ba

- permutation is order or arrangement.

- if of s1's permutaion in s2 return true.
- no of char + frequence of char same

1) s1 how many charcter and freq of the char in s1.
2) freq[26] - aab - a = 2,b =1
3) lowercase, uppercase, special,digits - unordermap<char,int>
4) int freq[26] = {0}
5) freq[s[i] - 'a']++
 