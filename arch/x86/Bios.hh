
#ifndef OCTETOS_OS_KERNEL_BIOS_HH
#define OCTETOS_OS_KERNEL_BIOS_HH

/*
 * Copyright (C) 2022 Azael R. <azael.devel@gmail.com>
 * All rights reserved
 */

#include "../../meta/defines.hh"


namespace kernel
{







class Bios
{
public:
	void print(char);
	void print(const char*);
	void outb(uint16 port, uint8 val);
	uint8 inb(uint16 port);
	
private:
	inline void interrup(byte service,byte function,byte parameter);
};


}
#endif
