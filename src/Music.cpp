/*
 * Music.cpp
 *
 *  Created on: 27/06/2013
 *      Author: yuri
 */

#include "Music.h"

Music::Music() {
  // TODO Auto-generated constructor stub
  music = NULL;
}

Music::~Music() {
  // TODO Auto-generated destructor stub
  Mix_FreeMusic(music);
}

void Music::loadFile(string path) { music = Mix_LoadMUS(path.c_str()); }

void Music::playSound() { Mix_PlayMusic(music, -1); }

void Music::pauseSound() {
  if (isPaused())
    Mix_ResumeMusic();
  else
    Mix_PauseMusic();
}

void Music::stopSound() { Mix_HaltMusic(); }

int Music::isPlaying() { return Mix_PlayingMusic(); }

int Music::isPaused() { return Mix_PausedMusic(); }
