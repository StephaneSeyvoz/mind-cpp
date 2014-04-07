/*
 * temperatureCluster.hpp
 *
 *  Created on: 18 mars 2014
 *      Author: SESA188919
 */

#ifndef TEMPERATURECLUSTER_HPP_
#define TEMPERATURECLUSTER_HPP_

#include "cluster.itf.hpp"
#include "sensor.itf.hpp"
#include "temperatureSensor.itf.hpp"

class temperatureCluster: public clusterItf {
public:
  sensorItf *sensoritf;
  temperatureSensorItf *temperaturesensoritf;

  temperatureCluster() { sensoritf = 0x00; temperaturesensoritf = 0x00; };
  ~temperatureCluster() { };

protected:
      struct {
        int attribute_measured_value;
        int attribute_max_value;
        int attribute_min_value;
        int data_type;
      } PRIVATE;
public:
        virtual void Init(void );

	virtual unsigned char getDirection();

	virtual unsigned short getClusterID();

	virtual unsigned char serialize(unsigned char* a_iSize, unsigned char* a_pBuffer);

	virtual unsigned char deserialize(unsigned char a_iInSize, unsigned char* a_pInBuffer, unsigned char* a_iOutSize, unsigned char* a_pOutBuffer);

	virtual unsigned char update();
};





#endif /* TEMPERATURECLUSTER_HPP_ */
