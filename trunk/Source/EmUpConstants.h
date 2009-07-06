/* Copyright (c) 2009 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Cocoa/Cocoa.h>

#undef _EXTERN
#undef _INITIALIZE_AS
#ifdef EMUPCONSTANTS_DEFINE_GLOBALS
#define _EXTERN 
#define _INITIALIZE_AS(x) =x
#else
#define _EXTERN extern
#define _INITIALIZE_AS(x)
#endif


// no messages over 31 megs, per the API
_EXTERN const unsigned int kMaxMesssageSize _INITIALIZE_AS(1024 * 1024 * 31);

// we upload up to 10 messages at a time in slow mode, 50 in fast mode
_EXTERN const unsigned int kSlowBatchCount   _INITIALIZE_AS(10);
_EXTERN const unsigned int kFastBatchCount   _INITIALIZE_AS(50);

// we can upload up to 500 messages in fast most
_EXTERN const unsigned int kFastModeMaxMessages _INITIALIZE_AS(500);

//
// notifications
//

// counting messages for mailbox
_EXTERN NSString* const kEmUpLoadingMailbox _INITIALIZE_AS(@"kEmUpLoadingMailbox");

// message parsing failed
_EXTERN NSString* const kEmUpMessageParsingFailed _INITIALIZE_AS(@"kEmUpMessageParsingFailed");


//
// property keys
//

// mailbox name to be used as a label for the entry when uploading
_EXTERN NSString *const kEmUpMailboxNameKey       _INITIALIZE_AS(@"kEmUpMailboxNameKey");

// properties to be added to the GData entry
_EXTERN NSString *const kEmUpMailboxPropertiesKey _INITIALIZE_AS(@"kEmUpMailboxPropertiesKey");

// headers of this message, for diagnostic purposes
_EXTERN NSString *const kEmUpMessageIDKey  _INITIALIZE_AS(@"kEmUpMessageIDKey");

// byte range of message
_EXTERN NSString *const kEmUpMessageRangeKey  _INITIALIZE_AS(@"kEmUpMessageRangeKey");

// index in file of message, 0-based NSNumber
_EXTERN NSString *const kEmUpMessageIndexKey  _INITIALIZE_AS(@"kEmUpMessageIndexKey");

// full path of message's file
_EXTERN NSString *const kEmUpMessagePathKey  _INITIALIZE_AS(@"kEmUpMessagePathKey");

// error string
_EXTERN NSString *const kEmUpMessageErrorStringKey  _INITIALIZE_AS(@"kEmUpMessageErrorStringKey");

