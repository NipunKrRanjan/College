package Assignment;
interface Playable
{
    public void play();
}
class MusicPlayer implements Playable
{
    public void play()
    {
        System.out.println("Play method of MusicPlayer");
    }
}
class VideoPlayer implements Playable
{
    public void play()
    {
        System.out.println("Play method of VideoPlayer");
    }
}
public class q2 
{
    public static void main(String[] args)
    {
        MusicPlayer m1=new MusicPlayer();
        m1.play();
        VideoPlayer v1=new VideoPlayer();
        v1.play();
    }
}
