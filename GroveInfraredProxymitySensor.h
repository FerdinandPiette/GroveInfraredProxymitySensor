#ifndef GroveInfraredProxymitySensor_H
#define GroveInfraredProxymitySensor_H

#include <Arduino.h>


class GroveInfraredProxymitySensor {
	private:
		unsigned int _pinSensor; 

	public:
		GroveInfraredProxymitySensor();
		void initialize(GrovePin pins);
		unsigned int getRawData(unsigned char numberOfMesurements = 20); 
		double getDistance();
};

#endif