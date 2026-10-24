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

// Function: Ring_spawnSixPieces
// Address: 0x1f1810 - 0x1f1918
void Ring_spawnSixPieces_0x1f1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ring_spawnSixPieces_0x1f1810");
#endif

    switch (ctx->pc) {
        case 0x1f1878u: goto label_1f1878;
        case 0x1f1894u: goto label_1f1894;
        case 0x1f18a0u: goto label_1f18a0;
        case 0x1f18acu: goto label_1f18ac;
        case 0x1f18d4u: goto label_1f18d4;
        default: break;
    }

    ctx->pc = 0x1f1810u;

    // 0x1f1810: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f1814: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f1818: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x1f1818u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1f181c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f181cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1820: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x1f1820u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f1824: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x1f1824u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f1828: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x1f1828u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f182c: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1f182cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f1830: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f1830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f1834: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f1834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f1838: 0x26500c64  addiu       $s0, $s2, 0xC64
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3172));
    // 0x1f183c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f183cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1840: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1844: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1f1844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f1848: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f1848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f184c: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1f184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1f1850: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1f1850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1f1854: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1f1854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1f1858: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1f1858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1f185c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1f185cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1f1860: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1f1864: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f1864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f1868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f186c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f186cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f1870: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1f1870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f1874: 0x0  nop
    ctx->pc = 0x1f1874u;
    // NOP
label_1f1878:
    // 0x1f1878: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x1f1878u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f187c: 0x0  nop
    ctx->pc = 0x1f187cu;
    // NOP
    // 0x1f1880: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f1880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f1884: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f1888: 0x461a6302  mul.s       $f12, $f12, $f26
    ctx->pc = 0x1f1888u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[26]);
    // 0x1f188c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1F188Cu;
    SET_GPR_U32(ctx, 31, 0x1F1894u);
    ctx->pc = 0x1F1890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F188Cu;
    // 0x1f1890: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1F188Cu, 0x1F1894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1894u;
label_1f1894:
    // 0x1f1894: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f1894u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1898: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1F1898u;
    SET_GPR_U32(ctx, 31, 0x1F18A0u);
    ctx->pc = 0x1F189Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1898u;
    // 0x1f189c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1F1898u, 0x1F18A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18A0u;
label_1f18a0:
    // 0x1f18a0: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x1f18a0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f18a4: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x1F18A4u;
    SET_GPR_U32(ctx, 31, 0x1F18ACu);
    ctx->pc = 0x1F18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18A4u;
    // 0x1f18a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x1F18A4u, 0x1F18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18ACu;
label_1f18ac:
    // 0x1f18ac: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1f18acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f18b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f18b4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1f18b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f18b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f18b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18bc: 0xe7b8000c  swc1        $f24, 0xC($sp)
    ctx->pc = 0x1f18bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f18c0: 0x240503ec  addiu       $a1, $zero, 0x3EC
    ctx->pc = 0x1f18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
    // 0x1f18c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f18c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f18c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f18c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18cc: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F18CCu;
    SET_GPR_U32(ctx, 31, 0x1F18D4u);
    ctx->pc = 0x1F18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F18CCu;
    // 0x1f18d0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F18CCu, 0x1F18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F18D4u;
label_1f18d4:
    // 0x1f18d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f18d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f18d8: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1f18d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f18dc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1F18DCu;
    {
        const bool branch_taken_0x1f18dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F18DCu;
        // 0x1f18e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f18dc) {
            ctx->pc = 0x1F1878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1878;
        }
    }
    ctx->pc = 0x1F18E4u;
    // 0x1f18e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f18e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f18e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f18e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f18ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f18ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f18f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f18f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f18f4: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x1f18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f18f8: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x1f18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f18fc: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x1f18fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f1900: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x1f1900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f1904: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1f1904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f1908: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1f1908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f190c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f1910: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1910u;
        // 0x1f1914: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1918u;
}
