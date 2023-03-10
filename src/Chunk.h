/*
 * Chunk.h
 *
 *  Created on: 27/06/2013
 *      Author: yuri
 */

#ifndef CHUNK_H_
#define CHUNK_H_

#include "SFX.h"

class Chunk : public SFX {
 private:
  Mix_Chunk *chunk;

 public:
  Chunk();
  virtual ~Chunk();
  void loadFile(string);
  void playSound();
};

#endif /* CHUNK_H_ */
