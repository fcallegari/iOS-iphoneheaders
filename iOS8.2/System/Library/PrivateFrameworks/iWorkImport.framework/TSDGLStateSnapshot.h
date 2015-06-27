/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSDGLStateSnapshot : NSObject <NSCopying> {

	unsigned _currentGL_ACTIVE_TEXTURE;
	SCD_Struct_TS464 _currentGL_VIEWPORT;

}

@property (assign,nonatomic) unsigned currentGL_ACTIVE_TEXTURE;                //@synthesize currentGL_ACTIVE_TEXTURE=_currentGL_ACTIVE_TEXTURE - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS464 currentGL_VIEWPORT;              //@synthesize currentGL_VIEWPORT=_currentGL_VIEWPORT - In the implementation block
-(void)updateWithCurrentGLState;
-(void)updateWithGLStateSnapshot:(id)arg1 ;
-(unsigned)currentGL_ACTIVE_TEXTURE;
-(SCD_Struct_TS464)currentGL_VIEWPORT;
-(void)setCurrentGL_ACTIVE_TEXTURE:(unsigned)arg1 ;
-(void)setCurrentGL_VIEWPORT:(SCD_Struct_TS464)arg1 ;
-(void)validateGL_ACTIVE_TEXTURE;
-(void)validateGL_VIEWPORT;
-(id)initWithCurrentGLState;
-(void)validateCurrentState;
-(void)validateCurrentStateInGetter;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
