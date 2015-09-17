//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DevkitLocation : NSObject
{
    void *_pointerToToken;
    void *_pointerToEndToken;
    void *_pointerToStream;
    NSString *_filename;
    unsigned long long _startLine;
    unsigned long long _endLine;
    unsigned long long _startCol;
    unsigned long long _endCol;
    int _streamKind;
    unsigned int _filenameFilledIn:1;
    unsigned int _endTokenInLocation:1;
    unsigned int _locationIsPoint:1;
}

+ (id)locationWithLocation:(id)arg1;
+ (id)locationWithFilename:(id)arg1 startLine:(unsigned long long)arg2 startCol:(unsigned long long)arg3 endLine:(unsigned long long)arg4 endCol:(unsigned long long)arg5;
+ (void)endSession;
+ (id)uniqueDeclName:(id)arg1;
+ (id)uniqueFilename:(id)arg1;
+ (void)beginSession;
+ (void)initialize;
- (void).cxx_destruct;
- (id)containingMacroStart;
- (BOOL)locationInMacroBody;
- (BOOL)locationInMacro;
- (BOOL)locationIsPoint;
- (BOOL)hasSameStartAs:(id)arg1;
- (void)unionWithLocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containedIn:(id)arg1;
- (long long)compare:(id)arg1;
- (id)description;
- (void)print;
- (unsigned long long)endCol;
- (unsigned long long)startCol;
- (unsigned long long)endLine;
- (unsigned long long)startLine;
- (id)filename;
- (id)locationWithStartOnly;
- (id)locationWithEndOnly;
- (id)initWithFilename:(id)arg1 startLine:(unsigned long long)arg2 startCol:(unsigned long long)arg3 endLine:(unsigned long long)arg4 endCol:(unsigned long long)arg5;
- (id)initWithToken:(void *)arg1 cppStream:(void *)arg2;
- (id)initWithToken:(void *)arg1 parserStream:(void *)arg2;
- (void)setEndToken:(void *)arg1 withinRange:(BOOL)arg2;
- (void)grabTokenInformation;
- (void *)startToken;

@end