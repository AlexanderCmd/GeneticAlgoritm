#ifndef FUNCTON_H
#define FUNCTION_H
 
#include <math.h>
#include <iostream>

class Function {
public:
	Function() {};

	const double function_value(const double x, const double y) const {
		return cos(sin(x) * exp(y / x));
	};
};

#endif // !FUNCTON_H

