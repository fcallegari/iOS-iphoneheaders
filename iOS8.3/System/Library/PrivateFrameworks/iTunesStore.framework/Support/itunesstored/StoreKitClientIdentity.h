/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSNumber, NSString;

@interface StoreKitClientIdentity : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	char _allowsBootstrapCellularData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	char _hidesConfirmationDialogs;
	char _ignoresInAppPurchaseRestriction;
	NSString* _receiptDirectoryPath;
	char _requiresAuthenticationForPayment;
	NSNumber* _storeIdentifier;
	NSNumber* _storeVersion;
	char _sandboxed;
	char _usesIdentityAttributes;
	NSString* _vendorIdentifier;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;                       //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                             //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * receiptDirectoryPath;                      //@synthesize receiptDirectoryPath=_receiptDirectoryPath - In the implementation block
@property (nonatomic,copy) NSNumber * storeIdentifier;                           //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * storeVersion;                              //@synthesize storeVersion=_storeVersion - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                          //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (assign,getter=isSandboxed,nonatomic) char sandboxed;                  //@synthesize sandboxed=_sandboxed - In the implementation block
@property (assign,nonatomic) char usesIdentityAttributes;                        //@synthesize usesIdentityAttributes=_usesIdentityAttributes - In the implementation block
@property (assign,nonatomic) char allowsBootstrapCellularData;                   //@synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData - In the implementation block
@property (assign,nonatomic) char hidesConfirmationDialogs;                      //@synthesize hidesConfirmationDialogs=_hidesConfirmationDialogs - In the implementation block
@property (assign,nonatomic) char ignoresInAppPurchaseRestriction;               //@synthesize ignoresInAppPurchaseRestriction=_ignoresInAppPurchaseRestriction - In the implementation block
@property (assign,nonatomic) char requiresAuthenticationForPayment;              //@synthesize requiresAuthenticationForPayment=_requiresAuthenticationForPayment - In the implementation block
-(NSNumber *)storeIdentifier;
-(char)usesIdentityAttributes;
-(NSNumber *)storeVersion;
-(void)setStoreVersion:(NSNumber *)arg1 ;
-(void)setUsesIdentityAttributes:(char)arg1 ;
-(void)setValuesWithSoftwareApplication:(id)arg1 ;
-(void)setValuesWithPaymentQueueClient:(id)arg1 ;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setHidesConfirmationDialogs:(char)arg1 ;
-(void)setIgnoresInAppPurchaseRestriction:(char)arg1 ;
-(void)setReceiptDirectoryPath:(NSString *)arg1 ;
-(void)setRequiresAuthenticationForPayment:(char)arg1 ;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(char)hidesConfirmationDialogs;
-(char)ignoresInAppPurchaseRestriction;
-(NSString *)receiptDirectoryPath;
-(char)requiresAuthenticationForPayment;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isSandboxed;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setSandboxed:(char)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(char)allowsBootstrapCellularData;
-(void)setAllowsBootstrapCellularData:(char)arg1 ;
@end
