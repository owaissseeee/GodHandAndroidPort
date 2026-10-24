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

// Function: func_002B3460
// Address: 0x2b3460 - 0x2b34d8
void func_002B3460_0x2b3460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3460_0x2b3460");
#endif

    switch (ctx->pc) {
        case 0x2b3490u: goto label_2b3490;
        case 0x2b3498u: goto label_2b3498;
        default: break;
    }

    ctx->pc = 0x2b3460u;

    // 0x2b3460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3464: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b3468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b346c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3474: 0x92020070  lbu         $v0, 0x70($s0)
    ctx->pc = 0x2b3474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b3478: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3478u;
    {
        const bool branch_taken_0x2b3478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3478u;
        // 0x2b347c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3478) {
            ctx->pc = 0x2B3484u;
            goto label_2b3484;
        }
    }
    ctx->pc = 0x2B3480u;
    // 0x2b3480: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2b3480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2b3484:
    // 0x2b3484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3488: 0xc0ad1bc  jal         func_2B46F0
    ctx->pc = 0x2B3488u;
    SET_GPR_U32(ctx, 31, 0x2B3490u);
    ctx->pc = 0x2B348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3488u;
    // 0x2b348c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B46F0u, 0x2B3488u, 0x2B3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3490u;
label_2b3490:
    // 0x2b3490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3494: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2b3494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2b3498:
    // 0x2b3498: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2b3498u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b349c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2b349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b34a0: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x2b34a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b34a4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2b34a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b34a8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B34A8u;
    {
        const bool branch_taken_0x2b34a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34A8u;
        // 0x2b34ac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b34a8) {
            ctx->pc = 0x2B3498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3498;
        }
    }
    ctx->pc = 0x2B34B0u;
    // 0x2b34b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b34b4: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2b34b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2b34b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b34b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b34bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b34bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b34c0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b34c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b34c4: 0xa6030028  sh          $v1, 0x28($s0)
    ctx->pc = 0x2b34c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b34c8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b34c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b34cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b34ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b34d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B34D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B34D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B34D0u;
        // 0x2b34d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B34D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B34D8u;
}
