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

// Function: func_003A95A8
// Address: 0x3a95a8 - 0x3a9620
void func_003A95A8_0x3a95a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A95A8_0x3a95a8");
#endif

    switch (ctx->pc) {
        case 0x3a95c0u: goto label_3a95c0;
        case 0x3a95f0u: goto label_3a95f0;
        default: break;
    }

    ctx->pc = 0x3a95a8u;

    // 0x3a95a8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3a95a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a95ac: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x3a95acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3a95b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A95B0u;
    {
        const bool branch_taken_0x3a95b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95B0u;
        // 0x3a95b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95b0) {
            ctx->pc = 0x3A95D8u;
            goto label_3a95d8;
        }
    }
    ctx->pc = 0x3A95B8u;
    // 0x3a95b8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3a95b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3a95bc: 0x0  nop
    ctx->pc = 0x3a95bcu;
    // NOP
label_3a95c0:
    // 0x3a95c0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3a95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3a95c4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a95c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a95c8: 0x0  nop
    ctx->pc = 0x3a95c8u;
    // NOP
    // 0x3a95cc: 0x0  nop
    ctx->pc = 0x3a95ccu;
    // NOP
    // 0x3a95d0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A95D0u;
    {
        const bool branch_taken_0x3a95d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a95d0) {
            ctx->pc = 0x3A95D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A95D0u;
            // 0x3a95d4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A95C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a95c0;
        }
    }
    ctx->pc = 0x3A95D8u;
label_3a95d8:
    // 0x3a95d8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3a95d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a95dc: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3A95DCu;
    {
        const bool branch_taken_0x3a95dc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x3A95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95DCu;
        // 0x3a95e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95dc) {
            ctx->pc = 0x3A9618u;
            goto label_3a9618;
        }
    }
    ctx->pc = 0x3A95E4u;
    // 0x3a95e4: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x3a95e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3a95e8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3a95e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a95ec: 0x0  nop
    ctx->pc = 0x3a95ecu;
    // NOP
label_3a95f0:
    // 0x3a95f0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3a95f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a95f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a95f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a95f8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3a95f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a95fc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3a95fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a9600: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3a9600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9604: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x3a9604u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a9608: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3a9608u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a960c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a9610: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A9610u;
    {
        const bool branch_taken_0x3a9610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9610u;
        // 0x3a9614: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9610) {
            ctx->pc = 0x3A95F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a95f0;
        }
    }
    ctx->pc = 0x3A9618u;
label_3a9618:
    // 0x3a9618: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9618u;
        // 0x3a961c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9620u;
}
