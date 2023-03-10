/*
 * Music.h
 *
 *  Created on: 27/06/2013
 *      Author: yuri
 */

#ifndef MUSIC_H_
#define MUSIC_H_

#include "SFX.h"

class Music : public SFX {
 private:
  Mix_Music *music;

 public:
  Music();
  virtual ~Music();
  void loadFile(string);
  void playSound();
  void pauseSound();
  void stopSound();
  int isPlaying();
  int isPaused();
};

#endif /* MUSIC_H_ */
