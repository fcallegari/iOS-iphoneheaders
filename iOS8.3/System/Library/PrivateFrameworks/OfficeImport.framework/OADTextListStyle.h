/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;

}
-(void)dealloc;
-(id)init;
-(id)propertiesForListLevel:(unsigned)arg1 ;
-(id)defaultProperties;
-(void)removeUnnecessaryOverrides;
-(id)initWithDefaults;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)flatten;
-(void)setPropertiesForListLevel:(unsigned)arg1 properties:(id)arg2 ;
@end

