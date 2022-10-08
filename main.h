/*
 * main.h
 *
 *  Created on: Jul 17, 2021
 *      Author: nicho
 */
#include "stdio.h"
#include "stdlib.h"
#include "msp.h"

#ifndef MAIN_H_
#define MAIN_H_

extern int fputc(int c, FILE *f);
extern int fputs(const char *_ptr, register FILE *_fp);
extern void GPIO_Init(void);
extern void Lock_Init(unsigned *lock);
extern unsigned Lock_Acquire(unsigned *lock);
extern void Lock_Release(unsigned *lock);



#endif /* MAIN_H_ */
