//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XcodeWorkspaceDocument : XcodeDocument
{
}

@property(copy) NSString *productDirectory;
@property(copy) NSString *intermediatesDirectory;
@property BOOL breakpointsEnabled;
- (id)Xcode3FileReferences;
- (id)Xcode3Groups;
- (id)symbolicBreakpoints;
- (id)schemes;
- (id)projects;
- (id)itemReferences;
- (id)groups;
- (id)fileReferences;
- (id)fileBreakpoints;
- (id)buildMessages;
- (id)breakpoints;

@end