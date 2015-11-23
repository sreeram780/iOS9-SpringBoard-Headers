/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface MPURemoteApplicationActivity : NSObject {

	void* _mediaRemoteActivity;

}

@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * primaryAppDisplayID; 
@property (nonatomic,readonly) NSString * secondaryAppDisplayID; 
@property (nonatomic,readonly) unsigned long long status; 
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)status;
-(id)initWithMediaRemoteActivity:(void*)arg1 ;
-(NSString *)primaryAppDisplayID;
-(NSString *)secondaryAppDisplayID;
@end

