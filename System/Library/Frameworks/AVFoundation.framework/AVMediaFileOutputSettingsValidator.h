/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:23:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVOutputSettingsValidation.h>

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {

	AVMediaFileType* _fileType;

}

@property (nonatomic,readonly) AVMediaFileType * fileType; 
+(id)mediaFileOutputSettingsValidatorForFileType:(id)arg1 ;
+(void)initialize;
-(id)initWithFileType:(id)arg1 ;
-(BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(AVMediaFileType *)fileType;
@end

