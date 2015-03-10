#pragma once

#define  SOUND_NONE    0
#define  SOUND_DIRECT  1
#define  SOUND_SMART   2
#define  SOUND_WAVE    3

extern DWORD      soundtype;
extern double     g_fClksPerSpkrSample;
extern UINT       g_quieterSpeaker;
extern short      g_nSpeakerData;

void    SpkrDestroy ();
void    SpkrInitialize ();
void    SpkrReinitialize ();
void    SpkrReset();
BOOL    SpkrSetEmulationType (HWND,DWORD);
void    SpkrUpdate (DWORD);
void    SpkrUpdate_Timer();
void    Spkr_SetErrorInc(const int nErrorInc);
void    Spkr_SetErrorMax(const int nErrorMax);
DWORD   SpkrGetVolume();
void    SpkrSetVolume(DWORD dwVolume, DWORD dwVolumeMax);
void    Spkr_Mute();
void    Spkr_Demute();
bool    Spkr_IsActive();
bool    Spkr_DSInit();
void    Spkr_DSUninit();
DWORD   SpkrGetSnapshot(SS_IO_Speaker* pSS);
DWORD   SpkrSetSnapshot(SS_IO_Speaker* pSS);

BYTE __stdcall SpkrToggle (WORD pc, WORD addr, BYTE bWrite, BYTE d, ULONG nCyclesLeft);

		    
