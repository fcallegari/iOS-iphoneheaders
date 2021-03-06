/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface PersistentSearchRequestHistoryItem : PBCodable <NSCopying> {

	double _latitude;
	double _latitudeSpan;
	double _longitude;
	double _longitudeSpan;
	double _position;
	double _timestamp;
	NSString* _displayQuery;
	NSString* _location;
	GEOPlaceSearchRequest* _repeatRequest;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	NSString* _syncIdentifier;
	bool _withMultipleLocations;
	SCD_Struct_Pe8 _has;

}

@property (nonatomic,readonly) bool hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) bool hasDisplayQuery; 
@property (nonatomic,retain) NSString * displayQuery;                            //@synthesize displayQuery=_displayQuery - In the implementation block
@property (nonatomic,readonly) bool hasLocation; 
@property (nonatomic,retain) NSString * location;                                //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) bool hasWithMultipleLocations; 
@property (assign,nonatomic) bool withMultipleLocations;                         //@synthesize withMultipleLocations=_withMultipleLocations - In the implementation block
@property (assign,nonatomic) bool hasLatitude; 
@property (assign,nonatomic) double latitude;                                    //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) bool hasLongitude; 
@property (assign,nonatomic) double longitude;                                   //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) bool hasLatitudeSpan; 
@property (assign,nonatomic) double latitudeSpan;                                //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (assign,nonatomic) bool hasLongitudeSpan; 
@property (assign,nonatomic) double longitudeSpan;                               //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) bool hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) bool hasRepeatRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * repeatRequest;              //@synthesize repeatRequest=_repeatRequest - In the implementation block
@property (nonatomic,readonly) bool hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                          //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) bool hasPosition; 
@property (assign,nonatomic) double position;                                    //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) bool hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
-(void)setHasWithMultipleLocations:(bool)arg1 ;
-(bool)hasDisplayQuery;
-(void)setHasPosition:(bool)arg1 ;
-(bool)hasResponse;
-(bool)hasRequest;
-(id)displayQuery;
-(id)repeatRequest;
-(void)setWithMultipleLocations:(bool)arg1 ;
-(double)longitudeSpan;
-(bool)hasSyncIdentifier;
-(bool)hasWithMultipleLocations;
-(bool)withMultipleLocations;
-(double)latitudeSpan;
-(void)setDisplayQuery:(id)arg1 ;
-(id)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1 ;
-(void)setRepeatRequest:(id)arg1 ;
-(void)setLatitudeSpan:(double)arg1 ;
-(void)setHasLatitudeSpan:(bool)arg1 ;
-(void)setLongitudeSpan:(double)arg1 ;
-(void)setHasLongitudeSpan:(bool)arg1 ;
-(bool)hasRepeatRequest;
-(bool)hasLatitudeSpan;
-(bool)hasLongitudeSpan;
-(void)setResponse:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setRequest:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)response;
-(id)request;
-(id)location;
-(id)dictionaryRepresentation;
-(void).cxx_destruct;
-(bool)hasLatitude;
-(bool)hasLongitude;
-(bool)hasPosition;
-(void)setHasLatitude:(bool)arg1 ;
-(void)setHasLongitude:(bool)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasLocation;
-(void)setLocation:(id)arg1 ;
-(void)setHasTimestamp:(bool)arg1 ;
-(bool)hasTimestamp;
@end

