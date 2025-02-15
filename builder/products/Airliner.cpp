#include "Airliner.h"

#include <vector>
#include <string>

void Airliner::add_part(const std::string& part) {
	this->parts.push_back(part);
}

std::vector<std::string> Airliner::get_parts() const {
	return this->parts;
}