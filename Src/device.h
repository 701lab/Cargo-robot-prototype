/*
	@brief This file contains all data specific to two sided balancing robot
 */

#ifndef DEVICE_H_
#define DEVICE_H_

// *** Libraries based defines *** //
//#define NRF24L01P_MISTAKES_OFFSET 		100
#define ICM_20600_MISTAKES_OFFSET		200

#include "implementation.h"
#include "nrf24l01p_impi.h"
#include "motors.h"


/*
	@brief Runs all board diagnostics tests
 */
void device_self_diagnosticks( nrf24l01p *nrf24_instance, motor * first_motor_instance, motor * second_motor_instance);







#endif /* DEVICE_H_ */
