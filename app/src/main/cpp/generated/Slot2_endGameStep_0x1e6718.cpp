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

// Function: Slot2_endGameStep
// Address: 0x1e6718 - 0x1e6780
void Slot2_endGameStep_0x1e6718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_endGameStep_0x1e6718");
#endif

    switch (ctx->pc) {
        case 0x1e6754u: goto label_1e6754;
        default: break;
    }

    ctx->pc = 0x1e6718u;

    // 0x1e6718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e671c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6728: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e6728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e672c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E672Cu;
    {
        const bool branch_taken_0x1e672c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E672Cu;
        // 0x1e6730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e672c) {
            ctx->pc = 0x1E6744u;
            goto label_1e6744;
        }
    }
    ctx->pc = 0x1E6734u;
    // 0x1e6734: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E6734u;
    {
        const bool branch_taken_0x1e6734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6734) {
            ctx->pc = 0x1E6738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E6734u;
            // 0x1e6738: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E6764u;
            goto label_1e6764;
        }
    }
    ctx->pc = 0x1E673Cu;
    // 0x1e673c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E673Cu;
    {
        const bool branch_taken_0x1e673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E673Cu;
        // 0x1e6740: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e673c) {
            ctx->pc = 0x1E6770u;
            goto label_1e6770;
        }
    }
    ctx->pc = 0x1E6744u;
label_1e6744:
    // 0x1e6744: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1e6744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1e6748: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1e6748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x1e674c: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1E674Cu;
    SET_GPR_U32(ctx, 31, 0x1E6754u);
    ctx->pc = 0x1E6750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E674Cu;
    // 0x1e6750: 0x24841ae0  addiu       $a0, $a0, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1E674Cu, 0x1E6754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6754u;
label_1e6754:
    // 0x1e6754: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e6758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e675c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e675cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e6760: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e6760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1e6764:
    // 0x1e6764: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e6764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e6768: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1e6768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1e676c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e676cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6770:
    // 0x1e6770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6774: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6774u;
        // 0x1e6778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E677Cu;
    // 0x1e677c: 0x0  nop
    ctx->pc = 0x1e677cu;
    // NOP
    ctx->pc = 0x1e6780u;
}
