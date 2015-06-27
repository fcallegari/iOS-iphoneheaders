/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult {

	NSString* _string;
	float _rotation;

}

@property (readonly) NSString * string;              //@synthesize string=_string - In the implementation block
@property (readonly) float rotation;                 //@synthesize rotation=_rotation - In the implementation block
-(void)dealloc;
-(NSString *)string;
-(float)rotation;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(float)arg3 ;
@end
