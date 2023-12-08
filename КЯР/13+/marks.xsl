<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="body">
    <html>
    <head>
        <title>Итоги аттестации</title>
    </head>
    <body>
    <table border="1">
        <tr bgcolor="silver">
            <th>Студент</th>
            <th>КЯР</th>
            <th>ОАиП</th>
            <th>ОПИ</th>
            <th>МА</th>
            <th>ЛАиАГ</th>
            <th>АЛОВС</th>
            <th>Бел. язык</th>
            <th>Англ. язык</th>
            <th>Физкультура</th>
        </tr>
        <xsl:for-each select="student">
        <tr>
            <td><xsl:value-of select="name"/></td>
            <xsl:choose>
                <xsl:when test="kyar &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="kyar"/></td>
                </xsl:when>
                <xsl:when test="kyar &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="kyar"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="kyar"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="oaip &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="oaip"/></td>
                </xsl:when>
                <xsl:when test="oaip &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="oaip"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="oaip"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="opi &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="opi"/></td>
                </xsl:when>
                <xsl:when test="opi &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="opi"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="opi"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="ma &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="ma"/></td>
                </xsl:when>
                <xsl:when test="ma &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="ma"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="ma"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="laiag &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="laiag"/></td>
                </xsl:when>
                <xsl:when test="laiag &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="laiag"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="laiag"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="alovs &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="alovs"/></td>
                </xsl:when>
                <xsl:when test="alovs &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="alovs"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="alovs"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="bel &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="bel"/></td>
                </xsl:when>
                <xsl:when test="bel &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="bel"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="bel"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="eng &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="eng"/></td>
                </xsl:when>
                <xsl:when test="eng &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="eng"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="eng"/></td>
                </xsl:otherwise>
            </xsl:choose>
            <xsl:choose>
                <xsl:when test="fiz &gt; 8">
                    <td bgcolor="green"><xsl:value-of select="fiz"/></td>
                </xsl:when>
                <xsl:when test="fiz &lt; 4">
                    <td bgcolor="red"><xsl:value-of select="fiz"/></td>
                </xsl:when>
                <xsl:otherwise>
                    <td><xsl:value-of select="fiz"/></td>
                </xsl:otherwise>
            </xsl:choose>
        </tr>
        </xsl:for-each>
    </table>
    </body>
    </html>
</xsl:template>
</xsl:stylesheet>