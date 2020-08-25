#import <Cordova/CDVPlugin.h>

@interface MigrateLocalStorage : CDVPlugin {}

- (BOOL) moveFrom:(NSString*)src to:(NSString*)dest;
- (void) migrateLocalStorage;

@end
