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

// Function: func_00335360
// Address: 0x335360 - 0x3353c0
void func_00335360_0x335360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335360_0x335360");
#endif

    switch (ctx->pc) {
        case 0x335384u: goto label_335384;
        default: break;
    }

    ctx->pc = 0x335360u;

    // 0x335360: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x335360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x335364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335368: 0x24c3a5f8  addiu       $v1, $a2, -0x5A08
    ctx->pc = 0x335368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944248));
    // 0x33536c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x33536cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3DA5F8u));
    // 0x335370: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335370u;
    {
        const bool branch_taken_0x335370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335370u;
        // 0x335374: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335370) {
            ctx->pc = 0x335380u;
            goto label_335380;
        }
    }
    ctx->pc = 0x335378u;
    // 0x335378: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x335378u;
    {
        const bool branch_taken_0x335378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335378u;
        // 0x33537c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335378) {
            ctx->pc = 0x3353B8u;
            goto label_3353b8;
        }
    }
    ctx->pc = 0x335380u;
label_335380:
    // 0x335380: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x335380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_335384:
    // 0x335384: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x335384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x335388: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x335388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x33538c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33538Cu;
    {
        const bool branch_taken_0x33538c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33538Cu;
        // 0x335390: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33538c) {
            ctx->pc = 0x3353B8u;
            goto label_3353b8;
        }
    }
    ctx->pc = 0x335394u;
    // 0x335394: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x335394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x335398: 0x24c4a5f8  addiu       $a0, $a2, -0x5A08
    ctx->pc = 0x335398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944248));
    // 0x33539c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x33539cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3353a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3353a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3353a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3353a8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3353a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3353ac: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3353ACu;
    {
        const bool branch_taken_0x3353ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3353ac) {
            ctx->pc = 0x3353B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3353ACu;
            // 0x3353b0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335384;
        }
    }
    ctx->pc = 0x3353B4u;
    // 0x3353b4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3353b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3353b8:
    // 0x3353b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3353B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3353BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3353B8u;
        // 0x3353bc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3353B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3353C0u;
}
