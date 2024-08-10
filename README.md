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