#ifndef JET_H
#define JET_H

#include "Plane.h"

#include <vector>
#include <string>

class Jet : public Plane {
	private:
		vector<int> parts;
	public:
		~Plane() {};
		void add_part(std::string part) override;
		vector<int> get_parts() override;
};

#endif