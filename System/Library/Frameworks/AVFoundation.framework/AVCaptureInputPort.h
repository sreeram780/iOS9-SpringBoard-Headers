/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputPortInternal, AVCaptureInput, NSString;

@interface AVCaptureInputPort : NSObject {

	AVCaptureInputPortInternal* _internal;

}

@property (nonatomic,readonly) AVCaptureInput * input; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) OpaqueCMClockRef clock; 
+(id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 ;
+(BOOL)automaticallyNotifiesObserversOfClock;
-(void)bumpChangeSeed;
-(int)changeSeed;
-(OpaqueCMClockRef)clock;
-(id)figCaptureSourceConfigurationForSessionPreset:(id)arg1 ;
-(void)_setClock:(OpaqueCMClockRef)arg1 ;
-(void)_setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(opaqueCMFormatDescriptionRef)arg3 enabled:(BOOL)arg4 ;
-(id)sourceID;
-(NSString *)mediaType;
-(void)dealloc;
-(id)init;
-(id)description;
-(AVCaptureInput *)input;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)valueForUndefinedKey:(id)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)setOwner:(id)arg1 ;
@end

