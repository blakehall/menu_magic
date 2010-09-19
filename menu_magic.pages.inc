<?php
// $Id$

/**
 * @file
 * This file contains page callbacks for menu_magic.module.
 */

/**
 * Page callback for the user tab.
 */
function menu_magic_user_lazy_page($account) {
  return t('%name believes in magic!', array('%name' => $account->name));
}
