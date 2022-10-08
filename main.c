// ===== Include appropriate header files =====
#include "UART.h"
#include "stdio.h"
#include "stdlib.h"
#include "msp.h"
#include "main.h"
#include <ti/devices/msp432p4xx/driverlib/driverlib.h>

// ===== This is the kernel that will setup everything and run the scheduler ======


#define TIMESLICE               // Thread context switch time in system time units

unsigned threadlock;            // Variable Lock

// Code below is the interface to the C standard I/O library
// All the I/O are directed to the console which is UART0
struct __FILE { int handle; };
FILE __stdin = {0};
FILE __stdout = {1};
FILE __stderr = {2};

// ====== Called by C library console / file output =======
int fputc(int c, FILE *f)
{
    int temp;

    temp = UART_Send((char)c);       // Write character to console

  return temp;
}

// ====== For using printf() with format specifiers ======
int fputs(const char *_ptr, register FILE *_fp)
{
    unsigned int len;

    len = UART_MSend(_ptr);     // Send a string

    return len;                 // Return the length of the string
}


// ====== GPIO_Init() =======
void GPIO_Init(void)
{
                // Initialize GPIO periperals needed in this project

}


// ======== Function to initialize LOCK (you need to modify) =============
void Lock_Init(unsigned *lock)
{
    ;
}

// ======= Function to acquire the lock to be written in LockAcquire.asm ======
unsigned Lock_Acquire(unsigned *lock)
{
  return 1; // always succeeds
}

// ======== Function to release LOCK (you need to modify) ===========
void Lock_Release(unsigned *lock)
{
    ;
}


// ======= MAIN =========
int main(void)
{
                                // stop watchdog timer
                                // Initialize the global thread lock
                                // Initialize OS
                                // Initialize UART0 peripheral
                                // Initialize GPIO peripheral

                                // Add Threads to the list
                                // Launch OS

  return 0;            // This never executes

}
