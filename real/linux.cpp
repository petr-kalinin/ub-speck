struct sock *sk = tun->sk;  // initialize sk with tun->sk
<...>
if (!tun)
    return POLLERR;  // if tun is NULL return error