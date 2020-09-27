 


#ifndef DIO_H_
#define DIO_H_
void DIO_SET_PIN_DIR (unsigned char port,unsigned char pin, unsigned char dir);
void DIO_WRITE_PIN (unsigned char port,unsigned char pin, unsigned char val);
void DIO_TOGGLE_PIN (unsigned char port,unsigned char pin);
unsigned char DIO_READ_PIN (unsigned char port,unsigned char pin);
void DIO_SET_PORT_DIR (unsigned char port,unsigned char dir);
void DIO_WRITE_PORT (unsigned char port,unsigned char val);
void DIO_TOGGLE_PORT (unsigned char port);
unsigned char DIO_READ_PORT (unsigned char port);
#endif /* DIO_H_ */