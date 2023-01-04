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
![IMG_0382](https://user-images.githubusercontent.com/114371692/210590626-8df03dcc-9f2a-4083-8af2-9a6dfc9ced95.jpg)

## State and Transition Table
![IMG_0383](https://user-images.githubusercontent.com/114371692/210590735-3d2566b7-324a-4852-8ae6-28274cadc218.jpg)

## K-Map
![IMG_0381](https://user-images.githubusercontent.com/114371692/210590802-1697a5f4-e20e-464a-bf40-7bb55a7b560d.jpg)

## Visualization
### How to run
In you terminal you should type
```
make all
```
### Output
```
Welcome to the gumball vending machine!
To dispense a gumball, deposit 0.4 cents.
Current state: 00
Enter 1 to insert a coin or 0 to cancel: 1
Current state: 01
Enter 1 to insert a coin or 0 to cancel: 1
Current state: 10
Enter 1 to insert a coin or 0 to cancel: 1
Current state: 11
Enter 1 to insert a coin or 0 to cancel: 1
Gumball dispensed!
Current state: 00
Enter 1 to insert a coin or 0 to cancel: 
```
