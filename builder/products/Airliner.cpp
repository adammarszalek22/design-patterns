#include "Airliner.h"

#include <vector>
#include <string>

void Airliner::add_part(std::string part) {
	this->parts.push_back(part);
}

vector<int> Airliner::get_parts() {
	return this->parts;
}