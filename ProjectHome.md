### Introduction ###

The Google Email Uploader for Mac is a desktop utility for Mac OS X that uploads email archives from Apple Mail, Eudora, Thunderbird, and exported Entourage mail (along with other mbox and Maildir archives) to your Google Apps mailbox.

### Note ###

**This application is not currently available due to changes in Google's server support.**

### Requirements ###

Google Email Uploader for Mac requires Mac OS X 10.5 through Mac OS X 10.7, and a Google Apps mail account.

**Note:** The application does not currently upload to gmail.com or googlemail.com mail accounts.


### Downloading ###

The application may be downloaded [here](http://code.google.com/p/google-email-uploader-mac/downloads/list).

There is also an [Outlook migration app for Windows](http://tools.google.com/dlpage/outlookmigration/).  Uploads from other web-based mail applications may be done with Gmail's [Mail Fetcher](https://support.google.com/mail/bin/answer.py?hl=en&answer=21288).


### Using the uploader ###

The uploader will try to find your mail archives in their usual locations on Mac OS X:

  * Apple Mail:  ~/Library/Mail
  * Eudora:  ~/Eudora Folder
  * Thunderbird:  ~/Library/Thunderbird

You can add mail search locations or upload exported Entourage archives with the File menu.

**Some tips:**

  1. Start small. Due to server upload rate limits, the uploader is fast for up to 500 messages, and slow thereafter (1 message per second.) Pick a small subset of your mailboxes when first trying out the uploader.
  1. Be patient. Even after uploading completes, the server requires a while to process uploads.
  1. Do assign a custom label (this is checked by default.) This lets you effectively "undo" the uploads later by deleting all messages with the label. Deleting the label itself will not delete the mail.
  1. If you have many mailboxes in your archives, creating labels for each mailbox probably is _not_ a good idea, as this could create far too many labels.

**Troubleshooting**

If the uploader does not accept your email address and password, check with your domain administrator to confirm that "User email uploads" [are enabled](https://developers.google.com/google-apps/email-migration/#getting_started) on the administration page for Advanced Tools.

If your account has two-step verification enabled, use an [application-specific password](http://support.google.com/accounts/bin/answer.py?hl=en&answer=185833) for the uploader.

### Questions? Bugs? ###

**If you have a question** about using the uploader, please join and post to the [discussion group](http://groups.google.com/group/google-email-uploader-mac/).

If you encounter a bug or want a new feature to be added, then submit an [issue](http://code.google.com/p/google-email-uploader-mac/issues/list).