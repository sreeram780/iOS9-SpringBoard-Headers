/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSString, NSSet;

@interface _EARSpeechModelInfo : NSObject {

	SpeechModelInfo* _speechModelInfo;

}

@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSSet * samplingRates; 
@property (nonatomic,readonly) NSSet * tasks; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * phoneSetVersion; 
@property (nonatomic,readonly) NSString * acousticProfileVersion; 
-(NSString *)version;
-(NSString *)language;
-(NSString *)phoneSetVersion;
-(NSString *)acousticProfileVersion;
-(NSSet *)samplingRates;
-(NSSet *)tasks;
-(id)initWithConfig:(id)arg1 ;
@end

