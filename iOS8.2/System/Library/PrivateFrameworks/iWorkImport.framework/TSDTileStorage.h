/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCacheDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCache, TSUPointerKeyDictionary, NSObject, NSMutableDictionary, NSString;

@interface TSDTileStorage : NSObject <NSCacheDelegate> {

	NSCache* mCache;
	TSUPointerKeyDictionary* mReverseCacheKeys;
	NSObject*<OS_dispatch_semaphore> mReverseCacheKeysLock;
	NSObject*<OS_dispatch_queue> mCacheKeysQueue;
	NSMutableDictionary* mCacheKeysByBucket;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAllContents;
-(id)contentsInRect:(CGRect)arg1 contentsScale:(float)arg2 forTileAtLocation:(NSRange)arg3 inBucket:(id)arg4 ;
-(void)storeContents:(id)arg1 inRect:(CGRect)arg2 contentsScale:(float)arg3 forTileAtLocation:(NSRange)arg4 inBucket:(id)arg5 ;
-(void)removeImagesInBucket:(id)arg1 ;
-(id)p_cacheKeyForImageInRect:(CGRect)arg1 contentsScale:(float)arg2 tileLocation:(NSRange)arg3 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

