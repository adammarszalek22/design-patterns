#ifndef PLANEMANUAL_H
#define PLANEMANUAL_H

class PlaneManual {
	public:
		PlaneManual();
		~PlaneManual();
		void setEngines(int engines);
		void setSeats(int seats);
		void setWings(int wings);
		void setWheels(int wheels);
		void setDoors(int doors);
};

#endif