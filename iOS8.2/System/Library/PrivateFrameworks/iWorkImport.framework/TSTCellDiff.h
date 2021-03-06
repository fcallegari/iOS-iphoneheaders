/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/NSCopying.h>

@class TSSPropertyMap;

@interface TSTCellDiff : TSPObject <NSCopying> {

	TSSPropertyMap* mPropertyMapToSet;
	TSSPropertyMap* mPropertyMapToReset;
	TSSPropertyMap* _propertyMapToSet;
	TSSPropertyMap* _propertyMapToReset;

}

@property (nonatomic,readonly) TSSPropertyMap * propertyMapToSet;                //@synthesize propertyMapToSet=_propertyMapToSet - In the implementation block
@property (nonatomic,readonly) TSSPropertyMap * propertyMapToReset;              //@synthesize propertyMapToReset=_propertyMapToReset - In the implementation block
+(id)cellDiff;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setIntValue:(int)arg1 forProperty:(int)arg2 ;
-(void)setFloatValue:(float)arg1 forProperty:(int)arg2 ;
-(char)setsProperty:(int)arg1 ;
-(void)setPropertiesFromMap:(id)arg1 ;
-(char)resetsProperty:(int)arg1 ;
-(void)resetObject:(id)arg1 forProperty:(int)arg2 ;
-(void)resetIntValue:(int)arg1 forProperty:(int)arg2 ;
-(void)resetFloatValue:(float)arg1 forProperty:(int)arg2 ;
-(id)objectApplyingDiffToObject:(id)arg1 andUpdateInverse:(id)arg2 ;
-(TSSPropertyMap *)propertyMapToSet;
-(TSSPropertyMap *)propertyMapToReset;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setObject:(id)arg1 forProperty:(int)arg2 ;
@end

