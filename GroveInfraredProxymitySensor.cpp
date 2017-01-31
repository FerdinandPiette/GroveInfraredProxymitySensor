#include "../Grove/Grove.h"
#include "GroveInfraredProxymitySensor.h"

GroveInfraredProxymitySensor::GroveInfraredProxymitySensor() { }

void GroveInfraredProxymitySensor::initialize(GrovePin pins) {	
	this->_pinSensor = pins.pin2;
	pinMode(this->_pinSensor, INPUT);
}

double GroveInfraredProxymitySensor::getDistance() {	
	unsigned int rawData = this->getRawData();
	float voltage = 5*(float)rawData/1023;
	double distance = 26.8*pow(voltage, -1.22);
	/*Serial.print(rawData);
	Serial.print(" - ");
	Serial.print(voltage);
	Serial.print(" - ");
	Serial.println(distance);*/
	return distance;
}

unsigned int GroveInfraredProxymitySensor::getRawData(unsigned char numberOfMesurements) {	
	unsigned int sum;  
	for(unsigned char i = 0; i < numberOfMesurements; ++i) {
		sum += analogRead(this->_pinSensor);
	}
	return sum / numberOfMesurements;
}
