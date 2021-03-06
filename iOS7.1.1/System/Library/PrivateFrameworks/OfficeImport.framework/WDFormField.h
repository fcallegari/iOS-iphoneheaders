/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	bool mLinkAbsolute;
	bool mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(void)dealloc;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(bool)linkAbsolute;
-(void)setLinkAbsolute:(bool)arg1 ;
-(bool)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(bool)arg1 ;
-(id)namedLocation;
-(void)setNamedLocation:(id)arg1 ;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)macName;
-(void)setMacName:(id)arg1 ;
-(id)dosName;
-(void)setDosName:(id)arg1 ;
@end

