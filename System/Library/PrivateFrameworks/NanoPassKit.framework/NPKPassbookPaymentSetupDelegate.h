/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKPaymentWebServiceTargetDeviceDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>
#import <libobjc.A.dylib/PKPassbookSettingsOptionsDelegate.h>

@class PKPaymentWebService, NPKPaymentWebServiceTargetDevice, NPKCompanionAgentConnection, NSMutableDictionary, NSMutableSet, NSString;

@interface NPKPassbookPaymentSetupDelegate : NSObject <NPKPaymentWebServiceTargetDeviceDelegate, PKPaymentSetupDelegate, PKPassDeleteHandler, PKPassLibraryDataProvider, PKPassbookSettingsOptionsDelegate> {

	BOOL _lastProvidedCanAddPaymentPass;
	PKPaymentWebService* _webService;
	NPKPaymentWebServiceTargetDevice* _targetDevice;
	NPKCompanionAgentConnection* _companionAgentConnection;
	NSMutableDictionary* _deleteStatusHandlers;
	NSMutableSet* _deletionInProgressPasses;

}

@property (nonatomic,retain) PKPaymentWebService * webService;                                    //@synthesize webService=_webService - In the implementation block
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (nonatomic,retain) NPKPaymentWebServiceTargetDevice * targetDevice;                     //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,retain) NPKCompanionAgentConnection * companionAgentConnection;              //@synthesize companionAgentConnection=_companionAgentConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * deleteStatusHandlers;                          //@synthesize deleteStatusHandlers=_deleteStatusHandlers - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletionInProgressPasses;                             //@synthesize deletionInProgressPasses=_deletionInProgressPasses - In the implementation block
@property (assign,nonatomic) BOOL lastProvidedCanAddPaymentPass;                                  //@synthesize lastProvidedCanAddPaymentPass=_lastProvidedCanAddPaymentPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
+(id)sharedSetupDelegate;
-(void)setDeletionStatusHandler:(/*^block*/id)arg1 forPass:(id)arg2 ;
-(NPKPaymentWebServiceTargetDevice *)targetDevice;
-(id)defaultBillingAddressForPaymentPass:(id)arg1 ;
-(BOOL)isDeletionInProgressForPass:(id)arg1 ;
-(void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)removePass:(id)arg1 ;
-(id)defaultBillingAddresses;
-(id)defaultShippingAddress;
-(id)defaultContactEmail;
-(id)defaultContactPhone;
-(void)setDefaultShippingAddress:(id)arg1 ;
-(void)setDefaultContactEmail:(id)arg1 ;
-(void)setDefaultContactPhone:(id)arg1 ;
-(PKPaymentWebService *)webService;
-(id)passWithUniqueID:(id)arg1 ;
-(BOOL)canAddPaymentPass;
-(id)paymentPasses;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)paymentSetupDidShowError:(id)arg1 ;
-(void)paymentSetupDidShowEligibilityIssue;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_webServiceContext;
-(NPKCompanionAgentConnection *)companionAgentConnection;
-(void)_setDeletionInProgress:(BOOL)arg1 forPassWithUniqueID:(id)arg2 ;
-(NSMutableSet *)deletionInProgressPasses;
-(NSMutableDictionary *)deleteStatusHandlers;
-(BOOL)_canAddPaymentPass;
-(void)setLastProvidedCanAddPaymentPass:(BOOL)arg1 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)lastProvidedCanAddPaymentPass;
-(void)handlePreconditionNotMetWithUniqueIDs:(id)arg1 shouldUnregister:(BOOL)arg2 ;
-(void)handlePushToken:(id)arg1 ;
-(void)handleUpdatePaymentPassWithTypeIdentifier:(id)arg1 ;
-(void)handlePreferredAID:(id)arg1 forPassWithUniqueID:(id)arg2 ;
-(void)shouldArchiveWebServiceContext:(id)arg1 ;
-(void)shouldArchiveWebServiceBackgroundContext:(id)arg1 ;
-(void)shouldSetNewAuthRandom:(/*^block*/id)arg1 ;
-(void)loadWebService;
-(id)defaultCardIdentifier;
-(BOOL)uniqueBillingAddresses;
-(id)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 ;
-(BOOL)hasPaymentPassWithUniqueID:(id)arg1 ;
-(BOOL)isSettingsControllerReloadNecessary;
-(id)_defaultPaymentPassIdentifier;
-(void)setCompanionAgentConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)setDeleteStatusHandlers:(NSMutableDictionary *)arg1 ;
-(void)setDeletionInProgressPasses:(NSMutableSet *)arg1 ;
-(void)setTargetDevice:(NPKPaymentWebServiceTargetDevice *)arg1 ;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
@end

