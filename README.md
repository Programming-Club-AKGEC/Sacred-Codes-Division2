# Sacred-Codes-Division2
Consists of editorials to problems of Sacred Codes Division 2 organised by Programming Club, AKGEC .    (DATE: 28-09-2019))

## Gaitonde_Find_Ways
[Problem Link](https://www.codechef.com/SCD22019/problems/SCD202)

The question is similar to finding the number of diagonals of a n-sided polygon. Possible solutions are:

  - Using a predefined formula  **n(n-3) / 2**  where n is the side of polygon.
  - n sided polygon has n vertices. A diagonal joins 2 vertices, which can be done in *nC2* ways. However this count also includes n sides, so   subtract n to get the number of diagonals.
 
  ```
    nC2 - n = n(n-1)/2 - 2n/2 = n(n-3)/2   
  ```
Note that when **n** is less than 4, there is no possible way to join 2 non-adjacent vertices, therefore the output should be **0**
