/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CUTPowerAssertion : NSObject {

	unsigned _assertion;
	NSString* _identifier;
	NSArray* _stack;

}
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
@end
