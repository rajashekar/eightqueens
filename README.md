# Eight Queens Problem
This project contains 2 files - validate_8queens.c which will validate the 8 queen inputs in Algebraic notation are satisifying the eight queens rule (not killing each other) & generate_all_possibilities.c which will generate all 92 possibilities of arranging 8 queens in chess board in Algebraic notation.

## Installation steps
Clone this repository
```
cd eightqueens
cc validate_8queens.c -o validate_8queens
```

## Demo
Positive case 
```
./validate_8queens 
 ENTER THE CO-ORIDINATES IN ALGEBRAIC NOTATION. Example: a1
 ENTER 1 QUEEN COORDINATE a8

 ENTER 2 QUEEN COORDINATE b4

 ENTER 3 QUEEN COORDINATE c1

 ENTER 4 QUEEN COORDINATE d3

 ENTER 5 QUEEN COORDINATE e6

 ENTER 6 QUEEN COORDINATE f2

 ENTER 7 QUEEN COORDINATE g7

 ENTER 8 QUEEN COORDINATE h5

 CONGRATS U HAD MADE IT
 ```
Negative case
 ```
 ./validate_8queens 
 ENTER THE CO-ORIDINATES IN ALGEBRAIC NOTATION. Example: a1
 ENTER 1 QUEEN COORDINATE a7

 ENTER 2 QUEEN COORDINATE b3

 ENTER 3 QUEEN COORDINATE c2

 ENTER 4 QUEEN COORDINATE d3

 ENTER 5 QUEEN COORDINATE e6

 ENTER 6 QUEEN COORDINATE f1

 ENTER 7 QUEEN COORDINATE g6

 ENTER 8 QUEEN COORDINATE h2

 SORRY! MORE THAN ONE QUEEN IN ONE COLUMN
 SORRY! MORE THAN ONE QUEEN IN ONE LEFT 2 MIDDLE DIAGONAL
 SORRY! MORE THAN ONE QUEEN IN ONE RIGHT 2 MIDDLE DIAGONAL
 SORRY! MORE THAN ONE QUEEN IN ONE MIDDLE 2 RIGHT DIAGONAL
 ```

## Input Validation 
```
 ENTER THE CO-ORIDINATES IN ALGEBRAIC NOTATION. Example: a1
 ENTER 1 QUEEN COORDINATE a9

 please check the coordinates u have entered
 it should be in Algebraic notation
 ENTER 1 QUEEN COORDINATE l1
 ```

## Generating all possibilities
 ```
 cc generate_all_possibilities.c -o generate_all_possibilities
 
 ./generate_all_possibilities
 Displaying all possibilities in Algebraic notation
  WAY 1 :   a1  b5  c8  d6  e3  f7  g2  h4
  WAY 2 :   a1  b6  c8  d3  e7  f4  g2  h5
  WAY 3 :   a1  b7  c4  d6  e8  f2  g5  h3
  WAY 4 :   a1  b7  c5  d8  e2  f4  g6  h3
  WAY 5 :   a2  b4  c6  d8  e3  f1  g7  h5
  WAY 6 :   a2  b5  c7  d1  e3  f8  g6  h4
  WAY 7 :   a2  b5  c7  d4  e1  f8  g6  h3
  WAY 8 :   a2  b6  c1  d7  e4  f8  g3  h5
  WAY 9 :   a2  b6  c8  d3  e1  f4  g7  h5
  WAY 10 :   a2  b7  c3  d6  e8  f5  g1  h4
  WAY 11 :   a2  b7  c5  d8  e1  f4  g6  h3
  WAY 12 :   a2  b8  c6  d1  e3  f5  g7  h4
  WAY 13 :   a3  b1  c7  d5  e8  f2  g4  h6
  WAY 14 :   a3  b5  c2  d8  e1  f7  g4  h6
  WAY 15 :   a3  b5  c2  d8  e6  f4  g7  h1
  WAY 16 :   a3  b5  c7  d1  e4  f2  g8  h6
  WAY 17 :   a3  b5  c8  d4  e1  f7  g2  h6
  WAY 18 :   a3  b6  c2  d5  e8  f1  g7  h4
  WAY 19 :   a3  b6  c2  d7  e1  f4  g8  h5
  WAY 20 :   a3  b6  c2  d7  e5  f1  g8  h4
  WAY 21 :   a3  b6  c4  d1  e8  f5  g7  h2
  WAY 22 :   a3  b6  c4  d2  e8  f5  g7  h1
  WAY 23 :   a3  b6  c8  d1  e4  f7  g5  h2
  WAY 24 :   a3  b6  c8  d1  e5  f7  g2  h4
  WAY 25 :   a3  b6  c8  d2  e4  f1  g7  h5
  WAY 26 :   a3  b7  c2  d8  e5  f1  g4  h6
  WAY 27 :   a3  b7  c2  d8  e6  f4  g1  h5
  WAY 28 :   a3  b8  c4  d7  e1  f6  g2  h5
  WAY 29 :   a4  b1  c5  d8  e2  f7  g3  h6
  WAY 30 :   a4  b1  c5  d8  e6  f3  g7  h2
  WAY 31 :   a4  b2  c5  d8  e6  f1  g3  h7
  WAY 32 :   a4  b2  c7  d3  e6  f8  g1  h5
  WAY 33 :   a4  b2  c7  d3  e6  f8  g5  h1
  WAY 34 :   a4  b2  c7  d5  e1  f8  g6  h3
  WAY 35 :   a4  b2  c8  d5  e7  f1  g3  h6
  WAY 36 :   a4  b2  c8  d6  e1  f3  g5  h7
  WAY 37 :   a4  b6  c1  d5  e2  f8  g3  h7
  WAY 38 :   a4  b6  c8  d2  e7  f1  g3  h5
  WAY 39 :   a4  b6  c8  d3  e1  f7  g5  h2
  WAY 40 :   a4  b7  c1  d8  e5  f2  g6  h3
  WAY 41 :   a4  b7  c3  d8  e2  f5  g1  h6
  WAY 42 :   a4  b7  c5  d2  e6  f1  g3  h8
  WAY 43 :   a4  b7  c5  d3  e1  f6  g8  h2
  WAY 44 :   a4  b8  c1  d3  e6  f2  g7  h5
  WAY 45 :   a4  b8  c1  d5  e7  f2  g6  h3
  WAY 46 :   a4  b8  c5  d3  e1  f7  g2  h6
  WAY 47 :   a5  b1  c4  d6  e8  f2  g7  h3
  WAY 48 :   a5  b1  c8  d4  e2  f7  g3  h6
  WAY 49 :   a5  b1  c8  d6  e3  f7  g2  h4
  WAY 50 :   a5  b2  c4  d6  e8  f3  g1  h7
  WAY 51 :   a5  b2  c4  d7  e3  f8  g6  h1
  WAY 52 :   a5  b2  c6  d1  e7  f4  g8  h3
  WAY 53 :   a5  b2  c8  d1  e4  f7  g3  h6
  WAY 54 :   a5  b3  c1  d6  e8  f2  g4  h7
  WAY 55 :   a5  b3  c1  d7  e2  f8  g6  h4
  WAY 56 :   a5  b3  c8  d4  e7  f1  g6  h2
  WAY 57 :   a5  b7  c1  d3  e8  f6  g4  h2
  WAY 58 :   a5  b7  c1  d4  e2  f8  g6  h3
  WAY 59 :   a5  b7  c2  d4  e8  f1  g3  h6
  WAY 60 :   a5  b7  c2  d6  e3  f1  g4  h8
  WAY 61 :   a5  b7  c2  d6  e3  f1  g8  h4
  WAY 62 :   a5  b7  c4  d1  e3  f8  g6  h2
  WAY 63 :   a5  b8  c4  d1  e3  f6  g2  h7
  WAY 64 :   a5  b8  c4  d1  e7  f2  g6  h3
  WAY 65 :   a6  b1  c5  d2  e8  f3  g7  h4
  WAY 66 :   a6  b2  c7  d1  e3  f5  g8  h4
  WAY 67 :   a6  b2  c7  d1  e4  f8  g5  h3
  WAY 68 :   a6  b3  c1  d7  e5  f8  g2  h4
  WAY 69 :   a6  b3  c1  d8  e4  f2  g7  h5
  WAY 70 :   a6  b3  c1  d8  e5  f2  g4  h7
  WAY 71 :   a6  b3  c5  d7  e1  f4  g2  h8
  WAY 72 :   a6  b3  c5  d8  e1  f4  g2  h7
  WAY 73 :   a6  b3  c7  d2  e4  f8  g1  h5
  WAY 74 :   a6  b3  c7  d2  e8  f5  g1  h4
  WAY 75 :   a6  b3  c7  d4  e1  f8  g2  h5
  WAY 76 :   a6  b4  c1  d5  e8  f2  g7  h3
  WAY 77 :   a6  b4  c2  d8  e5  f7  g1  h3
  WAY 78 :   a6  b4  c7  d1  e3  f5  g2  h8
  WAY 79 :   a6  b4  c7  d1  e8  f2  g5  h3
  WAY 80 :   a6  b8  c2  d4  e1  f7  g5  h3
  WAY 81 :   a7  b1  c3  d8  e6  f4  g2  h5
  WAY 82 :   a7  b2  c4  d1  e8  f5  g3  h6
  WAY 83 :   a7  b2  c6  d3  e1  f4  g8  h5
  WAY 84 :   a7  b3  c1  d6  e8  f5  g2  h4
  WAY 85 :   a7  b3  c8  d2  e5  f1  g6  h4
  WAY 86 :   a7  b4  c2  d5  e8  f1  g3  h6
  WAY 87 :   a7  b4  c2  d8  e6  f1  g3  h5
  WAY 88 :   a7  b5  c3  d1  e6  f8  g2  h4
  WAY 89 :   a8  b2  c4  d1  e7  f5  g3  h6
  WAY 90 :   a8  b2  c5  d3  e1  f7  g4  h6
  WAY 91 :   a8  b3  c1  d6  e2  f5  g7  h4
  WAY 92 :   a8  b4  c1  d3  e6  f2  g7  h5
  ``` 