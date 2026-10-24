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

// Function: GetViewScrollIdAll
// Address: 0x2db5a0 - 0x2db620
void GetViewScrollIdAll_0x2db5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetViewScrollIdAll_0x2db5a0");
#endif

    switch (ctx->pc) {
        case 0x2db5c8u: goto label_2db5c8;
        default: break;
    }

    ctx->pc = 0x2db5a0u;

    // 0x2db5a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2db5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2db5a4: 0x8cc24c38  lw          $v0, 0x4C38($a2)
    ctx->pc = 0x2db5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db5a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db5ac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2db5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db5b0: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DB5B0u;
    {
        const bool branch_taken_0x2db5b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5B0u;
        // 0x2db5b4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5b0) {
            ctx->pc = 0x2DB618u;
            goto label_2db618;
        }
    }
    ctx->pc = 0x2DB5B8u;
    // 0x2db5b8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2db5b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5bc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2db5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x2db5c0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2db5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db5c4: 0x0  nop
    ctx->pc = 0x2db5c4u;
    // NOP
label_2db5c8:
    // 0x2db5c8: 0x906402fd  lbu         $a0, 0x2FD($v1)
    ctx->pc = 0x2db5c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
    // 0x2db5cc: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x2db5ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2db5d0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2DB5D0u;
    {
        const bool branch_taken_0x2db5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db5d0) {
            ctx->pc = 0x2DB5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB5D0u;
            // 0x2db5d4: 0x8d034c38  lw          $v1, 0x4C38($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB608u;
            goto label_2db608;
        }
    }
    ctx->pc = 0x2DB5D8u;
    // 0x2db5d8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2db5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2db5dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2db5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2db5e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB5E0u;
    {
        const bool branch_taken_0x2db5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB5E0u;
        // 0x2db5e4: 0x41142  srl         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5e0) {
            ctx->pc = 0x2DB604u;
            goto label_2db604;
        }
    }
    ctx->pc = 0x2DB5E8u;
    // 0x2db5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2db5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2db5ec: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x2db5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2db5f0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2db5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2db5f4: 0x862006  srlv        $a0, $a2, $a0
    ctx->pc = 0x2db5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
    // 0x2db5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2db5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2db5fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2db5fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2db600: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2db600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2db604:
    // 0x2db604: 0x8d034c38  lw          $v1, 0x4C38($t0)
    ctx->pc = 0x2db604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 19512)));
label_2db608:
    // 0x2db608: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2db608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2db60c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db610: 0x54a2ffed  bnel        $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DB610u;
    {
        const bool branch_taken_0x2db610 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db610) {
            ctx->pc = 0x2DB614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB610u;
            // 0x2db614: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db5c8;
        }
    }
    ctx->pc = 0x2DB618u;
label_2db618:
    // 0x2db618: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB620u;
}
