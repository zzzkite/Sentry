#ifndef MF_USER_H
#define MF_USER_H
#ifdef __cplusplus
 extern "C" {
#endif
#include "main.h"
#include "Motor.h"
#include "Can_user.h"

void Start_MF_send(int16_t ID);
void Current_Control_MF_send(int16_t ID,int16_t iqControl);
int16_t Current_Limit_MF(int16_t current);
float MF_value(int16_t k, int16_t n, int16_t max);
void Encoder_MF_read(int16_t ID);
	 
#ifdef __cplusplus
}
#endif

#endif