//=============================================================================
//  RogueVMObject.h
//
//  2015.09.08 by Abe Pralle
//=============================================================================
#pragma once
#ifndef ROGUE_VM_OBJECT_H
#define ROGUE_VM_OBJECT_H

#include "Rogue.h"

typedef void (*RogueVMTraceFn)( void* allocation );

void RogueVMTraceCmd( void* allocation );
void RogueVMTraceMethod( void* allocation );
void RogueVMTraceType( void* allocation );

void* RogueVMObject_create( RogueVM* vm, RogueInteger size );

#endif // ROGUE_VM_OBJECT_H
