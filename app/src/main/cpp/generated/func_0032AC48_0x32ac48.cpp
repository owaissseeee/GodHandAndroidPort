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

// Function: func_0032AC48
// Address: 0x32ac48 - 0x32ad10
void func_0032AC48_0x32ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AC48_0x32ac48");
#endif

    switch (ctx->pc) {
        case 0x32acecu: goto label_32acec;
        default: break;
    }

    ctx->pc = 0x32ac48u;

    // 0x32ac48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ac4c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32ac4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32ac50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32ac54: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32AC54u;
    {
        const bool branch_taken_0x32ac54 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x32AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AC54u;
        // 0x32ac58: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ac54) {
            ctx->pc = 0x32AC70u;
            goto label_32ac70;
        }
    }
    ctx->pc = 0x32AC5Cu;
    // 0x32ac5c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32ac60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32ac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ac64: 0x24842348  addiu       $a0, $a0, 0x2348
    ctx->pc = 0x32ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9032));
    // 0x32ac68: 0x80cfc4c  j           func_33F130
    ctx->pc = 0x32AC68u;
    ctx->pc = 0x32AC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AC68u;
    // 0x32ac6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32AC68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32AC70u;
label_32ac70:
    // 0x32ac70: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32ac70u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ac74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32ac74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32ac78: 0x8527003c  lh          $a3, 0x3C($t1)
    ctx->pc = 0x32ac78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x32ac7c: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x32ac7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x32ac80: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32ac80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac84: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x32ac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ac88: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x32ac88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x32ac8c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x32ac8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x32ac90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32ac90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32ac94: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32ac94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32ac98: 0x2465001f  addiu       $a1, $v1, 0x1F
    ctx->pc = 0x32ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x32ac9c: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x32ac9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x32aca0: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x32aca0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x32aca4: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x32aca4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x32aca8: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x32aca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x32acac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x32acacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32acb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32acb4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x32acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x32acb8: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x32acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x32acbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32acbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32acc0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x32acc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x32acc4: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x32acc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x32acc8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x32acc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x32accc: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x32acccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x32acd0: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x32acd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x32acd4: 0x72c00  sll         $a1, $a3, 16
    ctx->pc = 0x32acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x32acd8: 0xa527003e  sh          $a3, 0x3E($t1)
    ctx->pc = 0x32acd8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 62), (uint16_t)GPR_U32(ctx, 7));
    // 0x32acdc: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32ACDCu;
    {
        const bool branch_taken_0x32acdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACDCu;
        // 0x32ace0: 0x52943  sra         $a1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32acdc) {
            ctx->pc = 0x32ACECu;
            goto label_32acec;
        }
    }
    ctx->pc = 0x32ACE4u;
    // 0x32ace4: 0xc0ca320  jal         func_328C80
    ctx->pc = 0x32ACE4u;
    SET_GPR_U32(ctx, 31, 0x32ACECu);
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x32ACE4u, 0x32ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32ACECu;
label_32acec:
    // 0x32acec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32acecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32acf0: 0x3e00008  jr          $ra
    ctx->pc = 0x32ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ACF0u;
        // 0x32acf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32ACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32ACF8u;
    // 0x32acf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32acf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32acfc: 0x0  nop
    ctx->pc = 0x32acfcu;
    // NOP
    // 0x32ad00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32ad04: 0x0  nop
    ctx->pc = 0x32ad04u;
    // NOP
    // 0x32ad08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32ad08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32ad0c: 0x0  nop
    ctx->pc = 0x32ad0cu;
    // NOP
    ctx->pc = 0x32ad10u;
}
