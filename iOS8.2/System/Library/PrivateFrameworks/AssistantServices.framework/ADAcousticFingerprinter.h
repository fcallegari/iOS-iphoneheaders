/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, ADAcousticFingerprinterDelegate;
@class NSObject, NSXPCConnection;

@interface ADAcousticFingerprinter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _asxConnection;
	id<ADAcousticFingerprinterDelegate> _delegate;
	unsigned _totalSampleCount;
	unsigned _nextFingerprintSampleNumber;
	int _sampleRate;
	double _interval;

}

@property (assign,nonatomic,__weak) id<ADAcousticFingerprinterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned)_samplesPerInterval;
-(void)setFingerprintInterval:(double)arg1 ;
-(void)appendPCMData:(id)arg1 sampleCount:(int)arg2 ;
-(void)setDelegate:(id<ADAcousticFingerprinterDelegate>)arg1 ;
-(id)init;
-(id<ADAcousticFingerprinterDelegate>)delegate;
-(void)flush;
-(void)reset;
-(id)_service;
-(void)setSampleRate:(int)arg1 ;
@end

