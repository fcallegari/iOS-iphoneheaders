/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <VectorKit/NSCopying.h>

@class NSMutableArray;

@interface VKPGenericShieldStylePack : PBCodable <NSCopying> {

	NSMutableArray* _genericShields;
	NSMutableArray* _textureAtlas;

}

@property (nonatomic,retain) NSMutableArray * textureAtlas;                //@synthesize textureAtlas=_textureAtlas - In the implementation block
@property (nonatomic,retain) NSMutableArray * genericShields;              //@synthesize genericShields=_genericShields - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)genericShields;
-(NSMutableArray *)textureAtlas;
-(void)setTextureAtlas:(NSMutableArray *)arg1 ;
-(void)setGenericShields:(NSMutableArray *)arg1 ;
-(void)addTextureAtlas:(id)arg1 ;
-(void)addGenericShield:(id)arg1 ;
-(unsigned)textureAtlasCount;
-(void)clearTextureAtlas;
-(id)textureAtlasAtIndex:(unsigned)arg1 ;
-(unsigned)genericShieldsCount;
-(void)clearGenericShields;
-(id)genericShieldAtIndex:(unsigned)arg1 ;
@end
