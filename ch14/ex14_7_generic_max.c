#define GENERIC_MAX(type)		\
type type##_max(type x, type y)	\
{								\
	return x > y ? x : y;		\
}

// Preprocessor's Expansion of GENERIC_MAX
long long_max(long x, long y)
{
	return x > y ? x : y;
}

/*
 * Actual expansion may be like this i.e. it won't contain
 * any extra characters.
 */
long long_max(long x,long y){return x>y?x:y;}
