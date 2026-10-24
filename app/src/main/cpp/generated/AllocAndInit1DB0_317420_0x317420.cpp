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

// Function: AllocAndInit1DB0_317420
// Address: 0x317420 - 0x317490
void AllocAndInit1DB0_317420_0x317420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndInit1DB0_317420_0x317420");
#endif

    switch (ctx->pc) {
        case 0x317454u: goto label_317454;
        case 0x31746cu: goto label_31746c;
        case 0x317474u: goto label_317474;
        default: break;
    }

    ctx->pc = 0x317420u;

    // 0x317420: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317424: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317428: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317428u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31742c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31742cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317434: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317438: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317438u;
    {
        const bool branch_taken_0x317438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317438u;
        // 0x31743c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317438) {
            ctx->pc = 0x31747Cu;
            goto label_31747c;
        }
    }
    ctx->pc = 0x317440u;
    // 0x317440: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317444: 0x24041db0  addiu       $a0, $zero, 0x1DB0
    ctx->pc = 0x317444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7600));
    // 0x317448: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31744c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31744Cu;
    SET_GPR_U32(ctx, 31, 0x317454u);
    ctx->pc = 0x317450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31744Cu;
    // 0x317450: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31744Cu, 0x317454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317454u;
label_317454:
    // 0x317454: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317458: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317458u;
    {
        const bool branch_taken_0x317458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317458u;
        // 0x31745c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317458) {
            ctx->pc = 0x31747Cu;
            goto label_31747c;
        }
    }
    ctx->pc = 0x317460u;
    // 0x317460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317464: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317464u;
    SET_GPR_U32(ctx, 31, 0x31746Cu);
    ctx->pc = 0x317468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317464u;
    // 0x317468: 0x24061db0  addiu       $a2, $zero, 0x1DB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317464u, 0x31746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31746Cu;
label_31746c:
    // 0x31746c: 0xc05ee1c  jal         func_17B870
    ctx->pc = 0x31746Cu;
    SET_GPR_U32(ctx, 31, 0x317474u);
    ctx->pc = 0x317470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31746Cu;
    // 0x317470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x31746Cu, 0x317474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317474u;
label_317474:
    // 0x317474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317474u;
    {
        const bool branch_taken_0x317474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317474u;
        // 0x317478: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317474) {
            ctx->pc = 0x317484u;
            goto label_317484;
        }
    }
    ctx->pc = 0x31747Cu;
label_31747c:
    // 0x31747c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31747cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317480: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317484:
    // 0x317484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317488: 0x3e00008  jr          $ra
    ctx->pc = 0x317488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317488u;
        // 0x31748c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317490u;
}
