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
    int x = 0;
    Kid k1;

    while(kids.size() != 1){
        x = (a + x - 1) % kids.size();
        list<Kid>::iterator it = kids.begin();
        advance(it, x);
        it = kids.erase(it);
    }
    return kids.front();
}

// TODO
list<Kid> Game::removeOlder(unsigned id) {
    return (list<Kid>());
}

// TODO
queue<Kid> Game::rearrange() {
    queue<Kid> boys;
    queue<Kid> girls;
    int n ;
    for(int i = 0; i < kids.size(); i++){
        if(kids.front().getSex() == 'm'){
            boys.push(kids.front());
            kids.pop_front();
        }
        else{
            girls.push(kids.front());
            kids.pop_front();
        }
    }

    if(girls.size() >= boys.size()){
        n = girls.size() / boys.size();
        while(!boys.empty()){
            for(int i = 0; i < n; i ++){
                kids.push_back(girls.front());
                girls.pop();
            }
            kids.push_back(boys.front());
            boys.front();
        }
        return girls;
    }
    else{
        n = boys.size() / girls.size();
        while(!girls.empty()){
            kids.push_back(girls.front());
            girls.pop();
            for(int i = 0; i < n; i++){
                kids.push_back(boys.front());
                boys.pop();
            }
        }
        return boys;

    }
}

// TODO
bool Game::operator==(Game& g2) {
	return true;
}

// TODO
list<Kid> Game::shuffle() const {
	return (list<Kid>());
}
