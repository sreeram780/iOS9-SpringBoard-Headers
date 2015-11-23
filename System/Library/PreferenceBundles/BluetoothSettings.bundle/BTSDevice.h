/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BTSDevice : NSObject

@property (assign,getter=isHealthDevice,nonatomic) BOOL healthDevice; 
@property (getter=isMyDevice,nonatomic,readonly) BOOL myDevice; 
-(BOOL)paired;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(BOOL)isHealthDevice;
-(void)setHealthDevice:(BOOL)arg1 ;
-(BOOL)isMyDevice;
-(BOOL)cloudPaired;
-(void)unpair;
-(id)classicDevice;
-(BOOL)connected;
@end

