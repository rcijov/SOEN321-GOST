//
// pch.h
// Header for standard system include files.
//

#pragma once

#include <collection.h>
#include <ppltasks.h>

#include "App.xaml.h"

class Stribog {
	int width, height, choice;
public:
	Stribog::Stribog(){};
	void Stribog::hash_512(const unsigned char *message, unsigned long long length, unsigned char *out);
	void Stribog::hash_256(const unsigned char *message, unsigned long long length, unsigned char *out);
private:
	void Stribog::AddModulo512(const unsigned char *a, const unsigned char *b, unsigned char *c);
	void Stribog::AddXor512(const void *a, const void *b, void *c);
	void Stribog::S(unsigned char *state);
	void Stribog::P(unsigned char *state);
	void Stribog::L(unsigned char *state);
	void Stribog::E(unsigned char *K, const unsigned char *m, unsigned char *state);
	void Stribog::KeySchedule(unsigned char *K, int i);
	void Stribog::g_N(const unsigned char *N, unsigned char *h, const unsigned char *m);
	void Stribog::hash_X(unsigned char *IV, const unsigned char *message, unsigned long long length, unsigned char *out);
};