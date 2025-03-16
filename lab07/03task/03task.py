import pygame

pygame.init()

w, h = 500, 500

screen = pygame.display.set_mode((w, h))

COL_BACKGROUND = (255, 255, 255)

screen.fill(COL_BACKGROUND)

x, y = w // 2, h // 2
pygame.draw.circle(screen, (255, 0, 0), (x, y), 25)

pygame.key.set_repeat(100, 30)


#clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_RIGHT:
                x += 20
                if x > (w - 25):
                    x = w - 25

            elif event.key == pygame.K_LEFT:
                x -= 20
                if x < 25:
                    x = 25

 
            elif event.key == pygame.K_UP:
                y -= 20
                if y < 25:
                    y = 25

            elif event.key == pygame.K_DOWN:
                y += 20
                if y > (h - 25):
                    y = h - 25
            
    screen.fill(COL_BACKGROUND)
    pygame.draw.circle(screen, (255, 0, 0), (x, y), 25)
            



    pygame.display.flip()
    #clock.tick(60)