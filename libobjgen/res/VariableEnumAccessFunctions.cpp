@UNDERLYING_TYPE@ @OBJECT_NAME@::Get@VAR_CAMELCASE_NAME@Value()
{
    return (@UNDERLYING_TYPE@)@VAR_NAME@;
}

void @OBJECT_NAME@::Set@VAR_CAMELCASE_NAME@Value(@UNDERLYING_TYPE@ val)
{
    Set@VAR_CAMELCASE_NAME@((@VAR_TYPE@)val);
}