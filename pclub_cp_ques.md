# HAPPY BIRTHDAY
## DESCRIPTION
It is your birthday and your father gave you some amount of money to go out and celebrate. You decided to go in a fare.
There are many fascinating things to play such as rides, shooting, rings throws etc, and may snacks to eat and to drink. Each of these things require to bu a coupon worth some 
definate amount.

Given the amount of money you have, and total number of different things and prices of coupons for each of them. You want to
find out the total number of ways you can spend your money.
Remember the total number of ways must also include that on what thing you spend first and on what thing you spend the next.
You may also feel tempted to spend on same thing again so you can buy more than 1 coupons for same thing.

**Input:**
First line is an integer t, for test cases.
First line of each test case have amount of money that you have.
Second line of each test case have number of various things to spend on.
Third line of each test case have the value of each coupon.

**Output:**
Single integer for each test case denoting the number of ways you can spend the money.

**Example:**
Input:  
2  
4  
2  
1 2  
5  
3  
1 3 4

**Output:**  
5  
6

**Explanation:**
First test case:
possible ways=
1+1+1+1 ,
1+1+2 ,
1+2+1 ,
2+1+1 ,
2+2

Second test case:
possible ways=
1+1+1+1+1 ,
1+1+3 ,
1+3+1 ,
3+1+1 ,
1+4 ,
4+1 ,


***Constraints:***  
t: 1<= t <= 10^2  
n: 1<= n <= 50  
m: 1<= m <= 10  
values of coupons <= 10^2 and each value is multiple of 10 and distinct.


