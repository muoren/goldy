#ifndef _GOLDY_H_
#define _GOLDY_H_

#define GOLDY_VERSION "0.2"
#define GOLDY_DAEMON_USER "goldy"

#define DEFAULT_SESSION_TIMEOUT 60

struct instance {
  char *listen_host;
  char *listen_port;
  char *backend_host;
  char *backend_port;
//  char *cert_file;
//  char *private_key_file;
  const char *psk;
  const char *psk_identity;
  char *psk_list;
  int daemonize;
  int session_timeout;          /* in seconds */
};

#endif
