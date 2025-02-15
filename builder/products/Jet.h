#ifndef JET_H
#define JET_H

#include "Plane.h"

#include <vector>
#include <string>

class Jet : public Plane {
	private:
		std::vector<std::string> parts;
	public:
		void add_part(const std::string& part) override;
		std::vector<std::string> get_parts() const override;
};

#endif