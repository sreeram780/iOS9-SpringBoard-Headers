/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload {

	NSString* _humanReadableName;
	MCSingleSignOnPayloadKerberosInfo* _kerberosInfo;

}

@property (nonatomic,retain) NSString * humanReadableName;                                  //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,retain) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;              //@synthesize kerberosInfo=_kerberosInfo - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)title;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(MCSingleSignOnPayloadKerberosInfo *)kerberosInfo;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(void)setKerberosInfo:(MCSingleSignOnPayloadKerberosInfo *)arg1 ;
-(NSString *)humanReadableName;
@end

