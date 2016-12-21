#ifndef INCLUDE_IO_H
#define INCLUDE_IO_H

/**
 * Send data to the port (I/O ports generally).
 *
 * Implement in io.s
 *
 * @param port the I/O port
 * @param data the data
 */
void outb(unsigned short port, unsigned char data);

#endif /* INCLUDE_IO_H */
