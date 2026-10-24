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

// Function: cSnd_BgmReqFromEnemies
// Address: 0x2d0cd0 - 0x2d0d70
void cSnd_BgmReqFromEnemies_0x2d0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmReqFromEnemies_0x2d0cd0");
#endif

    switch (ctx->pc) {
        case 0x2d0cf0u: goto label_2d0cf0;
        case 0x2d0d08u: goto label_2d0d08;
        case 0x2d0d20u: goto label_2d0d20;
        case 0x2d0d34u: goto label_2d0d34;
        case 0x2d0d48u: goto label_2d0d48;
        default: break;
    }

    ctx->pc = 0x2d0cd0u;

    // 0x2d0cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d0cd4: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x2d0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2d0cd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d0cdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d0cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d0ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d0ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d0ce8: 0xc0b4304  jal         func_2D0C10
    ctx->pc = 0x2D0CE8u;
    SET_GPR_U32(ctx, 31, 0x2D0CF0u);
    ctx->pc = 0x2D0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0CE8u;
    // 0x2d0cec: 0x2411fffe  addiu       $s1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C10u, 0x2D0CE8u, 0x2D0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0CF0u;
label_2d0cf0:
    // 0x2d0cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0CF0u;
    {
        const bool branch_taken_0x2d0cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CF0u;
        // 0x2d0cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cf0) {
            ctx->pc = 0x2D0D00u;
            goto label_2d0d00;
        }
    }
    ctx->pc = 0x2D0CF8u;
    // 0x2d0cf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2D0CF8u;
    {
        const bool branch_taken_0x2d0cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CF8u;
        // 0x2d0cfc: 0x2411001b  addiu       $s1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0cf8) {
            ctx->pc = 0x2D0D54u;
            goto label_2d0d54;
        }
    }
    ctx->pc = 0x2D0D00u;
label_2d0d00:
    // 0x2d0d00: 0xc0b4304  jal         func_2D0C10
    ctx->pc = 0x2D0D00u;
    SET_GPR_U32(ctx, 31, 0x2D0D08u);
    ctx->pc = 0x2D0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D00u;
    // 0x2d0d04: 0x24050223  addiu       $a1, $zero, 0x223 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C10u, 0x2D0D00u, 0x2D0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D08u;
label_2d0d08:
    // 0x2d0d08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D08u;
    {
        const bool branch_taken_0x2d0d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D08u;
        // 0x2d0d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d08) {
            ctx->pc = 0x2D0D18u;
            goto label_2d0d18;
        }
    }
    ctx->pc = 0x2D0D10u;
    // 0x2d0d10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0D10u;
    {
        const bool branch_taken_0x2d0d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D10u;
        // 0x2d0d14: 0x2411002e  addiu       $s1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d10) {
            ctx->pc = 0x2D0D54u;
            goto label_2d0d54;
        }
    }
    ctx->pc = 0x2D0D18u;
label_2d0d18:
    // 0x2d0d18: 0xc0b4304  jal         func_2D0C10
    ctx->pc = 0x2D0D18u;
    SET_GPR_U32(ctx, 31, 0x2D0D20u);
    ctx->pc = 0x2D0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D18u;
    // 0x2d0d1c: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C10u, 0x2D0D18u, 0x2D0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D20u;
label_2d0d20:
    // 0x2d0d20: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D0D20u;
    {
        const bool branch_taken_0x2d0d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d20) {
            ctx->pc = 0x2D0D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D20u;
            // 0x2d0d24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0D54u;
            goto label_2d0d54;
        }
    }
    ctx->pc = 0x2D0D28u;
    // 0x2d0d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d2c: 0xc0b4304  jal         func_2D0C10
    ctx->pc = 0x2D0D2Cu;
    SET_GPR_U32(ctx, 31, 0x2D0D34u);
    ctx->pc = 0x2D0D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D2Cu;
    // 0x2d0d30: 0x24050221  addiu       $a1, $zero, 0x221 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C10u, 0x2D0D2Cu, 0x2D0D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D34u;
label_2d0d34:
    // 0x2d0d34: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0D34u;
    {
        const bool branch_taken_0x2d0d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0d34) {
            ctx->pc = 0x2D0D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0D34u;
            // 0x2d0d38: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0D54u;
            goto label_2d0d54;
        }
    }
    ctx->pc = 0x2D0D3Cu;
    // 0x2d0d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0d40: 0xc0b4304  jal         func_2D0C10
    ctx->pc = 0x2D0D40u;
    SET_GPR_U32(ctx, 31, 0x2D0D48u);
    ctx->pc = 0x2D0D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0D40u;
    // 0x2d0d44: 0x24050222  addiu       $a1, $zero, 0x222 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 546));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0C10u, 0x2D0D40u, 0x2D0D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0D48u;
label_2d0d48:
    // 0x2d0d48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0D48u;
    {
        const bool branch_taken_0x2d0d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D48u;
        // 0x2d0d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0d48) {
            ctx->pc = 0x2D0D58u;
            goto label_2d0d58;
        }
    }
    ctx->pc = 0x2D0D50u;
    // 0x2d0d50: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d0d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0d54:
    // 0x2d0d54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d0d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0d58:
    // 0x2d0d58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d0d58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d0d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0D64u;
        // 0x2d0d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0D6Cu;
    // 0x2d0d6c: 0x0  nop
    ctx->pc = 0x2d0d6cu;
    // NOP
    ctx->pc = 0x2d0d70u;
}
