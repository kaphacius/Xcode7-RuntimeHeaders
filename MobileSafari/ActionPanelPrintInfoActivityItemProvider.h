//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface ActionPanelPrintInfoActivityItemProvider : ActionPanelPrintRendererActivityItemProvider
{
    UIPrintInfo *_printInfo;
    WBUPrintPageRenderer *_printRenderer;
}

- (void).cxx_destruct;
- (id)item;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 printRenderer:(id)arg3;

@end