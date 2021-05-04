package com.mparticle.api.media.events

/**
 * This is a series of Reserved constants used *internally* in the generation of MediaEvents.
 * The purpose of surfacing these values is solely for querying {@link com.mparticle.MPEvent} instances generated from
 * {@link com.mparticle.api.media.MediaEvent}s. These values should *not* be added to {@link com.mparticle.api.media.MediaEvent}
 * via {@link com.mparticle.media.events.Options} arguments, for those customAttributes, you should
 * use either free form Strings, or key values found in {@link com.mparticle.media.events.MediaAttributeKeys}
 */
object MediaAttributeKeys {

    const val MEDIA_SESSION_ID = "media_session_id"

    const val PLAYHEAD_POSITION = "playhead_position"

    //MediaContent
    const val TITLE = "content_title"
    const val CONTENT_ID = "content_id"
    const val DURATION = "content_duration"
    const val STREAM_TYPE = "stream_type"
    const val CONTENT_TYPE = "content_type"

    //Seek
    const val SEEK_POSITION = "seek_position"

    //Buffer
    const val BUFFER_DURATION = "buffer_duration"
    const val BUFFER_PERCENT = "buffer_percent"
    const val BUFFER_POSITION = "buffer_position"

    //QoS
    const val QOS_BITRATE = "qos_bitrate"
    const val QOS_FRAMES_PER_SECOND = "qos_fps"
    const val QOS_STARTUP_TIME = "qos_startup_time"
    const val QOS_DROPPED_FRAMES = "qos_dropped_frames"

    //MediaAd
    const val AD_TITLE = "ad_content_title"
    const val AD_DURATION = "ad_content_duration"
    const val AD_ID = "ad_content_id"
    const val AD_ADVERTISING_ID = "ad_content_advertiser"
    const val AD_CAMPAIGN = "ad_content_campaign"
    const val AD_CREATIVE = "ad_content_creative"
    const val AD_PLACEMENT = "ad_content_placement"
    const val AD_POSITION = "ad_content_position"
    const val AD_SITE_ID = "ad_content_site_id"

    //MediaAdBreak
    const val AD_BREAK_TITLE = "ad_break_title"
    const val AD_BREAK_DURATION = "ad_break_duration"
    const val AD_BREAK_ID = "ad_break_id"

    //Segment
    const val SEGMENT_TITLE = "segment_title"
    const val SEGMENT_INDEX = "segment_index"
    const val SEGMENT_DURATION = "segment_duration"
}