# `neo4j` - Neo4j connector through its JSON REST API using curl

For ease of use and testing this module provide a wrapper to the `neo4j` command:

    # Start the Neo4j server
    var srv = new Neo4jServer
    assert srv.start_quiet

In order to connect to Neo4j you need a connector:

    # Create new Neo4j client
    var client = new Neo4jClient("http://localhost:7474")
    assert client.is_ok

The fundamental units that form a graph are nodes and relationships.

Nodes are used to represent entities stored in base:

    # Create a disconnected node
    var andres = new NeoNode
    andres["name"] = "Andres"
    # Connect the node to Neo4j
    client.save_node(andres)
    assert andres.is_linked

    # Create a second node
    var kate = new NeoNode
    kate["name"] = "Kate"
    client.save_node(kate)
    assert kate.is_linked

Relationships between nodes are a key part of a graph database.
They allow for finding related data. Just like nodes, relationships can have properties.

    # Create a relationship
    var loves = new NeoEdge(andres, "LOVES", kate)
    client.save_edge(loves)
    assert loves.is_linked

Nodes can also be loaded fron Neo4j:

    # Get a node from DB and explore edges
    var url = andres.url.to_s
    var from = client.load_node(url)
    assert from["name"].to_s == "Andres"
    var to = from.out_nodes("LOVES").first		# follow the first LOVES relationship
    assert to["name"].to_s == "Kate"

For more details, see http://docs.neo4j.org/chunked/milestone/rest-api.html

## Features

![Diagram for `neo4j`](uml-neo4j.svg)

* `curl_json` - cURL requests compatible with the JSON REST APIs.
* `error` - Errors thrown by the `neo4j` library.

## Authors

This project is maintained by **Alexandre Terrasa <mailto:alexandre@moz-code.org>**.
