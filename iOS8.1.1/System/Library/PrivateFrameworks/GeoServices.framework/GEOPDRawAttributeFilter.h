/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPDRawAttributeFilter : PBCodable <NSCopying> {

	NSMutableArray* _keys;

}

@property (nonatomic,retain) NSMutableArray * keys;              //@synthesize keys=_keys - In the implementation block
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)keysCount;
-(void)clearKeys;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
