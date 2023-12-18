import org.example.utils.UtilsMethod;
import org.junit.Assert;
import org.junit.Test;
public class Test2 {
    @Test
    public void testOk() {
        Assert.assertTrue(UtilsMethod.isNotConvertibleToNumber("5ee8"));
    }
}
