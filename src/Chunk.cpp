/*
 * Chunk.cpp
 *
 *  Created on: 27/06/2013
 *      Author: yuri
 */

#include "Chunk.h"

Chunk::Chunk() {
  // TODO Auto-generated constructor stub
  chunk = NULL;
}

Chunk::~Chunk() {
  // TODO Auto-generated destructor stub
  Mix_FreeChunk(chunk);
}

void Chunk::loadFile(string path) { chunk = Mix_LoadWAV(path.c_str()); }

void Chunk::playSound() { Mix_PlayChannel(-1, chunk, 0); }
