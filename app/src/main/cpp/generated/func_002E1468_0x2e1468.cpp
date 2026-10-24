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

// Function: func_002E1468
// Address: 0x2e1468 - 0x2e1528
void func_002E1468_0x2e1468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E1468_0x2e1468");
#endif

    switch (ctx->pc) {
        case 0x2e14b4u: goto label_2e14b4;
        case 0x2e14d0u: goto label_2e14d0;
        case 0x2e14ecu: goto label_2e14ec;
        default: break;
    }

    ctx->pc = 0x2e1468u;

    // 0x2e1468: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e1468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e146c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e1470: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e1470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e1474: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e1474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e147c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e147cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1480: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e1480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e1484: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e1484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1488: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2e1488u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e148c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e148cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1490: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2e1490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e1494: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2e1494u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e1498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e149c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e149cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e14a0: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x2e14a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e14a4: 0xc64e0000  lwc1        $f14, 0x0($s2)
    ctx->pc = 0x2e14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e14a8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e14a8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e14ac: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x2E14ACu;
    SET_GPR_U32(ctx, 31, 0x2E14B4u);
    ctx->pc = 0x2E14B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14ACu;
    // 0x2e14b0: 0x4600a406  mov.s       $f16, $f20 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x2E14ACu, 0x2E14B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14B4u;
label_2e14b4:
    // 0x2e14b4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e14b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e14b8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e14b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e14bc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e14bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e14c0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2e14c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2e14c4: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x2e14c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e14c8: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x2E14C8u;
    SET_GPR_U32(ctx, 31, 0x2E14D0u);
    ctx->pc = 0x2E14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14C8u;
    // 0x2e14cc: 0xc64e0004  lwc1        $f14, 0x4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x2E14C8u, 0x2E14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14D0u;
label_2e14d0:
    // 0x2e14d0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2e14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e14d4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2e14d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2e14d8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e14d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e14dc: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x2e14dcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x2e14e0: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x2e14e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e14e4: 0xc0b854a  jal         func_2E1528
    ctx->pc = 0x2E14E4u;
    SET_GPR_U32(ctx, 31, 0x2E14ECu);
    ctx->pc = 0x2E14E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14E4u;
    // 0x2e14e8: 0xc64e0008  lwc1        $f14, 0x8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1528u, 0x2E14E4u, 0x2E14ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14ECu;
label_2e14ec:
    // 0x2e14ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2e14ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2e14f0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2e14f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e14f4: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2e14f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e14f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e14f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e14fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1500: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e1500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1508: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e1508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e150c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1510: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2e1510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e1514: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2e1514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1518: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1518u;
        // 0x2e151c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1520u;
    // 0x2e1520: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e1524: 0x0  nop
    ctx->pc = 0x2e1524u;
    // NOP
    ctx->pc = 0x2e1528u;
}
