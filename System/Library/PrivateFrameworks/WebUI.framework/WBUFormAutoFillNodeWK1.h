/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:13 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillNode.h>

@class DOMNode, NSString;

@interface WBUFormAutoFillNodeWK1 : NSObject <WBSFormAutoFillNode> {

	DOMNode* _domNode;

}

@property (nonatomic,readonly) DOMNode * domNode;                   //@synthesize domNode=_domNode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithDOMNode:(id)arg1 ;
-(id)initWithDOMNode:(id)arg1 ;
-(void)setHTMLInputElementAutofilled:(BOOL)arg1 ;
-(BOOL)isHTMLInputElementUserEdited;
-(BOOL)isHTMLTextAreaElementUserEdited;
-(CGRect)elementBounds;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(DOMNode *)domNode;
@end

