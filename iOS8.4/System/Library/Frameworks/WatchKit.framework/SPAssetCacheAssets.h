/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject {

	NSMutableArray* _assets;

}

@property (nonatomic,retain) NSMutableArray * assets;              //@synthesize assets=_assets - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(void)addAsset:(id)arg1 ;
-(id)init;
-(NSMutableArray *)assets;
-(void)setAssets:(NSMutableArray *)arg1 ;
@end

