/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSMenuBarDocument.h>

@protocol IKJSMenuBarDocument <JSExport>
@required
-(id)getDocument:(id)arg1;
-(void)setDocument:(id)arg1 :(id)arg2 :(id)arg3;
-(void)setSelectedItem:(id)arg1 :(id)arg2;

@end


@protocol IKJSMenuBarDocumentAppBridge;
@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument> {

	id<IKJSMenuBarDocumentAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<IKJSMenuBarDocumentAppBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
-(id)_entityUniqueIdentifierForObject:(id)arg1 ;
-(id)getDocument:(id)arg1 ;
-(void)setDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)setSelectedItem:(id)arg1 :(id)arg2 ;
-(void)setAppBridge:(id<IKJSMenuBarDocumentAppBridge>)arg1 ;
-(id<IKJSMenuBarDocumentAppBridge>)appBridge;
@end

