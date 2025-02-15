#ifndef AIRLINER_H
#define AIRLINER_H

#include "Plane.h"

#include <vector>
#include <string>

class Airliner : public Plane {
	private:
		std::vector<std::string> parts;
	public:
		void add_part(const std::string& part) override;
		std::vector<std::string> get_parts() const override;
};

#endif