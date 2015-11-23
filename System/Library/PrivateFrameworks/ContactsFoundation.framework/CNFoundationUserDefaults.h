/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:52 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNFoundationUserDefaults.h>

@protocol CNFoundationUserDefaults <NSObject>
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
@required
-(unsigned long long)nameOrder;
-(unsigned long long)newContactNameOrder;
-(void)setNameOrder:(unsigned long long)arg1;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1;
-(unsigned long long)sortOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1;
-(id)countryCode;

@end


@class NSString;

@interface CNFoundationUserDefaults : NSObject <CNFoundationUserDefaults>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL preferNickname; 
@property (assign) unsigned long long nameOrder; 
@property (assign) unsigned long long shortNameFormat; 
+(unsigned long long)_convertNSNameOrderToCNNameOrder:(long long)arg1 ;
+(id)sharedDefaults;
-(unsigned long long)nameOrder;
-(unsigned long long)newContactNameOrder;
-(void)setNameOrder:(unsigned long long)arg1 ;
-(unsigned long long)shortNameFormat;
-(void)setShortNameFormat:(unsigned long long)arg1 ;
-(unsigned long long)sortOrder;
-(BOOL)preferNickname;
-(void)setPreferNickname:(BOOL)arg1 ;
-(id)countryCode;
@end

