/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) SCD_Struct_CL1 center; 
@property (nonatomic,readonly) double radius; 
+(id)circularRegionFromMapRegion:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCenter:(SCD_Struct_CL1)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CL1)center;
-(double)radius;
-(BOOL)containsCoordinate:(SCD_Struct_CL1)arg1 ;
@end

