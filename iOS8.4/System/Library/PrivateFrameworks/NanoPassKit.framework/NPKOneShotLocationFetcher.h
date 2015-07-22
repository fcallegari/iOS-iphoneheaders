/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, CLLocationManager, NSString;

@interface NPKOneShotLocationFetcher : NSObject <CLLocationManagerDelegate> {

	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _locationFixTimeout;
	CLLocationManager* _locationManager;

}

@property (nonatomic,copy) id completionHandler;                                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> locationFixTimeout;              //@synthesize locationFixTimeout=_locationFixTimeout - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                           //@synthesize locationManager=_locationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationFixTimeout:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)locationFixTimeout;
-(void)fetchLocationWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end
