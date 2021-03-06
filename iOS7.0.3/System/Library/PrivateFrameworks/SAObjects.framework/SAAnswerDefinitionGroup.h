/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * definitionEntries; 
@property (nonatomic,copy) NSString * origin; 
@property (nonatomic,copy) NSString * partOfSpeech; 
@property (nonatomic,copy) NSArray * synonyms; 
+(id)definitionGroup;
+(id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)origin;
-(void)setOrigin:(id)arg1 ;
-(id)encodedClassName;
-(id)definitionEntries;
-(void)setDefinitionEntries:(id)arg1 ;
-(id)partOfSpeech;
-(void)setPartOfSpeech:(id)arg1 ;
-(id)synonyms;
-(void)setSynonyms:(id)arg1 ;
@end

