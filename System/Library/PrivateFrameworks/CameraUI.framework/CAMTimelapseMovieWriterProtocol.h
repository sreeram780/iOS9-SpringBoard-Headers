/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CAMTimelapseMovieWriterProtocol <NSObject>
@property (assign,getter=isSuspended,nonatomic) BOOL suspended; 
@required
-(BOOL)isSuspended;
-(void)setSuspended:(BOOL)arg1;
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(long long)arg7 completionHandler:(/*^block*/id)arg8;

@end

