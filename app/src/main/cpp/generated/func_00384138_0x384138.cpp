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

// Function: func_00384138
// Address: 0x384138 - 0x384198
void func_00384138_0x384138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384138_0x384138");
#endif

    switch (ctx->pc) {
        case 0x384158u: goto label_384158;
        default: break;
    }

    ctx->pc = 0x384138u;

    // 0x384138: 0x8ca400ac  lw          $a0, 0xAC($a1)
    ctx->pc = 0x384138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
    // 0x38413c: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38413Cu;
    {
        const bool branch_taken_0x38413c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x384140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38413Cu;
        // 0x384140: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38413c) {
            ctx->pc = 0x38418Cu;
            goto label_38418c;
        }
    }
    ctx->pc = 0x384144u;
    // 0x384144: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x384144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x384148: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x384148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38414c: 0x24a500bc  addiu       $a1, $a1, 0xBC
    ctx->pc = 0x38414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x384150: 0x2448ffff  addiu       $t0, $v0, -0x1
    ctx->pc = 0x384150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x384154: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x384154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_384158:
    // 0x384158: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x384158u;
    {
        const bool branch_taken_0x384158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x38415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384158u;
        // 0x38415c: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384158) {
            ctx->pc = 0x38417Cu;
            goto label_38417c;
        }
    }
    ctx->pc = 0x384160u;
    // 0x384160: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x384160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x384164: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x384164u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x384168: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x384168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38416c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38416Cu;
    {
        const bool branch_taken_0x38416c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x384170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38416Cu;
        // 0x384170: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38416c) {
            ctx->pc = 0x384180u;
            goto label_384180;
        }
    }
    ctx->pc = 0x384174u;
    // 0x384174: 0x3e00008  jr          $ra
    ctx->pc = 0x384174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384174u;
        // 0x384178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38417Cu;
label_38417c:
    // 0x38417c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x38417cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_384180:
    // 0x384180: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x384180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x384184: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x384184u;
    {
        const bool branch_taken_0x384184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384184) {
            ctx->pc = 0x384158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384158;
        }
    }
    ctx->pc = 0x38418Cu;
label_38418c:
    // 0x38418c: 0x3e00008  jr          $ra
    ctx->pc = 0x38418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38418Cu;
        // 0x384190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384194u;
    // 0x384194: 0x0  nop
    ctx->pc = 0x384194u;
    // NOP
    ctx->pc = 0x384198u;
}
