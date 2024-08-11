# Bit N Bytes Round 1 Questions and Solutions

## Q1)Bit N Bytes Rating
ISTE HIT SC regularly holds programming contests called BNB. After each contest, according to performance the rating increases.

The next contest on ISTE HIT SC is called BNB-Beginner, which is rated for contestants with ratings less than 1200.

The contest after the BNB-Beginner is called BNB-Intermediate, which is rated for contestants with ratings less than 2800.

The contest after the BNB-Intermediate is called BNB-All, which is rated for all contestants.

Nitesh's rating on is R. What is the next contest rated for him?

### C

```c
#include <stdio.h>

int main() {
    int R;
    scanf("%d", &R);
    
    if (R < 1200) {
        printf("BNB-Beginner\n");
    } else if (R < 2800) {
        printf("BNB-Intermediate\n");
    } else {
        printf("BNB-All\n");
    }
    
    return 0;
}
```

### JAVA

```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as =new Scanner(System.in);
        int R = as.nextInt();
        if(R<1200)
            System.out.println("BNB-Beginner");
        else if(R<2800)
            System.out.println("BNB-Intermediate");
        else
            System.out.println("BNB-All");
    }
}
```
### Python
```python
R = int(input())

if R < 1200:
    print("BNB-Beginner")
elif R < 2800:
    print("BNB-Intermediate")
else:
    print("BNB-All")
```
## Q2)Tech Harmony Quest
At Haldia Institute of Technology, the annual tech fest "Prayukti" features a challenge known as the "Tech Harmony Quest." This year, students need to help solve a problem related to the festival's timing system. The festival's schedule must align with both the university's standard interval of 2 hours and a specific custom interval N.

Your task is to determine the smallest positive integer that is a common multiple of both 2 and N, ensuring that the festival's schedule fits perfectly with both intervals.

APPROACH: Simple Observation if not multiple of 2 then multiply it by 2 else answer will be 2.


### C

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("%d\n", n);
    } else {
        printf("%d\n", n * 2);
    }
    
    return 0;
}

```

### JAVA

```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        int n = as.nextInt();
        System.out.println((n%2==0)? n : (2*n));
    }
}

```
### C++
```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n << endl;
    } else {
        cout << n * 2 << endl;
    }
    return 0;
}

```
### Python
```python
n = int(input())

if n % 2 == 0:
    print(n)
else:
    print(n * 2)

```

## Q3)Aisha's Magic
Under the soft glow of the evening lights, Aisha and her brother sat on the porch, enjoying the cool breeze. With a smile, Aisha turned to him and said, "I've got a fun challenge for you. If you can find out if this number(N) is magical, I'll tell you something I've never shared with anyone and give you a KitKat chocolate."

A magical number is a three-digit number where the sum of the cubes of its digits equals the number itself. Being Aisha's Brother can you write a program to check if a number is magical and discover Aisha's secret as well as get a KitKat chocolate?

APPROACH: Simple Observation as per the question if the sum of the cubes of its digits equals to the number then magical else not. Rest effort goes for the implementation part.


### C

```c
#include <stdio.h>
#include <math.h>

const char* is_magical(int n) {
    if (n < 0) return "No";
    int curr_num = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if (sum == curr_num) {
        return "Yes";
    }
    return "No";
}

int main() { 
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%s\n", is_magical(n));
    }
    return 0;
}

```

### JAVA

```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        int t= as.nextInt();
        for(int i =1; i<=t;i++){
            long n =as.nextLong();
            long ncopy=n, sum=0;
            while(ncopy!=0){
                long k = ncopy%10;
                sum+=k*k*k;
                ncopy/=10;
            }
            System.out.println((sum==n)? "Yes": "No");
        }
    }
}

```
### C++
```C++
#include <iostream>
#include <cmath>
using namespace std;

string is_magical(int n) {
    if (n < 0) return "No";
    int curr_num = n;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, 3);
        n /= 10;
    }
    if (sum == curr_num) {
        return "Yes";
    }
    return "No";
}

int main() { 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << is_magical(n) << endl;
    }
    return 0;
}


```
### Python
```python
def is_magical(n):
    if n < 0:
        return "No"
    curr_num = n
    sum = 0
    while n > 0:
        digit = n % 10
        sum += digit ** 3
        n //= 10
    if sum == curr_num:
        return "Yes"
    return "No"

t = int(input())
for _ in range(t):
    n = int(input())
    print(is_magical(n))

```
## Q4)Contest at HIT
You are given a string S of length 7. It is guaranteed that the first four characters of S are ISTE and the last three characters are digits. Determine if S is the abbreviation of a contest held and concluded on HIT before the start of this contest. Here, a string T is "the abbreviation of a contest held and concluded on HIT before the start of this contest" if and only if it equals one of the following 348 strings:

ISTE001, ISTE002, ……, ISTE314, ISTE315, ISTE317, ISTE318, ……, ISTE348, ISTE349.
Note that ISTE316 is not included.

Approach: In question if we seperate the string and digits and then compare then the solution will be easy, make sure to treat the ISTE316 as an exception.


### C

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[50];
    scanf("%s", s);
    char first_half[5];
    strncpy(first_half, s, 4);
    first_half[4] = '\0';
    char digit_half[50];
    strcpy(digit_half, s + 4);
    int last_digit = atoi(digit_half);

    if (strcmp(first_half, "ISTE") == 0 && 1 <= last_digit && last_digit <= 349 && last_digit != 316) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}

```

### JAVA

```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        String s= as.nextLine();
        int n = Integer.parseInt(s.substring(4)); //Integer.valueOf(s.substring(4));
        System.out.println((n>=1 && n<=349 && n!=316)? "Yes" : "No");
    }
}
```
### C++
```C++
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string first_half = s.substr(0, 4);
    string digit_half = s.substr(4);
    int last_digit = stoi(digit_half);

    if (first_half == "ISTE" && 1 <= last_digit && last_digit <= 349 && last_digit != 316) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

```
## Python
```python
s = input()
first_half = s[:4]
digit_half = s[4:]
last_digit = int(digit_half)

if first_half == "ISTE" and 1 <= last_digit <= 349 and last_digit != 316:
    print("Yes")
else:
    print("No")

```

## Q5)Payment Split
Three friends, Aayush, Meghadri, and Priyam, are dining at the famous Kattappa Hotel. After enjoying a delicious Fried Maggi, they decided to split the cost in a fun and fair way. They came up with a game where each of them contributes an amount represented by variables 𝑋, 𝑌, and 𝑍, respectively.

Given two integers 𝐾 and 𝑆, where 𝐾 is the maximum amount each friend can contribute (0 ≤ 𝑋,𝑌,𝑍 ≤ 𝐾), and 𝑆 is the total amount they need to pay, determine how many different ways the three friends can assign their contributions so that the sum of their contributions equals 𝑆 i.e (𝑋+𝑌+𝑍=𝑆).

Approach: Thinking O(x*y*z) TC solution is easier as just you have to loop over the ranges of x,y,z and find the ideal value of x,y,z. 

Optimal Approach: O(x*y) TC: Instead of looping seperately for z we can write x+y+z=S to z=S-(x+y) and instead of finding the value of z we just validate the z based on the conditon that 0<=x,y,z<=K and hence we will count it if true into our answer.


### C

```c
#include <stdio.h>

int main() {
    int K, S;
    scanf("%d %d", &K, &S);
    int count = 0;

    for (int x = 0; x <= K; ++x) {
        for (int y = 0; y <= K; ++y) {
            int z = S - (x + y);
            if (0 <= z && z <= K) {
                count++;
            }
        }
    }
    printf("%d ", count);
    return 0;
}

```

### JAVA

```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner(System.in);
        int K = as.nextInt();
        int S = as.nextInt();
        int count=0;
        for(int X=0; X<=K;X++)
            for(int Y=0;Y<=K;Y++){
                int Z=S-X-Y;
                if(Z>=0 && Z<=K )
                    count++;
            }
        System.out.println(count);
        
    }
}

```
### C++
```C++
#include <iostream>
using namespace std;

int main() {
    int S, K;
    cin >> K >> S;
    int count = 0;

    for (int x = 0; x <= K; ++x) {
        for (int y = 0; y <= K; ++y) {
            int z = S - (x + y);
            if (0 <= z && z <= K) {
                count++;
            }
        }
    }
    cout << count << " ";
    return 0;
}

```
### Python
```python
K, S = map(int, input().split())
count = 0

for x in range(K + 1):
    for y in range(K + 1):
        z = S - (x + y)
        if 0 <= z <= K:
            count += 1

print(count, end=" ")

```

## Q6)HITIAN Lovers
In HIT, every pair of lovers appears twice, always together, except for one lonely soul who stands alone. Being a single lonely person, your quest is to find this single, unique individual to make your better half and plan a secret river side trip.

To complete this task, you must devise a plan that searches the HIT College efficiently, ensuring you visit each pair and the lonely soul only once. You can implement a solution with a linear runtime complexity and use only constant extra space (Bonus Points).

Approach: Then concept of this whole question lies on the fact that doing the exor between same number cancels each other like 2^2=0 beacause 10 ^ 10 = 00 where 10 is the binnary of 2. so all the number that comes 2 times will cancels each other like 2^3^2 will give 3 which is our single unique indivisual.


### C

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans ^= arr[i];
    }
    printf("%d ", ans);
    return 0;
}

```
### Java
```java
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner as = new Scanner (System.in);
        int n = as.nextInt();
        int array[] = new int[n];
        int partner=0;
        for(int i=0;i<n;i++){
            array[i]=as.nextInt();
            partner^=array[i];
        }
        System.out.println(partner);
        
    }
}

```
### C++
```C++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int ans = 0;
    for (int num : arr) {
        ans ^= num;
    }

    cout << ans << " ";
    return 0;
}

```
### Python
```python
n = int(input())
arr = []
for _ in range(n):
    x = int(input())
    arr.append(x)

ans = 0
for num in arr:
    ans ^= num

print(ans, end=" ")

```

# Bit N Byte 2.0 round 2 solutions
# Code Explanation

## Blessing in Disguise

## Python

``` Python
def BubblyMaths(N):
    if N == 1:
        return 1
    if N == 2:
        return 2
    if N == 3:
        return 6
    if N == 4:
        return 7
    if N % 4 == 1:
        return N + 2
    if N % 4 == 2:
        return N + 2
    if N % 4 == 3:
        return N - 1
    return N + 1

if __name__ == "__main__":
    n = int(input().strip())
    result = BubblyMaths(n)
    print(result)
```

## Cpp

```Cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'BubblyMaths' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int BubblyMaths(int N) {
    // Write your code here below
    if (N == 1) return 1;
    if (N == 2) return 2;
    if (N == 3) return 6;
    if (N == 4) return 7;
    if (N % 4 == 1) return N + 2;
    if (N % 4 == 2) return N + 2;
    if (N % 4 == 3) return N - 1;
    return N + 1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int result = BubblyMaths(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
```

## C

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int BubblyMaths(int N) {
    if (N == 1) return 1;
    if (N == 2) return 2;
    if (N == 3) return 6;
    if (N == 4) return 7;
    if (N % 4 == 1) return N + 2;
    if (N % 4 == 2) return N + 2;
    if (N % 4 == 3) return N - 1;
    return N + 1;
}

char *ltrim(char *str) {
    while(isspace((unsigned char)*str)) str++;
    return str;
}

char *rtrim(char *str) {
    char *end = str + strlen(str) - 1;
    while(end > str && isspace((unsigned char)*end)) end--;
    *(end + 1) = '\0';
    return str;
}

int main() {
    char n_temp[16];
    fgets(n_temp, 16, stdin);

    int n = atoi(rtrim(ltrim(n_temp)));

    int result = BubblyMaths(n);

    printf("%d\n", result);
    return 0;
}
```


 ``` java
 import java.util.Scanner;

public class Solution {
    public static int BubblyMaths(int N) {
        if (N == 1) return 1; 
        if (N == 2) return 2;
        if (N == 3) return 6;
        if (N == 4) return 7;
        if (N % 4 == 1) return N + 2;
        if (N % 4 == 2) return N + 2;
        if (N % 4 == 3) return N - 1;
        return N + 1;
 ```

 ##Base Case :

1. if`(N == 1)` return 1;
If N is 1, the method immediately returns 1.

2. if `(N == 2)` return 2;
If N is 2, the method returns 2. :(2*1=2)

3. if `(N == 3)` return 6;
If N is 3, the method returns 6. :(3*2/1=6)

4. if `(N == 4)` return 7;
If N is 4, the method returns 7.

 ##Case Based on `(N % 4)`

1. if `(N % 4 == 1)`, return `(N + 2)`; If N % 4 (remainder when N is divided by 4) equals 1, the method returns N + 2.

2. if `(N % 4 == 2)` return N + 2;
If N % 4 == 2, the method returns N + 2.
3. if `(N % 4 == 3)` return N - 1;
If N % 4 == 3, the method returns N - 1.
return N + 1; (suppose No=)

Finally, if none of the previous conditions are met (which means `N % 4 == 0`), the method returns `N + 1`.

``` java public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine().trim());

        int result = BubblyMaths(n);
        System.out.println(result);
```

User Input:

* Scanner sc = new Scanner(System.in);
This line creates a Scanner object sc that reads input from the console.

* int n = Integer.parseInt(sc.nextLine().trim());
The program reads a line of input, trims any leading or trailing spaces, and converts the input string into an integer n.

Processing:

* int result = BubblyMaths(n);
The program calls the BubblyMaths method with the input n and stores the returned value in result.

Output:

* System.out.println(result);
Finally, the program prints the result to the console.

## Find Minimum in Rotated Sorted Array

## python

```Python
n = int(input())
nums = [int(x) for x in input().split()]

min_val = float('inf')
for x in nums:
    if x < min_val:
        min_val = x

print(min_val)
```

## Cpp

```Cpp
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    
    cout << min << endl;
    return 0;
}
```

## c

```C
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    
    printf("%d\n", min);
    return 0;
}
```

## java

```java
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int nums[] = new int[n];
        for(int i=0; i<n; i++) {
            nums[i] = sc.nextInt();
        }
        int min = Integer.MAX_VALUE;
        for(int x : nums) {
            min = Math.min(min,x);
        }
        System.out.println(min);
    }
}
```

 ``` java
 import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
 ```

  These import statements include various Java libraries:

* java.io.*: Provides classes for input and output operations.

* java.util.*: Includes utility classes such as Scanner for input, ArrayList, HashMap, etc.
* java.text.*: Provides classes for handling text, dates, numbers, and messages.
  
* java.math.*: Includes classes for performing arbitrary-precision arithmetic.
java.util.regex.*: Provides classes for regular expression pattern matching.

## Input

``` java
 Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
```

* Scanner sc = new Scanner(System.in);: This line creates a Scanner object named sc that reads input from the standard input (usually the keyboard).
  
* int n = sc.nextInt();: The program reads the next integer input from the user and stores it in the variable n. This n represents the number of integers that the user will enter next.
  
## Sorting Input value

```java
 int nums[] = new int[n];
        for(int i=0; i<n; i++) {
            nums[i] = sc.nextInt();
```

* int nums[] = new int[n];: An array named nums is created to hold n integers. The size of the array is determined by the value of n.

* for(int i=0; i<n; i++) { nums[i] = sc.nextInt(); }: This loop iterates n times, reading n integers from the user and storing each one in the nums array at the corresponding index.

``` java
 int min = Integer.MAX_VALUE;
        for(int x : nums) {
            min = Math.min(min,x);
```

* int min = Integer.MAX_VALUE;: The variable min is initialized with the maximum possible integer value (Integer.MAX_VALUE). This ensures that any number in the array will be smaller than min on the first comparison.

* for(int x : nums) { min = Math.min(min, x); }: This is an enhanced for loop (also known as a "for-each" loop) that iterates over each element x in the nums array. The method Math.min(min, x) compares the current value of min with x and assigns the smaller of the two to min. After this loop, min will hold the smallest value in the array.
  
## Computing Output

```java
  System.out.println(min);
```

* System.out.println(min);: Finally, the program prints the minimum value found in the array to the standard output.

## Get Set Bits for Yusuf

## python

```python
n = int(input())
cnt = 0

while n != 0:
    if (n & 1) == 1:
        cnt += 1
    n = n >> 1

print(cnt)
```

## cpp

```cpp
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int cnt=0;
    while(n){
        if((n&1)==1)cnt++;
        n=n>>1;
    }
    cout<<cnt<<endl;
    return 0;
}
```

## c

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;

    while (n != 0) {
        if ((n & 1) == 1) cnt++;
        n = n >> 1;
    }

    printf("%d\n", cnt);
    return 0;
}
```

## java

``` java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int cnt = 0;

        while (n != 0) {
            if ((n & 1) == 1) cnt++;
            n = n >> 1;
        }

        System.out.println(cnt);
    }
}
```

## Initializing the counter

``` java
int cnt = 0;
```

* int cnt = 0;: A counter variable cnt is initialized to 0. This variable will keep track of the number of 1 bits found in the binary representation of n.

## Counting the '1' bits

 ``` java
   while (n != 0) {
            if ((n & 1) == 1) cnt++;
            n = n >> 1;
```

Let's break this down step by step:

* while (n != 0) { ... }: This loop continues to run as long as n is not equal to 0. The loop will terminate when n becomes 0.

* if ((n & 1) == 1) cnt++;:

* n & 1: This expression performs a bitwise AND operation between n and 1. The result is 1 if the least significant bit (LSB) of n is 1, and 0 if the LSB is 0.
  
* if ((n & 1) == 1): This checks if the LSB of n is 1. If it is, it increments the cnt variable by 1. This counts the occurrence of 1 in the binary representation.

* n = n >> 1;: This shifts the bits of n one position to the right.

* Bitwise Right Shift (>>): This operation effectively divides n by 2 and discards the least significant bit. For example, if n was 1011 in binary (which is 11 in decimal), after the shift, n becomes 101 (which is 5 in decimal).

## Outputting the Result

``` java
 System.out.println(cnt);
```

* System.out.println(cnt);: Finally, the program prints the value of cnt, which represents the number of 1 bits in the binary representation of n.

## Sorting Wrestlers Number of Frequency

## python

```python
import heapq
from collections import Counter

class Node:
    def __init__(self, freq, ch):
        self.freq = freq
        self.ch = ch
    
    def __lt__(self, other):
        if self.freq == other.freq:
            return self.ch > other.ch
        return self.freq < other.freq

def sort_by_frequency(s):
    if len(s) == 0:
        return s

    # Frequency map
    freq_map = Counter(s)

    # Priority queue (min-heap)
    pq = []
    for ch, freq in freq_map.items():
        heapq.heappush(pq, Node(freq, ch))
    
    # Construct the resulting string
    result = []
    while pq:
        node = heapq.heappop(pq)
        result.append(node.ch * node.freq)
    
    return ''.join(result)

if __name__ == '__main__':
    s = input().strip()
    result = sort_by_frequency(s)
    print(result)
```

## c++

```c++
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'sortByFrequency' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
class Node{
    public:
    int freq;
    char ch;
    Node(int freq,char ch):freq(freq),ch(ch){
    }
};
map<char,int>mp;
class Compare{
    public:
    bool operator()(Node*a,Node*b){
        if(a->freq==b->freq)return a->ch>b->ch;
        return a->freq<b->freq;
    }
};

string sortByFrequency(string s) {
    // Write your code here
    if(s.length()==0)return s;
       priority_queue<Node*,vector<Node*>,Compare>pq;
         for(auto in:s){
             mp[in]++;
         }
         for(auto in:s){
             pq.push(new Node(mp[in],in));
            
         }
         string ans="";
         while(!pq.empty()){
          ans+=pq.top()->ch;
             pq.pop();
         }
    return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    // StartCode

    // Define the function sortByFrequency which takes a string and returns a string

    // Read the input string s

    string s;
    getline(cin, s);

    // Invoke the sortByFrequency function and print the result

    string result = sortByFrequency(s);

    fout << result << "\n";

    // EndCode

    fout.close();

    return 0;
}
```

## c

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct {
    int freq;
    char ch;
} Node;

typedef struct {
    Node* arr;
    int size;
    int capacity;
} PriorityQueue;

PriorityQueue* create_priority_queue(int capacity) {
    PriorityQueue* pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->arr = (Node*)malloc(capacity * sizeof(Node));
    pq->size = 0;
    pq->capacity = capacity;
    return pq;
}

void swap(Node* a, Node* b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(PriorityQueue* pq, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < pq->size && (pq->arr[left].freq > pq->arr[largest].freq || 
        (pq->arr[left].freq == pq->arr[largest].freq && pq->arr[left].ch < pq->arr[largest].ch))) {
        largest = left;
    }

    if (right < pq->size && (pq->arr[right].freq > pq->arr[largest].freq || 
        (pq->arr[right].freq == pq->arr[largest].freq && pq->arr[right].ch < pq->arr[largest].ch))) {
        largest = right;
    }

    if (largest != i) {
        swap(&pq->arr[i], &pq->arr[largest]);
        heapify(pq, largest);
    }
}

void push(PriorityQueue* pq, int freq, char ch) {
    if (pq->size == pq->capacity) {
        return;
    }
    pq->size++;
    int i = pq->size - 1;
    pq->arr[i].freq = freq;
    pq->arr[i].ch = ch;

    while (i != 0 && (pq->arr[(i - 1) / 2].freq < pq->arr[i].freq || 
        (pq->arr[(i - 1) / 2].freq == pq->arr[i].freq && pq->arr[(i - 1) / 2].ch > pq->arr[i].ch))) {
        swap(&pq->arr[i], &pq->arr[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

Node pop(PriorityQueue* pq) {
    if (pq->size <= 0) {
        Node temp;
        temp.freq = 0;
        temp.ch = '\0';
        return temp;
    }
    if (pq->size == 1) {
        pq->size--;
        return pq->arr[0];
    }

    Node root = pq->arr[0];
    pq->arr[0] = pq->arr[pq->size - 1];
    pq->size--;
    heapify(pq, 0);

    return root;
}

char* sortByFrequency(char* s) {
    int n = strlen(s);
    if (n == 0) return s;

    int freq[256] = {0};
    for (int i = 0; i < n; i++) {
        freq[(unsigned char)s[i]]++;
    }

    PriorityQueue* pq = create_priority_queue(256);

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            push(pq, freq[i], (char)i);
        }
    }

    char* result = (char*)malloc((n + 1) * sizeof(char));
    int idx = 0;

    while (pq->size > 0) {
        Node node = pop(pq);
        for (int i = 0; i < node.freq; i++) {
            result[idx++] = node.ch;
        }
    }

    result[idx] = '\0';
    free(pq->arr);
    free(pq);
    return result;
}

int main() {
    char s[1000];
    scanf("%[^\n]%*c", s);

    char* result = sortByFrequency(s);
    printf("%s\n", result);
    
    free(result);
    return 0;
}
```

## java

```java
import java.io.*;
import java.util.*;

class Node {
    int freq;
    char ch;

    Node(int freq, char ch) {
        this.freq = freq;
        this.ch = ch;
    }
}

class Compare implements Comparator<Node> {
    public int compare(Node a, Node b) {
        if (a.freq == b.freq) {
            return Character.compare(a.ch, b.ch);
        }
        return Integer.compare(b.freq, a.freq);
    }
}

public class Solution {

    public static String sortByFrequency(String s) {
        if (s.length() == 0) return s;

        // Frequency map
        Map<Character, Integer> mp = new HashMap<>();
        for (char c : s.toCharArray()) {
            mp.put(c, mp.getOrDefault(c, 0) + 1);
        }

        // Priority queue to sort characters by frequency and then lexicographically
        PriorityQueue<Node> pq = new PriorityQueue<>(new Compare());
        for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            pq.offer(new Node(entry.getValue(), entry.getKey()));
        }

        // Construct the resulting string
        StringBuilder ans = new StringBuilder();
        while (!pq.isEmpty()) {
            Node node = pq.poll();
            ans.append(String.valueOf(node.ch).repeat(node.freq));
        }

        return ans.toString();
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();
        String result = sortByFrequency(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
```

## Node class

```java
class Node {
    int freq;
    char ch;

    Node(int freq, char ch) {
        this.freq = freq;
        this.ch = ch;
    }
}
```

* Node class: This class is a simple data structure to hold two pieces of information:

* freq: The frequency of a character in the string.

* ch: The character itself.

* Constructor: The Node constructor initializes these two fields.

## Compare class

```java
class Compare implements Comparator<Node> {
    public int compare(Node a, Node b) {
        if (a.freq == b.freq) {
            return Character.compare(a.ch, b.ch);
        }
        return Integer.compare(b.freq, a.freq);
    }
}
```

* `Compare` class: This class implements the `Comparator` interface to define custom sorting behavior for `Node` objects.

* compare(Node a, Node b) method:

* If two Node objects have the same frequency (a.freq == b.freq), the method returns the result of comparing their characters (a.ch and b.ch) lexicographically.

* If their frequencies differ, the method sorts the nodes in descending order of frequency (b.freq vs a.freq).
  
## Sort by frequency method

```java
public class Solution {

    public static String sortByFrequency(String s) {
        if (s.length() == 0) return s;

        // Frequency map
        Map<Character, Integer> mp = new HashMap<>();
        for (char c : s.toCharArray()) {
            mp.put(c, mp.getOrDefault(c, 0) + 1);
        }
```

* sortByFrequency(String s) method:
Base Case: If the input string s is empty, it immediately returns the empty string.

Frequency Map:

* A HashMap named mp is used to count the frequency of each character in the string.

* for (char c : s.toCharArray()) { mp.put(c, mp.getOrDefault(c, 0) + 1); }:

* The string is converted to a character array using toCharArray(), and each character is iterated.
  
* The getOrDefault(c, 0) method returns the current frequency of the character c if it exists in the map; otherwise, it returns 0. The frequency is then incremented by 1 and updated in the map.
  
## prority Queue for Sorting

```java
   PriorityQueue<Node> pq = new PriorityQueue<>(new Compare());
        for (Map.Entry<Character, Integer> entry : mp.entrySet()) {
            pq.offer(new Node(entry.getValue(), entry.getKey()));
        }
```

 priority queue:

* A PriorityQueue named pq is created, which will automatically sort Node objects according to the custom comparator defined in the Compare class.
  
* The characters and their frequencies are added to the priority queue by creating Node objects and inserting them using pq.offer().
  
## Constructing the Resulting String

```java
     StringBuilder ans = new StringBuilder();
        while (!pq.isEmpty()) {
            Node node = pq.poll();
            ans.append(String.valueOf(node.ch).repeat(node.freq));
        }

        return ans.toString();
    }
```

Building the Output:

* A StringBuilder named ans is used to build the resulting string.
* The priority queue is processed until it's empty:

* Node node = pq.poll(); retrieves and removes the Node with the highest priority (highest frequency, and if tied, smallest lexicographical order).

* ans.append(String.valueOf(node.ch).repeat(node.freq)); adds the character to the `StringBuilder` `node.freq` number of times.

* Finally, the StringBuilder is converted to a string using toString() and returned as the output.

## Main Method

```java
   public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();
        String result = sortByFrequency(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
```

Input Handling:

* BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in)); reads the input string s from the user.

Processing and Output:

* The string s is passed to the sortByFrequency method to get the sorted result.

* The result is then written to the output using a BufferedWriter.
  
I/O Stream Management:

* The input and output streams are closed after the operation.

## The Maximum Subarray
## python

```python
import sys

def max_subarray(arr):
    maxi = -sys.maxsize
    maxis = -sys.maxsize
    sum = 0
    
    # Find maximum subarray sum using Kadane's algorithm
    for i in range(len(arr)):
        sum += arr[i]
        maxi = max(sum, maxi)
        if sum < 0:
            sum = 0
    
    if maxi < 0:
        return [maxi, maxi]
    
    sum = 0
    for i in range(len(arr)):
        if arr[i] < 0:
            continue
        sum += arr[i]
        maxis = max(sum, maxis)
    
    return [maxi, maxis]

if __name__ == '__main__':
    t = int(input().strip())
    
    for _ in range(t):
        n = int(input().strip())
        arr = list(map(int, input().strip().split()))
        
        result = max_subarray(arr)
        
        print(" ".join(map(str, result)))
```

## cpp

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maxSubarray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> maxSubarray(vector<int> arr) {
    int maxi=INT_MIN;
    int maxis=INT_MIN;
    int sum=0;
    for(int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        maxi = max(sum, maxi);
        if(sum < 0) sum = 0;
    }
    if(maxi <0) return {maxi,maxi};
    sum=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<0) continue;
        sum+=arr[i];
        maxis=max(sum,maxis);
    }
    
    return {maxi,maxis};
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        vector<int> result = maxSubarray(arr);

        for (size_t i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
```

## c

```c
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void maxSubarray(int arr[], int n, int result[2]) {
    int maxi = INT_MIN;
    int maxis = INT_MIN;
    int sum = 0;
    
    // Find maximum subarray sum using Kadane's algorithm
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }
    
    if (maxi < 0) {
        result[0] = maxi;
        result[1] = maxi;
        return;
    }
    
    sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) continue;
        sum += arr[i];
        if (sum > maxis) {
            maxis = sum;
        }
    }
    
    result[0] = maxi;
    result[1] = maxis;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        scanf("%d", &n);
        
        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int result[2];
        maxSubarray(arr, n, result);
        
        printf("%d %d\n", result[0], result[1]);
        
        free(arr);
    }
    
    return 0;
}
```

## java

``` java
import java.io.*;
import java.util.*;

public class Solution {

    public static List<Integer> maxSubarray(List<Integer> arr) {
        int maxi = Integer.MIN_VALUE;
        int maxis = Integer.MIN_VALUE;
        int sum = 0;
        
        // Find maximum subarray sum using Kadane's algorithm
        for (int i = 0; i < arr.size(); i++) {
            sum += arr.get(i);
            maxi = Math.max(sum, maxi);
            if (sum < 0) sum = 0;
        }
        
        if (maxi < 0) return Arrays.asList(maxi, maxi);
        
        sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) < 0) continue;
            sum += arr.get(i);
            maxis = Math.max(sum, maxis);
        }
        
        return Arrays.asList(maxi, maxis);
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        for (int tItr = 0; tItr < t; tItr++) {
            int n = Integer.parseInt(bufferedReader.readLine().trim());

            List<Integer> arr = new ArrayList<>();
            String[] arrItems = bufferedReader.readLine().split(" ");

            for (int i = 0; i < n; i++) {
                int arrItem = Integer.parseInt(arrItems[i]);
                arr.add(arrItem);
            }

            List<Integer> result = maxSubarray(arr);

            for (int i = 0; i < result.size(); i++) {
                bufferedWriter.write(String.valueOf(result.get(i)));

                if (i != result.size() - 1) {
                    bufferedWriter.write(" ");
                }
            }

            bufferedWriter.newLine();
        }

        bufferedReader.close();
        bufferedWriter.close();
    }
}
```

## `maxSubarray` Method

```java
 public static List<Integer> maxSubarray(List<Integer> arr) {
        int maxi = Integer.MIN_VALUE;
        int maxis = Integer.MIN_VALUE;
        int sum = 0;
```

* maxSubarray(List <Integer> arr) method: This method takes a list of integers arr and returns a list of two integers: the maximum subarray sum and the maximum non-contiguous subarray sum.
  
* `maxi` and `maxis`: These variables store the maximum subarray sum and maximum non-contiguous sum, respectively. They are initialized to Integer.MIN_VALUE to handle cases where all elements in the array are negative.

* sum: This variable is used to track the current sum while traversing the array.
  
## Kadane's Algorithm for maximum Subarray Sum

```java
   for (int i = 0; i < arr.size(); i++) {
            sum += arr.get(i);
            maxi = Math.max(sum, maxi);
            if (sum < 0) sum = 0;
        }
```

* Purpose: To find the maximum sum of a contiguous subarray.

* How it works:

* Traverse through the array.

* Add the current element (arr.get(i)) to sum.
* Update maxi to be the maximum of the current sum and maxi.
* if `sum` becomes negative, reset it to 0 (because a negative sum will not contribute to a maximum sum in subsequent subarrays).

## Edge Case Handling

```java
 if (maxi < 0) return Arrays.asList(maxi, maxi);
```

* Explanation: If the maximum subarray sum maxi is negative (i.e., all elements in the array are negative), the maximum non-contiguous sum is the same as the maximum contiguous sum. The method returns a list containing two instances of `maxi`.
  
## Finding Maximum Non-Contiguous Subarray Sum

```java
       sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr.get(i) < 0) continue;
            sum += arr.get(i);
            maxis = Math.max(sum, maxis);
        }
        
        return Arrays.asList(maxi, maxis);
    }
```

* Purpose: To find the maximum sum of non-contiguous elements (i.e., sum of all positive elements).
* How it works:
* Traverse the array again.
* If the current element is negative, skip it (because adding a negative number would reduce the sum).
* Add positive elements to sum and update maxis to be the maximum of sum and `maxis`.
  
## Returning the Result

```java
 return Arrays.asList(maxi, maxis);
```

* The method returns a list containing the maximum subarray sum and the maximum non-contiguous subarray sum.

## Main method

```java
  public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));
```

* BufferedReader and BufferedWriter: These are used for fast input and output operations, which is important in competitive programming to handle large datasets efficiently.

```java
  int t = Integer.parseInt(bufferedReader.readLine().trim());
```

* Reading the Number of Test Cases: The first input is the number of test cases `t`.

## Processing Each Test Case

```java
  for (int tItr = 0; tItr < t; tItr++) {
            int n = Integer.parseInt(bufferedReader.readLine().trim());

            List<Integer> arr = new ArrayList<>();
            String[] arrItems = bufferedReader.readLine().split(" ");

            for (int i = 0; i < n; i++) {
                int arrItem = Integer.parseInt(arrItems[i]);
                arr.add(arrItem);
            }
```

* Looping Through Test Cases: The program processes each test case in a loop.
* Reading Array Elements: For each test case, it reads the size of the array n and then the array elements, storing them in the list arr.

```java
List<Integer> result = maxSubarray(arr);
```

* Calling maxSubarray: The maxSubarray method is called with the array arr, and the result is stored in result.

## ouputting  the Result

```java
   for (int i = 0; i < result.size(); i++) {
                bufferedWriter.write(String.valueOf(result.get(i)));

                if (i != result.size() - 1) {
                    bufferedWriter.write(" ");
                }
            }

            bufferedWriter.newLine();
        }
```

* Writing Output: The results are written to the output, ensuring that the values are separated by a space.

## Closing Resource

```java
 bufferedReader.close();
        bufferedWriter.close();
```

* Closing the Streams: The input and output streams are closed to free resources.