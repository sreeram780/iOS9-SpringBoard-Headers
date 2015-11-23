/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECDevice.h>

@interface CoreCECDeviceClient : CoreCECDevice
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)refreshProperties:(id)arg1 ofDevice:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlSetDeckStatus:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)deckControlCommandWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlPlayWithMode:(unsigned long long)arg1 target:(id)arg2 error:(id*)arg3 ;
-(BOOL)deckControlRefreshStatus:(id)arg1 requestType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)makeActiveSourceWithTVMenus:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)performStandbyWithTargetDevice:(id)arg1 error:(id*)arg2 ;
-(BOOL)refreshDevices:(id*)arg1 ;
-(BOOL)requestActiveSource:(id*)arg1 ;
-(BOOL)resignActiveSource:(id*)arg1 ;
-(BOOL)setSystemAudioControlEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)systemAudioModeRequest:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPowerStatus:(unsigned long long)arg1 error:(id*)arg2 ;
@end

