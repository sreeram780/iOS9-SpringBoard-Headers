/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMNode, NSString, NSArray;

@interface WKDOMRange : NSObject {

	RefPtr<WebCore::Range>* _impl;

}

@property (retain,readonly) WKDOMNode * startContainer; 
@property (readonly) long long startOffset; 
@property (retain,readonly) WKDOMNode * endContainer; 
@property (readonly) long long endOffset; 
@property (copy,readonly) NSString * text; 
@property (readonly) BOOL isCollapsed; 
@property (readonly) NSArray * textRects; 
-(OpaqueWKBundleRangeHandleRef)_copyBundleRangeHandleRef;
-(void)collapse:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)text;
-(long long)endOffset;
-(long long)startOffset;
-(void)setStart:(id)arg1 offset:(int)arg2 ;
-(void)setEnd:(id)arg1 offset:(int)arg2 ;
-(WKDOMNode *)startContainer;
-(void)selectNodeContents:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)selectNode:(id)arg1 ;
-(WKDOMNode *)endContainer;
-(BOOL)isCollapsed;
-(id)_initWithImpl:(Range*)arg1 ;
-(NSArray *)textRects;
@end

