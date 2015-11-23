/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:28 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface RMSAudioRoute : NSObject {

	BOOL _supportsVideo;
	BOOL _selected;
	NSString* _displayName;
	unsigned long long _macAddress;

}

@property (nonatomic,retain) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long macAddress;                //@synthesize macAddress=_macAddress - In the implementation block
@property (assign,nonatomic) BOOL supportsVideo;                           //@synthesize supportsVideo=_supportsVideo - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
+(id)audioRoutesFromProtobufs:(id)arg1 ;
+(id)protobufsFromAudioRoutes:(id)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(NSString *)displayName;
-(unsigned long long)macAddress;
-(void)setMacAddress:(unsigned long long)arg1 ;
-(id)protobuf;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSupportsVideo:(BOOL)arg1 ;
-(BOOL)supportsVideo;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)isEqualToAudioRoute:(id)arg1 ;
@end

