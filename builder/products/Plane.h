#ifndef PLANE_H
#define PLANE_H

#include <vector>
#include <string>

class Plane {
	private:
		vector<int> parts;
	public:
		virtual ~Plane() {};
		virtual void add_part(std::string part) = 0;
		virtual vector<int> get_parts() = 0;
};

#endif
