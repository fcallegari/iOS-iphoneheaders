/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectModel, PFUbiquityLocation, NSString;

@interface PFUbiquityMigrationManager : NSObject {

	NSManagedObjectModel* _destinationModel;
	NSManagedObjectModel* _sourceModel;
	PFUbiquityLocation* _rootLocation;
	NSString* _localPeerID;

}

@property (readonly) NSManagedObjectModel * sourceModel;                   //@synthesize sourceModel=_sourceModel - In the implementation block
@property (readonly) NSManagedObjectModel * destinationModel;              //@synthesize destinationModel=_destinationModel - In the implementation block
@property (readonly) PFUbiquityLocation * rootLocation;                    //@synthesize rootLocation=_rootLocation - In the implementation block
-(id)sourceModel;
-(id)destinationModel;
-(id)rootLocation;
-(id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4 ;
-(id)initWithDestinationModel:(id)arg1 storeName:(id)arg2 previousModelVersionHash:(id)arg3 ubiquityRootLocation:(id)arg4 localPeerID:(id)arg5 ;
-(BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

