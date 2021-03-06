/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (nonatomic,readonly) NSArray * excelDocumentTypes; 
-(id)nativeDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)nativeSFFDocumentType;
-(id)importableDocumentTypes;
-(id)applicationTemplateVariantsForLocale:(CFLocaleRef)arg1 ;
-(Class)documentRootClass;
-(id)appChartPropertyOverrides;
-(id)createCompatibilityDelegate;
-(id)documentTypeDisplayName;
-(id)templateTypeDisplayName;
-(BOOL)supportsRTL;
-(void)registerClassTypeMappings;
-(void)p_inputMethodsChanged:(id)arg1 ;
-(id)previewImageNameForDocumentType:(id)arg1 ;
-(id)previewImageNameForNativeDocument;
-(id)previewImageNameForEncryptedNativeDocument;
-(void)wakeUpDownloadManager;
-(void)configureSharedCode;
-(NSArray *)excelDocumentTypes;
-(Class)documentViewControllerClass;
-(id)image32IconForTXTFiles;
-(id)defaultAppStoreURLString;
-(id)init;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(id)applicationName;
@end

