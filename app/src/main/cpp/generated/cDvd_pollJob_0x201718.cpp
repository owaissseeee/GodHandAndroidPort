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

// Function: cDvd_pollJob
// Address: 0x201718 - 0x201788
void cDvd_pollJob_0x201718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDvd_pollJob_0x201718");
#endif

    switch (ctx->pc) {
        case 0x20172cu: goto label_20172c;
        case 0x201768u: goto label_201768;
        case 0x201778u: goto label_201778;
        default: break;
    }

    ctx->pc = 0x201718u;

    // 0x201718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20171c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201724: 0xc080634  jal         func_2018D0
    ctx->pc = 0x201724u;
    SET_GPR_U32(ctx, 31, 0x20172Cu);
    ctx->pc = 0x201728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201724u;
    // 0x201728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018D0u, 0x201724u, 0x20172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20172Cu;
label_20172c:
    // 0x20172c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20172cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201734: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x201734u;
    {
        const bool branch_taken_0x201734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201734u;
        // 0x201738: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201734) {
            ctx->pc = 0x201778u;
            goto label_201778;
        }
    }
    ctx->pc = 0x20173Cu;
    // 0x20173c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20173Cu;
    {
        const bool branch_taken_0x20173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20173Cu;
        // 0x201740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20173c) {
            ctx->pc = 0x201754u;
            goto label_201754;
        }
    }
    ctx->pc = 0x201744u;
    // 0x201744: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201744u;
    {
        const bool branch_taken_0x201744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201744) {
            ctx->pc = 0x201760u;
            goto label_201760;
        }
    }
    ctx->pc = 0x20174Cu;
    // 0x20174c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20174Cu;
    {
        const bool branch_taken_0x20174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20174Cu;
        // 0x201750: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20174c) {
            ctx->pc = 0x20177Cu;
            goto label_20177c;
        }
    }
    ctx->pc = 0x201754u;
label_201754:
    // 0x201754: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x201754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x201758: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201758u;
    {
        const bool branch_taken_0x201758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x201758) {
            ctx->pc = 0x20175Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201758u;
            // 0x20175c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20177Cu;
            goto label_20177c;
        }
    }
    ctx->pc = 0x201760u;
label_201760:
    // 0x201760: 0xc08063c  jal         func_2018F0
    ctx->pc = 0x201760u;
    SET_GPR_U32(ctx, 31, 0x201768u);
    ctx->pc = 0x201764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201760u;
    // 0x201764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018F0u, 0x201760u, 0x201768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201768u;
label_201768:
    // 0x201768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20176c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201770: 0xc0804a4  jal         func_201290
    ctx->pc = 0x201770u;
    SET_GPR_U32(ctx, 31, 0x201778u);
    ctx->pc = 0x201774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201770u;
    // 0x201774: 0xae021108  sw          $v0, 0x1108($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x201770u, 0x201778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201778u;
label_201778:
    // 0x201778: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20177c:
    // 0x20177c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20177cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201780: 0x3e00008  jr          $ra
    ctx->pc = 0x201780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201780u;
        // 0x201784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201788u;
}
