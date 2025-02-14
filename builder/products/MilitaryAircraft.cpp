#include "MilitaryAircraft.h"

#include <vector>
#include <string>

void MilitaryAircraft::add_part(std::string part) {
	this->parts.push_back(part);
}

vector<int> MilitaryAircraft::get_parts() {
	return this->parts;
}