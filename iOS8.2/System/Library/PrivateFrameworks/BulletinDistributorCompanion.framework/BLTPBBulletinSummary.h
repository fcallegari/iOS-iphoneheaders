/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:30 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <BulletinDistributorCompanion/NSCopying.h>

@class NSMutableArray, NSString;

@interface BLTPBBulletinSummary : PBCodable <NSCopying> {

	unsigned _destinations;
	NSMutableArray* _keys;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;

}

@property (nonatomic,readonly) char hasPublisherBulletinID; 
@property (nonatomic,retain) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,readonly) char hasRecordID; 
@property (nonatomic,retain) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (assign,nonatomic) unsigned destinations;                       //@synthesize destinations=_destinations - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                       //@synthesize keys=_keys - In the implementation block
-(void)setSectionID:(NSString *)arg1 ;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(NSString *)publisherBulletinID;
-(void)setDestinations:(unsigned)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(unsigned)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(char)hasPublisherBulletinID;
-(char)hasRecordID;
-(NSString *)sectionID;
-(unsigned)destinations;
-(unsigned)keysCount;
-(void)clearKeys;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
