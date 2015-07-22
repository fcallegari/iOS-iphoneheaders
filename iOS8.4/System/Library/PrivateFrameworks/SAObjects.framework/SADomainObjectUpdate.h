/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SADomainObjectCommand.h>

@class SADomainObject, NSString;

@interface SADomainObjectUpdate : SABaseClientBoundCommand <SADomainObjectCommand>

@property (nonatomic,retain) SADomainObject * addFields; 
@property (nonatomic,retain) SADomainObject * identifier; 
@property (nonatomic,retain) SADomainObject * removeFields; 
@property (nonatomic,retain) SADomainObject * setFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domainObjectUpdate;
+(id)domainObjectUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SADomainObject *)identifier;
-(void)setIdentifier:(SADomainObject *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SADomainObject *)addFields;
-(void)setAddFields:(SADomainObject *)arg1 ;
-(SADomainObject *)removeFields;
-(void)setRemoveFields:(SADomainObject *)arg1 ;
-(SADomainObject *)setFields;
-(void)setSetFields:(SADomainObject *)arg1 ;
@end
