/*************************************************************************
	> File Name: ringBuffer.h
	> Author: liugang
	> Mail: 308584349@163.com 
	> Created Time: Wed 18 Nov 2020 03:33:52 PM CST
 ************************************************************************/

#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_
typedef unsigned char u8;
typedef unsigned int u32;

void initRingbuffer(void);
int wirteRingbuffer(u8* buffer,u32 len);
int readRingbuffer(u8* buffer,u32 len);
u32 getRingbufferValidLen(void);
void releaseRingbuffer(void);

#endif /* RINGBUFFER_H_ */


