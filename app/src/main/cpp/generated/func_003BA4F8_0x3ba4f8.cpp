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

// Function: func_003BA4F8
// Address: 0x3ba4f8 - 0x3ba550
void func_003BA4F8_0x3ba4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA4F8_0x3ba4f8");
#endif

    switch (ctx->pc) {
        case 0x3ba534u: goto label_3ba534;
        default: break;
    }

    ctx->pc = 0x3ba4f8u;

    // 0x3ba4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ba4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ba4fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ba4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ba500: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3ba500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3ba504: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ba504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3ba508: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ba508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ba50c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ba50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ba510: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3ba510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ba514: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x3ba514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3ba518: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3ba518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3ba51c: 0x2c630009  sltiu       $v1, $v1, 0x9
    ctx->pc = 0x3ba51cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3ba520: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA520u;
    {
        const bool branch_taken_0x3ba520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ba520) {
            ctx->pc = 0x3BA524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA520u;
            // 0x3ba524: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA540u;
            goto label_3ba540;
        }
    }
    ctx->pc = 0x3BA528u;
    // 0x3ba528: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3ba528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3ba52c: 0xc0ee778  jal         func_3B9DE0
    ctx->pc = 0x3BA52Cu;
    SET_GPR_U32(ctx, 31, 0x3BA534u);
    ctx->pc = 0x3BA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA52Cu;
    // 0x3ba530: 0x24840a00  addiu       $a0, $a0, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9DE0u, 0x3BA52Cu, 0x3BA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA534u;
label_3ba534:
    // 0x3ba534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BA534u;
    {
        const bool branch_taken_0x3ba534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA534u;
        // 0x3ba538: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba534) {
            ctx->pc = 0x3BA544u;
            goto label_3ba544;
        }
    }
    ctx->pc = 0x3BA53Cu;
    // 0x3ba53c: 0x0  nop
    ctx->pc = 0x3ba53cu;
    // NOP
label_3ba540:
    // 0x3ba540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ba540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ba544:
    // 0x3ba544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba548: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA548u;
        // 0x3ba54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA550u;
}
