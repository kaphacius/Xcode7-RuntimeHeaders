//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DYMTLAnalyzerHeuristic_Attachments : DYMTLAnalyzerHeuristic
{
    struct CGSize _screenSize;
    BOOL _initializedScreenSize;
}

+ (id)identifier;
- (void)_emitAttachmentSizeWarning:(const struct Function *)arg1 forTexture:(unsigned long long)arg2;
- (void)_checkDrawableAttachmentSizes:(const struct Function *)arg1;
- (void)processFunction:(const struct Function *)arg1 stateMirrorRetCode:(unsigned int)arg2;
- (BOOL)shouldBeRunOnPlatform:(int)arg1;
- (struct CGSize)_screenSize;

@end