/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CKSMSComposeViewServiceProtocol <NSObject>
@required
-(void)forceMMS;
-(void)disableCameraAttachments;
-(void)setCanEditRecipients:(BOOL)arg1;
-(void)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(void)setPendingAddresses:(id)arg1;
-(void)setTextEntryContentsVisible:(BOOL)arg1;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
-(void)setUICustomizationData:(id)arg1;
-(void)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
-(void)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)forceCancelComposition;

@end

