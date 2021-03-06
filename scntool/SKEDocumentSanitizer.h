//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface SKEDocumentSanitizer : NSObject
{
    id _document;
    BOOL _documentDidChange;
    NSURL *_finalDocumentURL;
    SKEImageResolver *_imageResolver;
}

+ (BOOL)sanitizeParticleSystem:(id)arg1 withImageResolver:(id)arg2 finalDocumentURL:(id)arg3;
+ (BOOL)sanitizeScene:(id)arg1 withImageResolver:(id)arg2 finalDocumentURL:(id)arg3;
+ (void)setUsesVerboseMode:(BOOL)arg1;
+ (void)setToolName:(id)arg1;
- (void).cxx_destruct;
- (void)_sanitizeContents:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_sanitizeMaterialProperty:(id)arg1;
- (void)_sanitizeMaterial:(id)arg1;
- (void)_sanitizeParticleSystem:(id)arg1;
- (void)_sanitizeLight:(id)arg1;
- (void)_sanitizeNode:(id)arg1;
- (void)_sanitizeScene:(id)arg1;
- (BOOL)sanitize;
- (id)initWithDocument:(id)arg1 imageResolver:(id)arg2 finalDocumentURL:(id)arg3;

@end