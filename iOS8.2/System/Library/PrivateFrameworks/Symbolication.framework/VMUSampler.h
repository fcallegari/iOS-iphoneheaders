/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, VMUProcessDescription, VMUTaskMemoryCache, NSMapTable, NSConditionLock, NSMutableArray;

@interface VMUSampler : NSObject {

	unsigned _options;
	int _pid;
	unsigned _task;
	char _needTaskPortDealloc;
	char _recordThreadStates;
	char _taskIs64Bit;
	NSString* _processName;
	VMUProcessDescription* _processDescription;
	CSTypeRef _symbolicator;
	VMUTaskMemoryCache* _memCache;
	sampling_context_tRef _samplingContext;
	unsigned _mainThread;
	NSMapTable* _lastThreadBacktraceMap;
	unsigned _numberOfCopiedBacktraces;
	unsigned* _previousThreadList;
	unsigned _previousThreadCount;
	unsigned _maxPreviousThreadCount;
	double _tbRate;
	double _tbInterval;
	NSConditionLock* _stateLock;
	double _interval;
	double _timeLimit;
	unsigned _sampleLimit;
	char _sampling;
	unsigned _samplingThreadPort;
	unsigned _numberOfSamples;
	NSMutableArray* _samples;
	char _stacksFixed;
	id _delegate;
	double _timeSpentSamplingWithoutCFI;
	double _timeSpentSamplingWithCFI;
	unsigned _dispatchThreadSoftLimit;
	unsigned _dispatchThreadSoftLimitCount;
	unsigned _dispatchThreadHardLimit;
	unsigned _dispatchThreadHardLimitCount;

}
+(void)initialize;
+(id)sampleAllThreadsOfPID:(int)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 ;
+(id)sampleAllThreadsOfTask:(unsigned)arg1 symbolicate:(char)arg2 ;
-(id)initWithTask:(unsigned)arg1 ;
-(unsigned)mainThread;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(unsigned)sampleCount;
-(char)start;
-(char)stop;
-(id)initWithTask:(unsigned)arg1 options:(unsigned)arg2 ;
-(void)setTimeLimit:(double)arg1 ;
-(double)timeLimit;
-(int)pid;
-(id)samples;
-(id)outputString;
-(char)waitUntilDone;
-(void)forceStop;
-(id)initWithPID:(int)arg1 orTask:(unsigned)arg2 options:(unsigned)arg3 ;
-(void)_checkDispatchThreadLimits;
-(void)_makeHighPriority;
-(void)initializeSamplingContext:(char)arg1 ;
-(unsigned)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned)arg4 ;
-(void)_makeTimeshare;
-(id)initWithPID:(int)arg1 ;
-(id)sampleAllThreadsOnce;
-(void)_fixupStacks:(id)arg1 ;
-(void)_runSamplingThread;
-(id)threadNameForThread:(unsigned)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(char*)arg2 returnedThreadId:(unsigned long long*)arg3 ;
-(void)stopSampling;
-(id)stopSamplingAndReturnCallNode;
-(id)initWithPID:(int)arg1 options:(unsigned)arg2 ;
-(id)sampleThread:(unsigned)arg1 ;
-(void)setSampleLimit:(unsigned)arg1 ;
-(unsigned)sampleLimit;
-(void)setRecordThreadStates:(char)arg1 ;
-(void)setShouldOutputSignature:(char)arg1 ;
-(char)shouldOutputSignature;
-(CSTypeRef)symbolicator;
-(void)flushData;
-(id)threadNameForThread:(unsigned)arg1 ;
-(id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 ;
-(void)preloadSymbols;
-(void)sampleForDuration:(unsigned)arg1 interval:(unsigned)arg2 ;
-(id)createOutput;
-(void)writeOutput:(id)arg1 append:(char)arg2 ;
-(void)finalize;
-(void)setSamplingInterval:(double)arg1 ;
-(double)samplingInterval;
@end
