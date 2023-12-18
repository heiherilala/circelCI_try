const readlineSync = require('readline-sync')
const RiceCooker = require('./models/RiceCooker')

function main() {
  let riceCooker = new RiceCooker()

  // eslint-disable-next-line no-constant-condition
  while (true) {
    console.log('Choose your action:')
    console.log('1>->-> Cook Rice')
    console.log('2>->-> Boil Water')
    console.log('3>->-> Make Soup')
    console.log('0>->-> Cancel')

    const choice = readlineSync.question('>->-> ')

    switch (choice) {
      case '1':
        riceCooker.cookRice()
        break
      case '2':
        riceCooker.boilWater()
        break
      case '3':
        riceCooker.makeSoup()
        break
      case '0':
        console.log('Cancelled. Returning to main menu.')
        riceCooker.cancel()
        break
      default:
        console.log('Invalid choice. Please try again.')
    }
  }
}

main()
