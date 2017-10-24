{
	"results": [{
		"name": "Career",
		"class_name": "MClass",
		"full_name": "test_prog::Career",
		"mdoc": {
			"content": "A `Career` gives a characteristic bonus or malus to the character.",
			"location": {
				"column_end": 0,
				"column_start": 1,
				"line_end": 30,
				"line_start": 29,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/careers.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["abstract class"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 36,
			"line_start": 29,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/careers.nit"
		},
		"mparameters": []
	}, {
		"name": "career",
		"class_name": "MMethod",
		"full_name": "test_prog::Character::career",
		"mdoc": {
			"content": "The current `Career` of the character.\nReturns `null` if character is unemployed.",
			"location": {
				"column_end": 0,
				"column_start": 2,
				"line_end": 29,
				"line_start": 27,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/character.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["fun"],
		"location": {
			"column_end": 47,
			"column_start": 2,
			"line_end": 29,
			"line_start": 27,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/character.nit"
		},
		"is_init": false,
		"msignature": {
			"arity": 0,
			"mparams": [],
			"return_mtype": {
				"full_name": "nullable test_prog::Career"
			},
			"vararg_rank": -1
		}
	}, {
		"name": "game",
		"class_name": "MGroup",
		"full_name": "test_prog>game>",
		"mdoc": {
			"content": "Gaming group",
			"location": {
				"column_end": 0,
				"column_start": 0,
				"line_end": 1,
				"line_start": 1,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/game/README.md"
			}
		},
		"visibility": "public",
		"modifiers": ["group"],
		"location": {
			"column_end": 0,
			"column_start": 0,
			"line_end": 0,
			"line_start": 0,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/game"
		}
	}, {
		"name": "game",
		"class_name": "MModule",
		"full_name": "test_prog::game",
		"mdoc": {
			"content": "A game abstraction for RPG.",
			"location": {
				"column_end": 0,
				"column_start": 1,
				"line_end": 16,
				"line_start": 15,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/game/game.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["module"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 45,
			"line_start": 15,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/game/game.nit"
		}
	}, {
		"name": "races",
		"class_name": "MModule",
		"full_name": "test_prog::races",
		"mdoc": {
			"content": "Races of the game.\n\nAll characters belong to a `Race`.\n\nAvailable races:\n\n * `Human`\n * `Dwarf`\n * `Elf`",
			"location": {
				"column_end": 0,
				"column_start": 1,
				"line_end": 24,
				"line_start": 15,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/races.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["module"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 78,
			"line_start": 15,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/races.nit"
		}
	}, {
		"name": "careers",
		"class_name": "MModule",
		"full_name": "test_prog::careers",
		"mdoc": {
			"content": "Careers of the game.\n\nAll characters can have a `Career`.\nA character can also quit its current career and start a new one.\n\nAvailable careers:\n\n * `Warrior`\n * `Magician`\n * `Alcoholic`",
			"location": {
				"column_end": 0,
				"column_start": 1,
				"line_end": 25,
				"line_start": 15,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/careers.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["module"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 69,
			"line_start": 15,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/careers.nit"
		}
	}, {
		"name": "Game",
		"class_name": "MClass",
		"full_name": "test_prog::Game",
		"mdoc": {
			"content": "This is the interface you have to implement to use ure gaming platform.\n\nsee http://our.platform.com",
			"location": {
				"column_end": 0,
				"column_start": 1,
				"line_end": 23,
				"line_start": 20,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/game/game.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["interface"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 45,
			"line_start": 20,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/game/game.nit"
		},
		"mparameters": []
	}, {
		"name": "Race",
		"class_name": "MClass",
		"full_name": "test_prog::Race",
		"mdoc": {
			"content": "Race determines basic characteristics and what the character will be able to do in life.\n\nThese are base characteristics, they cannot be changed\nbut you can add new ones if needed using refinement.\nObjects and spells cannot change those characteristics.",
			"location": {
				"column_end": 0,
				"column_start": 1,
				"line_end": 33,
				"line_start": 28,
				"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/races.nit"
			}
		},
		"visibility": "public",
		"modifiers": ["abstract class"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 45,
			"line_start": 28,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/races.nit"
		},
		"mparameters": []
	}, {
		"name": "Starter",
		"class_name": "MClass",
		"full_name": "test_prog::Starter",
		"mdoc": null,
		"visibility": "public",
		"modifiers": ["class"],
		"location": {
			"column_end": 3,
			"column_start": 1,
			"line_end": 23,
			"line_start": 21,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/test_prog.nit"
		},
		"mparameters": []
	}, {
		"name": "age",
		"class_name": "MMethod",
		"full_name": "test_prog::Character::age",
		"mdoc": null,
		"visibility": "public",
		"modifiers": ["fun"],
		"location": {
			"column_end": 13,
			"column_start": 2,
			"line_end": 36,
			"line_start": 36,
			"file": "src/doc/commands/tests/../../../../tests/test_prog/rpg/character.nit"
		},
		"is_init": false,
		"msignature": {
			"arity": 0,
			"mparams": [],
			"return_mtype": {
				"full_name": "test_prog::Int"
			},
			"vararg_rank": -1
		}
	}],
	"page": 1,
	"count": 106,
	"limit": 10,
	"max": 10
}
