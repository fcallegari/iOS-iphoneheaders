/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSMTraceBuffer, NSURL, NSString;

@interface TSCHTracingManager : NSObject {

	bool mTraceLevelSet;
	unsigned mTraceLevel;
	bool mBufferSizeSet;
	unsigned long long mBufferSize;
	TSMTraceBuffer* mBuffer;
	NSURL* mLastTraceFileURL;
	NSString* mTag;

}

@property (assign) unsigned traceLevel; 
@property (assign) unsigned long long bufferSize; 
@property (readonly) NSURL * lastTraceFileURL; 
@property (copy) NSString * tag; 
+(id)allocWithZone:(NSZone)arg1 ;
+(id)_singletonAlloc;
+(id)sharedManager;
-(unsigned)traceLevel;
-(void)setTraceLevel:(unsigned)arg1 ;
-(void)setBufferSize:(unsigned long long)arg1 ;
-(id)lastTraceFileURL;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setTag:(id)arg1 ;
-(id)tag;
-(unsigned long long)bufferSize;
-(void)teardown;
-(void)setup;
@end

