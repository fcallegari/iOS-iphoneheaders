/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSString;

@interface NSSQLColumn : NSSQLProperty {

	NSString* _columnName;
	int _sqlType;
	unsigned _precision;
	int _scale;
	unsigned _fetchIndex;
	unsigned _slot;
	unsigned _allowAliasing;

}
-(id)initWithColumnName:(id)arg1 sqlType:(unsigned)arg2 ;
-(void)setAllowAliasing:(char)arg1 ;
-(char)allowAliasing;
-(unsigned)sqlType;
-(unsigned)slot;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setSQLType:(unsigned)arg1 ;
-(id)initForReadOnlyFetching;
-(void)_setColumnName:(id)arg1 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(unsigned)precision;
-(void)setPrecision:(unsigned)arg1 ;
-(unsigned)roughSizeEstimate;
-(unsigned)fetchIndex;
-(void)_setFetchIndex:(unsigned)arg1 ;
-(void)_setSlotIfDefault:(unsigned)arg1 ;
-(id)cloneForReadOnlyFetching;
-(void)dealloc;
-(id)description;
-(int)scale;
-(void)setScale:(int)arg1 ;
-(id)columnName;
@end
