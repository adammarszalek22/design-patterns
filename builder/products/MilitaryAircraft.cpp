#include "MilitaryAircraft.h"

#include <vector>
#include <string>

void MilitaryAircraft::add_part(const std::string& part) {
	this->parts.push_back(part);
}

std::vector<std::string> MilitaryAircraft::get_parts() const {
	return this->parts;
}