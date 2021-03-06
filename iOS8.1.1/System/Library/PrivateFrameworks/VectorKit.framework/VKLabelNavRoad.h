/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKLabelNavFeature.h>

@class NSString, VKLabelTile, VKLabelNavJunction, VKLabelNavRoadLabel;

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {

	VKLabelTile* _tile;
	SCD_Struct_VK407* _data;
	unsigned long long _vertexIndexA;
	unsigned long long _vertexIndexB;
	SCD_Struct_VK445* _junctionA;
	SCD_Struct_VK445* _junctionB;
	VKLabelNavJunction* _navJunctionA;
	vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >* _simplifiedPoints;
	Matrix<float, 2, 1> _direction;
	BOOL _isRoadLabelUnique;
	BOOL _isOnRoute;
	BOOL _isStartOfRoadName;
	BOOL _isInGuidance;
	BOOL _isGuidanceStepStart;
	BOOL _areLabelsDisabled;
	PolylineCoordinate _routeOffset;
	float _routeCrossProduct;
	long long _intraRoadPriority;
	double _length;
	NSString* _name;
	NSString* _shieldDisplayGroup;
	NSString* _shieldGroup;
	VKLabelNavRoadLabel* _roadSign;
	VKLabelNavRoadLabel* _roadShield;
	BOOL _areNavStylesInitialized;
	BOOL _hasVisibleSigns;
	BOOL _hasVisibleShields;
	BOOL _suppressRoadSignIfShieldPresent;

}

@property (nonatomic,readonly) VKLabelTile * tile;                                //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) const char* cstrName; 
@property (nonatomic,readonly) NSString * shieldDisplayGroup; 
@property (nonatomic,readonly) NSString * shieldGroup; 
@property (nonatomic,readonly) SCD_Struct_VK445* junctionB;                       //@synthesize junctionB=_junctionB - In the implementation block
@property (nonatomic,readonly) VKLabelNavJunction * navJunctionA;                 //@synthesize navJunctionA=_navJunctionA - In the implementation block
@property (assign,nonatomic) Matrix<float direction;                              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL isOnRoute;                                      //@synthesize isOnRoute=_isOnRoute - In the implementation block
@property (assign,nonatomic) BOOL isStartOfRoadName;                              //@synthesize isStartOfRoadName=_isStartOfRoadName - In the implementation block
@property (assign,nonatomic) BOOL isInGuidance;                                   //@synthesize isInGuidance=_isInGuidance - In the implementation block
@property (assign,nonatomic) BOOL isGuidanceStepStart;                            //@synthesize isGuidanceStepStart=_isGuidanceStepStart - In the implementation block
@property (assign,nonatomic) BOOL areLabelsDisabled;                              //@synthesize areLabelsDisabled=_areLabelsDisabled - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeOffset;                      //@synthesize routeOffset=_routeOffset - In the implementation block
@property (assign,nonatomic) float routeCrossProduct;                             //@synthesize routeCrossProduct=_routeCrossProduct - In the implementation block
@property (assign,nonatomic) long long intraRoadPriority;                         //@synthesize intraRoadPriority=_intraRoadPriority - In the implementation block
@property (assign,nonatomic) BOOL isRoadLabelUnique;                              //@synthesize isRoadLabelUnique=_isRoadLabelUnique - In the implementation block
@property (nonatomic,readonly) BOOL isAwayFromRoute; 
@property (nonatomic,readonly) BOOL suppressRoadSignIfShieldPresent;              //@synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent - In the implementation block
@property (nonatomic,readonly) BOOL isRamp; 
@property (nonatomic,readonly) BOOL isOnewayToJunction; 
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) long long roadSignAlignment; 
-(void)dealloc;
-(id)description;
-(double)length;
-(NSString *)name;
-(void)setDirection:(Matrix<float)arg1 ;
-(Matrix<float)direction;
-(PolylineCoordinate)routeOffset;
-(void)setRouteOffset:(PolylineCoordinate)arg1 ;
-(BOOL)hasShield;
-(BOOL)isRamp;
-(BOOL)isAwayFromRoute;
-(void)_worldRoadPoints:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg1 ;
-(BOOL)isOnRoute;
-(BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(VKPoint*)arg2 ;
-(id)labelWithType:(BOOL)arg1 ;
-(float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(VKPoint)arg2 rayVector:(Matrix<float, 2, 1>)arg3 roadGraph:(id)arg4 ;
-(BOOL)_findLabelAnchorPoint:(VKPoint*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6 ;
-(long long)roadSignAlignment;
-(id)_newLabelWithNavContext:(NavContext*)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(VKPoint)arg3 alignment:(long long)arg4 ;
-(void)clearRoadSign;
-(NSString *)shieldDisplayGroup;
-(BOOL)isStartOfRoadName;
-(BOOL)isInGuidance;
-(long long)intraRoadPriority;
-(BOOL)isGuidanceStepStart;
-(id)initWithRoadEdge:(const SCD_Struct_VK448*)arg1 navJunctionA:(id)arg2 routeOffset:(PolylineCoordinate)arg3 tile:(id)arg4 ;
-(const char*)cstrName;
-(void)prepareStyleVarsWithContext:(NavContext*)arg1 ;
-(int)roadClass;
-(BOOL)isOnewayToJunction;
-(void)getRoadEdge:(SCD_Struct_VK448*)arg1 ;
-(BOOL)matchesRoadEdge:(const SCD_Struct_VK448*)arg1 ;
-(BOOL)matchesRoad:(id)arg1 ;
-(BOOL)hasVisibleSigns;
-(BOOL)hasVisibleShields;
-(NSString *)shieldGroup;
-(void)createLabelWithNavContext:(NavContext*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7 ;
-(void)recreateRoadSignWithAlignment:(long long)arg1 navContext:(NavContext*)arg2 ;
-(void)appendSimplifiedWorldRoadPoints:(vector<gm::Matrix<double, 2, 1>, std::__1::allocator<gm::Matrix<double, 2, 1> > >*)arg1 ;
-(VKLabelTile *)tile;
-(void)setIsOnRoute:(BOOL)arg1 ;
-(void)setIsStartOfRoadName:(BOOL)arg1 ;
-(void)setIsInGuidance:(BOOL)arg1 ;
-(void)setIsGuidanceStepStart:(BOOL)arg1 ;
-(float)routeCrossProduct;
-(void)setRouteCrossProduct:(float)arg1 ;
-(SCD_Struct_VK445*)junctionB;
-(void)setIntraRoadPriority:(long long)arg1 ;
-(BOOL)areLabelsDisabled;
-(void)setAreLabelsDisabled:(BOOL)arg1 ;
-(BOOL)isRoadLabelUnique;
-(void)setIsRoadLabelUnique:(BOOL)arg1 ;
-(VKLabelNavJunction *)navJunctionA;
-(BOOL)suppressRoadSignIfShieldPresent;
@end

