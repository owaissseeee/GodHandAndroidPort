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

// Function: func_002B39B0
// Address: 0x2b39b0 - 0x2b3a38
void func_002B39B0_0x2b39b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B39B0_0x2b39b0");
#endif

    switch (ctx->pc) {
        case 0x2b3a28u: goto label_2b3a28;
        default: break;
    }

    ctx->pc = 0x2b39b0u;

    // 0x2b39b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b39b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b39b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b39b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b39b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b39b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b39bc: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x2b39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x2b39c0: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2b39c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b39c4: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x2b39c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2b39c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B39C8u;
    {
        const bool branch_taken_0x2b39c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39C8u;
        // 0x2b39cc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39c8) {
            ctx->pc = 0x2B39E8u;
            goto label_2b39e8;
        }
    }
    ctx->pc = 0x2B39D0u;
    // 0x2b39d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b39d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b39d4: 0x2442b210  addiu       $v0, $v0, -0x4DF0
    ctx->pc = 0x2b39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947344));
    // 0x2b39d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b39dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b39dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b39e0: 0x800008  jr          $a0
    ctx->pc = 0x2B39E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B39E8u: goto label_2b39e8;
            case 0x2B39F0u: goto label_2b39f0;
            case 0x2B39F8u: goto label_2b39f8;
            case 0x2B3A00u: goto label_2b3a00;
            case 0x2B3A08u: goto label_2b3a08;
            case 0x2B3A10u: goto label_2b3a10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B39E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B39E8u;
label_2b39e8:
    // 0x2b39e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B39E8u;
    {
        const bool branch_taken_0x2b39e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39E8u;
        // 0x2b39ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39e8) {
            ctx->pc = 0x2B3A14u;
            goto label_2b3a14;
        }
    }
    ctx->pc = 0x2B39F0u;
label_2b39f0:
    // 0x2b39f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B39F0u;
    {
        const bool branch_taken_0x2b39f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39F0u;
        // 0x2b39f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39f0) {
            ctx->pc = 0x2B3A14u;
            goto label_2b3a14;
        }
    }
    ctx->pc = 0x2B39F8u;
label_2b39f8:
    // 0x2b39f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B39F8u;
    {
        const bool branch_taken_0x2b39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39F8u;
        // 0x2b39fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39f8) {
            ctx->pc = 0x2B3A14u;
            goto label_2b3a14;
        }
    }
    ctx->pc = 0x2B3A00u;
label_2b3a00:
    // 0x2b3a00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3A00u;
    {
        const bool branch_taken_0x2b3a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A00u;
        // 0x2b3a04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a00) {
            ctx->pc = 0x2B3A14u;
            goto label_2b3a14;
        }
    }
    ctx->pc = 0x2B3A08u;
label_2b3a08:
    // 0x2b3a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3A08u;
    {
        const bool branch_taken_0x2b3a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A08u;
        // 0x2b3a0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a08) {
            ctx->pc = 0x2B3A14u;
            goto label_2b3a14;
        }
    }
    ctx->pc = 0x2B3A10u;
label_2b3a10:
    // 0x2b3a10: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x2b3a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_2b3a14:
    // 0x2b3a14: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x2b3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x2b3a18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b3a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a1c: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x2b3a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b3a20: 0xc0ad1bc  jal         func_2B46F0
    ctx->pc = 0x2B3A20u;
    SET_GPR_U32(ctx, 31, 0x2B3A28u);
    ctx->pc = 0x2B3A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A20u;
    // 0x2b3a24: 0x84460004  lh          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B46F0u, 0x2B3A20u, 0x2B3A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A28u;
label_2b3a28:
    // 0x2b3a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A30u;
        // 0x2b3a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3A38u;
}
