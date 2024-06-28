# SynchronousSocket

This Node.js module exposes a class called `SynchronousSocket`, which
acts as a synchronous interface to Unix domain sockets.

There are four methods for the class `SynchronousSocket`, all
implemented in C++. These are:

- `connect`
- `disconnect`
- `read`
- `write`

Using these four functions you can synchronously communicate with a
Unix domain socket.

## Example usage:

```
i = new SynchronousSocket.SynchronousSocket("/path/to/a/unix/domain/socket");
i.connect();
i.write("Message to client!");
response = i.read();
console.log(response.toString());
```
