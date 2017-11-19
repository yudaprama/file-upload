//
//  RCTUploadFile.h
//  
//
//  Created by yuda on 14/11/17.
//
//

#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>

@interface RCTUploadFile : NSObject<RCTBridgeModule>

- (NSMutableURLRequest *)getMultiPartRequest:(NSData *)data serverUrl:(NSString *)server requestData:(NSDictionary *)requestData requestHeaders:(NSDictionary *)requestHeaders mimeType:(NSString *)mimeType fileName:(NSString *)fileName fileKey:(NSString *)fileKey;
- (void)uploadAssetsLibrary:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)uploadUri:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)uploadFile:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)sendData:(NSData *)data withOptions:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
