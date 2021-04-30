package com.mparticle.api.media.events

import com.mparticle.media.events.EventAttributes.MILESTONE
import com.mparticle.media.events.MediaEventName.AD_BREAK_END
import com.mparticle.media.events.MediaEventName.AD_BREAK_START
import com.mparticle.media.events.MediaEventName.AD_CLICK
import com.mparticle.media.events.MediaEventName.AD_END
import com.mparticle.media.events.MediaEventName.AD_SKIP
import com.mparticle.media.events.MediaEventName.AD_START
import com.mparticle.media.events.MediaEventName.BUFFER_END
import com.mparticle.media.events.MediaEventName.BUFFER_START
import com.mparticle.media.events.MediaEventName.CONTENT_END
import com.mparticle.media.events.MediaEventName.PAUSE
import com.mparticle.media.events.MediaEventName.PLAY
import com.mparticle.media.events.MediaEventName.SEEK_END
import com.mparticle.media.events.MediaEventName.SEEK_START
import com.mparticle.media.events.MediaEventName.SEGMENT_END
import com.mparticle.media.events.MediaEventName.SEGMENT_SKIP
import com.mparticle.media.events.MediaEventName.SEGMENT_START
import com.mparticle.media.events.MediaEventName.SESSION_END
import com.mparticle.media.events.MediaEventName.SESSION_START
import com.mparticle.media.events.MediaEventName.UPDATE_PLAYHEAD_POSITION
import com.mparticle.media.events.MediaEventName.UPDATE_QOS


actual enum class MediaEventName(val eventName: String) {
    Play(PLAY),
    Pause(PAUSE),
    SessionStart(SESSION_START),
    SessionEnd(SESSION_END),
    ContentEnd(CONTENT_END),
    SeekStart(SEEK_START),
    SeekEnd(SEEK_END),
    BufferStart(BUFFER_START),
    BufferEnd(BUFFER_END),
    UpdatePlayheadPosition(UPDATE_PLAYHEAD_POSITION),
    AdClick(AD_CLICK),
    AdBreakStart(AD_BREAK_START),
    AdBreakEnd(AD_BREAK_END),
    AdStart(AD_START),
    AdEnd(AD_END),
    AdSkip(AD_SKIP),
    SegmentStart(SEGMENT_START),
    SegmentEnd(SEGMENT_END),
    SegmentSkip(SEGMENT_SKIP),
    UpdateQoS(UPDATE_QOS),
    Milestone(""),
    SessionSummary(""),
    AdSessionSummaru("");

    companion object {
        fun forEventName(eventName: String): MediaEventName {
            return values().first { it.eventName == eventName }
        }
    }
}