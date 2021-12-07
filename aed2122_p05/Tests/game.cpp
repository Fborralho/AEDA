#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;


unsigned int Game::numberOfWords(string phrase) {
  if ( phrase.length() == 0 ) return 0;

  unsigned n=1;
  size_t pos = phrase.find(' ');
  while (pos != string::npos) {
    phrase = phrase.substr(pos+1);
    pos = phrase.find(' ');
    n++;
  }
  return n;
}

Game::Game() {
	this->kids.clear();
}

Game::Game(list<Kid>& l2) {
	this->kids = l2;
}

//-----------------------------------------------------------------

// TODO
void Game::addKid(const Kid k1) {
    kids.push_back(k1);
}

// TODO
list<Kid> Game::getKids() const {
    return kids;
}

// TODO
void Game::setKids(const list<Kid>& l1) {
    this->kids = l1;
}

// TODO
Kid Game::loseGame(string phrase) {
    int a = numberOfWords(phrase);
    int x ;
    if(a == 0){
        return kids.front();
    }
    else if(a > kids.size()){
        x = kids.size() % a;
    }
    else{
        x = a - 1;
    }

    list<Kid>::iterator it = kids.begin();
    advance(it, x);
    kids.erase(it);
    return(*it);

}

// TODO
list<Kid> Game::removeOlder(unsigned id) {
    return (list<Kid>());
}

// TODO
queue<Kid> Game::rearrange() {
    return(queue<Kid>());
}

// TODO
bool Game::operator==(Game& g2) {
	return true;
}

// TODO
list<Kid> Game::shuffle() const {
	return (list<Kid>());
}
