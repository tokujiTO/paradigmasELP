import cv2

# Carrega o classificador de faces pré-treinado
face_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')

# Inicializa a captura da webcam (0 = câmera padrão)
camera = cv2.VideoCapture(0)

if not camera.isOpened():
    print("Erro: Não foi possível acessar a câmera.")
    exit()

while True:
    # Captura frame por frame
    ret, frame = camera.read()
    
    if not ret:
        print("Erro: Não foi possível capturar o frame.")
        break

    # Converte para tons de cinza (necessário para a detecção)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Detecta faces no frame
    faces = face_cascade.detectMultiScale(
        gray,
        scaleFactor=1.1,
        minNeighbors=15,
        minSize=(30, 30),
        flags=cv2.CASCADE_SCALE_IMAGE
    )

    # Desenha retângulos ao redor das faces detectadas
    for (x, y, w, h) in faces:
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 255), 2)

    # Mostra o frame resultante
    cv2.imshow('Detecção de Faces', frame)

    # Pressione 's' para sair
    if cv2.waitKey(1) & 0xFF == ord('s'):
        break

# Libera a câmera e fecha as janelas
camera.release()
cv2.destroyAllWindows()