/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject {

	ISUDownload* _download;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * phase; 
@property (readonly) float progress; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)phaseStringForDownload:(id)arg1 ;
-(void)dealloc;
-(NSString *)phase;
-(float)progress;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSNumber *)adamID;
-(id)initWithISUDownload:(id)arg1 ;
-(id)initWithSSDownload:(id)arg1 ;
@end

