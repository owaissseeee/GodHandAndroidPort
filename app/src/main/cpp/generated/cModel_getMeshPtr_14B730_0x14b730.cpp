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

// Function: cModel_getMeshPtr_14B730
// Address: 0x14b730 - 0x14b798
void cModel_getMeshPtr_14B730_0x14b730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_getMeshPtr_14B730_0x14b730");
#endif

    switch (ctx->pc) {
        case 0x14b748u: goto label_14b748;
        case 0x14b778u: goto label_14b778;
        default: break;
    }

    ctx->pc = 0x14b730u;

    // 0x14b730: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x14b730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b734: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x14b734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14b738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b73c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x14B73Cu;
    {
        const bool branch_taken_0x14b73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B73Cu;
        // 0x14b740: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b73c) {
            ctx->pc = 0x14B770u;
            goto label_14b770;
        }
    }
    ctx->pc = 0x14B744u;
    // 0x14b744: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x14b744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_14b748:
    // 0x14b748: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x14b748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x14b74c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14b74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14b750: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14b750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14b754: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x14b754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x14b758: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x14b758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x14b75c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B75Cu;
    {
        const bool branch_taken_0x14b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B75Cu;
        // 0x14b760: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b75c) {
            ctx->pc = 0x14B770u;
            goto label_14b770;
        }
    }
    ctx->pc = 0x14B764u;
    // 0x14b764: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x14b764u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b768: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14B768u;
    {
        const bool branch_taken_0x14b768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b768) {
            ctx->pc = 0x14B76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B768u;
            // 0x14b76c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b748;
        }
    }
    ctx->pc = 0x14B770u;
label_14b770:
    // 0x14b770: 0x8d04025c  lw          $a0, 0x25C($t0)
    ctx->pc = 0x14b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 604)));
    // 0x14b774: 0x0  nop
    ctx->pc = 0x14b774u;
    // NOP
label_14b778:
    // 0x14b778: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B778u;
    {
        const bool branch_taken_0x14b778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b778) {
            ctx->pc = 0x14B790u;
            goto label_14b790;
        }
    }
    ctx->pc = 0x14B780u;
    // 0x14b780: 0x8c820414  lw          $v0, 0x414($a0)
    ctx->pc = 0x14b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
    // 0x14b784: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x14b784u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14b788: 0x5467fffb  bnel        $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14B788u;
    {
        const bool branch_taken_0x14b788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x14b788) {
            ctx->pc = 0x14B78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B788u;
            // 0x14b78c: 0x8c840404  lw          $a0, 0x404($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b778;
        }
    }
    ctx->pc = 0x14B790u;
label_14b790:
    // 0x14b790: 0x3e00008  jr          $ra
    ctx->pc = 0x14B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B790u;
        // 0x14b794: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B798u;
}
