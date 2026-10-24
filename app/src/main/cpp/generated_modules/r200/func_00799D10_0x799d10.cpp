#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_00799D10
// Address: 0x799d10 - 0x799d78
void func_00799D10_0x799d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799D10_0x799d10");
#endif

    switch (ctx->pc) {
        case 0x799d48u: goto label_799d48;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d68u: goto label_799d68;
        default: break;
    }

    ctx->pc = 0x799d10u;

    // 0x799d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799d14: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799d18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799d1c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x799d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x799d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d24: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799d28: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799d2c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799d30: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x799d34: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799d38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d3c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799d40: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799D40u;
    SET_GPR_U32(ctx, 31, 0x799D48u);
    ctx->pc = 0x799D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D40u;
    // 0x799d44: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799D40u, 0x799D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799d4c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799d50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d54: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799D54u;
    SET_GPR_U32(ctx, 31, 0x799D5Cu);
    ctx->pc = 0x799D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D54u;
    // 0x799d58: 0x24a59d78  addiu       $a1, $a1, -0x6288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799D54u, 0x799D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D5Cu;
label_799d5c:
    // 0x799d5c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799d60: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799D60u;
    SET_GPR_U32(ctx, 31, 0x799D68u);
    ctx->pc = 0x799D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D60u;
    // 0x799d64: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799D60u, 0x799D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799d70: 0x3e00008  jr          $ra
    ctx->pc = 0x799D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D70u;
        // 0x799d74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799D78u;
}
} // namespace gh_r200
