[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/4zGAL1ud)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=18898905)
Exam 3 - Coding Portion
---

# Question 1
In this problem, you will develop a new function in our provided `LinkedList` class. Please observe the already existing structures found in `GetStats.hpp`.

Create a new function named `getStats`. This function should take in no parameters and return an `int*`.

This function should:

1. Allocate an array on the heap.
2. Calculate the minimum of all nodes, maximum of all nodes, and the mean of all nodes. These numbers should be stored as integers. If the mean is a decimal value, round it down to the lower integer.
3. Return the pointer to the first element in the return array. The return array should be structured as `[min, max, mean]`.

If head is nullptr, then your return array should have all three elements set to zero.

### Minimum (Min):

The minimum value in a dataset is the smallest value.

For example, in the set of values 3, 5, and 7, the minimum value is 3.

### Maximum (Max):
The maximum value in a dataset is the largest value.

For example, in the set of values 3, 5, and 7, the maximum value is 7.

### Mean (Average):
The mean, or average, is calculated by summing all the values in a dataset and then dividing by the number of values.

For example, if you have the values 3, 5, and 7, the mean would be (3 + 5 + 7) / 3 = 15 / 3 = 5.

# Question 2
In this problem, you will develop a new function in our provided `LinkedList` class. Please observe the already existing structures found in `LinkedList.hpp`.

Create a new function named `reverseList`. This function should take in no parameters and return a `LinkedList` object.

This function should create a `LinkedList` that contains the same elements as the original but in reverse order.

Make sure to account for edge cases, such as when the list is empty or when it has only one element.

# Question 3
For this problem, you will implement two functions `consultMax` and `returnMaxMap`.

The `consultMax` function requires a `std::string` and a `std::map` with keys of type `std::string` and values `std::vector` of floats **both passed in by const reference**, and returns the maximum value within the vector associated with the provided string.  If the key is not found, you may return `-1`.

The `returnMaxMap` function accepts a `std::map` with keys of type `std::string` and value `std::vector` of floats. The function will return a new `std::map` with keys of type `std::string` and values of type `float`. The returned map has the same string keys, and its associated value is a float that corresponds to the the maximum value found within the corresponding vector.

# Question 4

For this problem, you will implement two functions: `loadTrafficData` and `updateTrafficData`.

Create a function called `loadTrafficData()` that has one parameter of type `std::string` for the filename.
The `loadTrafficData()` function will read a `.csv` file (example below), putting the airport codes and their associated annual passenger numbers into a `std::map` with key of `std::string airport_code` and value `int number_of_passengers`. The `loadTrafficData()` function will return the map that was created.

Create a Function named `updateTrafficData()` that has two parameters: a const `std::string filename` and a const reference to a `std::map` of key `std::string` and value `int`.
The `updateTrafficData()` function will read the file and update the `std::map` that was passed in by updating the passenger number if the airport code is already in the map or add the new airport code with its passenger number, according to the CSV file.

.csv’s example:
```
JFK,34000000
LAX,28000000
ORD,38000000
```
If the file does not open the program should print "-1".
