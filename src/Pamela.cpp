/*
** pamela.cpp for Shared in /home/wilmot_g/Epitech/Crypto/Shared
**
** Made by wilmot_g
** Login   <wilmot_g@epitech.net>
**
** Started on  Mon Oct 03 21:19:49 2016 wilmot_g
** Last update Wed Oct 05 15:52:44 2016 wilmot_g
*/

#include <iostream>
#include "Pamela.hh"
#include "Session.hh"

#define			PAM_SM_SESSION

PAM_EXTERN int		pam_sm_open_session(pam_handle_t *pamh, int flags, int ac, const char **av)
{
  Session session;

  cerr << "Open Session" << endl;

  if (!pamh || session.init(pamh, flags, ac, av) == -1)
    return (PAM_SESSION_ERR);
  return (PAM_SUCCESS);
}

PAM_EXTERN int		pam_sm_close_session(pam_handle_t *pamh, int flags, int ac, const char **av)
{

  cerr << "Close Session" << endl;

  (void)pamh;
  (void)flags;
  (void)ac;
  (void)av;
  return (PAM_SUCCESS);
}
