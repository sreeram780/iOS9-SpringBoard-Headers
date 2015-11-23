/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:24 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate;

@interface AFAccount : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	NSString* _label;
	NSString* _assistantIdentifier;
	NSString* _speechIdentifier;
	NSString* _hostname;
	NSString* _predefinedServer;
	NSString* _aceHost;
	NSDictionary* _connectionPolicy;
	NSDate* _connectionPolicyDate;
	NSString* _connectionPolicyHostname;
	NSString* _group;
	NSDictionary* _lastSyncDates;
	NSString* _localeIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * assistantIdentifier;                   //@synthesize assistantIdentifier=_assistantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * speechIdentifier;                      //@synthesize speechIdentifier=_speechIdentifier - In the implementation block
@property (nonatomic,copy) NSString * hostname;                              //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,copy) NSString * predefinedServer;                      //@synthesize predefinedServer=_predefinedServer - In the implementation block
@property (nonatomic,copy) NSString * aceHost;                               //@synthesize aceHost=_aceHost - In the implementation block
@property (nonatomic,copy) NSDictionary * connectionPolicy;                  //@synthesize connectionPolicy=_connectionPolicy - In the implementation block
@property (nonatomic,copy) NSDate * connectionPolicyDate;                    //@synthesize connectionPolicyDate=_connectionPolicyDate - In the implementation block
@property (nonatomic,copy) NSString * connectionPolicyHostname;              //@synthesize connectionPolicyHostname=_connectionPolicyHostname - In the implementation block
@property (nonatomic,copy) NSString * group;                                 //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSDictionary * lastSyncDates;                     //@synthesize lastSyncDates=_lastSyncDates - In the implementation block
@property (nonatomic,copy) NSString * localeIdentifier;                      //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                //@synthesize isActive=_isActive - In the implementation block
-(id)description;
-(BOOL)isActive;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)localeIdentifier;
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(void)setAssistantIdentifier:(NSString *)arg1 ;
-(void)setSpeechIdentifier:(NSString *)arg1 ;
-(void)setPredefinedServer:(NSString *)arg1 ;
-(void)setAceHost:(NSString *)arg1 ;
-(void)setConnectionPolicyDate:(NSDate *)arg1 ;
-(void)setConnectionPolicyHostname:(NSString *)arg1 ;
-(void)setLastSyncDates:(NSDictionary *)arg1 ;
-(id)initWithMessageDictionary:(id)arg1 ;
-(id)messageDictionary;
-(NSString *)assistantIdentifier;
-(NSString *)speechIdentifier;
-(NSString *)predefinedServer;
-(NSString *)aceHost;
-(NSDate *)connectionPolicyDate;
-(NSString *)connectionPolicyHostname;
-(NSDictionary *)lastSyncDates;
-(NSDictionary *)connectionPolicy;
-(void)setConnectionPolicy:(NSDictionary *)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)setHostname:(NSString *)arg1 ;
-(NSString *)hostname;
@end

