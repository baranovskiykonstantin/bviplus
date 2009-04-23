#ifndef __KEY_HANDLER_H__
#define __KEY_HANDLER_H__

#define CR      '\r'
#define NL      '\n'
#define ESC     27
#define INS     331
#define TAB     9
#define BVICTRL(n)    (n&0x1f)


void handle_key(int c);

#endif /* __KEY_HANDLER_H__ */
