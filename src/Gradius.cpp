/*
 * Gradius.cpp
 *
 *  Created on: 27/05/2013
 *      Author: jhonantans
 */

#include "Controler.h"

int main() {
  Controler GameControl;

  if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
    cout << "Unknown Problem!" << endl;
  }

  GameControl.GameLoop();

  SDL_Quit();

  return 0;
}
