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

// Function: AllocZeroedAndForward_317180
// Address: 0x317180 - 0x3171f0
void AllocZeroedAndForward_317180_0x317180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_317180_0x317180");
#endif

    switch (ctx->pc) {
        case 0x3171b4u: goto label_3171b4;
        case 0x3171ccu: goto label_3171cc;
        case 0x3171d4u: goto label_3171d4;
        default: break;
    }

    ctx->pc = 0x317180u;

    // 0x317180: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317184: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317188: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31718c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31718cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317190: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317194: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317198: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317198u;
    {
        const bool branch_taken_0x317198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317198u;
        // 0x31719c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317198) {
            ctx->pc = 0x3171DCu;
            goto label_3171dc;
        }
    }
    ctx->pc = 0x3171A0u;
    // 0x3171a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3171a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3171a4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x3171a8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3171a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3171ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3171ACu;
    SET_GPR_U32(ctx, 31, 0x3171B4u);
    ctx->pc = 0x3171B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3171ACu;
    // 0x3171b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3171ACu, 0x3171B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3171B4u;
label_3171b4:
    // 0x3171b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3171b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3171B8u;
    {
        const bool branch_taken_0x3171b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171B8u;
        // 0x3171bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171b8) {
            ctx->pc = 0x3171DCu;
            goto label_3171dc;
        }
    }
    ctx->pc = 0x3171C0u;
    // 0x3171c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3171c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3171C4u;
    SET_GPR_U32(ctx, 31, 0x3171CCu);
    ctx->pc = 0x3171C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3171C4u;
    // 0x3171c8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3171C4u, 0x3171CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3171CCu;
label_3171cc:
    // 0x3171cc: 0xc05e204  jal         func_178810
    ctx->pc = 0x3171CCu;
    SET_GPR_U32(ctx, 31, 0x3171D4u);
    ctx->pc = 0x3171D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3171CCu;
    // 0x3171d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178810u, 0x3171CCu, 0x3171D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3171D4u;
label_3171d4:
    // 0x3171d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3171D4u;
    {
        const bool branch_taken_0x3171d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171D4u;
        // 0x3171d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171d4) {
            ctx->pc = 0x3171E4u;
            goto label_3171e4;
        }
    }
    ctx->pc = 0x3171DCu;
label_3171dc:
    // 0x3171dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3171dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3171e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3171e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3171e4:
    // 0x3171e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3171e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3171e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3171E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3171ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3171E8u;
        // 0x3171ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3171E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3171F0u;
}
