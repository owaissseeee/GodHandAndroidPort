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

// Function: func_00164140
// Address: 0x164140 - 0x1641b8
void func_00164140_0x164140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00164140_0x164140");
#endif

    switch (ctx->pc) {
        case 0x164188u: goto label_164188;
        case 0x164198u: goto label_164198;
        case 0x1641a8u: goto label_1641a8;
        default: break;
    }

    ctx->pc = 0x164140u;

    // 0x164140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16414c: 0x90830064  lbu         $v1, 0x64($a0)
    ctx->pc = 0x16414cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x164150: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x164150u;
    {
        const bool branch_taken_0x164150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x164154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164150u;
        // 0x164154: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164150) {
            ctx->pc = 0x164190u;
            goto label_164190;
        }
    }
    ctx->pc = 0x164158u;
    // 0x164158: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x164158u;
    {
        const bool branch_taken_0x164158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164158) {
            ctx->pc = 0x16415Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164158u;
            // 0x16415c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x164170u;
            goto label_164170;
        }
    }
    ctx->pc = 0x164160u;
    // 0x164160: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x164160u;
    {
        const bool branch_taken_0x164160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164160u;
        // 0x164164: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164160) {
            ctx->pc = 0x164180u;
            goto label_164180;
        }
    }
    ctx->pc = 0x164168u;
    // 0x164168: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x164168u;
    {
        const bool branch_taken_0x164168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164168) {
            ctx->pc = 0x1641ACu;
            goto label_1641ac;
        }
    }
    ctx->pc = 0x164170u;
label_164170:
    // 0x164170: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x164170u;
    {
        const bool branch_taken_0x164170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164170u;
        // 0x164174: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164170) {
            ctx->pc = 0x1641ACu;
            goto label_1641ac;
        }
    }
    ctx->pc = 0x164178u;
    // 0x164178: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164178u;
    {
        const bool branch_taken_0x164178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164178) {
            ctx->pc = 0x1641A0u;
            goto label_1641a0;
        }
    }
    ctx->pc = 0x164180u;
label_164180:
    // 0x164180: 0xc05906e  jal         func_1641B8
    ctx->pc = 0x164180u;
    SET_GPR_U32(ctx, 31, 0x164188u);
    ctx->pc = 0x1641B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1641B8u, 0x164180u, 0x164188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164188u;
label_164188:
    // 0x164188: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x164188u;
    {
        const bool branch_taken_0x164188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164188u;
        // 0x16418c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164188) {
            ctx->pc = 0x1641ACu;
            goto label_1641ac;
        }
    }
    ctx->pc = 0x164190u;
label_164190:
    // 0x164190: 0xc05908e  jal         func_164238
    ctx->pc = 0x164190u;
    SET_GPR_U32(ctx, 31, 0x164198u);
    ctx->pc = 0x164238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164238u, 0x164190u, 0x164198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164198u;
label_164198:
    // 0x164198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164198u;
    {
        const bool branch_taken_0x164198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164198u;
        // 0x16419c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164198) {
            ctx->pc = 0x1641ACu;
            goto label_1641ac;
        }
    }
    ctx->pc = 0x1641A0u;
label_1641a0:
    // 0x1641a0: 0xc0590fe  jal         func_1643F8
    ctx->pc = 0x1641A0u;
    SET_GPR_U32(ctx, 31, 0x1641A8u);
    ctx->pc = 0x1643F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1643F8u, 0x1641A0u, 0x1641A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641A8u;
label_1641a8:
    // 0x1641a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1641a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1641ac:
    // 0x1641ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1641ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1641B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641ACu;
        // 0x1641b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1641ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1641B4u;
    // 0x1641b4: 0x0  nop
    ctx->pc = 0x1641b4u;
    // NOP
    ctx->pc = 0x1641b8u;
}
