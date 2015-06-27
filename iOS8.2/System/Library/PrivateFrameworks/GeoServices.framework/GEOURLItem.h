/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOMapItemStorage, GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying> {

	GEOMapItemStorage* _mapItemStorage;
	GEOPlace* _place;
	char _currentLocation;
	SCD_Struct_GE4 _has;

}

@property (nonatomic,readonly) char hasPlace; 
@property (nonatomic,retain) GEOPlace * place;                                //@synthesize place=_place - In the implementation block
@property (assign,nonatomic) char hasCurrentLocation; 
@property (assign,nonatomic) char currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) char hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
-(char)currentLocation;
-(void)setCurrentLocation:(char)arg1 ;
-(id)mapItem;
-(void)setMapItem:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(void)setPlace:(GEOPlace *)arg1 ;
-(GEOPlace *)place;
-(char)hasPlace;
-(char)hasMapItemStorage;
-(void)setHasCurrentLocation:(char)arg1 ;
-(char)hasCurrentLocation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
