#include "Jet.h"

#include <vector>
#include <string>

void Jet::add_part(const std::string& part) {
	this->parts.push_back(part);
}

std::vector<std::string> Jet::get_parts() const {
	return this->parts;
}