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

// Function: ResetAnimState_1F5EF8
// Address: 0x1f5ef8 - 0x1f5f70
void ResetAnimState_1F5EF8_0x1f5ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetAnimState_1F5EF8_0x1f5ef8");
#endif

    switch (ctx->pc) {
        case 0x1f5f10u: goto label_1f5f10;
        case 0x1f5f48u: goto label_1f5f48;
        case 0x1f5f5cu: goto label_1f5f5c;
        default: break;
    }

    ctx->pc = 0x1f5ef8u;

    // 0x1f5ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f5efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f5efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f5f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f5f08: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1F5F08u;
    SET_GPR_U32(ctx, 31, 0x1F5F10u);
    ctx->pc = 0x1F5F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F08u;
    // 0x1f5f0c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1F5F08u, 0x1F5F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F10u;
label_1f5f10:
    // 0x1f5f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5f14: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1f5f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f18: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1f5f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f1c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1f5f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1f5f20: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1f5f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5f24: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5f28: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1f5f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f5f2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f5f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f30: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1f5f30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1f5f34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f5f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5f38: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1f5f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5f3c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x1f5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x1f5f40: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1F5F40u;
    SET_GPR_U32(ctx, 31, 0x1F5F48u);
    ctx->pc = 0x1F5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F40u;
    // 0x1f5f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1F5F40u, 0x1F5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F48u;
label_1f5f48:
    // 0x1f5f48: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1f5f4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1f5f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f5f50: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1f5f54: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1F5F54u;
    SET_GPR_U32(ctx, 31, 0x1F5F5Cu);
    ctx->pc = 0x1F5F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5F54u;
    // 0x1f5f58: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1F5F54u, 0x1F5F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F5Cu;
label_1f5f5c:
    // 0x1f5f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f5f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5f64: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5F64u;
        // 0x1f5f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5F6Cu;
    // 0x1f5f6c: 0x0  nop
    ctx->pc = 0x1f5f6cu;
    // NOP
    ctx->pc = 0x1f5f70u;
}
