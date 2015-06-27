/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:47 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/NSFileProvider.h>

@protocol OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSString, BRCAccountSession, NSMutableDictionary, NSObject;

@interface BRCFileProvider : NSObject <NSFileProvider> {

	BRCAccountSession* _session;
	NSURL* _url;
	NSOperationQueue* _queue;
	NSMutableDictionary* _presentersIDsByURL;
	NSObject*<OS_dispatch_queue> _privQueue;

}

@property (nonatomic,retain) BRCAccountSession * session;                          //@synthesize session=_session - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * _providedItemsURL; 
@property (readonly) NSOperationQueue * _providedItemsOperationQueue; 
@property (copy,readonly) NSString * _fileReactorID; 
+(id)prettyNameForFilePresenterID:(id)arg1 ;
-(void)suspend;
-(void)resume;
-(BRCAccountSession *)session;
-(void)dumpToContext:(id)arg1 ;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(id)initWithURL:(id)arg1 name:(id)arg2 ;
-(id)_keyForURL:(id)arg1 andID:(id)arg2 ;
-(void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3 ;
-(void)_unregisterPresenterForItemAtURL:(id)arg1 key:(id)arg2 ;
-(id)_keyForURL:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg1 didLosePresenterWithID:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 didGainPresenterWithID:(id)arg2 ;
-(void)_provideItemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_providedItemAtURL:(id)arg1 withPresenterWithID:(id)arg2 didMoveToURL:(id)arg3 ;
-(NSURL *)_providedItemsURL;
-(NSOperationQueue *)_providedItemsOperationQueue;
@end
