// Objective-C API for talking to  Go package.
//   gobind -lang=objc -prefix=Go 
//
// File is generated by gobind. Do not edit.

#ifndef __GoUniverse_H__
#define __GoUniverse_H__

@import Foundation;
#include "GoUniverse.h"


@protocol GoUniverseerror;
@class GoUniverseerror;

@protocol GoUniverseerror <NSObject>
- (NSString*)error;
@end

@class GoUniverseerror;

@interface GoUniverseerror : NSError <goSeqRefInterface, GoUniverseerror> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (NSString*)error;
@end

#endif
