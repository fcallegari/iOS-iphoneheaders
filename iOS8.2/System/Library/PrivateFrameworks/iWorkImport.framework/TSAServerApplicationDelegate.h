/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSABaseApplicationDelegate;

@interface TSAServerApplicationDelegate : NSObject {

	TSABaseApplicationDelegate* _baseApplicationDelegate;

}

@property (nonatomic,retain) TSABaseApplicationDelegate * baseApplicationDelegate;              //@synthesize baseApplicationDelegate=_baseApplicationDelegate - In the implementation block
+(id)sharedDelegate;
-(void)setBaseApplicationDelegate:(TSABaseApplicationDelegate *)arg1 ;
-(id)initWithBaseApplicationDelegate:(id)arg1 ;
-(TSABaseApplicationDelegate *)baseApplicationDelegate;
-(id)init;
@end

