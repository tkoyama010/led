/*===========================================================================

 Copyright (C) 2018-2018 Tetsuo Koyama

 This file is a part of led

 led  is  free software;  you  can  redistribute  it  and/or modify it
 under  the  terms  of the  GNU  Lesser General Public License as published
 by  the  Free Software Foundation;  either version 3 of the License,  or
 (at your option) any later version along with the GCC Runtime Library
 Exception either version 3.1 or (at your option) any later version.
 This program  is  distributed  in  the  hope  that it will be useful,  but
 WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 or  FITNESS  FOR  A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 License and GCC Runtime Library Exception for more details.
 You  should  have received a copy of the GNU Lesser General Public License
 along  with  this program;  if not, write to the Free Software Foundation,
 Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA.

===========================================================================*/

int led = 13;
 
void setup(){

    Serial.begin(9600);

    pinMode(led, OUTPUT);

}

void loop(){

    digitalWrite(led, HIGH);

    Serial.println("HIGH");

    delay(1000);

    digitalWrite(led, LOW);

    Serial.println("LOW");

    delay(1000);

}
