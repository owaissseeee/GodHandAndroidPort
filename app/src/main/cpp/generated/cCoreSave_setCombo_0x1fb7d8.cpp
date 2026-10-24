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

// Function: cCoreSave_setCombo
// Address: 0x1fb7d8 - 0x1fb830
void cCoreSave_setCombo_0x1fb7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setCombo_0x1fb7d8");
#endif

    ctx->pc = 0x1fb7d8u;

    // 0x1fb7d8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x1fb7d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb7dc: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x1fb7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x1fb7e0: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x1fb7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fb7e4: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB7E4u;
    {
        const bool branch_taken_0x1fb7e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7E4u;
        // 0x1fb7e8: 0x84603  sra         $t0, $t0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7e4) {
            ctx->pc = 0x1FB824u;
            goto label_1fb824;
        }
    }
    ctx->pc = 0x1FB7ECu;
    // 0x1fb7ec: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x1fb7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb7f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FB7F0u;
    {
        const bool branch_taken_0x1fb7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F0u;
        // 0x1fb7f4: 0x2ca20006  sltiu       $v0, $a1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7f0) {
            ctx->pc = 0x1FB824u;
            goto label_1fb824;
        }
    }
    ctx->pc = 0x1FB7F8u;
    // 0x1fb7f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB7F8u;
    {
        const bool branch_taken_0x1fb7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F8u;
        // 0x1fb7fc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7f8) {
            ctx->pc = 0x1FB824u;
            goto label_1fb824;
        }
    }
    ctx->pc = 0x1FB800u;
    // 0x1fb800: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1fb800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fb804: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1fb804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fb808: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb80c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x1fb80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1fb810: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1fb810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1fb814: 0xac6701b0  sw          $a3, 0x1B0($v1)
    ctx->pc = 0x1fb814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 432), GPR_U32(ctx, 7));
    // 0x1fb818: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1fb818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1fb81c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fb81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fb820: 0xa04801c8  sb          $t0, 0x1C8($v0)
    ctx->pc = 0x1fb820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 456), (uint8_t)GPR_U32(ctx, 8));
label_1fb824:
    // 0x1fb824: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB82Cu;
    // 0x1fb82c: 0x0  nop
    ctx->pc = 0x1fb82cu;
    // NOP
    ctx->pc = 0x1fb830u;
}
