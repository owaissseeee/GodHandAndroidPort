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

// Function: func_00318468
// Address: 0x318468 - 0x3184c0
void func_00318468_0x318468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318468_0x318468");
#endif

    switch (ctx->pc) {
        case 0x318490u: goto label_318490;
        case 0x3184a8u: goto label_3184a8;
        case 0x3184b0u: goto label_3184b0;
        default: break;
    }

    ctx->pc = 0x318468u;

    // 0x318468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31846c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x318470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x318474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318478: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x318478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x31847c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31847cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x318480: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x318480u;
    {
        const bool branch_taken_0x318480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x318480) {
            ctx->pc = 0x318484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318480u;
            // 0x318484: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3184B4u;
            goto label_3184b4;
        }
    }
    ctx->pc = 0x318488u;
    // 0x318488: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x318488u;
    SET_GPR_U32(ctx, 31, 0x318490u);
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x318488u, 0x318490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318490u;
label_318490:
    // 0x318490: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x318490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x318494: 0x4420007  bltzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x318494u;
    {
        const bool branch_taken_0x318494 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x318494) {
            ctx->pc = 0x318498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318494u;
            // 0x318498: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3184B4u;
            goto label_3184b4;
        }
    }
    ctx->pc = 0x31849Cu;
    // 0x31849c: 0x26040448  addiu       $a0, $s0, 0x448
    ctx->pc = 0x31849cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    // 0x3184a0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x3184A0u;
    SET_GPR_U32(ctx, 31, 0x3184A8u);
    ctx->pc = 0x3184A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184A0u;
    // 0x3184a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x3184A0u, 0x3184A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184A8u;
label_3184a8:
    // 0x3184a8: 0xc05280e  jal         func_14A038
    ctx->pc = 0x3184A8u;
    SET_GPR_U32(ctx, 31, 0x3184B0u);
    ctx->pc = 0x3184ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184A8u;
    // 0x3184ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x3184A8u, 0x3184B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184B0u;
label_3184b0:
    // 0x3184b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3184b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3184b4:
    // 0x3184b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3184b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3184b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3184B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184B8u;
        // 0x3184bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3184B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3184C0u;
}
