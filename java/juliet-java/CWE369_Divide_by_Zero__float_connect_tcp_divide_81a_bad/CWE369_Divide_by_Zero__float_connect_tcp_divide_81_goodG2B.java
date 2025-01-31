/* Copyright 2020, TU Dortmund, Malte Mues (mail.mues@gmail.com)
This testcase is derived from the following File in the Juliet Benchmark found at:
https://samate.nist.gov/SARD/testsuite.php in Version 1.3
Modifications are licenced under CC0 licence.

The original file is:
Filename: CWE369_Divide_by_Zero__float_connect_tcp_divide_81_goodG2B.java
Label Definition File: CWE369_Divide_by_Zero__float.label.xml
Template File: sources-sinks-81_goodG2B.tmpl.java
*/
/*
 * @description
 * CWE: 369 Divide by zero
 * BadSource: connect_tcp Read data using an outbound tcp connection
 * GoodSource: A hardcoded non-zero number (two)
 * Sinks: divide
 *    GoodSink: Check for zero before dividing
 *    BadSink : Dividing by a value that may be zero
 * Flow Variant: 81 Data flow: data passed in a parameter to an abstract method
 *
 * */

import testcasesupport.*;

public class CWE369_Divide_by_Zero__float_connect_tcp_divide_81_goodG2B extends CWE369_Divide_by_Zero__float_connect_tcp_divide_81_base
{
  public void action(float data ) throws Throwable
  {
    /* POTENTIAL FLAW: Possibly divide by zero */
    int result = (int)(100.0 / data);
    if(1 < data || data <= 0){
      assert result < 100;
    }
    IO.writeLine(result);
  }
}
