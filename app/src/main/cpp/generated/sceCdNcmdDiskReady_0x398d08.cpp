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

// Function: sceCdNcmdDiskReady
// Address: 0x398d08 - 0x398da0
void sceCdNcmdDiskReady_0x398d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdNcmdDiskReady_0x398d08");
#endif

    switch (ctx->pc) {
        case 0x398d1cu: goto label_398d1c;
        case 0x398d5cu: goto label_398d5c;
        case 0x398d70u: goto label_398d70;
        case 0x398d8cu: goto label_398d8c;
        default: break;
    }

    ctx->pc = 0x398d08u;

    // 0x398d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x398d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x398d0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x398d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x398d10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x398d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x398d14: 0xc0e62ec  jal         func_398BB0
    ctx->pc = 0x398D14u;
    SET_GPR_U32(ctx, 31, 0x398D1Cu);
    ctx->pc = 0x398D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D14u;
    // 0x398d18: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398BB0u, 0x398D14u, 0x398D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D1Cu;
label_398d1c:
    // 0x398d1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x398D1Cu;
    {
        const bool branch_taken_0x398d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D1Cu;
        // 0x398d20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d1c) {
            ctx->pc = 0x398D2Cu;
            goto label_398d2c;
        }
    }
    ctx->pc = 0x398D24u;
    // 0x398d24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x398D24u;
    {
        const bool branch_taken_0x398d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D24u;
        // 0x398d28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d24) {
            ctx->pc = 0x398D90u;
            goto label_398d90;
        }
    }
    ctx->pc = 0x398D2Cu;
label_398d2c:
    // 0x398d2c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x398d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x398d30: 0x245086c0  addiu       $s0, $v0, -0x7940
    ctx->pc = 0x398d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936256));
    // 0x398d34: 0x24849810  addiu       $a0, $a0, -0x67F0
    ctx->pc = 0x398d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    // 0x398d38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x398d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x398d3c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x398d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x398d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x398d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x398d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x398d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d4c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x398d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398d50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x398d50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x398d54: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x398D54u;
    SET_GPR_U32(ctx, 31, 0x398D5Cu);
    ctx->pc = 0x398D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D54u;
    // 0x398d58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x398D54u, 0x398D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D5Cu;
label_398d5c:
    // 0x398d5c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x398D5Cu;
    {
        const bool branch_taken_0x398d5c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x398D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D5Cu;
        // 0x398d60: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d5c) {
            ctx->pc = 0x398D78u;
            goto label_398d78;
        }
    }
    ctx->pc = 0x398D64u;
    // 0x398d64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x398d68: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398D68u;
    SET_GPR_U32(ctx, 31, 0x398D70u);
    ctx->pc = 0x398D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D68u;
    // 0x398d6c: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398D68u, 0x398D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D70u;
label_398d70:
    // 0x398d70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x398D70u;
    {
        const bool branch_taken_0x398d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D70u;
        // 0x398d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d70) {
            ctx->pc = 0x398D90u;
            goto label_398d90;
        }
    }
    ctx->pc = 0x398D78u;
label_398d78:
    // 0x398d78: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x398d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x398d7c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x398d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x398d80: 0x8c648668  lw          $a0, -0x7998($v1)
    ctx->pc = 0x398d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936168)));
    // 0x398d84: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x398D84u;
    SET_GPR_U32(ctx, 31, 0x398D8Cu);
    ctx->pc = 0x398D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398D84u;
    // 0x398d88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x398D84u, 0x398D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398D8Cu;
label_398d8c:
    // 0x398d8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x398d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_398d90:
    // 0x398d90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x398d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398d94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x398d94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398d98: 0x3e00008  jr          $ra
    ctx->pc = 0x398D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398D98u;
        // 0x398d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398DA0u;
}
