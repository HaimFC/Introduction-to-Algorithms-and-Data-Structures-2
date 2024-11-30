# Introduction to Algorithms and Data Structures - Home Assignment #2

This repository contains solutions for three problems in Home Assignment #2. The problems involve solving real-world scenarios using algorithms and data structures. The solutions are implemented in C.

## Files in the Repository

- **`solution.cpp`**: The main implementation file containing solutions for:
  - Problem 1: Iceland Trip
  - Problem 2: Transplant List
  - Problem 3: Farthest Enemy
- **`ha2.pdf`**: Assignment description with problem statements and requirements.

## Problem Descriptions and Solutions

### Problem 1: Iceland Trip

#### Description:
Vik the puffin is planning a long trip on Iceland's circle road. He must calculate the minimum cost to refuel his car to complete the journey. If the trip is impossible due to insufficient fuel or missing gas stations, the output should be `-1`.

#### Input:
- First line: Four integers `N F T L`:
  - `N`: Number of gas stations.
  - `F`: Maximum fuel capacity of the car.
  - `T`: Initial fuel in the tank.
  - `L`: Total distance of the trip.
- Next `N` lines: Two integers `D_i C_i`:
  - `D_i`: Distance of the gas station from the starting point.
  - `C_i`: Cost per fuel unit.

#### Output:
- Minimum cost of the trip or `-1` if the trip is impossible.

---

### Problem 2: Transplant List

#### Description:
A dynamic priority queue manages patients awaiting organ transplants. The queue prioritizes patients based on their urgency score. Tasks include adding, updating, and removing patients, as well as printing the `K`th patient's ID in the queue.

#### Input:
- First line: Three integers `N K M`:
  - `N`: Maximum number of patients in the queue.
  - `K`: Index of the patient to be printed.
  - `M`: Number of tasks.
- Next `M` lines:
  - Task `1 ID AGE TTP`: Adds a patient with the given ID, age, and TTP (Time to Perish).
  - Task `2 ID AGE TTP`: Updates the details of an existing patient.
  - Task `3 ID`: Removes a patient with the given ID.
  - Task `4`: Removes the first patient in the queue.
  - Task `5`: Prints the `K`th patient's ID and exits.

#### Output:
- The ID of the `K`th patient or `0` if the queue size is less than `K`.

---

### Problem 3: Farthest Enemy

#### Description:
The king must be placed on the battlefield at the location farthest from all enemies. The battlefield is represented as an `N x M` grid where cells can either be occupied by enemies (`1`) or friendly forces (`0`).

#### Input:
- First line: Two integers `N M`:
  - `N`: Number of rows.
  - `M`: Number of columns.
- Next `N` lines: Each line contains `M` integers (`0` or `1`).

#### Output:
- The maximum distance from a friendly cell (`0`) to the nearest enemy (`1`) or `-1` if there are no enemies or all cells are enemies.

---

## How to Run

### Compile:
Use a C compiler like `gcc` or a C++ compiler like `g++`:
```bash
gcc -o assignment_solution solution.cpp
```
### Run:
For Linux:
```
./assignment_solution
```
###Inputs:
Input 1 to solve Problem 1: Iceland Trip.
Input 2 to solve Problem 2: Transplant List.
Input 3 to solve Problem 3: Farthest Enemy.
Provide additional inputs based on the selected problem.

