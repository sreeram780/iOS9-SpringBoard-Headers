/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:02 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAVDrawable : NSObject
+(id)readDrawableFromNode:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(xmlDoc*)vmlDocumentFromPart:(id)arg1 ;
+(id)readDrawablesFromParent:(xmlNode*)arg1 inNamespace:(id)arg2 state:(id)arg3 ;
+(void)readFromDrawable:(xmlNode*)arg1 toDrawable:(id)arg2 state:(id)arg3 ;
+(CGRect)readCoordBounds:(xmlNode*)arg1 ;
@end

