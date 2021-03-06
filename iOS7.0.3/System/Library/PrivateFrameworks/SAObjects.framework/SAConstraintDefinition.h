/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAConstraintDefinition : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * supportedValues; 
@property (nonatomic,copy) NSString * type; 
+(id)constraintDefinition;
+(id)constraintDefinitionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)supportedValues;
-(void)setSupportedValues:(id)arg1 ;
-(id)encodedClassName;
@end

