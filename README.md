---

# ⏳ Loading Bar (C++)

A simple **loading bar** implementation in **C++** that visually represents progress in the terminal. It displays a dynamic bar that fills up as a task progresses.

## 🚀 Features

- **Visual Progress** : Displays a loading bar in the console that updates in real-time.
- **Customizable Bar Width** : Easily adjust the bar width and total progress.
- **Smooth Animation** : Progress updates every 50ms for smooth animation.

---

## 🛠 Installation

1. Clone the repository :

```bash
git clone https://github.com/XanderSteyn/Loading-Bar.git
cd Loading-Bar
```

2. Compile the C++ code :

```bash
g++ -o LoadingBar LoadingBar.cpp
```

3. Run the program :

```bash
./LoadingBar.exe
```

---

## 🎮 Usage

The loading bar will automatically display and update, simulating progress from 0% to 100%. You can adjust the `Total` variable to change the progress range.

---

## 🛑 How It Works

1. **Progress Calculation** : The program calculates the current progress as a percentage.
2. **Bar Rendering** : The loading bar is updated in the console with every iteration.
3. **Smooth Update** : The progress updates every 50ms for a smooth animation.

---

## 📌 Notes

- The bar width and total progress can be customized to suit your needs.
- Press **Enter** to exit the program when the progress reaches 100%.

---
