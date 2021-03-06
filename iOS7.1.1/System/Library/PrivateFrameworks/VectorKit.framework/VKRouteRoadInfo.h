/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString;

@interface VKRouteRoadInfo : NSObject {

	NSString* _name;
	NSString* _shieldGroup;
	PolylineCoordinate _routeOffset;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shieldGroup;                      //@synthesize shieldGroup=_shieldGroup - In the implementation block
@property (nonatomic,readonly) PolylineCoordinate routeOffset;              //@synthesize routeOffset=_routeOffset - In the implementation block
-(void)dealloc;
-(id)name;
-(id).cxx_construct;
-(PolylineCoordinate)routeOffset;
-(id)shieldGroup;
-(id)initWithName:(id)arg1 shieldGroup:(id)arg2 offset:(PolylineCoordinate)arg3 ;
@end

