# GroveInfraredProxymitySensor
Infrared Proximity Sensor Library for Arduino + Grove shield

[Link to the tested grove module](http://wiki.seeed.cc/Grove-80cm_Infrared_Proximity_Sensor/)

##Example
```c++
#include <Grove.h>
#include <GroveInfraredProxymitySensor.h>

GroveInfraredProxymitySensor proximity(GROVE_A2);

void setup() {
  proximity.initialize();
  Serial.begin(9200);
}

void loop() {
  proximity.getDistance();
  delay(500);
}
```

##Documentation

###`GroveInfraredProxymitySensor(GrovePin pins)`
Parameters:
- `pins`: Must be a analog socket (GROVE_A0 to GROVE_A3)

###`void initialize()`
Initialize the sensor before using it.

###`unsigned int getRawData(unsigned char numberOfMesurements = 20)`
Parameters:
- numberOfMesurements : The number of mesurements the method will averaged before returning the result
Return a value between 0 and 1023 corresponding to the output of the A/D converter

###`double getDistance()`
Return the distance in centimeter between the sensor and the object. 

DOES NOT WORK FULLY YET
