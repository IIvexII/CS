# Challenges

### 1. Program to print half pyramid using *

**Output**

Input -> 5
```
Enter number of rows: 5
*
* *
* * *
* * * *
* * * * *
```

[Source Code](https://github.com/IIvexII/CS/blob/main/PF-CSC313/Loops/c1.cpp)

### 2. Print half pyramid using numbers

**Output**

Input -> 7
```
Enter number of rows: 7
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 
1 2 3 4 5 6 7 
```

[Source Code](https://github.com/IIvexII/CS/blob/main/PF-CSC313/Loops/c2.cpp)

### 3. Print half pyramid using alphabets

**Output**

Input -> D
```
Enter the last alphabet: D
A 
A B 
A B C 
A B C D 
```

[Source Code](https://github.com/IIvexII/CS/blob/main/PF-CSC313/Loops/c3.cpp)

### 4. Program to print full pyramid using *

**Output**

Input -> 5
```
Enter rows: 5
    *    
   * *   
  * * *  
 * * * * 
* * * * *
```

**Calculation**

|0   |1  |2  |3  |4  |5  |6  |7  |8  |9  
|----|---|---|---|---|---|---|---|---|---|
|1   |   |   |   |   |*  |   |   |   |   |
|2   |   |   |   |*  |   |*  |   |   |   |
|3   |   |   |*  |   |*  |   |*  |   |   |
|4   |   |*  |   |*  |   |*  |   |*  |   |
|5   |*  |   |*  |   |*  |   |*  |   |*  |

|Rows   |Columns    |
|-------|-----------|
| 1     |     5     |
| 2     |    456    |
| 3     |   34567   |
| 4     |  2345678  |
| 5     | 123456789 |

|Rows   |Columns                                |
|-------|---------------------------------------|
| 1     |   column == 5 && space                |
| 2     |   column >= 4 && column<=6 && space   |
| 3     |   column >= 3 && column<=7 && space   |
| 4     |   column >= 2 && column<=8 && space   |
| 5     |   column >= 1 && column<=9 && space   |

**Final Condition**: column >= 6-rows && column <= 4+rows && space

**General Condition for Dynamic program**: column >= (input+1)-rows && column <= (input-1)+rows && space
                                        for second "for" condition: columns<=input*2-1 
[Source Code](https://github.com/IIvexII/CS/blob/main/PF-CSC313/Loops/c4.cpp)

### 5. Inverted full pyramid using *

**Output**

Input -> 5
```
Enter rows: 5
* * * * *
 * * * * 
  * * *  
   * *   
    * 
```

[Source Code](https://github.com/IIvexII/CS/blob/main/PF-CSC313/Loops/c5.cpp)

