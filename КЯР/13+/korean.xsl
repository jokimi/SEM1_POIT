<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<xsl:template match="main">
<html>
    <head>
        <title>MOLANG</title>
    </head>
    <body>
        <h2>Molang</h2>
        <table border="1">
            <tr bgcolor="lightblue">
                <th>Header</th>
                <th>Description</th>
                <th>Image</th>
            </tr>
            <xsl:for-each select="cute">
                <xsl:sort order="ascending" select="molang"/>
                <tr>
                    <td><xsl:value-of select="molang"/></td>
                    <td><xsl:value-of select="info"/></td>
                    <td><xsl:value-of select="photo"/></td>
                </tr>
            </xsl:for-each>
        </table>
    </body>
</html>
</xsl:template>
</xsl:stylesheet>