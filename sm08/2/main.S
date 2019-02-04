        .bss
A:      .space  4
B:      .space  4
C:      .space  4
D:      .space  4
R:      .space  4

        .text
        .global process, A, B, C, D, R

process:
        movl    B,      %eax
        imull   A
        movl    %eax,   %ebx
        movl    C,      %eax
        imull   D
        subl    %eax,   %ebx
        movl    %ebx,   R