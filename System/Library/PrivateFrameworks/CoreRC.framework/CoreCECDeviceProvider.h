/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECDevice.h>

@interface CoreCECDeviceProvider : CoreCECDevice {

	SCD_Struct_Co9 _userControlInitiatorState;
	SCD_Struct_Co10 _userControlFollowerState;
	unsigned _userControlInitiatorRepetitionTimeoutGeneration;
	unsigned _userControlFollowerSafetyTimeoutGeneration;
	unsigned char _sendFromAddress;
	unsigned short _deckStatusRequestMask;

}

@property (assign,nonatomic) unsigned char sendFromAddress;                       //@synthesize sendFromAddress=_sendFromAddress - In the implementation block
@property (nonatomic,readonly) unsigned short deckStatusRequestMask;              //@synthesize deckStatusRequestMask=_deckStatusRequestMask - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)setExtendedProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(id)extendedPropertyForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithBus:(id)arg1 local:(BOOL)arg2 ;
-(BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)requestActiveSource:(id*)arg1 ;
-(BOOL)resignActiveSource:(id*)arg1 ;
-(BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPowerStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)sendHIDEvent:(id)arg1 target:(id)arg2 error:(id*)arg3 ;
-(void)didAddToBus:(id)arg1 ;
-(void)willRemoveFromBus:(id)arg1 ;
-(void)didRemoveFromBus:(id)arg1 ;
-(void)hibernationChanged:(BOOL)arg1 ;
-(void)setSendFromAddress:(unsigned char)arg1 ;
-(BOOL)reportPhysicalAddress:(id*)arg1 ;
-(void)handleDeviceSelected;
-(id)filterMessage:(id)arg1 fromDevice:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(void)didReceiveMessage:(id)arg1 fromDevice:(id)arg2 ;
-(id)filterMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)handleMessage:(id)arg1 fromDevice:(id)arg2 broadcast:(BOOL)arg3 ;
-(void)trackMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)trackMessage:(id)arg1 fromDevice:(id)arg2 ;
-(id)busProvider;
-(unsigned char)sendFromAddress;
-(void)userControlCancelInitiatorRepetitionTimeout;
-(BOOL)userControlReleasedTo:(unsigned char)arg1 error:(id*)arg2 ;
-(void)sendDeckStatusToDevice:(id)arg1 ;
-(BOOL)deckControlWithMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)playWithMode:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)giveDeckStatusWithRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)oneTouchPlayWithMenu:(BOOL)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)menuStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)standbyTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)givePhysicalAddressTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)giveDevicePowerStatusTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)getCECVersionTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)giveDeviceVendorIDTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)getRemoteControlDestination:(id*)arg1 logicalAddress:(unsigned char*)arg2 forTargetDevice:(id)arg3 command:(unsigned char)arg4 error:(id*)arg5 ;
-(void)userControlScheduleInitiatorRepetitionTimeout;
-(BOOL)userControlPressed:(CECUserControl)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)sendActiveSourceStatus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)giveSystemAudioModeStatusTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)systemAudioModeRequest:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(void)userControlInitiatorRepetitionTimeoutExpired;
-(void)userControlFollowerSafetyTimeoutExpired;
-(void)userControlFollowerSynthesizeRelease;
-(BOOL)handleUserControl:(CECUserControl)arg1 pressed:(BOOL)arg2 fromDevice:(id)arg3 abortReason:(unsigned char*)arg4 ;
-(id)filterReportPhysicalAddressMessage:(id)arg1 ;
-(id)filterActiveSourceMessage:(id)arg1 ;
-(id)filterInactiveSourceMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterSetStreamPathMessage:(id)arg1 ;
-(id)filterRoutingChangeMessage:(id)arg1 ;
-(id)filterRoutingInformationMessage:(id)arg1 ;
-(id)filterSetMenuLanguageMessage:(id)arg1 ;
-(id)filterSetOSDNameMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterCECVersionMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterSetSystemAudioModeMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterReportPowerStatusMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterDeckStatusMessage:(id)arg1 toDevice:(id)arg2 ;
-(id)filterDeviceVendorIDMessage:(id)arg1 ;
-(id)filterSystemAudioModeStatusMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)handleGetCECVersionMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGetMenuLanguageMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGivePhysicalAddressMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveOSDNameMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleSetSystemAudioModeMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveDevicePowerStatusMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleRequestActiveSourceMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleSetStreamPathMessage:(id)arg1 ;
-(void)handleDeckControlPlayMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleDeckControlMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveDeckStatusMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleMenuRequest:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleUserControlPressedMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleUserControlReleasedMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleGiveDeviceVendorIDMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)handleFeatureAbortMessage:(id)arg1 fromDevice:(id)arg2 ;
-(void)sendFeatureAbort:(unsigned char)arg1 forMessage:(id)arg2 ;
-(void)didNotHandleMessage:(id)arg1 unsupportedOperand:(BOOL)arg2 ;
-(void)error:(id)arg1 handlingMessage:(id)arg2 fromDevice:(id)arg3 ;
-(BOOL)setOSDName:(CECOSDName)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)deviceVendorID:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)cecVersion:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)setMenuLanguage:(CECLanguage)arg1 error:(id*)arg2 ;
-(BOOL)reportPowerStatus:(unsigned char)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(void)userControlScheduleFollowerSafetyTimeout;
-(void)userControlCancelFollowerSafetyTimeout;
-(BOOL)activeSource:(id*)arg1 ;
-(BOOL)inactiveSourceTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)deckStatusWithInfo:(unsigned long long)arg1 to:(unsigned char)arg2 error:(id*)arg3 ;
-(BOOL)featureAbort:(unsigned char)arg1 reason:(unsigned char)arg2 to:(unsigned char)arg3 error:(id*)arg4 ;
-(BOOL)imageViewOnTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)textViewOnTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)routingChangeOriginalAddress:(unsigned long long)arg1 newAddress:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)routingInformationPhysicalAddress:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setStreamPathPhysicalAddress:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)getMenuLanguageTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)pollTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)giveOSDNameTo:(unsigned char)arg1 error:(id*)arg2 ;
-(BOOL)abortTo:(unsigned char)arg1 error:(id*)arg2 ;
-(unsigned short)deckStatusRequestMask;
@end

