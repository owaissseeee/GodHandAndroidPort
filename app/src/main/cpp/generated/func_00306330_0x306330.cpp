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

// Function: func_00306330
// Address: 0x306330 - 0x3063b8
void func_00306330_0x306330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306330_0x306330");
#endif

    switch (ctx->pc) {
        case 0x30637cu: goto label_30637c;
        case 0x30638cu: goto label_30638c;
        case 0x30639cu: goto label_30639c;
        case 0x3063a8u: goto label_3063a8;
        default: break;
    }

    ctx->pc = 0x306330u;

    // 0x306330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x306330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x306334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x306338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x306338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30633c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306340: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x306340u;
    {
        const bool branch_taken_0x306340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x306344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306340u;
        // 0x306344: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306340) {
            ctx->pc = 0x306384u;
            goto label_306384;
        }
    }
    ctx->pc = 0x306348u;
    // 0x306348: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x306348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30634c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30634Cu;
    {
        const bool branch_taken_0x30634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30634c) {
            ctx->pc = 0x306350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30634Cu;
            // 0x306350: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306364u;
            goto label_306364;
        }
    }
    ctx->pc = 0x306354u;
    // 0x306354: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x306354u;
    {
        const bool branch_taken_0x306354 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x306358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306354u;
        // 0x306358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306354) {
            ctx->pc = 0x306374u;
            goto label_306374;
        }
    }
    ctx->pc = 0x30635Cu;
    // 0x30635c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30635Cu;
    {
        const bool branch_taken_0x30635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30635Cu;
        // 0x306360: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30635c) {
            ctx->pc = 0x3063ACu;
            goto label_3063ac;
        }
    }
    ctx->pc = 0x306364u;
label_306364:
    // 0x306364: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x306364u;
    {
        const bool branch_taken_0x306364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x306364) {
            ctx->pc = 0x306394u;
            goto label_306394;
        }
    }
    ctx->pc = 0x30636Cu;
    // 0x30636c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30636Cu;
    {
        const bool branch_taken_0x30636c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30636Cu;
        // 0x306370: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30636c) {
            ctx->pc = 0x3063ACu;
            goto label_3063ac;
        }
    }
    ctx->pc = 0x306374u;
label_306374:
    // 0x306374: 0xc0c0300  jal         func_300C00
    ctx->pc = 0x306374u;
    SET_GPR_U32(ctx, 31, 0x30637Cu);
    ctx->pc = 0x306378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306374u;
    // 0x306378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300C00u, 0x306374u, 0x30637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30637Cu;
label_30637c:
    // 0x30637c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x30637Cu;
    {
        const bool branch_taken_0x30637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30637Cu;
        // 0x306380: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30637c) {
            ctx->pc = 0x3063ACu;
            goto label_3063ac;
        }
    }
    ctx->pc = 0x306384u;
label_306384:
    // 0x306384: 0xc0bedec  jal         func_2FB7B0
    ctx->pc = 0x306384u;
    SET_GPR_U32(ctx, 31, 0x30638Cu);
    ctx->pc = 0x306388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306384u;
    // 0x306388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB7B0u, 0x306384u, 0x30638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30638Cu;
label_30638c:
    // 0x30638c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30638Cu;
    {
        const bool branch_taken_0x30638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30638Cu;
        // 0x306390: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30638c) {
            ctx->pc = 0x3063ACu;
            goto label_3063ac;
        }
    }
    ctx->pc = 0x306394u;
label_306394:
    // 0x306394: 0xc0bedec  jal         func_2FB7B0
    ctx->pc = 0x306394u;
    SET_GPR_U32(ctx, 31, 0x30639Cu);
    ctx->pc = 0x306398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306394u;
    // 0x306398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB7B0u, 0x306394u, 0x30639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30639Cu;
label_30639c:
    // 0x30639c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3063a0: 0xc0c0300  jal         func_300C00
    ctx->pc = 0x3063A0u;
    SET_GPR_U32(ctx, 31, 0x3063A8u);
    ctx->pc = 0x3063A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063A0u;
    // 0x3063a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300C00u, 0x3063A0u, 0x3063A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063A8u;
label_3063a8:
    // 0x3063a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3063a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3063ac:
    // 0x3063ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3063acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3063b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3063B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3063B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063B0u;
        // 0x3063b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3063B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3063B8u;
}
