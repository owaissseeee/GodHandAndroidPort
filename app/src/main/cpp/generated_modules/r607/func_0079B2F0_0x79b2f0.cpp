#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: func_0079B2F0
// Address: 0x79b2f0 - 0x79b360
void func_0079B2F0_0x79b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B2F0_0x79b2f0");
#endif

    switch (ctx->pc) {
        case 0x79b318u: goto label_79b318;
        case 0x79b324u: goto label_79b324;
        case 0x79b32cu: goto label_79b32c;
        case 0x79b340u: goto label_79b340;
        case 0x79b34cu: goto label_79b34c;
        default: break;
    }

    ctx->pc = 0x79b2f0u;

    // 0x79b2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b2f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79b2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79b2f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b2fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79b2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79b304: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79b304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79b308: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b308u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79b30c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79B30Cu;
    {
        const bool branch_taken_0x79b30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B30Cu;
        // 0x79b310: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b30c) {
            ctx->pc = 0x79B324u;
            goto label_79b324;
        }
    }
    ctx->pc = 0x79B314u;
    // 0x79b314: 0x0  nop
    ctx->pc = 0x79b314u;
    // NOP
label_79b318:
    // 0x79b318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b31c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B31Cu;
    SET_GPR_U32(ctx, 31, 0x79B324u);
    ctx->pc = 0x79B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B31Cu;
    // 0x79b320: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B31Cu, 0x79B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B324u;
label_79b324:
    // 0x79b324: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x79B324u;
    SET_GPR_U32(ctx, 31, 0x79B32Cu);
    ctx->pc = 0x79B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B324u;
    // 0x79b328: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x79B324u, 0x79B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B32Cu;
label_79b32c:
    // 0x79b32c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79B32Cu;
    {
        const bool branch_taken_0x79b32c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x79B330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B32Cu;
        // 0x79b330: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b32c) {
            ctx->pc = 0x79B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b318;
        }
    }
    ctx->pc = 0x79B334u;
    // 0x79b334: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x79b334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x79b338: 0xc0b038a  jal         func_2C0E28
    ctx->pc = 0x79B338u;
    SET_GPR_U32(ctx, 31, 0x79B340u);
    ctx->pc = 0x79B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B338u;
    // 0x79b33c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E28u, 0x79B338u, 0x79B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B340u;
label_79b340:
    // 0x79b340: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b344: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B344u;
    SET_GPR_U32(ctx, 31, 0x79B34Cu);
    ctx->pc = 0x79B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B344u;
    // 0x79b348: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B344u, 0x79B34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B34Cu;
label_79b34c:
    // 0x79b34c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b350: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b358: 0x3e00008  jr          $ra
    ctx->pc = 0x79B358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B358u;
        // 0x79b35c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B360u;
}
} // namespace gh_r607
