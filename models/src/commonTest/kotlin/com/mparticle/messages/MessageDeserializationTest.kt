package com.mparticle.messages

import com.mparticle.messages.events.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.modules.SerializersModule
import kotlin.test.Test
import kotlin.test.assertTrue

class MessageDeserializationTest {

    @Test
    fun testDeserialization() {
        val messageBatch = BatchMessage.parser.fromString(messageBatchString)
        assertTrue(messageBatch != null)
    }

    @Test
    fun testDeserialization2() {
        val messageBatch = BatchMessage.parser.fromString(messageBatchString2)
        assertTrue(messageBatch != null)

    }

    val messageBatchString =
        """
            {
                  "echo": true,
                  "dt": "h",
                  "id": "f0db2be9-acfe-42f6-af12-43f458b2616b",
                  "ct": 1622054741126,
                  "sdk": "5.17.0",
                  "oo": false,
                  "uitl": 10,
                  "stl": 60,
                  "mpid": "-4997115836606348647",
                  "dbg": true,
                  "das": "9b392482-ae75-40d6-a855-c668ea3be336",
                  "ck": {},
                  "con": {
                  "gdpr": {}
                  },
                  "ctx": {
                  "dpln": {
                  "id": "dataplan1",
                  "v": 1
                  }
                  },
                  "msgs": [
                  {
                  "dt": "fr",
                  "ct": 1622054740337,
                  "dct": "offline",
                  "sid": "3244DCCA-0DD0-48D0-BF42-27968540904D",
                  "sct": 1622054740337,
                  "cs": {
                  "fds": 5587558400,
                  "efds": 5587558400,
                  "amt": 7286000,
                  "ama": 3341776,
                  "amm": 536870912,
                  "sma": 1046626304,
                  "tsm": 2091237376,
                  "bl": 1,
                  "tss": 2384,
                  "gps": true,
                  "dct": "offline",
                  "so": 1,
                  "sbo": 1,
                  "sml": false,
                  "smt": 150994944
                  },
                  "id": "ad8e0f6c-0576-4f58-b676-2b907d6a60a5"
                  },
                  {
                  "dt": "ss",
                  "ct": 1622054740337,
                  "id": "3244DCCA-0DD0-48D0-BF42-27968540904D",
                  "cs": {
                  "fds": 5587558400,
                  "efds": 5587558400,
                  "amt": 7286000,
                  "ama": 3186040,
                  "amm": 536870912,
                  "sma": 1046118400,
                  "tsm": 2091237376,
                  "bl": 1,
                  "tss": 2487,
                  "gps": true,
                  "dct": "offline",
                  "so": 1,
                  "sbo": 1,
                  "sml": false,
                  "smt": 150994944
                  }
                  },
                  {
                  "dt": "ast",
                  "ct": 1622054740357,
                  "sid": "3244DCCA-0DD0-48D0-BF42-27968540904D",
                  "sct": 1622054740337,
                  "t": "app_init",
                  "nsi": 0,
                  "ifr": true,
                  "iu": false,
                  "cs": {
                  "fds": 5587558400,
                  "efds": 5587558400,
                  "amt": 7286000,
                  "ama": 2874568,
                  "amm": 536870912,
                  "sma": 1045983232,
                  "tsm": 2091237376,
                  "bl": 1,
                  "tss": 2714,
                  "gps": true,
                  "dct": "offline",
                  "so": 1,
                  "sbo": 1,
                  "sml": false,
                  "smt": 150994944
                  },
                  "id": "de84812c-2f9c-48eb-9b3c-e97526689d1b"
                  },
                  {
                  "dt": "e",
                  "et": "Search",
                  "n": "p",
                  "el": 43490,
                  "attrs": {
                  "            Category            ": "xbAj1501bfs4ujzo,Csp",
                  "EventLength": "43490"
                  },
                  "flags": {
                  "ACbdhpgxurckg6aAnivrnj etc48B20Coahjyw,l6k3elB": [
                  "strygdCx"
                  ]
                  },
                  "ct": 1622054740376,
                  "sid": "3244DCCA-0DD0-48D0-BF42-27968540904D",
                  "sct": 1622054740337,
                  "est": 1622054740376,
                  "en": 0,
                  "cs": {
                  "fds": 5587558400,
                  "efds": 5587558400,
                  "amt": 7286000,
                  "ama": 2858152,
                  "amm": 536870912,
                  "sma": 1045991424,
                  "tsm": 2091237376,
                  "bl": 1,
                  "tss": 2810,
                  "gps": true,
                  "dct": "offline",
                  "so": 1,
                  "sbo": 1,
                  "sml": false,
                  "smt": 150994944
                  },
                  "id": "787f8ff6-a292-414c-a768-a0063b577db7"
                  },
                  {
                  "dt": "e",
                  "et": "UserContent",
                  "n": "b",
                  "el": 94827,
                  "attrs": {
                  "nv1boAiwm4czcAjBvex": "j,g6wx,7mnC3pylumB5b1e57jCii90ysjrkn4bA7bt1lrn3t",
                  "rivp8n8 0l8z 52pbto15dfqsy2c5esq80,jq5jcqsb vjsyA6Av": "6Cee ywbfxg7hwx2cmmd8zg5dcv6incjs69gv4opAowbwjb",
                  "0B2ylfAo,04dzcByzdzc90": "42u",
                  "7kzyc61dA0lu,m,089x9xg j": null,
                  "52fig756mb,ld5v,n9stm2980Ce8174f2tob57tyh,dAxi5zk0kn": "jc4sA89ri2",
                  "srm9qv0m0": "Cxuwrs5 zfwncmt ulo4,dmCoiawv5almvqeo1ewhk,e,",
                  "            Category            ": "hB68na49r9p",
                  "EventLength": "94827"
                  },
                  "el": 1,
                  "attrs": {
                    "EventLength": "1"
                  },
                  "ct": 1622054740561,
                  "sid": "3244DCCA-0DD0-48D0-BF42-27968540904D",
                  "sct": 1622054740337,
                  "est": 1622054740561,
                  "en": 2,
                  "cs": {
                    "fds": 5587558400,
                    "efds": 5587558400,
                    "amt": 7286000,
                    "ama": 2825320,
                    "amm": 536870912,
                    "sma": 1046003712,
                    "tsm": 2091237376,
                    "bl": 1,
                    "tss": 2991,
                    "gps": true,
                    "dct": "offline",
                    "so": 1,
                    "sbo": 1,
                    "sml": false,
                    "smt": 150994944
                  },
                  "id": "e116569f-3540-45f4-bb09-47887e7327ba"
                }
              ],
              "ai": {
                "apn": "com.mparticle.test",
                "abn": "0",
                "an": "com.mparticle.test",
                "bid": "cfcd2084-95d5-35ef-a6e7-dff9f98764da",
                "dbg": true,
                "pir": false,
                "ict": 1622054740542,
                "lc": 1,
                "lud": 0,
                "lcu": 1,
                "ud": 1622054740542,
                "env": 1,
                "fi": true
              },
              "di": {
                "bid": "QSR1.190920.001",
                "b": "google",
                "p": "sdk_gphone_x86",
                "dn": "generic_x86",
                "dma": "Google",
                "dp": "Android",
                "dosv": "29",
                "dosvi": 29,
                "dmdl": "Android SDK built for x86",
                "vr": "10",
                "duid": "a8a13c0da5303c64",
                "anid": "a8a13c0da5303c64",
                "ouid": "a8a13c0da5303c64",
                "dbe": false,
                "dbv": "none",
                "dsnfc": false,
                "dst": true,
                "jb": {
                  "cydia": false
                },
                "dsh": 1794,
                "dsw": 1080,
                "dpi": 420,
                "dc": "United States",
                "dlc": "US",
                "dll": "en",
                "tzn": "EST",
                "tz": -5,
                "nca": "Android",
                "nc": "us",
                "mcc": "310",
                "mnc": "260",
                "it": false,
                "idst": true,
                "se": false,
                "ve": false
              },
              "ui": [],
              "ua": {}
            }
        """.trimIndent()

    val messageBatchString2 =
        """
            {
              "mpid": 638851181492583700,
              "ltv": 0,
              "das": "5D1924A7-CACF-4F06-AEDB-84B51B8D4A4D",
              "a": "95fdeeb88524f04099929b8e0b18fad4",
              "ai": {
                "av": "1.0",
                "lcu": 42,
                "bid": "00000000-0000-0000-0000-000000000000",
                "pir": false,
                "lc": 43,
                "ud": 1622658728453,
                "fi": true,
                "tsv": "80000",
                "arc": "x86_64",
                "lud": 1622660245662,
                "apn": "com.mparticle.GenericTester0",
                "env": 1,
                "abn": "1",
                "bsv": "140300",
                "ict": 1622658728381
              },
              "id": "ADACA08F-1009-4D6F-BF7C-6B2F3E080D29",
              "oo": false,
              "di": {
                "p": "x86_64",
                "tz": "-4",
                "bid": "19H1030",
                "dn": "iPod touch (7th generation)",
                "dll": "en",
                "dlc": "US",
                "idst": true,
                "dma": "Apple",
                "vid": "F4BCAE45-49B2-4CE0-A82D-ED1CFFABDB6B",
                "dsh": "1136",
                "dp": "iOS",
                "tzn": "AmericagNew_York",
                "dsw": "640",
                "dosv": "14.4",
                "it": false,
                "dmdl": "x86_64",
                "dr": "None",
                "jb": {
                  "cydia": false
                },
                "lat": false,
                "arc": "x86",
                "b": "x86_64"
              },
              "uitl": 20,
              "ck": {
                "uid": {
                  "c": "g=5d1924a7-cacf-4f06-aedb-84b51b8d4a4d",
                  "e": "2031-05-31T18:42:17.7776328Z"
                }
              },
              "dt": "h",
              "stl": 60,
              "msgs": [
                {
                  "et": "Other",
                  "cs": {
                    "cpu": "26",
                    "amt": 106496000,
                    "sma": 107159552,
                    "fds": 7516966912,
                    "tsm": 15588012032,
                    "tss": 64285,
                    "bl": -1,
                    "dct": "wifi",
                    "gps": false,
                    "sbo": 1,
                    "so": 1
                  },
                  "vc": "off_thread",
                  "dt": "e",
                  "id": "4AF875C6-99E4-4983-850F-376C778548BF",
                  "el": 0,
                  "ct": 1622744275589,
                  "attrs": {
                    "Campaign Name": "foo",
                    "Campaign Id": "foo",
                    "foo attr 1": "bar"
                  },
                  "sct": 1622744275588,
                  "sid": "7715FF29-9F3A-4F33-AAAD-4D02A562045C",
                  "en": 0,
                  "n": "Email Bounces",
                  "est": 1622744338871,
                  "mt": false
                },
                {
                  "t": "app_fore",
                  "sct": 1622744275588,
                  "nsi": 0,
                  "ct": 1622744338881,
                  "dt": "ast",
                  "sf": false,
                  "id": "A67789C0-5262-414B-8834-2AEB9DC2B849",
                  "sid": "7715FF29-9F3A-4F33-AAAD-4D02A562045C",
                  "mt": false,
                  "vc": "off_thread",
                  "cs": {
                    "cpu": "26",
                    "amt": 106602496,
                    "sma": 106098688,
                    "fds": 7516966912,
                    "tsm": 15586992128,
                    "tss": 64295,
                    "bl": -1,
                    "dct": "wifi",
                    "gps": false,
                    "sbo": 1,
                    "so": 1
                  }
                },
                {
                  "id": "F54EFE7A-C780-4D92-B444-EE6EF7CB4620",
                  "smpids": [
                    638851181492583700
                  ],
                  "cs": {
                    "cpu": "7",
                    "amt": 83591168,
                    "sma": 81453056,
                    "fds": 7522775040,
                    "tsm": 15268356096,
                    "tss": 10023,
                    "bl": -1,
                    "dct": "offline",
                    "gps": false,
                    "sbo": 1,
                    "so": 0
                  },
                  "slx": 63292,
                  "dt": "se",
                  "vc": "off_thread",
                  "ct": 1622744338881,
                  "attrs": {},
                  "sl": 63292,
                  "sct": 1622744275588,
                  "sid": "7715FF29-9F3A-4F33-AAAD-4D02A562045C",
                  "en": 1,
                  "mt": false
                }
              ],
              "sdk": "8.4.0",
              "ctx": {
                "dpln": {
                  "id": "test"
                }
              },
              "ia": {
                "32": {
                  "test a": "test b"
                }
              },
              "ct": 1622744388172
            }
        """.trimIndent()
}