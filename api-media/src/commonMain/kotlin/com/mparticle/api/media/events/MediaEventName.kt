package com.mparticle.api.media.events

expect enum class MediaEventName{
    Play,
    Pause,
    SessionStart,
    SessionEnd,
    ContentEnd,
    SeekStart,
    SeekEnd,
    BufferStart,
    BufferEnd,
    UpdatePlayheadPosition,
    AdClick,
    AdBreakStart,
    AdBreakEnd,
    AdStart,
    AdEnd,
    AdSkip,
    SegmentStart,
    SegmentEnd,
    SegmentSkip,
    UpdateQoS,
    Milestone,
    SessionSummary,
    AdSessionSummaru
}