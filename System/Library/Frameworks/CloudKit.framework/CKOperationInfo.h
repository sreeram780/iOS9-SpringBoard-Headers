/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CKContainerSetupInfo;

@interface CKOperationInfo : NSObject <NSSecureCoding> {

	BOOL _allowsCellularAccess;
	BOOL _preferAnonymousRequests;
	BOOL _allowsBackgroundNetworking;
	NSString* _operationID;
	NSString* _parentSectionID;
	long long _qualityOfService;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _authPromptReason;
	CKContainerSetupInfo* _setupInfo;
	NSString* _deviceIdentifier;
	id _parentOperation;

}

@property (nonatomic,retain) NSString * operationID;                                       //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSString * parentSectionID;                                   //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                   //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * authPromptReason;                                  //@synthesize authPromptReason=_authPromptReason - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                 //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                              //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) CKContainerSetupInfo * setupInfo;                             //@synthesize setupInfo=_setupInfo - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id parentOperation;                                    //@synthesize parentOperation=_parentOperation - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)qualityOfService;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setQualityOfService:(long long)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(NSString *)operationID;
-(CKContainerSetupInfo *)setupInfo;
-(void)setSetupInfo:(CKContainerSetupInfo *)arg1 ;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)parentOperation;
-(NSString *)parentSectionID;
-(BOOL)allowsCellularAccess;
-(NSString *)authPromptReason;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(NSString *)deviceIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setAuthPromptReason:(NSString *)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setParentOperation:(id)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
@end

