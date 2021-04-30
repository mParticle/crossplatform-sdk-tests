package com.mparticle.api.media.events

import cocoapods.mParticle_Apple_Media_SDK.*

actual enum class MediaEventName(val eventNameApple: Long) {
    Play(MPMediaEventNamePlay),
    Pause(MPMediaEventNamePause),
    SessionStart(MPMediaEventNameSessionStart),
    SessionEnd(MPMediaEventNameSessionEnd),
    ContentEnd(MPMediaEventNameContentEnd),
    SeekStart(MPMediaEventNameSeekStart),
    SeekEnd(MPMediaEventNameSeekEnd),
    BufferStart(MPMediaEventNameBufferStart),
    BufferEnd(MPMediaEventNameBufferEnd),
    UpdatePlayheadPosition(MPMediaEventNameUpdatePlayheadPosition),
    AdClick(MPMediaEventNameAdClick),
    AdBreakStart(MPMediaEventNameAdBreakStart),
    AdBreakEnd(MPMediaEventNameAdBreakEnd),
    AdStart(MPMediaEventNameAdStart),
    AdEnd(MPMediaEventNameAdEnd),
    AdSkip(MPMediaEventNameAdSkip),
    SegmentStart(MPMediaEventNameSegmentStart),
    SegmentEnd(MPMediaEventNameSegmentEnd),
    SegmentSkip(MPMediaEventNameSegmentSkip),
    UpdateQoS(MPMediaEventNameUpdateQoS),
    Milestone(MPMediaEventNameMilestone),
    SessionSummary(MPMediaEventNameSessionSummary),
    AdSessionSummaru(MPMediaEventNameAdSessionSummary);

    companion object {
        fun forEventName(eventName: Long): MediaEventName {
            return values().firstOrNull { it.eventNameApple == eventName } ?: throw RuntimeException("MediaEventName: "+ eventName + " not found!");
        }
    }
}