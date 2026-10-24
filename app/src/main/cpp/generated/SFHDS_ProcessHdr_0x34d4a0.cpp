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

// Function: SFHDS_ProcessHdr
// Address: 0x34d4a0 - 0x34d508
void SFHDS_ProcessHdr_0x34d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFHDS_ProcessHdr_0x34d4a0");
#endif

    switch (ctx->pc) {
        case 0x34d4c0u: goto label_34d4c0;
        case 0x34d4d8u: goto label_34d4d8;
        default: break;
    }

    ctx->pc = 0x34d4a0u;

    // 0x34d4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34d4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34d4a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34d4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34d4b0: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x34d4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x34d4b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34d4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34d4b8: 0xc0d7584  jal         func_35D610
    ctx->pc = 0x34D4B8u;
    SET_GPR_U32(ctx, 31, 0x34D4C0u);
    ctx->pc = 0x34D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D4B8u;
    // 0x34d4bc: 0x8e050090  lw          $a1, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D610u, 0x34D4B8u, 0x34D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D4C0u;
label_34d4c0:
    // 0x34d4c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34d4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d4c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34d4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d4c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D4C8u;
    {
        const bool branch_taken_0x34d4c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4C8u;
        // 0x34d4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d4c8) {
            ctx->pc = 0x34D4F0u;
            goto label_34d4f0;
        }
    }
    ctx->pc = 0x34D4D0u;
    // 0x34d4d0: 0xc0d3542  jal         func_34D508
    ctx->pc = 0x34D4D0u;
    SET_GPR_U32(ctx, 31, 0x34D4D8u);
    ctx->pc = 0x34D508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D508u, 0x34D4D0u, 0x34D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D4D8u;
label_34d4d8:
    // 0x34d4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d4e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d4e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d4e8: 0x80d75b6  j           func_35D6D8
    ctx->pc = 0x34D4E8u;
    ctx->pc = 0x34D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D4E8u;
    // 0x34d4ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6D8u, 0x34D4E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34D4F0u;
label_34d4f0:
    // 0x34d4f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d4f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34d4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d4f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34d4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x34D4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D4FCu;
        // 0x34d500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D504u;
    // 0x34d504: 0x0  nop
    ctx->pc = 0x34d504u;
    // NOP
    ctx->pc = 0x34d508u;
}
