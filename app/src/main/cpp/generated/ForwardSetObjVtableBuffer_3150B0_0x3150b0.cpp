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

// Function: ForwardSetObjVtableBuffer_3150B0
// Address: 0x3150b0 - 0x315120
void ForwardSetObjVtableBuffer_3150B0_0x3150b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardSetObjVtableBuffer_3150B0_0x3150b0");
#endif

    switch (ctx->pc) {
        case 0x3150e4u: goto label_3150e4;
        case 0x3150fcu: goto label_3150fc;
        case 0x315104u: goto label_315104;
        default: break;
    }

    ctx->pc = 0x3150b0u;

    // 0x3150b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3150b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3150b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3150b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3150b8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3150b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3150bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3150bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3150c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3150c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3150c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3150c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3150c8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3150C8u;
    {
        const bool branch_taken_0x3150c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3150CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150C8u;
        // 0x3150cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150c8) {
            ctx->pc = 0x31510Cu;
            goto label_31510c;
        }
    }
    ctx->pc = 0x3150D0u;
    // 0x3150d0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3150d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3150d4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x3150d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x3150d8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3150d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3150dc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3150DCu;
    SET_GPR_U32(ctx, 31, 0x3150E4u);
    ctx->pc = 0x3150E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3150DCu;
    // 0x3150e0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3150DCu, 0x3150E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3150E4u;
label_3150e4:
    // 0x3150e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3150e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3150e8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3150E8u;
    {
        const bool branch_taken_0x3150e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3150ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3150E8u;
        // 0x3150ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3150e8) {
            ctx->pc = 0x31510Cu;
            goto label_31510c;
        }
    }
    ctx->pc = 0x3150F0u;
    // 0x3150f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3150f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3150f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3150F4u;
    SET_GPR_U32(ctx, 31, 0x3150FCu);
    ctx->pc = 0x3150F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3150F4u;
    // 0x3150f8: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3150F4u, 0x3150FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3150FCu;
label_3150fc:
    // 0x3150fc: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x3150FCu;
    SET_GPR_U32(ctx, 31, 0x315104u);
    ctx->pc = 0x315100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3150FCu;
    // 0x315100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x3150FCu, 0x315104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315104u;
label_315104:
    // 0x315104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315104u;
    {
        const bool branch_taken_0x315104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315104u;
        // 0x315108: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315104) {
            ctx->pc = 0x315114u;
            goto label_315114;
        }
    }
    ctx->pc = 0x31510Cu;
label_31510c:
    // 0x31510c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31510cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315110: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315114:
    // 0x315114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315118: 0x3e00008  jr          $ra
    ctx->pc = 0x315118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315118u;
        // 0x31511c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315120u;
}
