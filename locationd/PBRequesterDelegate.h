//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol PBRequesterDelegate <NSObject>

@optional
- (void)requesterWillSendRequestForEstablishedConnection:(PBRequester *)arg1;
- (void)requester:(PBRequester *)arg1 didFailWithError:(NSError *)arg2;
- (void)requesterDidCancel:(PBRequester *)arg1;
- (void)requesterDidFinish:(PBRequester *)arg1;
- (void)requester:(PBRequester *)arg1 didReceiveResponse:(PBCodable *)arg2 forRequest:(PBRequest *)arg3;
@end