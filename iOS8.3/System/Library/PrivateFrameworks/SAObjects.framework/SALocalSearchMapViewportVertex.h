/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchMapViewportVertex : AceObject <SAAceSerializable>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mapViewportVertex;
+(id)mapViewportVertexWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)encodedClassName;
@end

