//
// SFIDevice.h
//
// Autogenerated by a tool
//  Copyright (c) 2016 Citrix ShareFile. All rights reserved.
//

#import "SFIODataObject.h"

@class SFIUser;

@interface SFIDevice : SFIODataObject
{
}

@property (nonatomic, strong) NSString *Tool;
@property (nonatomic, strong) NSString *ToolRaw;
@property (nonatomic, strong) SFIUser *Owner;
@property (nonatomic, strong) NSDate *Created;
@property (nonatomic, strong) NSString *ToolVersion;
@property (nonatomic, strong) NSNumber *JustRegistered;
@property (nonatomic, strong) NSNumber *IsRemoteWipeReady;


@end