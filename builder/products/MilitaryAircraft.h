#ifndef MILITARYAIRCRAFT_H
#define MILITARYAIRCRAFT_H

#include "Plane.h"

#include <vector>
#include <string>

class MilitaryAircraft : public Plane {
	private:
		std::vector<std::string> parts;
	public:
		void add_part(const std::string& part) override;
		std::vector<std::string> get_parts() const override;
};

#endif