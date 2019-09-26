#pragma once
#ifndef Sales_data.h
#define Sales_data.h
#include<string>
struct sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif // !Sales_data.h
