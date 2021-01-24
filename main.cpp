#include <iostream>
#include "LogigueMenu_class.h"

int compteurDeConstructeur, compteurDeDestructeur;

int main() {
LogigueMenu_class* menu = new LogigueMenu_class;
menu->lancementDeLApplication_void();
}
