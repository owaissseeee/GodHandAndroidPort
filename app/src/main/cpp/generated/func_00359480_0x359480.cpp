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

// Function: func_00359480
// Address: 0x359480 - 0x359518
void func_00359480_0x359480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359480_0x359480");
#endif

    ctx->pc = 0x359480u;

    // 0x359480: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x359480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359484: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x359484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359488: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x359488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x35948c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x35948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x359490: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359490u;
    {
        const bool branch_taken_0x359490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x359494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359490u;
        // 0x359494: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359490) {
            ctx->pc = 0x3594A8u;
            goto label_3594a8;
        }
    }
    ctx->pc = 0x359498u;
    // 0x359498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35949c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35949cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3594a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3594A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3594A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594A0u;
        // 0x3594a4: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3594A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3594A8u;
label_3594a8:
    // 0x3594a8: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x3594a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3594ac: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3594acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3594b0: 0xdd060000  ld          $a2, 0x0($t0)
    ctx->pc = 0x3594b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3594b4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3594b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3594b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3594b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3594bc: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3594bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3594c0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x3594c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x3594c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3594c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594c8: 0xdd020008  ld          $v0, 0x8($t0)
    ctx->pc = 0x3594c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3594cc: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x3594ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x3594d0: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3594d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3594d4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x3594d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3594d8: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3594D8u;
    {
        const bool branch_taken_0x3594d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3594DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594D8u;
        // 0x3594dc: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594d8) {
            ctx->pc = 0x3594E4u;
            goto label_3594e4;
        }
    }
    ctx->pc = 0x3594E0u;
    // 0x3594e0: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x3594e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3594e4:
    // 0x3594e4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x3594e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3594e8: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x3594e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x3594ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3594ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3594f0: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3594f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3594f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3594F4u;
    {
        const bool branch_taken_0x3594f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3594F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594F4u;
        // 0x3594f8: 0xace20008  sw          $v0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594f4) {
            ctx->pc = 0x359508u;
            goto label_359508;
        }
    }
    ctx->pc = 0x3594FCu;
    // 0x3594fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3594fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x359500u;
    {
        const bool branch_taken_0x359500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359500u;
        // 0x359504: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359500) {
            ctx->pc = 0x35950Cu;
            goto label_35950c;
        }
    }
    ctx->pc = 0x359508u;
label_359508:
    // 0x359508: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x359508u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_35950c:
    // 0x35950c: 0x3e00008  jr          $ra
    ctx->pc = 0x35950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35950Cu;
        // 0x359510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359514u;
    // 0x359514: 0x0  nop
    ctx->pc = 0x359514u;
    // NOP
    ctx->pc = 0x359518u;
}
