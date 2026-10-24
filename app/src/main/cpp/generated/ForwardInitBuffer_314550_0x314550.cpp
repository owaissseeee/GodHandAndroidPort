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

// Function: ForwardInitBuffer_314550
// Address: 0x314550 - 0x3145c0
void ForwardInitBuffer_314550_0x314550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314550_0x314550");
#endif

    switch (ctx->pc) {
        case 0x314584u: goto label_314584;
        case 0x31459cu: goto label_31459c;
        case 0x3145a4u: goto label_3145a4;
        default: break;
    }

    ctx->pc = 0x314550u;

    // 0x314550: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314554: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314558: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31455c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31455cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314564: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314568: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314568u;
    {
        const bool branch_taken_0x314568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314568u;
        // 0x31456c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314568) {
            ctx->pc = 0x3145ACu;
            goto label_3145ac;
        }
    }
    ctx->pc = 0x314570u;
    // 0x314570: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314574: 0x240407a0  addiu       $a0, $zero, 0x7A0
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    // 0x314578: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31457c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31457Cu;
    SET_GPR_U32(ctx, 31, 0x314584u);
    ctx->pc = 0x314580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31457Cu;
    // 0x314580: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31457Cu, 0x314584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314584u;
label_314584:
    // 0x314584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314588: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314588u;
    {
        const bool branch_taken_0x314588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314588u;
        // 0x31458c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314588) {
            ctx->pc = 0x3145ACu;
            goto label_3145ac;
        }
    }
    ctx->pc = 0x314590u;
    // 0x314590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314594: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314594u;
    SET_GPR_U32(ctx, 31, 0x31459Cu);
    ctx->pc = 0x314598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314594u;
    // 0x314598: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314594u, 0x31459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31459Cu;
label_31459c:
    // 0x31459c: 0xc064c7c  jal         func_1931F0
    ctx->pc = 0x31459Cu;
    SET_GPR_U32(ctx, 31, 0x3145A4u);
    ctx->pc = 0x3145A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31459Cu;
    // 0x3145a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1931F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1931F0u, 0x31459Cu, 0x3145A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3145A4u;
label_3145a4:
    // 0x3145a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3145A4u;
    {
        const bool branch_taken_0x3145a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145A4u;
        // 0x3145a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145a4) {
            ctx->pc = 0x3145B4u;
            goto label_3145b4;
        }
    }
    ctx->pc = 0x3145ACu;
label_3145ac:
    // 0x3145ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3145acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3145b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3145b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3145b4:
    // 0x3145b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3145b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3145b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3145B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3145BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145B8u;
        // 0x3145bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3145B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3145C0u;
}
