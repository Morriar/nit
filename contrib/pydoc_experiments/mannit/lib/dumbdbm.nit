# A dumb and slow but simple dbm clone.
# For database spam, spam.dir contains the index (a text file),
# spam.bak *may* contain a backup of the index (also a text file),
# while spam.dat contains the data (a binary file).
# XXX TO DO:
# - seems to contain a bug when updating...
# - reclaim free space (currently, space once occupied by deleted or expanded
# items is never reused)
# - support concurrent access (currently, if two processes take turns making
# updates, they can mess up the index)
# - support efficient access to large databases (currently, the whole index
# is read when the database is opened, and some updates rewrite the whole index)
# - support opening for read-only (flag = 'm')
module dumbdbm

import userdict

redef class Sys

end

# I/O operation failed.
redef class IOError

end

private class Database
    super DictMixin

    private fun private_addkey(key, pos_and_siz_pair: Object) is abstract

    private fun private_update is abstract

    fun setitem(key, val: Object) is abstract

    fun keys is abstract

    redef fun contains(key) is abstract

    init do end

    redef fun len is abstract

    private fun private_chmod(file: Object) is abstract

    redef fun has_key(key) is abstract

    private fun private_addval(val: Object) is abstract

    fun delitem(key: Object) is abstract

    fun getitem(key: Object) is abstract

    private fun private_setval(pos, val: Object) is abstract

    fun close is abstract

    private fun private_commit is abstract

    redef fun iterkeys is abstract

end

