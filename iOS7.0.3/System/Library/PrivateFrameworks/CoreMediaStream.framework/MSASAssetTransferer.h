/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/MMCSEngineDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, MMCSEngine, MSAlbumSharingDaemon, MSASPersonModel, MSBackoffManager, NSObject;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate> {

	BOOL _hasShutDown;
	id _delegate;
	NSString* _personID;
	MMCSEngine* _engine;
	MSAlbumSharingDaemon* _daemon;
	MSASPersonModel* _model;
	MSBackoffManager* _backoffManager;
	int _maxBatchCount;
	int _maxRetryCount;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSObject<OS_dispatch_queue>* _eventQueue;
	double _maxMMCSTokenValidityTimeInterval;

}

@property (assign,nonatomic,__weak) id delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * personID;                                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) MMCSEngine * engine;                                 //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) double maxMMCSTokenValidityTimeInterval;               //@synthesize maxMMCSTokenValidityTimeInterval=_maxMMCSTokenValidityTimeInterval - In the implementation block
@property (assign,nonatomic,__weak) MSAlbumSharingDaemon * daemon;                  //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic,__weak) MSASPersonModel * model;                        //@synthesize model=_model - In the implementation block
@property (assign,nonatomic,__weak) MSBackoffManager * backoffManager;              //@synthesize backoffManager=_backoffManager - In the implementation block
@property (nonatomic,copy) NSString * focusAlbumGUID;                               //@synthesize focusAlbumGUID=_focusAlbumGUID - In the implementation block
@property (nonatomic,copy) NSString * focusAssetCollectionGUID;                     //@synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID - In the implementation block
@property (assign,nonatomic) int maxBatchCount;                                     //@synthesize maxBatchCount=_maxBatchCount - In the implementation block
@property (assign,nonatomic) int maxRetryCount;                                     //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;               //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) BOOL hasShutDown;                                      //@synthesize hasShutDown=_hasShutDown - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)model;
-(void)setDaemon:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 ;
-(id)daemon;
-(id)engine;
-(id)workQueue;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setFocusAlbumGUID:(id)arg1 ;
-(void)setFocusAssetCollectionGUID:(id)arg1 ;
-(void)cancelCompletionBlock:(/*^block*/ id)arg1 ;
-(id)focusAssetCollectionGUID;
-(void)setWorkQueue:(id)arg1 ;
-(id)initWithPersonID:(id)arg1 eventQueue:(id)arg2 ;
-(void)setModel:(id)arg1 ;
-(void)setBackoffManager:(id)arg1 ;
-(void)workQueueRetryOutstandingActivities;
-(void)setMaxBatchCount:(int)arg1 ;
-(void)setMaxRetryCount:(int)arg1 ;
-(void)setMaxMMCSTokenValidityTimeInterval:(double)arg1 ;
-(id)eventQueue;
-(void)setHasShutDown:(BOOL)arg1 ;
-(void)stopCompletionBlock:(/*^block*/ id)arg1 ;
-(id)_canceledError;
-(BOOL)hasShutDown;
-(id)focusAlbumGUID;
-(void)setEventQueue:(id)arg1 ;
-(void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2 ;
-(void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 ;
-(void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4 ;
-(void)didFinishGettingAllAssets;
-(void)didFinishPuttingAllAssets;
-(void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3 ;
-(BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2 ;
-(void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3 ;
-(void)_sendDidIdleNotification;
-(void)workQueueStop;
-(void)workQueueShutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(int)maxBatchCount;
-(id)_missingURLError;
-(unsigned long long)workQueueNextItemID;
-(id)backoffManager;
-(int)maxRetryCount;
-(id)_pathForPersonID:(id)arg1 ;
-(void)workQueueCancel;
-(id)_missingMMCSTokenError;
-(double)workQueueMaxMMCSTokenValidityTimeInterval;
-(id)_MMCSTokenTooOldError;
-(void)_rereadPerformanceLoggingSetting;
-(double)maxMMCSTokenValidityTimeInterval;
-(id)personID;
-(void)setPersonID:(id)arg1 ;
-(void)retryOutstandingActivities;
-(void).cxx_destruct;
@end

