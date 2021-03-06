/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {

	int _size;
	NSString* _url;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;              //@synthesize url=_url - In the implementation block
-(void)dealloc;
-(int)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSize:(int)arg1 ;
-(id)dictionaryRepresentation;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(BOOL)hasUrl;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

