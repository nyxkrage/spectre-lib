//==============================================================================
// This file is part of Master Password.
// Copyright (c) 2011-2017, Maarten Billemont.
//
// Master Password is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Master Password is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You can find a copy of the GNU General Public License in the
// LICENSE file.  Alternatively, see <http://www.gnu.org/licenses/>.
//==============================================================================

package com.lyndir.masterpassword;

import com.google.common.base.Charsets;
import com.google.common.io.CharStreams;
import com.lyndir.masterpassword.model.*;
import java.io.*;
import org.testng.Assert;
import org.testng.annotations.Test;


/**
 * @author lhunath, 2018-04-27
 */
public class MPModelTest {

    @Test
    public void testMasterKey()
            throws Exception {
        File       file   = new File( "/Users/lhunath/.mpw.d/Maarten Billemont.mpsites.json" );
        String     orig   = CharStreams.toString( new InputStreamReader( new FileInputStream( file ), Charsets.UTF_8 ) );
        System.out.println(orig);
        MPFileUser user   = new MPJSONUnmarshaller().unmarshall( file, null );
        String     result = new MPJSONMarshaller().marshall( user );
        System.out.println(result);
        Assert.assertEquals( result, orig, "Marshalled sites do not match original sites." );
    }
}
