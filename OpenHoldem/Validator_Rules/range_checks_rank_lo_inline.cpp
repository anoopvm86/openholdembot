//
// Rank hi
//

BEGIN_TESTCASE
    TESTCASE_ID ("0172")
    REASONING ("Range check for symbol ranklo")
    PRECONDITION (true)
    POSTCONDITION ((gws("ranklo") >= 2) && (gws("ranklo") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("ranklo")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0173")
    REASONING ("Range check for symbol ranklocommon")
    PRECONDITION (true)
    POSTCONDITION ((gws("ranklocommon") >= 2) && (gws("ranklocommon") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("ranklocommon")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0174")
    REASONING ("Range check for symbol rankloplayer")
    PRECONDITION (true)
    POSTCONDITION ((gws("rankloplayer") >= 2) && (gws("rankloplayer") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("rankloplayer")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0175")
    REASONING ("Range check for symbol ranklopoker")
    PRECONDITION (true)
    POSTCONDITION ((gws("ranklopoker") >= 2) && (gws("ranklopoker") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("ranklopoker")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0176")
    REASONING ("Range check for symbol sranklo")
    PRECONDITION (true)
    POSTCONDITION ((gws("sranklo") >= 2) && (gws("sranklo") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("sranklo")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0177")
    REASONING ("Range check for symbol sranklocommon")
    PRECONDITION (true)
    POSTCONDITION ((gws("sranklocommon") >= 2) && (gws("sranklocommon") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("sranklocommon")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0178")
    REASONING ("Range check for symbol srankloplayer")
    PRECONDITION (true)
    POSTCONDITION ((gws("srankloplayer") >= 2) && (gws("srankloplayer") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("srankloplayer")
END_TESTCASE


BEGIN_TESTCASE
    TESTCASE_ID ("0179")
    REASONING ("Range check for symbol sranklopoker")
    PRECONDITION (true)
    POSTCONDITION ((gws("sranklopoker") >= 2) && (gws("sranklopoker") <= 14))
    SYMBOLS_POSSIBLY_AFFECTED ("sranklopoker")
END_TESTCASE