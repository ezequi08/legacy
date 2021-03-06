#pragma once

typedef struct {
	uint8_t vol;
	uint8_t id;
} t_channel;

#define NUM_TEUFEL_CHANNELS 8

extern void incrementChannels(int8_t diff);
extern void setMute(uint8_t muted);
extern void setAllChannels(uint8_t vol);
extern void setSingleChannel(uint8_t chanID, uint8_t vol);

extern void setDefaultAfterPoweron(void);
extern void TeufelPoweron(void);
extern void TeufelPoweronTick(void);

