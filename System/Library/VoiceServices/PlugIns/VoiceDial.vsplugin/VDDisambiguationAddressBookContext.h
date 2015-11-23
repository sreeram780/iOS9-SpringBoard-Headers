/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, VSRecognitionResult;

@interface VDDisambiguationAddressBookContext : NSObject {

	BOOL _resultFound;
	int _previousNameProperty;
	NSString* _previousName;
	NSString* _matchedName;
	VSRecognitionResult* _result;

}

@property (assign) int previousNameProperty;                            //@synthesize previousNameProperty=_previousNameProperty - In the implementation block
@property (nonatomic,retain) NSString * previousName;                   //@synthesize previousName=_previousName - In the implementation block
@property (nonatomic,retain) NSString * matchedName;                    //@synthesize matchedName=_matchedName - In the implementation block
@property (nonatomic,retain) VSRecognitionResult * result;              //@synthesize result=_result - In the implementation block
@property (assign) BOOL resultFound;                                    //@synthesize resultFound=_resultFound - In the implementation block
-(VSRecognitionResult *)result;
-(int)previousNameProperty;
-(void)setPreviousNameProperty:(int)arg1 ;
-(NSString *)previousName;
-(void)setPreviousName:(NSString *)arg1 ;
-(NSString *)matchedName;
-(void)setMatchedName:(NSString *)arg1 ;
-(BOOL)resultFound;
-(void)setResultFound:(BOOL)arg1 ;
-(void)setResult:(VSRecognitionResult *)arg1 ;
@end

