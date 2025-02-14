#ifndef MILITARYAIRCRAFT_H
#define MILITARYAIRCRAFT_H

#include "Plane.h"

#include <vector>
#include <string>

class MilitaryAircraft : public Plane {
	private:
		vector<int> parts;
	public:
		void add_part(std::string part) override;
		vector<int> get_parts() override;
};

#endif