/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessageContentSyncServiceClientDelegate;
@interface NNMKMessageContentSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKMessageContentSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessageContentSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NNMKMessageContentSyncServiceClientDelegate>)arg1 ;
-(id<NNMKMessageContentSyncServiceClientDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
@end
