# dbtester

[![Build Status](https://img.shields.io/travis/coreos/dbtester.svg?style=flat-square)](https://travis-ci.org/coreos/dbtester) [![Godoc](http://img.shields.io/badge/go-documentation-blue.svg?style=flat-square)](https://godoc.org/github.com/coreos/dbtester)

Distributed database benchmark tester: etcd, Zookeeper, Consul, zetcd, cetcd


<br><br><hr>
##### Performance Analysis

- Latest test results can be found at https://github.com/coreos/dbtester/tree/master/test-results
- Exploring Performance of etcd, Zookeeper and Consul Consistent Key-value Datastores (February 17, 2017)
  - https://coreos.com/blog/performance-of-etcd.html


<br><br><hr>
##### Project

![dbtester system architecture](./dbtester.png)

- Database Agent
  - https://github.com/coreos/dbtester/tree/master/agent
- Database Client
  - https://github.com/coreos/dbtester/tree/master/control
- System Metrics
  - https://github.com/gyuho/linux-inspect
- Test Data Analysis
  - https://github.com/coreos/dbtester/tree/master/analyze
  - https://github.com/gyuho/dataframe
  - https://github.com/gonum/plot

For etcd, we recommend [etcd benchmark tool](https://github.com/coreos/etcd/tree/master/tools/benchmark).

All logs and results can be found at https://github.com/coreos/dbtester/tree/master/test-results or https://console.cloud.google.com/storage/browser/dbtester-results/?authuser=0&project=etcd-development.


<br><br><hr>
##### Noticeable Warnings: Zookeeper

Snapshot, when writing 1-million entries (256-byte key, 1KB value value), with 500 concurrent clients

```
# snapshot warnings
cd 2017Q1-00-etcd-zookeeper-consul/02-write-1M-keys-best-throughput
grep -r -i fsync-ing\ the zookeeper-r3.4.9-java8-* | less

2017-02-10 18:55:38,997 [myid:3] - WARN  [SyncThread:3:SyncRequestProcessor@148] - Too busy to snap, skipping
2017-02-10 18:55:38,998 [myid:3] - INFO  [SyncThread:3:FileTxnLog@203] - Creating new log file: log.1000c0c51
2017-02-10 18:55:40,855 [myid:3] - INFO  [SyncThread:3:FileTxnLog@203] - Creating new log file: log.1000cd2e6
2017-02-10 18:55:40,855 [myid:3] - INFO  [Snapshot Thread:FileTxnSnapLog@240] - Snapshotting: 0x1000cd1ca to /home/gyuho/zookeeper/zookeeper.data/version-2/snapshot.1000cd1ca
2017-02-10 18:55:46,382 [myid:3] - WARN  [SyncThread:3:FileTxnLog@338] - fsync-ing the write ahead log in SyncThread:3 took 1062ms which will adversely effect operation latency. See the ZooKeeper troubleshooting guide
2017-02-10 18:55:47,471 [myid:3] - WARN  [SyncThread:3:FileTxnLog@338] - fsync-ing the write ahead log in SyncThread:3 took 1084ms which will adversely effect operation latency. See the ZooKeeper troubleshooting guide
2017-02-10 18:55:49,425 [myid:3] - WARN  [SyncThread:3:FileTxnLog@338] - fsync-ing the write ahead log in SyncThread:3 took 1142ms which will adversely effect operation latency. See the ZooKeeper troubleshooting guide
2017-02-10 18:55:51,188 [myid:3] - WARN  [SyncThread:3:FileTxnLog@338] - fsync-ing the write ahead log in SyncThread:3 took 1201ms which will adversely effect operation latency. See the ZooKeeper troubleshooting guide
2017-02-10 18:55:52,292 [myid:3] - WARN  [SyncThread:3:FileTxnLog@338] - fsync-ing the write ahead log in SyncThread:3 took 1102ms which will adversely effect operation latency. See the ZooKeeper troubleshooting guide
```

When writing more than 2-million entries (256-byte key, 1KB value value) with 500 concurrent clients

```
# leader election
cd 2017Q1-00-etcd-zookeeper-consul/04-write-too-many-keys
grep -r -i election\ took  zookeeper-r3.4.9-java8-* | less

# leader election is taking more than 10 seconds...
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:22:16,549 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Follower@61] - FOLLOWING - LEADER ELECTION TOOK - 22978
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:23:02,279 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 10210
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:23:14,498 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 203
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:23:36,303 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 9791
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:23:52,151 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 3836
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:24:13,849 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 9686
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:24:29,694 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 3573
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:24:51,392 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 8686
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:25:07,231 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 3827
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:25:28,940 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 9697
zookeeper-r3.4.9-java8-2-database.log:2017-02-10 19:25:44,772 [myid:2] - INFO  [QuorumPeer[myid=2]/0:0:0:0:0:0:0:0:2181:Leader@361] - LEADING - LEADER ELECTION TOOK - 3820
```


<br><br><hr>
##### Noticeable Warnings: Consul

Snapshot, when writing 1-million entries (256-byte key, 1KB value value), with 500 concurrent clients

```
# snapshot warnings
cd 2017Q1-00-etcd-zookeeper-consul/02-write-1M-keys-best-throughput
grep -r -i installed\ remote consul-v0.7.4-go1.7.5-* | less

    2017/02/10 18:58:43 [INFO] snapshot: Creating new snapshot at /home/gyuho/consul.data/raft/snapshots/2-900345-1486753123478.tmp
    2017/02/10 18:58:45 [INFO] snapshot: reaping snapshot /home/gyuho/consul.data/raft/snapshots/2-849399-1486753096972
    2017/02/10 18:58:46 [INFO] raft: Copied 1223270573 bytes to local snapshot
    2017/02/10 18:58:55 [INFO] raft: Compacting logs from 868354 to 868801
    2017/02/10 18:58:56 [INFO] raft: Installed remote snapshot
    2017/02/10 18:58:57 [INFO] snapshot: Creating new snapshot at /home/gyuho/consul.data/raft/snapshots/2-911546-1486753137827.tmp
    2017/02/10 18:58:59 [INFO] consul.fsm: snapshot created in 32.255µs
    2017/02/10 18:59:01 [INFO] snapshot: reaping snapshot /home/gyuho/consul.data/raft/snapshots/2-873921-1486753116619
    2017/02/10 18:59:02 [INFO] raft: Copied 1238491373 bytes to local snapshot
    2017/02/10 18:59:11 [INFO] raft: Compacting logs from 868802 to 868801
    2017/02/10 18:59:11 [INFO] raft: Installed remote snapshot
```

Logs do not tell much but average latency spikes (e.g. from 70.27517 ms to 10407.900082 ms)



<img src="https://storage.googleapis.com/dbtester-results/2017Q2-02-etcd-zookeeper-consul/2017Q2-01-write-1M-cpu-client-scaling.png" alt="2017Q2-01-write-1M-cpu-client-scaling">

<img src="https://storage.googleapis.com/dbtester-results/2017Q2-02-etcd-zookeeper-consul/2017Q2-02-write-1M-network-traffic-best-throughput.png" alt="2017Q2-02-write-1M-network-traffic-best-throughput">

<img src="https://storage.googleapis.com/dbtester-results/2017Q2-02-etcd-zookeeper-consul/2017Q2-01-write-1M-throughput-client-scaling.png" alt="2017Q2-01-write-1M-throughput-client-scaling">

<img src="https://storage.googleapis.com/dbtester-results/2017Q2-02-etcd-zookeeper-consul/2017Q2-02-write-1M-latency-best-throughput.png" alt="2017Q2-02-write-1M-latency-best-throughput">


<br><br><hr>
##### Write 1M keys, 256-byte key, 1KB value, Best Throughput (etcd 1K clients with 100 conns, Zookeeper 700, Consul 500 clients)

- Google Cloud Compute Engine
- 4 machines of 16 vCPUs + 60 GB Memory + 300 GB SSD (1 for client)
- Ubuntu 17.10 (GNU/Linux kernel 4.13.0-25-generic)
- `ulimit -n` is 120000
- etcd v3.3.0 (Go 1.9.2)
- Zookeeper r3.5.3-beta
  - Java 8
  - javac 1.8.0_151
  - Java(TM) SE Runtime Environment (build 1.8.0_151-b12)
  - Java HotSpot(TM) 64-Bit Server VM (build 25.151-b12, mixed mode)
  - `/usr/bin/java -Djute.maxbuffer=33554432 -Xms50G -Xmx50G`
- Consul v1.0.2 (Go 1.9.2)


```
+---------------------------------------+---------------------+-----------------------------+-----------------------+
|                                       | etcd-v3.3.0-go1.9.2 | zookeeper-r3.5.3-beta-java8 | consul-v1.0.2-go1.9.2 |
+---------------------------------------+---------------------+-----------------------------+-----------------------+
|                         TOTAL-SECONDS |         28.3623 sec |                 59.2167 sec |          178.9443 sec |
|                  TOTAL-REQUEST-NUMBER |           1,000,000 |                   1,000,000 |             1,000,000 |
|                        MAX-THROUGHPUT |      37,330 req/sec |              25,124 req/sec |        15,865 req/sec |
|                        AVG-THROUGHPUT |      35,258 req/sec |              16,842 req/sec |         5,588 req/sec |
|                        MIN-THROUGHPUT |      13,505 req/sec |                  20 req/sec |             0 req/sec |
|                       FASTEST-LATENCY |           4.6073 ms |                   2.9094 ms |            11.6604 ms |
|                           AVG-LATENCY |          28.2625 ms |                  30.9499 ms |            89.4351 ms |
|                       SLOWEST-LATENCY |         117.4918 ms |                4564.6788 ms |          4616.2947 ms |
|                           Latency p10 |        13.508626 ms |                 9.068163 ms |          30.408863 ms |
|                           Latency p25 |        16.869586 ms |                 9.351597 ms |          34.224021 ms |
|                           Latency p50 |        22.167478 ms |                10.093377 ms |          39.881181 ms |
|                           Latency p75 |        34.855941 ms |                14.951189 ms |          52.644787 ms |
|                           Latency p90 |        54.613394 ms |                28.497256 ms |         118.340402 ms |
|                           Latency p95 |        59.785127 ms |                72.671788 ms |         229.129526 ms |
|                           Latency p99 |        74.139638 ms |               273.218523 ms |        1495.660763 ms |
|                         Latency p99.9 |        97.385495 ms |              2526.873285 ms |        3499.225138 ms |
|      SERVER-TOTAL-NETWORK-RX-DATA-SUM |              5.1 GB |                      4.6 GB |                5.6 GB |
|      SERVER-TOTAL-NETWORK-TX-DATA-SUM |              3.8 GB |                      3.6 GB |                4.4 GB |
|           CLIENT-TOTAL-NETWORK-RX-SUM |              252 MB |                      357 MB |                206 MB |
|           CLIENT-TOTAL-NETWORK-TX-SUM |              1.5 GB |                      1.4 GB |                1.5 GB |
|                  SERVER-MAX-CPU-USAGE |            446.83 % |                   1122.00 % |              426.33 % |
|               SERVER-MAX-MEMORY-USAGE |              1.1 GB |                       15 GB |                4.6 GB |
|                  CLIENT-MAX-CPU-USAGE |            606.00 % |                    314.00 % |              215.00 % |
|               CLIENT-MAX-MEMORY-USAGE |               96 MB |                      2.4 GB |                 86 MB |
|                    CLIENT-ERROR-COUNT |                   0 |                       2,652 |                     0 |
|  SERVER-AVG-READS-COMPLETED-DELTA-SUM |                   0 |                         237 |                     2 |
|    SERVER-AVG-SECTORS-READS-DELTA-SUM |                   0 |                           0 |                     0 |
| SERVER-AVG-WRITES-COMPLETED-DELTA-SUM |             108,067 |                     157,034 |               675,072 |
|  SERVER-AVG-SECTORS-WRITTEN-DELTA-SUM |          20,449,360 |                  16,480,488 |           106,836,768 |
|           SERVER-AVG-DISK-SPACE-USAGE |              2.6 GB |                      6.9 GB |                2.9 GB |
+---------------------------------------+---------------------+-----------------------------+-----------------------+


zookeeper__r3_5_3_beta errors:
"zk: connection closed" (count 2,264)
"zk: could not connect to a server" (count 388)
```


<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-LATENCY-MS.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-LATENCY-MS">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-LATENCY-MS-BY-KEY.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-LATENCY-MS-BY-KEY">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-LATENCY-MS-BY-KEY-ERROR-POINTS.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-LATENCY-MS-BY-KEY-ERROR-POINTS">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-THROUGHPUT.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-THROUGHPUT">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VOLUNTARY-CTXT-SWITCHES.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VOLUNTARY-CTXT-SWITCHES">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-NON-VOLUNTARY-CTXT-SWITCHES.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-NON-VOLUNTARY-CTXT-SWITCHES">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-CPU.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-CPU">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/MAX-CPU.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/MAX-CPU">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VMRSS-MB.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VMRSS-MB">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VMRSS-MB-BY-KEY.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VMRSS-MB-BY-KEY">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VMRSS-MB-BY-KEY-ERROR-POINTS.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-VMRSS-MB-BY-KEY-ERROR-POINTS">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-READS-COMPLETED-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-READS-COMPLETED-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-SECTORS-READ-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-SECTORS-READ-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-WRITES-COMPLETED-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-WRITES-COMPLETED-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-SECTORS-WRITTEN-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-SECTORS-WRITTEN-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-READ-BYTES-NUM-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-READ-BYTES-NUM-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-WRITE-BYTES-NUM-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-WRITE-BYTES-NUM-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-RECEIVE-BYTES-NUM-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-RECEIVE-BYTES-NUM-DELTA">



<img src="https://storage.googleapis.com/dbtester-results/2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-TRANSMIT-BYTES-NUM-DELTA.svg" alt="2018Q1-02-etcd-zookeeper-consul/write-1M-keys-best-throughput/AVG-TRANSMIT-BYTES-NUM-DELTA">



