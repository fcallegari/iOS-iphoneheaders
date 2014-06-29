/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:33:46 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface CRPassCollectionResponse : PBCodable <NSCopying> {

	NSString* _msg;
	BOOL _success;

}

@property (assign,nonatomic) BOOL success;                //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasMsg; 
@property (nonatomic,retain) NSString * msg;              //@synthesize msg=_msg - In the implementation block
-(void)setMsg:(id)arg1 ;
-(BOOL)hasMsg;
-(id)msg;
-(BOOL)success;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
@end
