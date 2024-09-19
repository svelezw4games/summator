/* summator.cpp */

#include "summator.h"

void Summator::add(int p_value) {
	count += p_value;
}

void Summator::substract(int p_value) {
	count -= p_value;
}

void Summator::multiply(int p_value) {
	count *= p_value;
}

void Summator::division(int p_value) {
	count /= p_value;
}

void Summator::power(int p_value) {
	count *= (count * p_value);
}

void Summator::reset() {
	count = 0;
}

int Summator::get_total() const {
	return count;
}

void Summator::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
	ClassDB::bind_method(D_METHOD("substract", "value"), &Summator::substract);
	ClassDB::bind_method(D_METHOD("multiply", "value"), &Summator::multiply);
	ClassDB::bind_method(D_METHOD("division", "value"), &Summator::division);
	ClassDB::bind_method(D_METHOD("power", "value"), &Summator::power);
	ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}

Summator::Summator() {
	count = 1;
}