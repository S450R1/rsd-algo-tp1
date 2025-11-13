# Introduction

![USTHB logo](static/usthb.jpg)

This repository was done as part of the practical activities we are doing in Distributed Algorithms and Complexity for speciality of Distributed Networks. Faculty of Computer Science, University of Sciences and Technology of Houari Boumedienne under the supervision of Dr. Imane Messaoudi.


This was done by:

- Ilyes Medjedoub (S450R1).

- Rawa Tesnim El Jenna Beddiar

- Bouzouad Rayane Fouzi.

- Okba Moulahoum.

You can find the instructions given by our teacher in `static/instructions.pdf`. The main subject is `Primality test`. The goal from this practical activity is to test different methods for the same problem taking execution time in consideration.

We are testing if an integer number is prime. 04 algorithms were proposed and should be implemented in `C` language.

# Remember

An integer `n` is prime if it have only two divisers, the number itself `n` and `1`.

# First Algorithm (A1): Naive Approach

1 - In this solution, we implemented a loop that will test if the integer `n` can be divised by `2`, `3`, `...`, `n-1`.

```c
p = 1; 
for (i = 2; i < N; i++) {
    if (N % i == 0) {
        p = 0;
        break;
    }
}
```

2 - The theorical complexity in worst case for this algorithm is O(N) and this happen when `N` is prime.

3 - We have written this program in `A1.c`. Let's test it together.

a - We need to test this array of integers `test_numbers`.

```c
int test_numbers[] = {
    1000003,
    2000003,
    4000037,
    8000009,
    16000057,
    32000011,
    64000031,
    128000003,
    256000001,
    512000009,
    1024000009,
    2048000011
};
```

If the code works it will state that all these integers are prime.

b - Let's mesure the time of execution for every number. To do this we used the `clock()` function from `<time.h>`. See code at `A1.c`. 

Let's compile our program using this shell command:

```sh
gcc -o A1 A1.c
```

Then we can do the test using this shell script that can be found in `tests/a.A1.test.sh`. Make sure to make it executable using this command:

```sh
chmod +x tests/a.A1.test.sh
```

Then run it using:

```sh
tests/a.A1.test.sh
```

We got this output:

![USTHB logo](static/a.A1.test.png)

c - From the above test, we notice that the time of execution gets bigger in the same time that the integer `N`gets bigger.

d - After these results and the above thing we noticed. Yes, the theorical predictions we made `O(N)` are compatible with the experimental mesures.

# First Algorithm (A2): 




