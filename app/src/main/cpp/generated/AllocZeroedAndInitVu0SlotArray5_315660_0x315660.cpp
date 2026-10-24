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

// Function: AllocZeroedAndInitVu0SlotArray5_315660
// Address: 0x315660 - 0x3156d0
void AllocZeroedAndInitVu0SlotArray5_315660_0x315660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitVu0SlotArray5_315660_0x315660");
#endif

    switch (ctx->pc) {
        case 0x315694u: goto label_315694;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b4u: goto label_3156b4;
        default: break;
    }

    ctx->pc = 0x315660u;

    // 0x315660: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315664: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315668: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31566c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31566cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315670: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315674: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315678: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315678u;
    {
        const bool branch_taken_0x315678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315678u;
        // 0x31567c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315678) {
            ctx->pc = 0x3156BCu;
            goto label_3156bc;
        }
    }
    ctx->pc = 0x315680u;
    // 0x315680: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315684: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x315684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x315688: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31568c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31568Cu;
    SET_GPR_U32(ctx, 31, 0x315694u);
    ctx->pc = 0x315690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31568Cu;
    // 0x315690: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31568Cu, 0x315694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315694u;
label_315694:
    // 0x315694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315698: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315698u;
    {
        const bool branch_taken_0x315698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315698u;
        // 0x31569c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315698) {
            ctx->pc = 0x3156BCu;
            goto label_3156bc;
        }
    }
    ctx->pc = 0x3156A0u;
    // 0x3156a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3156a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3156a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3156A4u;
    SET_GPR_U32(ctx, 31, 0x3156ACu);
    ctx->pc = 0x3156A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156A4u;
    // 0x3156a8: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3156A4u, 0x3156ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156ACu;
label_3156ac:
    // 0x3156ac: 0xc0680e4  jal         func_1A0390
    ctx->pc = 0x3156ACu;
    SET_GPR_U32(ctx, 31, 0x3156B4u);
    ctx->pc = 0x3156B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3156ACu;
    // 0x3156b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0390u, 0x3156ACu, 0x3156B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3156B4u;
label_3156b4:
    // 0x3156b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3156B4u;
    {
        const bool branch_taken_0x3156b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B4u;
        // 0x3156b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156b4) {
            ctx->pc = 0x3156C4u;
            goto label_3156c4;
        }
    }
    ctx->pc = 0x3156BCu;
label_3156bc:
    // 0x3156bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3156bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3156c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3156c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3156c4:
    // 0x3156c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3156c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3156c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3156C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3156CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156C8u;
        // 0x3156cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3156C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3156D0u;
}
