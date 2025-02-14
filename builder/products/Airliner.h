#ifndef AIRLINER_H
#define AIRLINER_H

#include "Airliner.h"

#include <vector>
#include <string>

class Airliner : public Plane {
	private:
		vector<int> parts;
	public:
		void add_part(std::string part) override;
		vector<int> get_parts() override;
};

#endif