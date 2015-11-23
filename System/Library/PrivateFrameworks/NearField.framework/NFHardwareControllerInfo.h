/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NFHardwareControllerInfo : NSObject <NSSecureCoding> {

	BOOL _hasAntenna;
	BOOL _hasBooster;
	unsigned long long _siliconVersion;
	unsigned long long _siliconName;
	unsigned long long _ROMVersion;
	unsigned long long _firmwareVersion;
	unsigned long long _firmwareRevision;
	unsigned long long _middlewareVersion;

}

@property (nonatomic,readonly) unsigned long long siliconVersion;                 //@synthesize siliconVersion=_siliconVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long siliconName;                    //@synthesize siliconName=_siliconName - In the implementation block
@property (nonatomic,readonly) unsigned long long ROMVersion;                     //@synthesize ROMVersion=_ROMVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareVersion;                //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (nonatomic,readonly) unsigned long long firmwareRevision;               //@synthesize firmwareRevision=_firmwareRevision - In the implementation block
@property (nonatomic,readonly) unsigned long long middlewareVersion;              //@synthesize middlewareVersion=_middlewareVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAntenna;                                   //@synthesize hasAntenna=_hasAntenna - In the implementation block
@property (nonatomic,readonly) BOOL hasBooster;                                   //@synthesize hasBooster=_hasBooster - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)firmwareRevision;
-(unsigned long long)firmwareVersion;
-(unsigned long long)siliconVersion;
-(unsigned long long)siliconName;
-(unsigned long long)ROMVersion;
-(BOOL)hasAntenna;
-(BOOL)hasBooster;
-(unsigned long long)middlewareVersion;
@end

