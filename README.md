# QtMousePressTimer

重构了 QApplication ，实现对鼠标点击时间的处理，设置计时器为 1000 ms ，如果 1000ms 没有鼠标点击动作，则页面上自动更新时间，如果在 1000ms 内有鼠标点击动作，则重新进行计时。

你可以修改计时器时间及信号槽，从而实现规定时间内没有鼠标点击动作，则自动实现某个动作，比如屏幕保护程序等。

Refactor QApplication, to achieve the specified time without the mouse click action automatically processing, set the timer to 1000 ms, if 1000ms no mouse click action, the page automatically update the time, if within 1000ms mouse click action, then stop update time and restart the timer.

You can modify the time of the timer and signal slot, in order to achieve the specified time without mouse click action, then automatically implement an action. such as screen saver.
