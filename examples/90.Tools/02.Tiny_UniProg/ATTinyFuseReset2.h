#ifndef _ATTINYFUSERESET2_H_
#define _ATTINYFUSERESET2_H_

void Check_HV_Reset_Button(uint8_t Button);

void HV_Interrupt_Proc();

void Write_or_Check_Reset_Fuse(int8_t Mode, uint8_t ProgMode);

#endif // _ATTINYFUSERESET2_H_

