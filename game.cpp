#include &lt;iostream&gt;
#include &lt;string&gt;
#include &lt;vector&gt;
#include &lt;cstdlib&gt;
#include &lt;ctime&gt;

using namespace std;

int main() {
srand(time(NULL));
vector&lt;string&gt; fragen = {&quot;Warum nicht?&quot;, &quot;Hast du das Spiel verstanden?&quot;, &quot;Wie geht es dir heute?&quot;};
string antwort;
cout &lt;&lt; &quot;Willst du gewinnen?&quot; &lt;&lt; endl;
cout &lt;&lt; &quot;Ja oder Nein? &quot;;
cin &gt;&gt; antwort;
if (antwort == &quot;Ja&quot;) {
cout &lt;&lt; &quot;Herzlichen Glückwunsch! Du hast gewonnen!&quot; &lt;&lt; endl;
} else {
while (true) {
cout &lt;&lt; fragen[rand() % fragen.size()] &lt;&lt; endl;
cout &lt;&lt; &quot;Ja oder Nein? &quot;;
cin &gt;&gt; antwort;
if (antwort == &quot;Ja&quot;) {
cout &lt;&lt; &quot;Herzlichen Glückwunsch! Du hast gewonnen!&quot; &lt;&lt; endl;
break;
}
}
}
return 0;
}
