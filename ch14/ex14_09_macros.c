#include <stdio.h>

#define CHECK(x,y,n) ((0 <= (x) && (x) < (n) && 0 <= (y) && (y) < (n)) ? 1 : 0)
// This is one of those brain bending exercise. Here, from what I worked out,
// that if z is not greatest of three then finding min between x & y then finding
// the max of result & z gives the median otherwise if z is greatest then
// simply the max between x & y is the median
#define MAX(x,y) (((x) > (y)) ? (x) : (y))
#define MIN(x,y) (((x) < (y)) ? (x) : (y))
#define MAX3(x,y,z) MAX(x,MAX(y,z))
#define MEDIAN(x,y,z) (((z) == MAX3(x,y,z)) ? MAX(x,y) : MAX(z,MIN(x,y)))

/*
How I did this? First I thought of all the exhaustive conditions that are
possible they are as follows :
Satisfied by formula 1 MAX(z,MIN(x,y))
x > y > z median is y
x > z > y median is z
y > x > z median is x
y > z > x median is z

Satisfied by formula 2 MIN(z,MAX(x,y)) equivalent to MAX(x,y)
z > x > y median is x
z > y > x median is y

I devised formula 1 by constructing if statements and wrecking my brain.
if x > y -----------
	if y > z        |
		return y    |------ both these gave me idea to include MAX(x,y)
	else            |
		return z    |
if y > x -----------
	if x > z
		return x
	else
		return z
But it only satisfied the first four. I saw the pattern that if z is
greatest formula 1 fails. So I created the condition as you can see above
using the tertiary operator, and devised formula 2. Afterwards I simplified
formula 2 to its equivalent.
if z > x
	if x > y
		return x
	else
		return y

ALITER I found over the net but don't know its algorithm
#define MEDIAN(x, y, z) (x <= y ? (z < x ? x : (z > y ? y : z)) : (z < y ? y : (z > x ? x : z)))
*/

