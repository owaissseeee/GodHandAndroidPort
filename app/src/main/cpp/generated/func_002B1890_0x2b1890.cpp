#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002B1890
// Address: 0x2b1890 - 0x2b1be8
void func_002B1890_0x2b1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B1890_0x2b1890");
#endif

    switch (ctx->pc) {
        case 0x2b1998u: goto label_2b1998;
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1ba0u: goto label_2b1ba0;
        default: break;
    }

    ctx->pc = 0x2b1890u;

    // 0x2b1890: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b1894: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b1894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b1898: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b1898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b189c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b189cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b18a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b18a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b18a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b18a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b18a8: 0xe7be0090  swc1        $f30, 0x90($sp)
    ctx->pc = 0x2b18a8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b18ac: 0xe7bd0088  swc1        $f29, 0x88($sp)
    ctx->pc = 0x2b18acu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2b18b0: 0xe7bc0080  swc1        $f28, 0x80($sp)
    ctx->pc = 0x2b18b0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b18b4: 0xe7bb0078  swc1        $f27, 0x78($sp)
    ctx->pc = 0x2b18b4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b18b8: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x2b18b8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b18bc: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x2b18bcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b18c0: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x2b18c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b18c4: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x2b18c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2b18c8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2b18c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b18cc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2b18ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2b18d0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2b18d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2b18d4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b18d8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2b18d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2b18dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b18dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b18e0: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x2B18E0u;
    {
        const bool branch_taken_0x2b18e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B18E0u;
        // 0x2b18e4: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b18e0) {
            ctx->pc = 0x2B1BA0u;
            goto label_2b1ba0;
        }
    }
    ctx->pc = 0x2B18E8u;
    // 0x2b18e8: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x2b18e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x2b18ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b18ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b18f0: 0x860400a6  lh          $a0, 0xA6($s0)
    ctx->pc = 0x2b18f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 166)));
    // 0x2b18f4: 0x24637510  addiu       $v1, $v1, 0x7510
    ctx->pc = 0x2b18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29968));
    // 0x2b18f8: 0xc6030098  lwc1        $f3, 0x98($s0)
    ctx->pc = 0x2b18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b18fc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2b18fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2b1900: 0x860200a8  lh          $v0, 0xA8($s0)
    ctx->pc = 0x2b1900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2b1904: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2b1904u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b1908: 0x0  nop
    ctx->pc = 0x2b1908u;
    // NOP
    // 0x2b190c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2b190cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2b1910: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2b1910u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2b1914: 0xc4760070  lwc1        $f22, 0x70($v1)
    ctx->pc = 0x2b1914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b1918: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b1918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b191c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b191cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1920: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x2b1920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2b1924: 0x0  nop
    ctx->pc = 0x2b1924u;
    // NOP
    // 0x2b1928: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x2b1928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x2b192c: 0xc602009c  lwc1        $f2, 0x9C($s0)
    ctx->pc = 0x2b192cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b1930: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b1930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b1934: 0x460026c1  sub.s       $f27, $f4, $f0
    ctx->pc = 0x2b1934u;
    ctx->f[27] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2b1938: 0x245175a0  addiu       $s1, $v0, 0x75A0
    ctx->pc = 0x2b1938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 30112));
    // 0x2b193c: 0x4603b580  add.s       $f22, $f22, $f3
    ctx->pc = 0x2b193cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[3]);
    // 0x2b1940: 0x3c0141a8  lui         $at, 0x41A8
    ctx->pc = 0x2b1940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16808 << 16));
    // 0x2b1944: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b1944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b1948: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x2b1948u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2b194c: 0xc4780074  lwc1        $f24, 0x74($v1)
    ctx->pc = 0x2b194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b1950: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b1950u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b1954: 0x3c014228  lui         $at, 0x4228
    ctx->pc = 0x2b1954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16936 << 16));
    // 0x2b1958: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x2b1958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x2b195c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b195cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b1960: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1960u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C254Cu));
    // 0x2b1964: 0x24422478  addiu       $v0, $v0, 0x2478
    ctx->pc = 0x2b1964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9336));
    // 0x2b1968: 0x4616df80  add.s       $f30, $f27, $f22
    ctx->pc = 0x2b1968u;
    ctx->f[30] = FPU_ADD_S(ctx->f[27], ctx->f[22]);
    // 0x2b196c: 0x4602c600  add.s       $f24, $f24, $f2
    ctx->pc = 0x2b196cu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[2]);
    // 0x2b1970: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2b1970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5E75A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E75A4u, _value); } while (0);
    // 0x2b1974: 0x4614de40  add.s       $f25, $f27, $f20
    ctx->pc = 0x2b1974u;
    ctx->f[25] = FPU_ADD_S(ctx->f[27], ctx->f[20]);
    // 0x2b1978: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b1978u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b197c: 0x461cb581  sub.s       $f22, $f22, $f28
    ctx->pc = 0x2b197cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[28]);
    // 0x2b1980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1988: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x2b1988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x2b198c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b198cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2b1990: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1990u;
    SET_GPR_U32(ctx, 31, 0x2B1998u);
    ctx->pc = 0x2B1994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1990u;
    // 0x2b1994: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1990u, 0x2B1998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1998u;
label_2b1998:
    // 0x2b1998: 0x4614f681  sub.s       $f26, $f30, $f20
    ctx->pc = 0x2b1998u;
    ctx->f[26] = FPU_SUB_S(ctx->f[30], ctx->f[20]);
    // 0x2b199c: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b199cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b19a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b19a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b19a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b19a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b19a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b19ac: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2b19acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2b19b0: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2b19b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2b19b4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2b19b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2b19b8: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B19B8u;
    SET_GPR_U32(ctx, 31, 0x2B19C0u);
    ctx->pc = 0x2B19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19B8u;
    // 0x2b19bc: 0x4614af40  add.s       $f29, $f21, $f20 (Delay Slot)
    ctx->f[29] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B19B8u, 0x2B19C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19C0u;
label_2b19c0:
    // 0x2b19c0: 0x461cc5c1  sub.s       $f23, $f24, $f28
    ctx->pc = 0x2b19c0u;
    ctx->f[23] = FPU_SUB_S(ctx->f[24], ctx->f[28]);
    // 0x2b19c4: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b19c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b19c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b19c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b19cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b19d4: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x2b19d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x2b19d8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b19d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2b19dc: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B19DCu;
    SET_GPR_U32(ctx, 31, 0x2B19E4u);
    ctx->pc = 0x2B19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19DCu;
    // 0x2b19e0: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B19DCu, 0x2B19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19E4u;
label_2b19e4:
    // 0x2b19e4: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b19e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b19e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b19e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b19ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b19ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b19f0: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x2b19f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x2b19f4: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x2b19f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x2b19f8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b19f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2b19fc: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B19FCu;
    SET_GPR_U32(ctx, 31, 0x2B1A04u);
    ctx->pc = 0x2B1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B19FCu;
    // 0x2b1a00: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B19FCu, 0x2B1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A04u;
label_2b1a04:
    // 0x2b1a04: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b1a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1a10: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2b1a10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2b1a14: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x2b1a14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x2b1a18: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2b1a18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2b1a1c: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B1A24u);
    ctx->pc = 0x2B1A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A1Cu;
    // 0x2b1a20: 0x4600bbc6  mov.s       $f15, $f23 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1A1Cu, 0x2B1A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A24u;
label_2b1a24:
    // 0x2b1a24: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1a28: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x2b1a28u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x2b1a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a30: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b1a34: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x2b1a34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x2b1a38: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x2b1a38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x2b1a3c: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B1A44u);
    ctx->pc = 0x2B1A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A3Cu;
    // 0x2b1a40: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1A3Cu, 0x2B1A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A44u;
label_2b1a44:
    // 0x2b1a44: 0x4618ad40  add.s       $f21, $f21, $f24
    ctx->pc = 0x2b1a44u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[24]);
    // 0x2b1a48: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2b1a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b1a54: 0x4600db06  mov.s       $f12, $f27
    ctx->pc = 0x2b1a54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[27]);
    // 0x2b1a58: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b1a58u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2b1a5c: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x2b1a5cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2b1a60: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2b1a60u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2b1a64: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1A64u;
    SET_GPR_U32(ctx, 31, 0x2B1A6Cu);
    ctx->pc = 0x2B1A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A64u;
    // 0x2b1a68: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1A64u, 0x2B1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A6Cu;
label_2b1a6c:
    // 0x2b1a6c: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1a70: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x2b1a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x2b1a74: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x2b1a74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x2b1a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a7c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b1a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b1a80: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b1a80u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b1a84: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1A84u;
    SET_GPR_U32(ctx, 31, 0x2B1A8Cu);
    ctx->pc = 0x2B1A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1A84u;
    // 0x2b1a88: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1A84u, 0x2B1A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A8Cu;
label_2b1a8c:
    // 0x2b1a8c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2b1a8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2b1a90: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1a90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1a94: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x2b1a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x2b1a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1a9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2b1a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b1aa0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b1aa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b1aa4: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1AA4u;
    SET_GPR_U32(ctx, 31, 0x2B1AACu);
    ctx->pc = 0x2B1AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1AA4u;
    // 0x2b1aa8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1AA4u, 0x2B1AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AACu;
label_2b1aac:
    // 0x2b1aac: 0x96030062  lhu         $v1, 0x62($s0)
    ctx->pc = 0x2b1aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x2b1ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1ab4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B1AB4u;
    {
        const bool branch_taken_0x2b1ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AB4u;
        // 0x2b1ab8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ab4) {
            ctx->pc = 0x2B1B10u;
            goto label_2b1b10;
        }
    }
    ctx->pc = 0x2B1ABCu;
    // 0x2b1abc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B1ABCu;
    {
        const bool branch_taken_0x2b1abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ABCu;
        // 0x2b1ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1abc) {
            ctx->pc = 0x2B1AD4u;
            goto label_2b1ad4;
        }
    }
    ctx->pc = 0x2B1AC4u;
    // 0x2b1ac4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B1AC4u;
    {
        const bool branch_taken_0x2b1ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1ac4) {
            ctx->pc = 0x2B1AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1AC4u;
            // 0x2b1ac8: 0xc60f009c  lwc1        $f15, 0x9C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1AF0u;
            goto label_2b1af0;
        }
    }
    ctx->pc = 0x2B1ACCu;
    // 0x2b1acc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2B1ACCu;
    {
        const bool branch_taken_0x2b1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1ACCu;
        // 0x2b1ad0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1acc) {
            ctx->pc = 0x2B1BA4u;
            goto label_2b1ba4;
        }
    }
    ctx->pc = 0x2B1AD4u;
label_2b1ad4:
    // 0x2b1ad4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1ad8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B1AD8u;
    {
        const bool branch_taken_0x2b1ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AD8u;
        // 0x2b1adc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ad8) {
            ctx->pc = 0x2B1B3Cu;
            goto label_2b1b3c;
        }
    }
    ctx->pc = 0x2B1AE0u;
    // 0x2b1ae0: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B1AE0u;
    {
        const bool branch_taken_0x2b1ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b1ae0) {
            ctx->pc = 0x2B1AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1AE0u;
            // 0x2b1ae4: 0x461cf300  add.s       $f12, $f30, $f28 (Delay Slot)
            ctx->f[12] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1B74u;
            goto label_2b1b74;
        }
    }
    ctx->pc = 0x2B1AE8u;
    // 0x2b1ae8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B1AE8u;
    {
        const bool branch_taken_0x2b1ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1AE8u;
        // 0x2b1aec: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1ae8) {
            ctx->pc = 0x2B1BA4u;
            goto label_2b1ba4;
        }
    }
    ctx->pc = 0x2B1AF0u;
label_2b1af0:
    // 0x2b1af0: 0x461cdb01  sub.s       $f12, $f27, $f28
    ctx->pc = 0x2b1af0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x2b1af4: 0xc60e0098  lwc1        $f14, 0x98($s0)
    ctx->pc = 0x2b1af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b1af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1afc: 0x461c7bc2  mul.s       $f15, $f15, $f28
    ctx->pc = 0x2b1afcu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[28]);
    // 0x2b1b00: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1b04: 0x461c7382  mul.s       $f14, $f14, $f28
    ctx->pc = 0x2b1b04u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[28]);
    // 0x2b1b08: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B1B08u;
    {
        const bool branch_taken_0x2b1b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B08u;
        // 0x2b1b0c: 0x4600eb46  mov.s       $f13, $f29 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b08) {
            ctx->pc = 0x2B1B64u;
            goto label_2b1b64;
        }
    }
    ctx->pc = 0x2B1B10u;
label_2b1b10:
    // 0x2b1b10: 0xc60f009c  lwc1        $f15, 0x9C($s0)
    ctx->pc = 0x2b1b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b1b14: 0x461cf300  add.s       $f12, $f30, $f28
    ctx->pc = 0x2b1b14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[30], ctx->f[28]);
    // 0x2b1b18: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2b1b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b20: 0x3c01c228  lui         $at, 0xC228
    ctx->pc = 0x2b1b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49704 << 16));
    // 0x2b1b24: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2b1b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b1b28: 0x461c7bc2  mul.s       $f15, $f15, $f28
    ctx->pc = 0x2b1b28u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[28]);
    // 0x2b1b2c: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1b30: 0x4600eb46  mov.s       $f13, $f29
    ctx->pc = 0x2b1b30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[29]);
    // 0x2b1b34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B1B34u;
    {
        const bool branch_taken_0x2b1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B34u;
        // 0x2b1b38: 0x460e0382  mul.s       $f14, $f0, $f14 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b34) {
            ctx->pc = 0x2B1B64u;
            goto label_2b1b64;
        }
    }
    ctx->pc = 0x2B1B3Cu;
label_2b1b3c:
    // 0x2b1b3c: 0xc60f009c  lwc1        $f15, 0x9C($s0)
    ctx->pc = 0x2b1b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b1b40: 0x461cdb01  sub.s       $f12, $f27, $f28
    ctx->pc = 0x2b1b40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
    // 0x2b1b44: 0xc60e0098  lwc1        $f14, 0x98($s0)
    ctx->pc = 0x2b1b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b1b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b4c: 0x3c01c228  lui         $at, 0xC228
    ctx->pc = 0x2b1b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49704 << 16));
    // 0x2b1b50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b54: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b1b54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b1b58: 0x461c7382  mul.s       $f14, $f14, $f28
    ctx->pc = 0x2b1b58u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[28]);
    // 0x2b1b5c: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1b60: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2b1b60u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
label_2b1b64:
    // 0x2b1b64: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1B64u;
    SET_GPR_U32(ctx, 31, 0x2B1B6Cu);
    ctx->pc = 0x2B1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B64u;
    // 0x2b1b68: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1B64u, 0x2B1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B6Cu;
label_2b1b6c:
    // 0x2b1b6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B1B6Cu;
    {
        const bool branch_taken_0x2b1b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1B6Cu;
        // 0x2b1b70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1b6c) {
            ctx->pc = 0x2B1BA4u;
            goto label_2b1ba4;
        }
    }
    ctx->pc = 0x2B1B74u;
label_2b1b74:
    // 0x2b1b74: 0x3c01c228  lui         $at, 0xC228
    ctx->pc = 0x2b1b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49704 << 16));
    // 0x2b1b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b1b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1b7c: 0xc60f009c  lwc1        $f15, 0x9C($s0)
    ctx->pc = 0x2b1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b1b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b1b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1b84: 0xc60e0098  lwc1        $f14, 0x98($s0)
    ctx->pc = 0x2b1b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b1b88: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b1b88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b1b8c: 0x46007bc2  mul.s       $f15, $f15, $f0
    ctx->pc = 0x2b1b8cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x2b1b90: 0x8e46254c  lw          $a2, 0x254C($s2)
    ctx->pc = 0x2b1b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9548)));
    // 0x2b1b94: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x2b1b94u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2b1b98: 0xc0ac816  jal         func_2B2058
    ctx->pc = 0x2B1B98u;
    SET_GPR_U32(ctx, 31, 0x2B1BA0u);
    ctx->pc = 0x2B1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1B98u;
    // 0x2b1b9c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2058u, 0x2B1B98u, 0x2B1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BA0u;
label_2b1ba0:
    // 0x2b1ba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b1ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1ba4:
    // 0x2b1ba4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b1ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1ba8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b1ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1bac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1bb0: 0xc7be0090  lwc1        $f30, 0x90($sp)
    ctx->pc = 0x2b1bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2b1bb4: 0xc7bd0088  lwc1        $f29, 0x88($sp)
    ctx->pc = 0x2b1bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2b1bb8: 0xc7bc0080  lwc1        $f28, 0x80($sp)
    ctx->pc = 0x2b1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2b1bbc: 0xc7bb0078  lwc1        $f27, 0x78($sp)
    ctx->pc = 0x2b1bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2b1bc0: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x2b1bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2b1bc4: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x2b1bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2b1bc8: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x2b1bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2b1bcc: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2b1bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b1bd0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2b1bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b1bd4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2b1bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b1bd8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2b1bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1BDCu;
        // 0x2b1be0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1BE4u;
    // 0x2b1be4: 0x0  nop
    ctx->pc = 0x2b1be4u;
    // NOP
    ctx->pc = 0x2b1be8u;
}
