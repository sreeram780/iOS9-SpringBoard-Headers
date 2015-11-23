/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCDatum.h>

@class NSExtension, NSString;

@interface NCWidgetDatum : NSObject <NCDatum> {

	NSExtension* _representedExtension;

}

@property (nonatomic,readonly) NSExtension * representedExtension;              //@synthesize representedExtension=_representedExtension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * datumIdentifier; 
-(NSString *)datumIdentifier;
-(NSExtension *)representedExtension;
-(id)initWithExtension:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
@end

