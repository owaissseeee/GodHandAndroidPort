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

// Function: cScenario_startCamMotion
// Address: 0x2c3f10 - 0x2c3fc0
void cScenario_startCamMotion_0x2c3f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_startCamMotion_0x2c3f10");
#endif

    switch (ctx->pc) {
        case 0x2c3f64u: goto label_2c3f64;
        case 0x2c3f84u: goto label_2c3f84;
        case 0x2c3f90u: goto label_2c3f90;
        default: break;
    }

    ctx->pc = 0x2c3f10u;

    // 0x2c3f10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c3f14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c3f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c3f18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2c3f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2c3f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c3f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c3f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c3f24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c3f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c3f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3f2c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C3F2Cu;
    {
        const bool branch_taken_0x2c3f2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F2Cu;
        // 0x2c3f30: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f2c) {
            ctx->pc = 0x2C3FA0u;
            goto label_2c3fa0;
        }
    }
    ctx->pc = 0x2C3F34u;
    // 0x2c3f34: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x2c3f34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x2c3f38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2c3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2c3f3c: 0x8cc27a78  lw          $v0, 0x7A78($a2)
    ctx->pc = 0x2c3f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x2c3f40: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2c3f40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2c3f44: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x2c3f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x2c3f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c3f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c3f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c3f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c3f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f54: 0xacc27a78  sw          $v0, 0x7A78($a2)
    ctx->pc = 0x2c3f54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x2c3f58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c3f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c3f5c: 0xc04e36e  jal         func_138DB8
    ctx->pc = 0x2C3F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F64u);
    ctx->pc = 0x2C3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F5Cu;
    // 0x2c3f60: 0x26100530  addiu       $s0, $s0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138DB8u, 0x2C3F5Cu, 0x2C3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F64u;
label_2c3f64:
    // 0x2c3f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c3f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c3f6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c3f70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c3f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c3f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c3f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3f7c: 0xc04e42e  jal         func_1390B8
    ctx->pc = 0x2C3F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3F84u);
    ctx->pc = 0x2C3F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F7Cu;
    // 0x2c3f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1390B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1390B8u, 0x2C3F7Cu, 0x2C3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F84u;
label_2c3f84:
    // 0x2c3f84: 0xe61403a8  swc1        $f20, 0x3A8($s0)
    ctx->pc = 0x2c3f84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 936), bits); }
    // 0x2c3f88: 0xc04e180  jal         func_138600
    ctx->pc = 0x2C3F88u;
    SET_GPR_U32(ctx, 31, 0x2C3F90u);
    ctx->pc = 0x2C3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3F88u;
    // 0x2c3f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138600u, 0x2C3F88u, 0x2C3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F90u;
label_2c3f90:
    // 0x2c3f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3F98u;
    {
        const bool branch_taken_0x2c3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F98u;
        // 0x2c3f9c: 0xa2430111  sb          $v1, 0x111($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 273), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f98) {
            ctx->pc = 0x2C3FA4u;
            goto label_2c3fa4;
        }
    }
    ctx->pc = 0x2C3FA0u;
label_2c3fa0:
    // 0x2c3fa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3fa4:
    // 0x2c3fa4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c3fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3fa8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c3fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3fac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2c3facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3fb4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c3fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c3fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FB8u;
        // 0x2c3fbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3FC0u;
}
