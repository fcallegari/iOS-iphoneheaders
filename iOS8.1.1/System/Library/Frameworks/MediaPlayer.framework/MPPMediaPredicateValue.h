/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaPlayer/NSCopying.h>

@class NSData, NSString;

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {

	double _doublePredicateValue;
	long long _integerPredicateValue;
	NSData* _bytesPredicateValue;
	float _floatPredicateValue;
	NSString* _stringPredicateValue;
	int _type;
	BOOL _boolPredicateValue;
	SCD_Struct_MP18 _has;

}

@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasIntegerPredicateValue; 
@property (assign,nonatomic) long long integerPredicateValue;              //@synthesize integerPredicateValue=_integerPredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasDoublePredicateValue; 
@property (assign,nonatomic) double doublePredicateValue;                  //@synthesize doublePredicateValue=_doublePredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasFloatPredicateValue; 
@property (assign,nonatomic) float floatPredicateValue;                    //@synthesize floatPredicateValue=_floatPredicateValue - In the implementation block
@property (assign,nonatomic) BOOL hasBoolPredicateValue; 
@property (assign,nonatomic) BOOL boolPredicateValue;                      //@synthesize boolPredicateValue=_boolPredicateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasStringPredicateValue; 
@property (nonatomic,retain) NSString * stringPredicateValue;              //@synthesize stringPredicateValue=_stringPredicateValue - In the implementation block
@property (nonatomic,readonly) BOOL hasBytesPredicateValue; 
@property (nonatomic,retain) NSData * bytesPredicateValue;                 //@synthesize bytesPredicateValue=_bytesPredicateValue - In the implementation block
-(long long)integerPredicateValue;
-(double)doublePredicateValue;
-(float)floatPredicateValue;
-(BOOL)boolPredicateValue;
-(NSString *)stringPredicateValue;
-(NSData *)bytesPredicateValue;
-(void)setIntegerPredicateValue:(long long)arg1 ;
-(void)setFloatPredicateValue:(float)arg1 ;
-(void)setDoublePredicateValue:(double)arg1 ;
-(void)setStringPredicateValue:(NSString *)arg1 ;
-(void)setBytesPredicateValue:(NSData *)arg1 ;
-(BOOL)hasIntegerPredicateValue;
-(BOOL)hasDoublePredicateValue;
-(BOOL)hasFloatPredicateValue;
-(BOOL)hasBoolPredicateValue;
-(void)setBoolPredicateValue:(BOOL)arg1 ;
-(BOOL)hasStringPredicateValue;
-(BOOL)hasBytesPredicateValue;
-(void)setHasIntegerPredicateValue:(BOOL)arg1 ;
-(void)setHasDoublePredicateValue:(BOOL)arg1 ;
-(void)setHasFloatPredicateValue:(BOOL)arg1 ;
-(void)setHasBoolPredicateValue:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
