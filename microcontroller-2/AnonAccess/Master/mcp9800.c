/* mcp9800.c */
/*
 *   This file is part of AnonAccess, an access system which can be used
 *    to open door or doing other things with an anonymity featured
 *    account managment.
 *   Copyright (C) 2006, 2007, 2008  Daniel Otte (daniel.otte@rub.de)
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */



#include "mcp9800.h"


/* low level functions */


/* important stuff */
mcp9800_temp_t	mcp9800_get_temp(i2c_addr_t dev){
	return (i2c_get_16bit_reg(dev, Ta_reg));
}

mcp9800_temp_t	mcp9800_get_max_lim(i2c_addr_t dev){
	return (i2c_get_16bit_reg(dev, Tmax_reg));
}

void				mcp9800_set_max_lim(i2c_addr_t dev, mcp9800_temp_t temp){
	i2c_set_16bit_reg(dev, Tmax_reg, temp);
}

mcp9800_temp_t	mcp9800_get_min_lim(i2c_addr_t dev){
	return (i2c_get_16bit_reg(dev, Tmin_reg));
}

void				mcp9800_set_min_lim(i2c_addr_t dev, mcp9800_temp_t temp){
	i2c_set_16bit_reg(dev, Tmin_reg, temp);
}


/* configuration stuff (i2c_addr_t dev, also important) */
/*
 *  this could be optimized, since we often do the same
 *  maybe something like:
 *  	 set_conf_bit(i2c_addr_t, bitaddr, value)
 *  would be a good idea.
 */


bool				mcp9800_get_oneshot(i2c_addr_t dev){
	return (i2c_get_bit_in_8bit_reg(dev, conf_reg, MCP9800_ONESHOT));
}	

void				mcp9800_set_oneshot(i2c_addr_t dev, bool val){
	i2c_set_bit_in_8bit_reg(dev, conf_reg, MCP9800_ONESHOT, val);
}


void				mcp9800_set_resolution(i2c_addr_t dev, mcp9800_res_t val){
	i2c_set_bits_in_8bit_reg(dev, conf_reg, MCP9800_RESOLUTION, 2, val);
}

mcp9800_res_t	mcp9800_get_resolution(i2c_addr_t dev){
	return (i2c_get_bits_in_8bit_reg(dev, conf_reg, MCP9800_RESOLUTION, 2));
}	

void				mcp9800_set_alert_polarity(i2c_addr_t dev, mcp9800_alertpol_t val){
	i2c_set_bit_in_8bit_reg(dev, conf_reg, MCP9800_ALERTPOL, val);
}

mcp9800_alertpol_t	mcp9800_get_alert_polarity(i2c_addr_t dev){
	return (i2c_get_bit_in_8bit_reg(dev, conf_reg, MCP9800_ALERTPOL));
}	

void				mcp9800_set_mode(i2c_addr_t dev, mcp9800_mode_t val){
	i2c_set_bit_in_8bit_reg(dev, conf_reg, MCP9800_MODE, val); 
}

mcp9800_mode_t	mcp9800_get_mode(i2c_addr_t dev){
	return (i2c_get_bit_in_8bit_reg(dev, conf_reg, MCP9800_MODE));
}	

void				mcp9800_set_shutdown(i2c_addr_t dev, bool val){
	i2c_set_bit_in_8bit_reg(dev, conf_reg, MCP9800_SHUTDOWN, val);
}

bool				mcp9800_get_shutdown(i2c_addr_t dev){
	return (i2c_get_bit_in_8bit_reg(dev, conf_reg, MCP9800_SHUTDOWN));
}	

void				mcp9800_set_faultqueue(i2c_addr_t dev, uint8_t val){
	i2c_set_bits_in_8bit_reg(dev, conf_reg, MCP9800_FAULTQUEUE, 2, val);
}

int				mcp9800_get_faultqueue(i2c_addr_t dev){
	return (i2c_get_bits_in_8bit_reg(dev, conf_reg, MCP9800_FAULTQUEUE, 3));
}	

