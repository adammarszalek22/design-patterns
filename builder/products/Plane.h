#ifndef PLANE_H
#define PLANE_H

#include <vector>
#include <string>

class Plane {
	public:
		virtual ~Plane() = default;
		virtual void add_part(const std::string& part) = 0;
		virtual std::vector<std::string> get_parts() const = 0;
};

#endif
