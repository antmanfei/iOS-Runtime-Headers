/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary;

@interface GMMResponse : NSObject {
     /* Encoded args for previous method: c16@0:4^{InputDataStream=*IIBB}8c12 */
    NSDictionary *_httpHeaders;
    NSInteger _responseCode;
}

@property NSInteger responseCode; /* unknown property attribute: V_responseCode */
@property(retain) NSDictionary *httpHeaders; /* unknown property attribute: V_httpHeaders */
@property(readonly) NSData *data;

- (id)data;
- (void)dealloc;
- (id)httpHeaders;
- (id)initWithData:(id)arg1;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1 tillEnd:(BOOL)arg2;
- (NSInteger)responseCode;
- (void)setHttpHeaders:(id)arg1;
- (void)setResponseCode:(NSInteger)arg1;

@end