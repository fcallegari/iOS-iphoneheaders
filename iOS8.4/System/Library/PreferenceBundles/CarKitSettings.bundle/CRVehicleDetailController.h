/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class CRPairedVehicleManager;

@interface CRVehicleDetailController : PSListController {

	BOOL _carPlayEnabled;
	CRPairedVehicleManager* _vehicleManager;

}

@property (nonatomic,retain) CRPairedVehicleManager * vehicleManager;              //@synthesize vehicleManager=_vehicleManager - In the implementation block
@property (assign,nonatomic) BOOL carPlayEnabled;                                  //@synthesize carPlayEnabled=_carPlayEnabled - In the implementation block
-(void)deleteVehicle;
-(void)setCarPlayEnabled:(BOOL)arg1 ;
-(BOOL)carPlayEnabled;
-(void)_popIfVisible;
-(void)dealloc;
-(void)setVehicleManager:(CRPairedVehicleManager *)arg1 ;
-(id)_carPlayVehicle;
-(CRPairedVehicleManager *)vehicleManager;
-(void)handlePairedVehiclesChanged:(id)arg1 ;
-(void)setCarPlayEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)carPlayEnabled:(id)arg1 ;
-(void)handleCarPlayAllowedDidChange;
-(id)specifiers;
@end

