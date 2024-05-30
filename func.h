#pragma once
#ifndef FUNC_H
#define FUNC_H


bool init();
bool isvalid(int x, int y);
bool loadMedia();
bool loadMute();

bool ismines(int x, int y);
int countMines(int x, int y);
void createBroad();
void createBomb();
void real( int i, int j);
void minesleft();
void countBomb();
void showMenu();
void showInside();

void MENU();
void MenuInside();

void lose();
void playAgian();
void playerWin();
void setButton();
void renderButton();
void handleButton();
void renderGAme();
void showBroad();
void TimeinGame();
void close();
#endif // !FUNC_H
