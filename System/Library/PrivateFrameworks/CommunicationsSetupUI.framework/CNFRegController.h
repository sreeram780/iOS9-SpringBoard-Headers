/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>

@class NSArray, NSMutableDictionary, NSTimer, NSString, IMAccount, NSDictionary, NSSet, IMServiceImpl;

@interface CNFRegController : NSObject <IMSystemMonitorListener> {

	NSArray* _services;
	NSArray* _accounts;
	NSMutableDictionary* _accountFilterCache;
	/*^block*/id _accountRegistrationBlock;
	/*^block*/id _callerIdChangedBlock;
	/*^block*/id _accountAddedBlock;
	/*^block*/id _accountRemovedBlock;
	/*^block*/id _aliasStatusChangedBlock;
	/*^block*/id _aliasRemovedBlock;
	/*^block*/id _aliasAddedBlock;
	/*^block*/id _vettedAliasesChangedBlock;
	/*^block*/id _profileChangedBlock;
	/*^block*/id _profileStatusChangedBlock;
	/*^block*/id _accountAuthorizationChangedBlock;
	/*^block*/id _accountActivationChangedBlock;
	/*^block*/id _willLaunchURLBlock;
	/*^block*/id _resetBlock;
	/*^block*/id _serviceDidBecomeUnsupportedBlock;
	long long _serviceType;
	NSTimer* _wifiAlertWatchTimer;
	long long _requiredWifiCount;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	BOOL _originalUsesBackgroundNetwork;
	NSString* _logName;
	unsigned long long _logIndent;
	long long _systemAccountType;
	IMAccount* _systemAccount;
	struct {
		unsigned listeningForAccountChanges : 1;
		unsigned listeningForCallerIDChanges : 1;
		unsigned listeningForAccountActivation : 1;
		unsigned preventingIdleSleep : 1;
		unsigned expectingWiFiPicker : 1;
		unsigned showedWifiFirstRunAlert : 1;
		unsigned ignoringAccountChanges : 1;
		unsigned activatingAccounts : 1;
	}  _controllerFlags;
	NSDictionary* _cachedCallerIDMap;

}

@property (nonatomic,retain,readonly) IMAccount * systemAccount; 
@property (nonatomic,readonly) long long systemAccountType; 
@property (nonatomic,copy,readonly) NSArray * appleIDAccounts; 
@property (nonatomic,copy,readonly) NSArray * phoneAccounts; 
@property (nonatomic,copy,readonly) NSArray * failedAccounts; 
@property (assign,nonatomic) long long serviceType;                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) id accountRegistrationBlock;                                      //@synthesize accountRegistrationBlock=_accountRegistrationBlock - In the implementation block
@property (nonatomic,copy) id accountAddedBlock;                                             //@synthesize accountAddedBlock=_accountAddedBlock - In the implementation block
@property (nonatomic,copy) id accountRemovedBlock;                                           //@synthesize accountRemovedBlock=_accountRemovedBlock - In the implementation block
@property (nonatomic,copy) id callerIdChangedBlock;                                          //@synthesize callerIdChangedBlock=_callerIdChangedBlock - In the implementation block
@property (nonatomic,copy) id aliasStatusChangedBlock;                                       //@synthesize aliasStatusChangedBlock=_aliasStatusChangedBlock - In the implementation block
@property (nonatomic,copy) id aliasAddedBlock;                                               //@synthesize aliasAddedBlock=_aliasAddedBlock - In the implementation block
@property (nonatomic,copy) id aliasRemovedBlock;                                             //@synthesize aliasRemovedBlock=_aliasRemovedBlock - In the implementation block
@property (nonatomic,copy) id vettedAliasesChangedBlock;                                     //@synthesize vettedAliasesChangedBlock=_vettedAliasesChangedBlock - In the implementation block
@property (nonatomic,copy) id resetBlock;                                                    //@synthesize resetBlock=_resetBlock - In the implementation block
@property (nonatomic,copy) id serviceDidBecomeUnsupportedBlock;                              //@synthesize serviceDidBecomeUnsupportedBlock=_serviceDidBecomeUnsupportedBlock - In the implementation block
@property (nonatomic,copy) id profileChangedBlock;                                           //@synthesize profileChangedBlock=_profileChangedBlock - In the implementation block
@property (nonatomic,copy) id profileStatusChangedBlock;                                     //@synthesize profileStatusChangedBlock=_profileStatusChangedBlock - In the implementation block
@property (nonatomic,copy) id accountAuthorizationChangedBlock;                              //@synthesize accountAuthorizationChangedBlock=_accountAuthorizationChangedBlock - In the implementation block
@property (nonatomic,copy) id accountActivationChangedBlock;                                 //@synthesize accountActivationChangedBlock=_accountActivationChangedBlock - In the implementation block
@property (nonatomic,copy) id willLaunchURLBlock;                                            //@synthesize willLaunchURLBlock=_willLaunchURLBlock - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accounts; 
@property (nonatomic,retain,readonly) NSArray * aliases; 
@property (nonatomic,retain,readonly) NSArray * vettedAliases; 
@property (nonatomic,retain,readonly) NSArray * allAvailableAliases; 
@property (nonatomic,retain,readonly) NSArray * useableAliases; 
@property (nonatomic,retain,readonly) NSArray * emailAliases; 
@property (assign,getter=isServiceEnabled,nonatomic) BOOL serviceEnabled; 
@property (getter=isServiceSupported,nonatomic,readonly) BOOL serviceSupported; 
@property (nonatomic,copy) NSArray * services;                                               //@synthesize services=_services - In the implementation block
@property (nonatomic,retain,readonly) NSSet * serviceNames; 
@property (nonatomic,retain,readonly) IMServiceImpl * firstService; 
@property (nonatomic,copy,readonly) NSDictionary * cachedCallerIDMap;                        //@synthesize cachedCallerIDMap=_cachedCallerIDMap - In the implementation block
+(id)controllerForServiceType:(long long)arg1 ;
-(void)refreshSystemAccount;
-(BOOL)hasSystemAccount;
-(void)__updateSystemAccount;
-(IMAccount *)systemAccount;
-(long long)systemAccountType;
-(void)openURL:(id)arg1 ;
-(void)startRequiringWifi;
-(void)stopRequiringWifi;
-(BOOL)deviceCanTakeNetworkAction;
-(void)showNetworkAlert:(id)arg1 ;
-(void)_stopWiFiAlertWatchTimer;
-(BOOL)deviceHasNetworkEnabled;
-(BOOL)deviceHasSaneNetworkConnection;
-(id)networkSettingsURLAllowingCellular:(BOOL)arg1 ;
-(void)_showNetworkAlertWithMessage:(id)arg1 andViewController:(id)arg2 ;
-(void)showNetworkAlertIfNecessary:(id)arg1 ;
-(void)_startWiFiAlertWatchTimer;
-(void)showNetworkFirstRunAlert:(id)arg1 ;
-(void)_wifiAlertWatchTimerFired:(id)arg1 ;
-(void)resetNetworkFirstRunAlert;
-(id)guessedDisplayAlias;
-(BOOL)_isValidCallerIDAlias:(id)arg1 forAccount:(id)arg2 ;
-(id)_guessedDisplayAliasFromAccounts:(id)arg1 ;
-(id)guessedAccountName;
-(id)guessedAlias;
-(NSArray *)appleIDAccounts;
-(void)_clearFilterCache;
-(id)_predicatesWithFilter:(long long)arg1 ;
-(id)_accountsPassingTests:(id)arg1 message:(id)arg2 ;
-(id)accountsWithFilter:(long long)arg1 message:(id)arg2 ;
-(/*^block*/id)__filter_appleIDAccountPredicate;
-(/*^block*/id)__filter_phoneAccountPredicate;
-(/*^block*/id)__filter_activeAccountsPredicate;
-(/*^block*/id)__filter_inactiveAccountsPredicate;
-(/*^block*/id)__filter_failedAccountsPredicate;
-(/*^block*/id)__filter_validatedAliasPredicate;
-(/*^block*/id)__filter_signInCompletePredicate;
-(/*^block*/id)__filter_validatedProfilePredicate;
-(/*^block*/id)__filter_signedInPredicate;
-(/*^block*/id)__filter_operationalPredicate;
-(id)accountsWithFilter:(long long)arg1 ;
-(NSArray *)phoneAccounts;
-(NSArray *)failedAccounts;
-(id)activeAccounts;
-(void)showSetupFaceTimeOverCellularAlertWithCompletion:(/*^block*/id)arg1 ;
-(id)displayAccount;
-(id)initWithServiceType:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)connect;
-(void)clearAllCaches;
-(BOOL)isConnected;
-(void)systemApplicationDidEnterBackground;
-(void)removeAllHandlers;
-(void)_purgeExcessAccounts;
-(id)_logName;
-(void)_startListeningForCallerIDChanges;
-(void)stopListeningForAccountChanges;
-(void)_stopListeningForCallerIDChanges;
-(IMServiceImpl *)firstService;
-(id)loginForAccount:(id)arg1 ;
-(void)_signOutAccount:(id)arg1 delete:(BOOL)arg2 ;
-(void)connect:(BOOL)arg1 ;
-(BOOL)__ensureSingleAppleIDAccountExistsWithLogin:(id)arg1 ;
-(id)_createAccountWithLogin:(id)arg1 foundExisting:(BOOL*)arg2 ;
-(void)activateAccounts;
-(void)activateAccountsExcludingAccounts:(id)arg1 ;
-(void)_clearAccountCache;
-(void)setServiceEnabled:(BOOL)arg1 ;
-(id)_accountForAlias:(id)arg1 accounts:(id)arg2 ;
-(BOOL)_aliasIsDevicePhoneNumber:(id)arg1 ;
-(BOOL)_shouldFilterOutAlias:(id)arg1 onAccount:(id)arg2 ;
-(id)aliasesForAccounts:(id)arg1 ;
-(id)_aliasesFromAccounts:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)_aliasesForAccount:(id)arg1 ;
-(/*^block*/id)_aliasComparator;
-(id)_vettedAliasesForAccount:(id)arg1 ;
-(id)_allAvailableAliasesForAccount:(id)arg1 ;
-(id)vettedAliasesForAccounts:(id)arg1 ;
-(id)allAvailableAliasesForAccounts:(id)arg1 ;
-(id)useableAliasesForAccounts:(id)arg1 ;
-(id)_aliasesPassingTest:(/*^block*/id)arg1 ;
-(id)accountForAlias:(id)arg1 ;
-(BOOL)_addAliases:(id)arg1 toAccount:(id)arg2 validate:(BOOL)arg3 ;
-(BOOL)addAlias:(id)arg1 toAccount:(id)arg2 ;
-(BOOL)_accountIsAuthenticated:(id)arg1 ;
-(BOOL)_accountHasValidatedLocale:(id)arg1 ;
-(unsigned long long)accountState:(id)arg1 ;
-(BOOL)hasFailedLogin;
-(void)accountAdded:(id)arg1 ;
-(void)accountRegistrationChanged:(id)arg1 ;
-(void)callerIdChanged:(id)arg1 ;
-(void)aliasesChanged:(id)arg1 ;
-(void)vettedAliasesChanged:(id)arg1 ;
-(void)aliasStatusChanged:(id)arg1 ;
-(void)profileChanged:(id)arg1 ;
-(void)profileValidationStateChanged:(id)arg1 ;
-(void)authorizationCredentialsChanged:(id)arg1 ;
-(void)accountActivationStateChanged:(id)arg1 ;
-(void)deviceCapabilityChanged:(id)arg1 ;
-(BOOL)shouldHandleAccountNotification:(id)arg1 ;
-(id)accountAddedBlock;
-(id)accountRemovedBlock;
-(id)accountRegistrationBlock;
-(id)callerIdChangedBlock;
-(id)profileChangedBlock;
-(id)profileStatusChangedBlock;
-(id)accountAuthorizationChangedBlock;
-(id)accountActivationChangedBlock;
-(id)aliasStatusChangedBlock;
-(id)aliasAddedBlock;
-(id)aliasRemovedBlock;
-(void)handleAliasAdded:(id)arg1 ;
-(void)handleAliasRemoved:(id)arg1 ;
-(id)vettedAliasesChangedBlock;
-(void)setAccountRegistrationBlock:(id)arg1 ;
-(void)setAccountAddedBlock:(id)arg1 ;
-(void)setAccountRemovedBlock:(id)arg1 ;
-(void)setCallerIdChangedBlock:(id)arg1 ;
-(void)setAliasStatusChangedBlock:(id)arg1 ;
-(void)setAliasAddedBlock:(id)arg1 ;
-(void)setAliasRemovedBlock:(id)arg1 ;
-(void)setVettedAliasesChangedBlock:(id)arg1 ;
-(void)setResetBlock:(id)arg1 ;
-(void)setServiceDidBecomeUnsupportedBlock:(id)arg1 ;
-(void)setProfileChangedBlock:(id)arg1 ;
-(void)setProfileStatusChangedBlock:(id)arg1 ;
-(void)setAccountAuthorizationChangedBlock:(id)arg1 ;
-(void)setAccountActivationChangedBlock:(id)arg1 ;
-(void)deactivateAccounts;
-(void)startListeningForAccountChanges;
-(BOOL)isServiceSupported;
-(id)serviceDidBecomeUnsupportedBlock;
-(void)_nukeCallerIDCache;
-(void)_postCallerIDChanged;
-(void)_handleCallerIDChangedForResume:(id)arg1 ;
-(void)_handleCallerIDChanged;
-(NSSet *)serviceNames;
-(id)firstAccount;
-(id)accountWithLogin:(id)arg1 ;
-(id)beginAccountSetupWithLogin:(id)arg1 authID:(id)arg2 authToken:(id)arg3 regionInfo:(id)arg4 foundExisting:(BOOL*)arg5 ;
-(id)beginAccountSetupWithLogin:(id)arg1 password:(id)arg2 foundExisting:(BOOL*)arg3 ;
-(id)beginAccountSetupWithAccount:(id)arg1 ;
-(void)signoutAccount:(id)arg1 ;
-(id)localPhoneNumberSentinelAlias;
-(NSArray *)allAvailableAliases;
-(NSArray *)useableAliases;
-(NSArray *)emailAliases;
-(BOOL)hasAliasNamed:(id)arg1 ;
-(id)aliasNamed:(id)arg1 ;
-(BOOL)removeAlias:(id)arg1 fromAccount:(id)arg2 ;
-(BOOL)canRemoveAlias:(id)arg1 ;
-(BOOL)setAliases:(id)arg1 onAccount:(id)arg2 ;
-(id)aliasSummaryString:(BOOL*)arg1 ;
-(unsigned long long)accountStateForAccount:(id)arg1 ;
-(unsigned long long)accountState;
-(BOOL)accountIsAuthenticating;
-(BOOL)hasFailedLoginDueToBadLogin;
-(BOOL)shouldShowAlertForError:(id)arg1 ;
-(BOOL)isServiceEnabled;
-(BOOL)cellularDataEnabled;
-(void)setCellularDataEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)nukeAllCallerIDSettings;
-(id)displayAlias;
-(BOOL)setDisplayAlias:(id)arg1 ;
-(id)_logSpace;
-(void)_incrementLogIndent;
-(void)_decrementLogIndent;
-(id)resetBlock;
-(id)willLaunchURLBlock;
-(void)setWillLaunchURLBlock:(id)arg1 ;
-(NSDictionary *)cachedCallerIDMap;
-(void)setServiceType:(long long)arg1 ;
-(long long)serviceType;
-(NSArray *)aliases;
-(NSArray *)vettedAliases;
-(BOOL)hasAlias:(id)arg1 ;
-(BOOL)addAlias:(id)arg1 ;
-(BOOL)validateAlias:(id)arg1 ;
-(BOOL)unvalidateAlias:(id)arg1 ;
-(void)accountRemoved:(id)arg1 ;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
-(NSArray *)accounts;
@end

