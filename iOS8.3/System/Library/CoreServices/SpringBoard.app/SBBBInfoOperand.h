/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBBBSectionInfo, SBBBBulletinInfo;

@interface SBBBInfoOperand : NSObject {

	SBBBSectionInfo* _section;
	SBBBBulletinInfo* _bulletin;

}

@property (nonatomic,readonly) SBBBSectionInfo * section;                                //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) SBBBBulletinInfo * bulletin;                              //@synthesize bulletin=_bulletin - In the implementation block
@property (getter=isSectionOperand,nonatomic,readonly) char sectionOperand; 
+(id)operandWithSection:(id)arg1 bulletin:(id)arg2 ;
-(char)isSectionOperand;
-(id)initWithSection:(id)arg1 bulletin:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(SBBBSectionInfo *)section;
-(SBBBBulletinInfo *)bulletin;
@end
