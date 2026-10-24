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

// Function: ForwardSetupBuffer_28E018_313970
// Address: 0x313970 - 0x3139e0
void ForwardSetupBuffer_28E018_313970_0x313970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardSetupBuffer_28E018_313970_0x313970");
#endif

    switch (ctx->pc) {
        case 0x3139a4u: goto label_3139a4;
        case 0x3139bcu: goto label_3139bc;
        case 0x3139c4u: goto label_3139c4;
        default: break;
    }

    ctx->pc = 0x313970u;

    // 0x313970: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313974: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313978: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31397c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31397cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313984: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313988: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313988u;
    {
        const bool branch_taken_0x313988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313988u;
        // 0x31398c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313988) {
            ctx->pc = 0x3139CCu;
            goto label_3139cc;
        }
    }
    ctx->pc = 0x313990u;
    // 0x313990: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313994: 0x24041560  addiu       $a0, $zero, 0x1560
    ctx->pc = 0x313994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
    // 0x313998: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31399c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31399Cu;
    SET_GPR_U32(ctx, 31, 0x3139A4u);
    ctx->pc = 0x3139A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31399Cu;
    // 0x3139a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31399Cu, 0x3139A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139A4u;
label_3139a4:
    // 0x3139a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3139a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3139A8u;
    {
        const bool branch_taken_0x3139a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3139ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139A8u;
        // 0x3139ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139a8) {
            ctx->pc = 0x3139CCu;
            goto label_3139cc;
        }
    }
    ctx->pc = 0x3139B0u;
    // 0x3139b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3139b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3139B4u;
    SET_GPR_U32(ctx, 31, 0x3139BCu);
    ctx->pc = 0x3139B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3139B4u;
    // 0x3139b8: 0x24061560  addiu       $a2, $zero, 0x1560 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3139B4u, 0x3139BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139BCu;
label_3139bc:
    // 0x3139bc: 0xc0a3806  jal         func_28E018
    ctx->pc = 0x3139BCu;
    SET_GPR_U32(ctx, 31, 0x3139C4u);
    ctx->pc = 0x3139C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3139BCu;
    // 0x3139c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E018u, 0x3139BCu, 0x3139C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3139C4u;
label_3139c4:
    // 0x3139c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3139C4u;
    {
        const bool branch_taken_0x3139c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3139C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139C4u;
        // 0x3139c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3139c4) {
            ctx->pc = 0x3139D4u;
            goto label_3139d4;
        }
    }
    ctx->pc = 0x3139CCu;
label_3139cc:
    // 0x3139cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3139ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3139d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3139d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3139d4:
    // 0x3139d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3139d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3139d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3139D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3139DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3139D8u;
        // 0x3139dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3139D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3139E0u;
}
