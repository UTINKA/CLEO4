#include "stdafx.h"
#include "CVector.h"
#include "CRGBA.h"
#include "CPed.h"

bool CPed::IsPlayer() { return m_nPedType == PED_TYPE_PLAYER1 || m_nPedType == PED_TYPE_PLAYER2; }
float CVector::Magnitude() { return sqrtf(x * x + y * y + z * z); }
CVector::CVector() : x(0.0f), y(0.0f), z(0.0f) { }
CVector::CVector(float _x, float _y, float _z) : x(_x), y(_y), z(_z) { }
CRGBA::CRGBA(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a) : red(_r), green(_g), blue(_b), alpha(_a) { }