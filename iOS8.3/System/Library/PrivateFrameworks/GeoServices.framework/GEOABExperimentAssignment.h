/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:39 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOABExperimentAssignment : PBCodable <NSCopying> {

	int _placeRequestType;
	NSString* _querySubstring;
	int _serviceType;
	SCD_Struct_GE6 _has;

}

@property (assign,nonatomic) char hasServiceType; 
@property (assign,nonatomic) int serviceType;                        //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) char hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                   //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) char hasQuerySubstring; 
@property (nonatomic,retain) NSString * querySubstring;              //@synthesize querySubstring=_querySubstring - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setServiceType:(int)arg1 ;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(char)arg1 ;
-(char)hasPlaceRequestType;
-(int)placeRequestType;
-(int)serviceType;
-(char)hasQuerySubstring;
-(NSString *)querySubstring;
-(void)setHasServiceType:(char)arg1 ;
-(char)hasServiceType;
-(void)setQuerySubstring:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

