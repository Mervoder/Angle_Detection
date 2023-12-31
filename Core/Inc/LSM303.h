/*
 * LSM303.h
 *
 *  Created on: Jul 1, 2023
 *      Author: Oğuz Kaan
 */

#ifndef INC_LSM303_H_
#define INC_LSM303_H_


#include<stm32f4xx.h>

extern I2C_HandleTypeDef hi2c1;

// High res mode control reg1 a[3]= 0 and ctrl_reg4 a[4] =1

#define LSM303_Read_Address_Ac    0x33
#define LSM303_Write_Address_Ac   0x32

#define LSM303_Read_Address_Mg    0x3D
#define LSM303_Write_Address_Mg   0x3C

#define CTRL_REG1_A 			  0x20
#define CTRL_REG2_A 			  0x21
#define CTRL_REG3_A 			  0x22
#define CTRL_REG4_A 			  0x23
#define CTRL_REG5_A 			  0x24
#define CTRL_REG6_A 			  0x25

#define STATUS_REG_A			  0x27

#define OUT_X_L_A				  0x28
#define OUT_X_H_A				  0x29

#define OUT_Y_L_A				  0x2A
#define OUT_Y_H_A				  0x2B

#define OUT_Z_L_A				  0x2C
#define OUT_Z_H_A				  0x2D

#define CFG_REG_A_M				  0x00
#define CFG_REG_C_M				  0x01

#define OFFSET_X_REG_L_M		  0x45
#define OFFSET_X_REG_H_M		  0x46

#define OFFSET_Y_REG_L_M		  0x47
#define OFFSET_Y_REG_H_M		  0x48

#define OFFSET_Z_REG_L_M		  0x49
#define OFFSET_Z_REG_H_M		  0x4A

#define STATUS_REG_M			  0x67

#define OUTX_L_REG_M			  0x68
#define OUTX_H_REG_M			  0x69

#define OUTY_L_REG_M			  0x6A
#define OUTY_H_REG_M			  0x6B

#define OUTZ_L_REG_M			  0x6C
#define OUTZ_H_REG_M			  0x6D

#define INT2_CFG_A 			      0x34


typedef enum
{
	HighResolution = 4,
	NormalResolution = 2,
	LowResolution = 0
}Resolution;

typedef enum
{
	Scale_2g = 0,
	Scale_4g = 1,
	Scale_8g = 2,
	Scale_16g =3
}Scale;



void LSM303_Init(Resolution resolutionBits, Scale G_scale);
void LSM303_Read_Accel();

float Accel_Read_X();
float Accel_Read_Z();
float Accel_Read_Y();





#endif /* INC_LSM303_H_ */
