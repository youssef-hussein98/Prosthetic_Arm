#ifndef SIGNAL_H
#define SIGNAL_H

#define EMG                 A0
#define EMG_POTENTIOMETER   A1
#define SIGNAL_BUTTON       A2

void SIGNAL_Init(void);
int SIGNAL_Reading(void);

#endif
