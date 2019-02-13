import network
nic=network.WLAN(network.STA_IF)
nic.active(1)
nic.connect('OnePlus 6',"")
print(nic.ifconfig())
import machine
import time
from umqtt.simple import MQTTClient

led= machine.Pin(2,machine.Pin.OUT)

state=0

def sub_cb(topic,msg):
  global state
  print(topic,msg)
  if msg==b"on":
    led.value(0)
    state=1
    c.publish(b"ACK",b"Led is on")
  elif msg==b"off":
    led.value(1)
    state=0
    c.publish(b"ACK",b"Led is off")
  elif msg==b"toggle":
    led.value(state)
    state=1-state
    c.publish(b"ACK",b"Led is toggling")
    
c=MQTTClient("umqtt_client","broker.hivemq.com")
c.set_callback(sub_cb)
c.connect()
c.subscribe(b"led")
while True:
  if True:
    c.wait_msg()
  else:
    c.check_msg()
    time.sleep(1)
    
c.disconnect()

    