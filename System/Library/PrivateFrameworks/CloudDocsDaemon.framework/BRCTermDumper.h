/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface BRCTermDumper : NSObject {

	int _fd;
	unsigned long long _termWidth;
	unsigned long long _usedTermWidth;
	int _curAttrs;
	int _curFg;
	int _curBg;
	BOOL _isatty;
	BOOL _useColor;

}

@property (nonatomic,readonly) BOOL isatty;                //@synthesize isatty=_isatty - In the implementation block
@property (nonatomic,readonly) BOOL useColor;              //@synthesize useColor=_useColor - In the implementation block
+(void)setupPagerForFd:(int)arg1 ;
+(void)execPagerOnFileFd:(int)arg1 ;
-(void)reset;
-(id)initWithFd:(int)arg1 forceColor:(BOOL)arg2 ;
-(id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(id)stringForReset;
-(unsigned long long)_startInCString:(char)arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4 ;
-(void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3 ;
-(void)puts:(const char*)arg1 len:(unsigned long long)arg2 ;
-(void)_putsAndCrop:(const char*)arg1 len:(unsigned long long)arg2 ;
-(void)startPager;
-(void)startFgColor:(int)arg1 attr:(int)arg2 ;
-(void)startBgColor:(int)arg1 attr:(int)arg2 ;
-(void)startFgColor:(int)arg1 ;
-(void)startBgColor:(int)arg1 ;
-(void)startAttributes:(int)arg1 ;
-(void)changeFgColor:(int)arg1 ;
-(void)changeBgColor:(int)arg1 ;
-(void)changeAttributes:(int)arg1 ;
-(void)eraseEndOfLine;
-(void)eraseStartOfLine;
-(void)eraseLine;
-(void)eraseScreenDown;
-(void)eraseScreenUp;
-(void)cursorSave;
-(void)cursorRestore;
-(void)cursorUp:(unsigned)arg1 ;
-(void)cursorDown:(unsigned)arg1 ;
-(void)cursorRight:(unsigned)arg1 ;
-(void)cursorLeft:(unsigned)arg1 ;
-(void)startNewLine;
-(void)endLine;
-(void)puts:(const char*)arg1 ;
-(void)write:(const char*)arg1 ;
-(BOOL)isatty;
-(BOOL)useColor;
@end

