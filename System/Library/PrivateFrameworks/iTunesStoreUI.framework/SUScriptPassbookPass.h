/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:18 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class PKPass, NSString;

@interface SUScriptPassbookPass : SUScriptObject {

	PKPass* _pass;

}

@property (readonly) NSString * passTypeIdentifier; 
@property (readonly) NSString * passURL; 
@property (readonly) NSString * serialNumber; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)passURL;
-(NSString *)serialNumber;
-(id)initWithPass:(id)arg1 ;
-(NSString *)passTypeIdentifier;
@end

