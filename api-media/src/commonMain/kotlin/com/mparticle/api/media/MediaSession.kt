package com.mparticle.api.media

import com.mparticle.api.MParticle
import com.mparticle.api.events.MPEvent
import com.mparticle.api.media.events.*
import kotlin.jvm.JvmSynthetic

expect class MediaSession(
    mparticle: MParticle? = null,
    title: String,
    mediaContentId: String,
    duration: Long,
    streamType: StreamType,
    contentType: ContentType,
    logMediaEvents: Boolean = true,
    logMPEvents: Boolean = false,
    mediaContentCompleteLimit: Int = 100
) {
    val mparticle: MParticle?
    val mediaContent: MediaContent
    val logMediaEvents: Boolean
    val logMPEvents: Boolean
    val mediaContentCompleteLimit: Int

    /**
     * Start the MediaSession. This method should be called before logging  any other events against this
     * MediaSession instance
     */
    fun logMediaSessionStart(options: Options? = null)

    /**
     * End the MediaSession
     */
    fun logMediaSessionEnd(options: Options? = null)

    /**
     * Indicate that the content for the MediaSession has ended. This will NOT end the MediaSession
     */
    fun logMediaContentEnd(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.PLAY}
     */
    fun logPlay(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.PAUSE}
     */
    fun logPause(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.SEEK_START}
     *
     * @param position the position, in milliseconds, where the seek event started
     */
    fun logSeekStart(position: Long, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.SEEK_END}
     *
     * @param position the position, in milliseconds, where the seek event ended
     */
    fun logSeekEnd(position: Long, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.BUFFER_START}
     *
     * @param position the position, in milliseconds, where the buffer event started
     */
    fun logBufferStart(duration: Long, bufferPercent: Double, position: Long, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.BUFFER_END}
     *
     * @param position the position, in milliseconds, where the buffer event ended
     */
    fun logBufferEnd(duration: Long, bufferPercent: Double, position: Long, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.AD_BREAK_START}
     *
     * @param adBreak the {@link MediaAdBreak} instance
     */
    fun logAdBreakStart(adBreak: MediaAdBreak, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.AD_BREAK_END}
     */
    fun logAdBreakEnd(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.AD_CLICK}
     */
    fun logAdClick(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.AD_START}
     *
     * @param ad the {@link MediaAd} instance
     */
    fun logAdStart(ad: MediaAd, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.AD_END}
     */
    fun logAdEnd(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.AD_SKIP}
     */
    fun logAdSkip(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.SEGMENT_START}
     *
     * @param ad the {@link MediaSegment} instance
     */
    fun logSegmentStart(segment: MediaSegment, options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.SEGMENT_SKIP}
     */
    fun logSegmentSkip(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.SEGMENT_END}
     */
    fun logSegmentEnd(options: Options? = null)

    /**
     * Log a MediaEvent of type {@link MediaEventName.UPDATE_PLAYHEAD_POSITION}. This will also
     * update the internal currentPlayheadPosition state.
     */
    fun logPlayheadPosition(playheadPosition: Long)

    /**
     * Log a MediaEvent of type {@link MediaEventName.UPDATE_QOS}. The MediaSession maintains QoS state internally,
     * and will merge the provided MediaQoS argument with the internal object, replacing any null fields in the argument object with
     * the value of the corresponding field in the internal object, provided the internal object's field is non null.
     *
     * Some Kits may replace `null` values with the default primitive
     *
     * @param qos the {@link MediaQoS} instance
     */
    fun logQos(qos: MediaQoS, options: Options? = null)

    /**
     * Create a MPEvent in the current MediaSession context. The {@link BaseEvent#customAttributes()}
     * will be populated with the relevant {@link MediaContent} fields which belong to the MediaSession
     * instance. This includes "title", "mediaContentId", "duration", "streamType" and "contentType"
     */
    fun buildMPEvent(eventName: String, customAttributes: Map<String, String>?): MPEvent

    /**
     * Register a MediaEventListener instance which will receive a callback everytime a {@link MediaEvent}
     * is generated. The callback will occur before the {@link MediaEvent} is logged in the Core SDK
     */
    fun setMediaEventListener(listener: (MediaEvent) -> Unit)
}