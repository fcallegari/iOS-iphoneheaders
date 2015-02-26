/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache;

@interface FMFMapImageCache : NSObject {

	NSCache* __cache;

}

@property (nonatomic,retain) NSCache * _cache;              //@synthesize _cache=__cache - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)cachedMapForHandles:(id)arg1 ;
-(void)cacheMap:(id)arg1 forHandles:(id)arg2 ;
-(id)_keyForHandles:(id)arg1 ;
-(id)_imageForMap:(id)arg1 ;
-(NSCache *)_cache;
-(id)_orientationKey;
-(void)set_cache:(NSCache *)arg1 ;
@end
