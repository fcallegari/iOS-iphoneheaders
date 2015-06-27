/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SoftwareProperties;

@interface InstallSoftwareOperation : ISOperation {

	SoftwareProperties* _softwareProperties;

}

@property (readonly) SoftwareProperties * softwareProperties; 
-(char)_installPackage:(id*)arg1 ;
-(id)_newInstallationOptions;
-(id)initWithSoftwareProperties:(id)arg1 ;
-(SoftwareProperties *)softwareProperties;
-(void)dealloc;
-(void)run;
@end
