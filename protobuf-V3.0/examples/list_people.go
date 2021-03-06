package main

import (
	"fmt"
	"io"
	"io/ioutil"
	"log"
	"os"

	"github.com/golang/protobuf/proto"
	pb "github.com/google/protobuf/examples/tutorial"
)

func listPeople(w io.Writer, book *pb.AddressBook) {
	for _, p := range book.People {
		fmt.Fprintln(w, "Person ID:", p.Id)
		fmt.Fprintln(w, "  Name:", p.Name)
		if p.Email != "" {
			fmt.Fprintln(w, "  E-mail address:", p.Email)
		}

		for _, pn := range p.Phones {
			switch pn.Type {
			case pb.Person_MOBILE:
				fmt.Fprint(w, "  Mobile phone #: ")
			case pb.Person_HOME:
				fmt.Fprint(w, "  Home phone #: ")
			case pb.Person_WORK:
				fmt.Fprint(w, "  Work phone #: ")
			}
			fmt.Fprintln(w, pn.Number)
		}
	}
}

// Main reads the entire address book from a file and prints all the
// information inside.
func main() {
	if len(os.Args) != 2 {
		log.Fatalf("Usage:  %s ADDRESS_BOOK_FILE\n", os.Args[0])
	}
	fname := os.Args[1]

	// Read the existing address book.
	in, err := ioutil.ReadFile(fname)
	if err != nil {
		if os.IsNotExist(err) {
			fmt.Printf("%s: File not found.  Creating new file.\n", fname)
		} else {
			log.Fatalln("Error reading file:", err)
		}
	}
	book := &pb.AddressBook{}
	if err := proto.Unmarshal(in, book); err != nil {
		log.Fatalln("Failed to parse address book:", err)
	}

	listPeople(os.Stdout, book)
}
