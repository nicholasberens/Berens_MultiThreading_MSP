#ifndef UART_H_
#define UART_H_

void UART0_init(void);
int UART_Send(char a);
int UART_MSend(char *a);
char UART_Receive(void);

#endif 
