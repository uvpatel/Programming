# Operators

1) Arithmetic
- + (plus) - Use for addition and return sum

- - (minus)  - Use for subtraction and return substraction
- *(multyplication) - Use for multyplication and return mutiplication of given inputs

- /(division) - Use for division and return division

**Notes**: in c++ division return integer
- e.g. = 5/2 -> 2
- if we perform any two diffrent datatype explicitly convert into bigger datatype.
e.g int/float => float

```c++
    cout << (5 / (double)2) << endl;  // it returns 2.5

    // Another thing to remeber

    int ans = (5 / (double)2);
    cout << ans << endl;  // it returns 2 

```


- % (modulo) -  return remender.

e.g 5 % 2 = 1 , 8 % 16 = 8. etc.



2) Relational


### Use in Loop Structure.

> Relational operation returns always boolean.(true or false).

- < (less than)  -> 3 < 5 return true
- <=  (less than or equl to)   -> 3 <= 5 return true
- > (greater than)  -> 3 > 5 return false
- >=  (greater than or equl to)  3 >= 5 return false
- ==  (Comperitive)  - 3 == 5 return false
- !=  (Not Equal to) - 3 != 5 return true

3) Logical

### Use in Condtional Statement.
- OR    || 
- AND   && 
- NOT    !  - !True -> False , !False -> True

### 🔍 Truth Table for Conditional Operators

| A     | B     | A || B (OR) | A && B (AND) | !A (NOT) |
|-------|-------|-------------|---------------|----------|
| true  | true  | true        | true          | false    |
| true  | false | true        | false         | false    |
| false | true  | true        | false         | true     |
| false | false | false       | false         | true     |


## Binary Operators
- It works on Two Operands.

## Unary Operators
- It works on Single Operands.
**Use** - For incremental 

- Increment ++
1) preincrement - increment than use (++i)
2) postincrement - use and then update(increment),i++


- Decrement --
1) predecrement - decrement than use (--i)
2) postdecrement - use and then update( decrement ),i--

