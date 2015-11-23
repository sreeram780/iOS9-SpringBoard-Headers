/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCall.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSData, NSNumber;

@interface TUProxyCall : TUCall <NSSecureCoding> {

	BOOL _hostedOnCurrentDevice;
	BOOL _conferenced;
	BOOL _outgoing;
	BOOL _voicemail;
	BOOL _isVideo;
	BOOL _isSendingAudio;
	BOOL _blocked;
	BOOL _emergencyCall;
	BOOL _wiFiCall;
	BOOL _shouldPlayHoldMusic;
	BOOL _needsManualInCallSounds;
	BOOL _managesAudioInterruptions;
	BOOL _uplinkMuted;
	int _callStatus;
	int _callIdentifier;
	int _service;
	int _callRelaySupport;
	NSString* _callUUID;
	double _startTime;
	NSString* _callHistoryIdentifier;
	NSString* _destinationID;
	NSString* _callerNameFromNetwork;
	NSDictionary* _endedReasonUserInfo;
	NSString* _endedReasonString;
	NSString* _endedErrorString;
	NSData* _localFrequency;
	NSData* _remoteFrequency;
	NSNumber* _totalDataUsed;

}

@property (nonatomic,copy) NSString * destinationID;                                                 //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,copy) NSString * callUUID;                                                      //@synthesize callUUID=_callUUID - In the implementation block
@property (nonatomic,copy) NSString * callHistoryIdentifier;                                         //@synthesize callHistoryIdentifier=_callHistoryIdentifier - In the implementation block
@property (assign,nonatomic) int callIdentifier;                                                     //@synthesize callIdentifier=_callIdentifier - In the implementation block
@property (assign,nonatomic) int callStatus;                                                         //@synthesize callStatus=_callStatus - In the implementation block
@property (assign,getter=isHostedOnCurrentDevice,nonatomic) BOOL hostedOnCurrentDevice;              //@synthesize hostedOnCurrentDevice=_hostedOnCurrentDevice - In the implementation block
@property (assign,nonatomic) double startTime;                                                       //@synthesize startTime=_startTime - In the implementation block
@property (assign,getter=isConferenced,nonatomic) BOOL conferenced;                                  //@synthesize conferenced=_conferenced - In the implementation block
@property (assign,nonatomic) int service;                                                            //@synthesize service=_service - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                                        //@synthesize outgoing=_outgoing - In the implementation block
@property (assign,getter=isVoicemail,nonatomic) BOOL voicemail;                                      //@synthesize voicemail=_voicemail - In the implementation block
@property (nonatomic,copy) NSString * callerNameFromNetwork;                                         //@synthesize callerNameFromNetwork=_callerNameFromNetwork - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                                           //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,getter=isBlocked,nonatomic) BOOL blocked;                                          //@synthesize blocked=_blocked - In the implementation block
@property (assign,getter=isEmergencyCall,nonatomic) BOOL emergencyCall;                              //@synthesize emergencyCall=_emergencyCall - In the implementation block
@property (assign,getter=isWiFiCall,nonatomic) BOOL wiFiCall;                                        //@synthesize wiFiCall=_wiFiCall - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayHoldMusic;                                               //@synthesize shouldPlayHoldMusic=_shouldPlayHoldMusic - In the implementation block
@property (assign,nonatomic) BOOL needsManualInCallSounds;                                           //@synthesize needsManualInCallSounds=_needsManualInCallSounds - In the implementation block
@property (assign,nonatomic) BOOL managesAudioInterruptions;                                         //@synthesize managesAudioInterruptions=_managesAudioInterruptions - In the implementation block
@property (nonatomic,copy) NSDictionary * endedReasonUserInfo;                                       //@synthesize endedReasonUserInfo=_endedReasonUserInfo - In the implementation block
@property (nonatomic,copy) NSString * endedErrorString;                                              //@synthesize endedErrorString=_endedErrorString - In the implementation block
@property (nonatomic,copy) NSString * endedReasonString;                                             //@synthesize endedReasonString=_endedReasonString - In the implementation block
@property (nonatomic,retain) NSData * localFrequency;                                                //@synthesize localFrequency=_localFrequency - In the implementation block
@property (nonatomic,retain) NSData * remoteFrequency;                                               //@synthesize remoteFrequency=_remoteFrequency - In the implementation block
@property (nonatomic,retain) NSNumber * totalDataUsed;                                               //@synthesize totalDataUsed=_totalDataUsed - In the implementation block
@property (assign,nonatomic) int callRelaySupport;                                                   //@synthesize callRelaySupport=_callRelaySupport - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)proxyCallWithCall:(id)arg1 ;
-(BOOL)isBlocked;
-(void)setIsVideo:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)hold;
-(double)startTime;
-(BOOL)isVideo;
-(int)service;
-(void)setOutgoing:(BOOL)arg1 ;
-(BOOL)isOutgoing;
-(void)setBlocked:(BOOL)arg1 ;
-(void)setEmergencyCall:(BOOL)arg1 ;
-(NSString *)destinationID;
-(int)supportedModelType;
-(void)setDestinationID:(NSString *)arg1 ;
-(int)callIdentifier;
-(BOOL)isUplinkMuted;
-(BOOL)isDownlinkMuted;
-(void)setUplinkMuted:(BOOL)arg1 ;
-(void)setDownlinkMuted:(BOOL)arg1 ;
-(NSString *)callerNameFromNetwork;
-(BOOL)isVoicemail;
-(BOOL)isEmergencyCall;
-(BOOL)isHostedOnCurrentDevice;
-(BOOL)isWiFiCall;
-(void)setCallDisconnectedDueToComponentCrash;
-(void)updateWithCall:(id)arg1 ;
-(void)setCallIdentifier:(int)arg1 ;
-(void)setVoicemail:(BOOL)arg1 ;
-(void)setHostedOnCurrentDevice:(BOOL)arg1 ;
-(void)setEndpointOnCurrentDevice:(BOOL)arg1 ;
-(void)setManagesAudioInterruptions:(BOOL)arg1 ;
-(void)setLocalFrequency:(NSData *)arg1 ;
-(void)setRemoteFrequency:(NSData *)arg1 ;
-(BOOL)managesAudioInterruptions;
-(BOOL)shouldPlayHoldMusic;
-(BOOL)needsManualInCallSounds;
-(BOOL)isSendingAudio;
-(void)setCallHistoryIdentifier:(NSString *)arg1 ;
-(void)setTotalDataUsed:(NSNumber *)arg1 ;
-(void)answerWithSourceIdentifier:(id)arg1 wantsHoldMusic:(BOOL)arg2 ;
-(NSString *)callUUID;
-(BOOL)isConferenced;
-(NSDictionary *)endedReasonUserInfo;
-(NSString *)endedErrorString;
-(NSString *)endedReasonString;
-(int)callRelaySupport;
-(NSData *)localFrequency;
-(NSData *)remoteFrequency;
-(NSNumber *)totalDataUsed;
-(void)disconnectWithReason:(int)arg1 ;
-(void)setWantsHoldMusic:(BOOL)arg1 ;
-(void)updateProxyCallWithDaemon;
-(void)setDisconnectedReason:(int)arg1 ;
-(void)setShouldSuppressRingtone:(BOOL)arg1 ;
-(void)setTransitionStatus:(int)arg1 ;
-(BOOL)supportsConversationMessaging;
-(void)setCallerNameFromNetwork:(NSString *)arg1 ;
-(void)joinConference;
-(void)leaveConference;
-(void)unhold;
-(void)playDTMFToneForKey:(unsigned char)arg1 ;
-(void)setIsSendingAudio:(BOOL)arg1 ;
-(void)sendConversationData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)sendHardPauseDigits;
-(void)setCallUUID:(NSString *)arg1 ;
-(void)setConferenced:(BOOL)arg1 ;
-(NSString *)callHistoryIdentifier;
-(void)setWiFiCall:(BOOL)arg1 ;
-(void)setShouldPlayHoldMusic:(BOOL)arg1 ;
-(void)setNeedsManualInCallSounds:(BOOL)arg1 ;
-(void)setEndedReasonUserInfo:(NSDictionary *)arg1 ;
-(void)setEndedReasonString:(NSString *)arg1 ;
-(void)setEndedErrorString:(NSString *)arg1 ;
-(void)setCallRelaySupport:(int)arg1 ;
-(void)setCallStatus:(int)arg1 ;
-(int)callStatus;
-(void)setService:(int)arg1 ;
@end

