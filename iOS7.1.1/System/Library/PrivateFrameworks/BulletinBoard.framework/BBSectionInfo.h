/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, BBSectionIcon, NSArray, NSData;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sectionID;
	NSString* _subsectionID;
	long long _sectionType;
	long long _sectionCategory;
	bool _showsInNotificationCenter;
	unsigned long long _suppressedSettings;
	unsigned long long _pushSettings;
	unsigned long long _alertType;
	unsigned long long _notificationCenterLimit;
	bool _showsInLockScreen;
	bool _showsOnBluetoothDevices;
	NSString* _pathToWeeAppPluginBundle;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSArray* _subsections;
	BBSectionInfo* _parentSection;
	NSString* _factorySectionID;
	NSArray* _dataProviderIDs;
	bool _suppressFromSettings;
	bool _displaysCriticalBulletins;
	bool _hideWeeApp;
	bool _showsMessagePreview;
	long long _subsectionPriority;
	unsigned long long _version;

}

@property (nonatomic,copy) NSString * sectionID;                                      //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * subsectionID;                                   //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) long long sectionType;                                   //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) long long sectionCategory;                               //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (assign,nonatomic) bool suppressFromSettings;                               //@synthesize suppressFromSettings=_suppressFromSettings - In the implementation block
@property (assign,nonatomic) bool showsInNotificationCenter;                          //@synthesize showsInNotificationCenter=_showsInNotificationCenter - In the implementation block
@property (assign,nonatomic) bool showsInLockScreen;                                  //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) bool showsOnBluetoothDevices;                            //@synthesize showsOnBluetoothDevices=_showsOnBluetoothDevices - In the implementation block
@property (assign,nonatomic) unsigned long long notificationCenterLimit;              //@synthesize notificationCenterLimit=_notificationCenterLimit - In the implementation block
@property (assign,nonatomic) unsigned long long pushSettings;                         //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) unsigned long long alertType;                            //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) bool showsMessagePreview;                                //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedSettings;                   //@synthesize suppressedSettings=_suppressedSettings - In the implementation block
@property (assign,nonatomic) bool hideWeeApp;                                         //@synthesize hideWeeApp=_hideWeeApp - In the implementation block
@property (nonatomic,copy) NSString * pathToWeeAppPluginBundle;                       //@synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * icon;                                      //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) bool displaysCriticalBulletins;                          //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,copy) NSArray * subsections;                                     //@synthesize subsections=_subsections - In the implementation block
@property (assign,nonatomic) BBSectionInfo * parentSection;                           //@synthesize parentSection=_parentSection - In the implementation block
@property (assign,nonatomic) long long subsectionPriority;                            //@synthesize subsectionPriority=_subsectionPriority - In the implementation block
@property (assign,nonatomic) unsigned long long version;                              //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) bool enabled; 
@property (assign,nonatomic) unsigned long long bulletinCount; 
@property (nonatomic,readonly) NSData * iconData; 
@property (nonatomic,copy) NSString * factorySectionID;                               //@synthesize factorySectionID=_factorySectionID - In the implementation block
@property (nonatomic,copy) NSArray * dataProviderIDs;                                 //@synthesize dataProviderIDs=_dataProviderIDs - In the implementation block
+(bool)supportsSecureCoding;
+(bool)defaultStateForSetting:(unsigned long long)arg1 inSectionType:(long long)arg2 ;
+(id)defaultSectionInfoForType:(long long)arg1 ;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg1 ;
-(id)effectiveSectionInfo;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setEnabled:(bool)arg1 ;
-(void)setIcon:(id)arg1 ;
-(id)displayName;
-(bool)enabled;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(void)setSectionID:(id)arg1 ;
-(bool)showsMessagePreview;
-(void)setShowsMessagePreview:(bool)arg1 ;
-(unsigned long long)notificationCenterLimit;
-(id)dataProviderIDs;
-(id)subsections;
-(id)subsectionID;
-(bool)showsInNotificationCenter;
-(unsigned long long)alertType;
-(bool)showsInLockScreen;
-(id)factorySectionID;
-(id)_subsectionForID:(id)arg1 ;
-(void)_replaceSubsection:(id)arg1 ;
-(id)pathToWeeAppPluginBundle;
-(bool)hideWeeApp;
-(void)setHideWeeApp:(bool)arg1 ;
-(void)setSuppressFromSettings:(bool)arg1 ;
-(void)setFactorySectionID:(id)arg1 ;
-(long long)sectionCategory;
-(void)_configureWithDefaultsForSectionType:(long long)arg1 ;
-(void)setParentSection:(id)arg1 ;
-(void)setSuppressedSettings:(unsigned long long)arg1 ;
-(void)setShowsInNotificationCenter:(bool)arg1 ;
-(void)setShowsInLockScreen:(bool)arg1 ;
-(void)setShowsOnBluetoothDevices:(bool)arg1 ;
-(void)setPushSettings:(unsigned long long)arg1 ;
-(void)setAlertType:(unsigned long long)arg1 ;
-(void)setBulletinCount:(unsigned long long)arg1 ;
-(id)parentSection;
-(id)_pushSettingsDescription;
-(unsigned long long)suppressedSettings;
-(void)setSubsections:(id)arg1 ;
-(void)setDataProviderIDs:(id)arg1 ;
-(void)setNotificationCenterLimit:(unsigned long long)arg1 ;
-(void)setSubsectionID:(id)arg1 ;
-(void)setSectionCategory:(long long)arg1 ;
-(bool)suppressFromSettings;
-(bool)showsOnBluetoothDevices;
-(unsigned long long)pushSettings;
-(void)setPathToWeeAppPluginBundle:(id)arg1 ;
-(bool)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(bool)arg1 ;
-(void)_addSubsection:(id)arg1 ;
-(long long)subsectionPriority;
-(void)setSubsectionPriority:(long long)arg1 ;
-(void)_associateDataProviderSectionInfo:(id)arg1 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg1 ;
-(unsigned long long)bulletinCount;
-(id)iconData;
-(void)setDisplayName:(id)arg1 ;
-(long long)sectionType;
-(void)setSectionType:(long long)arg1 ;
-(id)sectionID;
-(id)icon;
@end

