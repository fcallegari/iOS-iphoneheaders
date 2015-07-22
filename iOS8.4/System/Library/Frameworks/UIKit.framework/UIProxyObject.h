/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCoding.h>

@class NSString;

@interface UIProxyObject : NSObject <NSCoding> {

	NSString* proxiedObjectIdentifier;

}
+(void)addMappingFromIdentifier:(id)arg1 toObject:(id)arg2 forCoder:(id)arg3 ;
+(void)addMappings:(id)arg1 forCoder:(id)arg2 ;
+(void)removeMappingsForCoder:(id)arg1 ;
+(CFDictionaryRef)proxyDecodingMap;
+(id)mappedObjectForCoder:(id)arg1 withIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)proxiedObjectIdentifier;
-(void)setProxiedObjectIdentifier:(id)arg1 ;
@end
