/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface WFTagFactory : NSObject {

	NSMutableDictionary* sharedTags;

}
+(id)tagsForWebpage:(id)arg1 ;
+(id)defaultFactory;
-(void)dealloc;
-(id)init;
-(id)tagWithClass:(Class)arg1 webpage:(id)arg2 ;
@end

