/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class MPUContentItemIdentifierCollection;

@interface MusicLibraryActionKeepLocalOperation : NSOperation {

	MPUContentItemIdentifierCollection* _contentItemIdentifierCollection;
	long long _keepLocalValue;

}

@property (copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection;              //@synthesize contentItemIdentifierCollection=_contentItemIdentifierCollection - In the implementation block
@property (readonly) long long keepLocalValue;                                                               //@synthesize keepLocalValue=_keepLocalValue - In the implementation block
-(void)main;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(id)initWithContentItemIdentifierCollection:(id)arg1 keepLocalValue:(long long)arg2 ;
-(long long)keepLocalValue;
@end
