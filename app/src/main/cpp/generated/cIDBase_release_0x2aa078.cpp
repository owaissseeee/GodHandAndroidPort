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

// Function: cIDBase_release
// Address: 0x2aa078 - 0x2aa0d0
void cIDBase_release_0x2aa078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_release_0x2aa078");
#endif

    switch (ctx->pc) {
        case 0x2aa0acu: goto label_2aa0ac;
        default: break;
    }

    ctx->pc = 0x2aa078u;

    // 0x2aa078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2aa078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2aa07c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2aa07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2aa080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aa084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa088: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2aa088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa08c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2AA08Cu;
    {
        const bool branch_taken_0x2aa08c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA08Cu;
        // 0x2aa090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa08c) {
            ctx->pc = 0x2AA0BCu;
            goto label_2aa0bc;
        }
    }
    ctx->pc = 0x2AA094u;
    // 0x2aa094: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2aa094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2aa098: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2aa098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2aa09c: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x2aa09cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2aa0a0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x2aa0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2aa0a4: 0xc0ab3cc  jal         func_2ACF30
    ctx->pc = 0x2AA0A4u;
    SET_GPR_U32(ctx, 31, 0x2AA0ACu);
    ctx->pc = 0x2AA0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA0A4u;
    // 0x2aa0a8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACF30u, 0x2AA0A4u, 0x2AA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA0ACu;
label_2aa0ac:
    // 0x2aa0ac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2aa0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2aa0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa0b4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2aa0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2aa0b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2aa0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2aa0bc:
    // 0x2aa0bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2aa0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa0c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA0C4u;
        // 0x2aa0c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA0CCu;
    // 0x2aa0cc: 0x0  nop
    ctx->pc = 0x2aa0ccu;
    // NOP
    ctx->pc = 0x2aa0d0u;
}
