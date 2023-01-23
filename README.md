# FSM-Final-Project
A C program of a gumball vending machine that is simulated using the concept of Finite State Machine.

## About the vending machine
A vending machine that accepts cents in which it will dispense a gumball once 0.4 cents is desposited.

There is 4 states:
- 0.0 cent (00)
- 0.1 cent (01)
- 0.2 cents (10)
- 0.3 cents (11)

There is 2 inputs:
- 0 (no coin inserted)
- 1 (0.1 cent inserted)

## State Diagram
![fsm-diagram](https://user-images.githubusercontent.com/114371692/213273999-990d3e32-01a0-4b14-bc4e-cb22097635d4.jpeg)

## State and Transition Table
![states](https://user-images.githubusercontent.com/114371692/214013552-ac21f521-cde2-4a72-8b5e-93daa1d6e7dd.jpg)

## K-Map
![kmap](https://user-images.githubusercontent.com/114371692/214013578-8376ada8-10c5-46c8-93a5-13869beae0e7.jpg)

## Visualization
### How to run
In you terminal you should type
```
make all
```

### Output
After you first run:
```
Insert Coin
     ____________
    |            |
    |oooooooooooo|
    |oooooooooooo|
    |oooooooooooo|
       |______|
         |__|
Enter coin input (0 for not inserting coin // 1 for inserting coin):
```
After you inout 4 coins:
```
     ____________
    |            |
    |oooooooooooo|
    |oooooooooooo|
    |oooooooooooo|
       |______|
         |__|
         (__)
       //    \\   
           o
 Gumball Dispensed!
Enter coin input (0 for not inserting coin // 1 for inserting coin):
```


