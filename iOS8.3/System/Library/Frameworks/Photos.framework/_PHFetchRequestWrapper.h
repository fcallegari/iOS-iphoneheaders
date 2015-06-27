/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/NSCopying.h>

@class NSFetchRequest, NSManagedObjectID;

@interface _PHFetchRequestWrapper : NSObject <NSCopying> {

	unsigned _hash;
	NSFetchRequest* _fetchRequest;
	NSManagedObjectID* _containerIdentifier;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                        //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * containerIdentifier;              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned hash;                                        //@synthesize hash=_hash - In the implementation block
-(id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSManagedObjectID *)containerIdentifier;
-(NSFetchRequest *)fetchRequest;
@end
