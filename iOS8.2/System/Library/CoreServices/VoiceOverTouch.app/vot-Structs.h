/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSMutableDictionary;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __AXUIElement* AXUIElementRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __CFString* CFStringRef;

typedef struct NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct _NSZone* NSZoneRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_VO10;

typedef struct CGPath* CGPathRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	unsigned count;
	double delay;
	double lastTime;
	char connected;
} SCD_Struct_VO15;

typedef struct VOTTextMarkerRange {
	NSData* startMarker;
	NSData* endMarker;
} VOTTextMarkerRange;

typedef struct SCRCMathAverageValue {
	unsigned samples;
	float fifo[50];
	int fifoIndex;
	float sum;
	float average;
	float current;
} SCRCMathAverageValue;

typedef struct __AXObserver* AXObserverRef;

typedef struct {
	int direction;
	unsigned count;
	float continuityDistance;
	float distanceTraveled;
	CGPoint firstCountPoint;
} SCD_Struct_VO19;

typedef struct {
	unsigned char general;
	char showGeneral;
	NSMutableDictionary* generalDict;
} SCD_Struct_VO20;
