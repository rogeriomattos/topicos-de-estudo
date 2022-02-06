interface DBConnectionInterface {
  connect: () => void;
}

class MySQLConnection implements DBConnectionInterface {
  public connect() {
    // ...
  }
}

class OracleConnection implements DBConnectionInterface {
  public connect() {
    // ...
  }
}

class UserRepository {

  constructor(private dbConnection: DBConnectionInterface) {
    dbConnection.connect();
  }
  // Faz alguma coisa
}