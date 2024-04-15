<div class="panel-body">
    <span id="user_id" data-id="415860"></span>

    <!-- Progress vs Score -->
      <div class="task_progress_score_bar truncate" data-task-id="824" data-correction-id="20073887">
        <div class="task_progress_bar" style="width: 100.0%">
          <div class="task_score_bar" style="width: 65.0%">
          </div>
        </div>
        <div class="task_progress_score_text">
          Score: <span class="task_score_value">65.0%</span> (<span class="task_progress_value">Checks completed: 100.0%</span>)
        </div>
      </div>

    <!-- Task Body -->
    <p>Write a script that runs a C file through the preprocessor and save the result into another file.</p>

<ul>
<li>The C file name will be saved in the variable <code>$CFILE</code></li>
<li>The output should be saved in the file <code>c</code></li>
</ul>

<pre><code>julien@ubuntu:~/c/0x00$ cat main.c 
#include &lt;stdio.h&gt;

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
</code></pre>

  </div>
