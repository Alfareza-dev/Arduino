int _ABVAR_1_val = 0 ;

void setup()
{
  pinMode( 2, INPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 5 , OUTPUT);
  _ABVAR_1_val = 0 ;

}

void loop()
{
  if (digitalRead(2))
  {
    _ABVAR_1_val = ( 1 + _ABVAR_1_val ) ;
    if (( ( _ABVAR_1_val ) == ( 1 ) ))
    {
      digitalWrite( 3 , LOW );
      digitalWrite( 4 , HIGH );
      digitalWrite( 5 , LOW );
    }
    if (( ( _ABVAR_1_val ) == ( 2 ) ))
    {
      digitalWrite( 3 , LOW );
      digitalWrite( 4 , HIGH );
      digitalWrite( 5 , LOW );
    }
    if (( ( _ABVAR_1_val ) == ( 3 ) ))
    {
      digitalWrite( 3 , LOW );
      digitalWrite( 4 , HIGH );
      digitalWrite( 5 , LOW );
      _ABVAR_1_val = 0 ;
    }
  }
}


