/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionModelDataProvider <NSObject>
@optional
-(void)beginReportingChanges;
-(void)stopReportingChanges;
-(id)valueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
-(BOOL)getValue:(id*)arg1 weight:(long long*)arg2 atIndex:(long long)arg3 forClassWithIdentifier:(id)arg4 inModelWithIdentifier:(id)arg5;
-(id)phoneticValueAtIndex:(long long)arg1 forClassWithIdentifier:(id)arg2 inModelWithIdentifier:(id)arg3;
-(id)cacheValidityIdentifier;
-(BOOL)isCacheValidityIdentifierValid:(id)arg1;

@required
-(long long)valueCountForClassWithIdentifier:(id)arg1 inModelWithIdentifier:(id)arg2;

@end

