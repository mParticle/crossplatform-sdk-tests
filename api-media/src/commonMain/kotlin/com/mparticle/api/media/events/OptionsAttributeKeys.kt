package com.mparticle.api.media.events

/**
 * This object defines a series of constants that can be used to specify Media characteristics to be included
 * in a {@link com.mparticle.api.media.MediaEvent} or {@link com.mparticle.MPEvent}.
 * These values are common values used in Media services, and may be included in a {@link com.mparticle.api.media.MediaEvent} via
 * an {@link com.mparticle.media.events.Options} instance.
 *
 * @see com.mparticle.media.events.Options
 */
object EventAttributes {
    const val AD_IDS = "media_session_ad_objects"
    const val CONTENT_ASSET_ID = "content_asset_id"
    const val CONTENT_SEASON = "content_season"
    const val CONTENT_EPISODE = "content_episode"
    const val CONTENT_DAYPART = "content_daypart"
    const val CONTENT_ORIGINATOR = "content_originator"
    const val CONTENT_NETWORK = "content_network"
    const val CONTENT_MVPD = "content_mvpd"
    const val CONTENT_FEED = "content_feed"
    const val CONTENT_SHOW = "content_show"
    const val CONTENT_SHOW_TYPE = "content_show_type"
    const val CONTENT_GENRE = "content_genre"
    const val CONTENT_RATING = "content_rating"
    const val CONTENT_AUTHORIZED = "content_authorized"
    const val CONTENT_FIRST_AIR_DATE = "content_first_air_date"
    const val CONTENT_DIGITAL_DATE = "content_digital_date"
    const val MILESTONE = "milestone"
    const val PLAYER_INITIAL_RESOLUTION = "player_initial_resolution"
    const val PLAYER_NAME = "player_name"
    const val PLAYER_OVP = "player_ovp"
}