#include "Jet.h"

#include <vector>
#include <string>

void Jet::add_part(std::string part) {
	this->parts.push_back(part);
}

vector<int> Jet::get_parts() {
	return this->parts;
}