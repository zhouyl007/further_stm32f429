#ifndef _RING_BUF_H_
#define _RING_BUF_H_

/*���λ�����������*/
typedef struct
{
     unsigned char *buf;    /*���λ�����        */
     unsigned int size;     /*���λ�����        */
     unsigned int front;    /*ͷָ��            */
     unsigned int rear;     /*βָ��            */
}ring_buf_t;

/*-------------------------�ⲿ�ӿ�����----------------------------*/

int ring_buf_create(ring_buf_t *r,unsigned char *buf,unsigned int size);

void ring_buf_clr(ring_buf_t *r);

unsigned int ring_buf_len(ring_buf_t *r);

unsigned int ring_buf_put(ring_buf_t *r,unsigned char *buf,unsigned int len);

unsigned int ring_buf_get(ring_buf_t *r,unsigned char *buf,unsigned int len);

#endif