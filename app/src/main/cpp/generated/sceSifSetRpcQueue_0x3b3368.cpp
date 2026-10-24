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

// Function: sceSifSetRpcQueue
// Address: 0x3b3368 - 0x3b3400
void sceSifSetRpcQueue_0x3b3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSetRpcQueue_0x3b3368");
#endif

    switch (ctx->pc) {
        case 0x3b3384u: goto label_3b3384;
        case 0x3b33c8u: goto label_3b33c8;
        default: break;
    }

    ctx->pc = 0x3b3368u;

    // 0x3b3368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b336c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b3370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b337c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B337Cu;
    SET_GPR_U32(ctx, 31, 0x3B3384u);
    ctx->pc = 0x3B3380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B337Cu;
    // 0x3b3380: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B337Cu, 0x3B3384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3384u;
label_3b3384:
    // 0x3b3384: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b3384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b3388: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3b3388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3b338c: 0x2463ff40  addiu       $v1, $v1, -0xC0
    ctx->pc = 0x3b338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
    // 0x3b3390: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3b3390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3b3394: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3b3394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x77FF68u));
    // 0x3b3398: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3b3398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3b339c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3b339cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3b33a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3b33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3b33a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B33A4u;
    {
        const bool branch_taken_0x3b33a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B33A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33A4u;
        // 0x3b33a8: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b33a4) {
            ctx->pc = 0x3B33B4u;
            goto label_3b33b4;
        }
    }
    ctx->pc = 0x3B33ACu;
    // 0x3b33ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B33ACu;
    {
        const bool branch_taken_0x3b33ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33ACu;
        // 0x3b33b0: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b33ac) {
            ctx->pc = 0x3B33E8u;
            goto label_3b33e8;
        }
    }
    ctx->pc = 0x3B33B4u;
label_3b33b4:
    // 0x3b33b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b33b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3b33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b33bc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B33BCu;
    {
        const bool branch_taken_0x3b33bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b33bc) {
            ctx->pc = 0x3B33C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B33BCu;
            // 0x3b33c0: 0xac910014  sw          $s1, 0x14($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B33E8u;
            goto label_3b33e8;
        }
    }
    ctx->pc = 0x3B33C4u;
    // 0x3b33c4: 0x0  nop
    ctx->pc = 0x3b33c4u;
    // NOP
label_3b33c8:
    // 0x3b33c8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3b33c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3b33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b33d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b33d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33d4: 0x0  nop
    ctx->pc = 0x3b33d4u;
    // NOP
    // 0x3b33d8: 0x0  nop
    ctx->pc = 0x3b33d8u;
    // NOP
    // 0x3b33dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B33DCu;
    {
        const bool branch_taken_0x3b33dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b33dc) {
            ctx->pc = 0x3B33C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b33c8;
        }
    }
    ctx->pc = 0x3B33E4u;
    // 0x3b33e4: 0xac910014  sw          $s1, 0x14($a0)
    ctx->pc = 0x3b33e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 17));
label_3b33e8:
    // 0x3b33e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b33e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b33ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b33ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b33f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b33f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b33f4: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B33F4u;
    ctx->pc = 0x3B33F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33F4u;
    // 0x3b33f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B33F4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B33FCu;
    // 0x3b33fc: 0x0  nop
    ctx->pc = 0x3b33fcu;
    // NOP
    ctx->pc = 0x3b3400u;
}
