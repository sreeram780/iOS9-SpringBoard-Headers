/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol NNMKMailboxItem <NSObject>
@property (nonatomic,retain) NSString * subject; 
@property (nonatomic,retain) NSString * preview; 
@property (assign,nonatomic) unsigned long long status; 
@required
-(void)setSubject:(id)arg1;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1;
-(NSString *)subject;
-(NSString *)preview;
-(BOOL)checkState:(unsigned long long)arg1;
-(void)addState:(unsigned long long)arg1;
-(void)removeState:(unsigned long long)arg1;
-(void)setPreview:(id)arg1;

@end

