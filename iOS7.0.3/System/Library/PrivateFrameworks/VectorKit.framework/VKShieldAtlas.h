/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, VKPShieldPack, VKObjectPool;

@interface VKShieldAtlas : NSObject {

	NSMapTable* _atlasToImages;
	VKPShieldPack* _shieldPack;
	VKObjectPool* _artworkPool;

}
-(void)dealloc;
-(void)purge;
-(id)initWithShieldPack:(id)arg1 ;
-(id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned)arg2 contentScale:(float)arg3 extraScale:(float)arg4 size:(int)arg5 numberOfLines:(unsigned)arg6 ;
@end

