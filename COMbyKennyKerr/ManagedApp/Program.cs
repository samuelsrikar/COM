using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace ManagedApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Cluck();
        }

        [DllImport("Library.dll")]
        static extern void Cluck();
    }
}
