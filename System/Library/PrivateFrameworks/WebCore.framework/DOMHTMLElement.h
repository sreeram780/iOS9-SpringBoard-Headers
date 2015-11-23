/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLElement : DOMElement

@property (copy) NSString * idName; 
@property (copy) NSString * title; 
@property (copy) NSString * lang; 
@property (copy) NSString * dir; 
@property (assign) int tabIndex; 
@property (copy) NSString * accessKey; 
@property (copy) NSString * innerText; 
@property (copy) NSString * outerText; 
@property (readonly) DOMHTMLCollection * children; 
@property (copy) NSString * contentEditable; 
@property (readonly) BOOL isContentEditable; 
@property (copy,readonly) NSString * titleDisplayString; 
-(int)structuralComplexityContribution;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 ;
-(void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForIOSCaret:(BOOL)arg3 ;
-(void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4 ;
-(void)setIdName:(NSString *)arg1 ;
-(void)setInnerText:(NSString *)arg1 ;
-(void)setDraggable:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setContentEditable:(NSString *)arg1 ;
-(NSString *)innerText;
-(BOOL)isContentEditable;
-(NSString *)idName;
-(BOOL)hidden;
-(DOMHTMLCollection *)children;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(void)click;
-(void)setDir:(NSString *)arg1 ;
-(void)setLang:(NSString *)arg1 ;
-(BOOL)translate;
-(void)setTranslate:(BOOL)arg1 ;
-(int)tabIndex;
-(void)setTabIndex:(int)arg1 ;
-(BOOL)draggable;
-(id)webkitdropzone;
-(void)setWebkitdropzone:(id)arg1 ;
-(NSString *)outerText;
-(void)setOuterText:(NSString *)arg1 ;
-(NSString *)contentEditable;
-(BOOL)spellcheck;
-(void)setSpellcheck:(BOOL)arg1 ;
-(NSString *)titleDisplayString;
-(id)insertAdjacentElement:(id)arg1 element:(id)arg2 ;
-(void)insertAdjacentHTML:(id)arg1 html:(id)arg2 ;
-(void)insertAdjacentText:(id)arg1 text:(id)arg2 ;
-(NSString *)lang;
-(NSString *)dir;
@end

