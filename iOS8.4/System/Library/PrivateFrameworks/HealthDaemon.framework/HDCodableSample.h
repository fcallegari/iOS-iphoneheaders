/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class HDCodableObject;

@interface HDCodableSample : PBCodable <NSCopying> {

	long long _dataType;
	double _endDate;
	double _startDate;
	HDCodableObject* _object;
	SCD_Struct_HD8 _has;

}

@property (nonatomic,readonly) BOOL hasObject; 
@property (nonatomic,retain) HDCodableObject * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) BOOL hasDataType; 
@property (assign,nonatomic) long long dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                        //@synthesize endDate=_endDate - In the implementation block
-(id)decodedStartDate;
-(id)decodedEndDate;
-(id)decodedCategoryType;
-(id)decodedQuantityType;
-(id)decodedWorkoutType;
-(id)decodedCorrelationType;
-(id)_decodedObjectTypeOfClass:(Class)arg1 ;
-(long long)dataType;
-(void)setDataType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HDCodableObject *)object;
-(void)setObject:(HDCodableObject *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasObject;
-(void)setHasDataType:(BOOL)arg1 ;
-(BOOL)hasDataType;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setStartDate:(double)arg1 ;
-(void)setEndDate:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)startDate;
-(double)endDate;
@end
