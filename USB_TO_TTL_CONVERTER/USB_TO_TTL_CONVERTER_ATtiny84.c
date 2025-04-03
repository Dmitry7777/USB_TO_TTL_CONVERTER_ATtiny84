#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL  // Microcontroller clock frequency

// Pin definitions
#define TTL_RXD PA0      // Receive from TTL device
#define TTL_TXD PA1      // Transmit to TTL device
#define RESET   PA2      // Reset line

void setup() {
    // Configure I/O pins
    DDRA |= (1 << DDA1);  // Set PA1 as output (TTL_TXD)
    PORTA &= ~(1 << PA1); // Initialize output low

    DDRB |= (1 << DDB2);  // Set PB2 as output (activity LED)
    PORTB &= ~(1 << PB2); // Initialize output low
}

int main(void) {
    setup();

    while (1) {
        if ((PINA & (1 << PINA0)) == 0) {  // If input is low
            PORTA |= (1 << PA1);           // Send high signal to TTL_TXD
            _delay_ms(100);
        } else {
            PORTA &= ~(1 << PA1);          // Send low signal to TTL_TXD
            _delay_ms(100);
        }

        // Activity indicator LED toggle
        PORTB ^= (1 << PB2);
        _delay_ms(500);
    }

    return 0;
}