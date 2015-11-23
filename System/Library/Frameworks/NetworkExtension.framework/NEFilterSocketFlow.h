/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEFilterFlow.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWEndpoint;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {

	unsigned char _uuid[16];
	unsigned char _euuid[16];
	sockaddr_storage _lastLocalAddress;
	sockaddr_storage _lastRemoteAddress;
	int _socketFamily;
	int _socketType;
	int _socketProtocol;
	int _pid;
	int _epid;
	NWEndpoint* _remoteEndpoint;
	NWEndpoint* _localEndpoint;

}

@property (readonly) NWEndpoint * remoteEndpoint;              //@synthesize remoteEndpoint=_remoteEndpoint - In the implementation block
@property (readonly) NWEndpoint * localEndpoint;               //@synthesize localEndpoint=_localEndpoint - In the implementation block
@property (assign) int socketFamily;                           //@synthesize socketFamily=_socketFamily - In the implementation block
@property (assign) int socketType;                             //@synthesize socketType=_socketType - In the implementation block
@property (assign) int socketProtocol;                         //@synthesize socketProtocol=_socketProtocol - In the implementation block
@property (assign) int pid;                                    //@synthesize pid=_pid - In the implementation block
@property (assign) int epid;                                   //@synthesize epid=_epid - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)socketFamily;
-(int)socketType;
-(int)socketProtocol;
-(int)epid;
-(void)setSocketFamily:(int)arg1 ;
-(void)setSocketType:(int)arg1 ;
-(void)setSocketProtocol:(int)arg1 ;
-(void)setEpid:(int)arg1 ;
-(NWEndpoint *)localEndpoint;
-(NWEndpoint *)remoteEndpoint;
-(id)initWithSocketFamily:(int)arg1 socketType:(int)arg2 socketProtocol:(int)arg3 pid:(int)arg4 epid:(int)arg5 uuid:(unsigned char)arg6 euuid:(unsigned char)arg7 ;
-(void)lastRemoteAddress:(sockaddr*)arg1 ;
-(void)lastLocalAddress:(sockaddr*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end

