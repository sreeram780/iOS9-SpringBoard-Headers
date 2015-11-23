/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class DOMNode;

@interface DOMTreeWalker : DOMObject

@property (readonly) DOMNode * root; 
@property (readonly) unsigned whatToShow; 
@property (readonly) id<DOMNodeFilter> filter; 
@property (readonly) BOOL expandEntityReferences; 
@property (retain) DOMNode * currentNode; 
-(id<DOMNodeFilter>)filter;
-(void)dealloc;
-(id)lastChild;
-(id)firstChild;
-(id)parentNode;
-(id)previousSibling;
-(id)nextSibling;
-(id)nextNode;
-(DOMNode *)root;
-(void)finalize;
-(unsigned)whatToShow;
-(BOOL)expandEntityReferences;
-(id)previousNode;
-(void)setCurrentNode:(DOMNode *)arg1 ;
-(DOMNode *)currentNode;
@end

