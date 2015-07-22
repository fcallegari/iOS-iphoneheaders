/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:34 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _opaqueGeoId;
	GEOLatLng* _center;
	SCD_Struct_GE5 _has;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueGeoId; 
@property (assign,nonatomic) unsigned long long opaqueGeoId;                 //@synthesize opaqueGeoId=_opaqueGeoId - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasCenter;
-(PBUnknownFields *)unknownFields;
-(void)setOpaqueGeoId:(unsigned long long)arg1 ;
-(void)setHasOpaqueGeoId:(BOOL)arg1 ;
-(BOOL)hasOpaqueGeoId;
-(unsigned long long)opaqueGeoId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
