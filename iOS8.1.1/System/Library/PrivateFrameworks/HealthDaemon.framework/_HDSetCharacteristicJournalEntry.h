/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry {

	id _value;
	HKCharacteristicType* _dataType;

}

@property (nonatomic,readonly) id value;                                     //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) HKCharacteristicType * dataType;              //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(HKCharacteristicType *)dataType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)value;
-(BOOL)applyWithDaemon:(id)arg1 ;
-(id)initWithValue:(id)arg1 dataType:(id)arg2 ;
@end
