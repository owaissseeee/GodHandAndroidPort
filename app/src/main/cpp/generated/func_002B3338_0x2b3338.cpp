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

// Function: func_002B3338
// Address: 0x2b3338 - 0x2b33d8
void func_002B3338_0x2b3338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3338_0x2b3338");
#endif

    switch (ctx->pc) {
        case 0x2b3358u: goto label_2b3358;
        case 0x2b3364u: goto label_2b3364;
        case 0x2b33a0u: goto label_2b33a0;
        case 0x2b33b0u: goto label_2b33b0;
        default: break;
    }

    ctx->pc = 0x2b3338u;

    // 0x2b3338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b333c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b333cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b3340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b3344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b334c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B334Cu;
    {
        const bool branch_taken_0x2b334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B334Cu;
        // 0x2b3350: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b334c) {
            ctx->pc = 0x2B3364u;
            goto label_2b3364;
        }
    }
    ctx->pc = 0x2B3354u;
    // 0x2b3354: 0x0  nop
    ctx->pc = 0x2b3354u;
    // NOP
label_2b3358:
    // 0x2b3358: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x2b3358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2b335c: 0xc0ad1da  jal         func_2B4768
    ctx->pc = 0x2B335Cu;
    SET_GPR_U32(ctx, 31, 0x2B3364u);
    ctx->pc = 0x2B3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B335Cu;
    // 0x2b3360: 0x2606008c  addiu       $a2, $s0, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4768u, 0x2B335Cu, 0x2B3364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3364u;
label_2b3364:
    // 0x2b3364: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2b3364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2b3368: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b336c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2b336cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b3370: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B3370u;
    {
        const bool branch_taken_0x2b3370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3370) {
            ctx->pc = 0x2B3374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3370u;
            // 0x2b3374: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B33C4u;
            goto label_2b33c4;
        }
    }
    ctx->pc = 0x2B3378u;
    // 0x2b3378: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2b3378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b337c: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B337Cu;
    {
        const bool branch_taken_0x2b337c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b337c) {
            ctx->pc = 0x2B3380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B337Cu;
            // 0x2b3380: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B33C4u;
            goto label_2b33c4;
        }
    }
    ctx->pc = 0x2B3384u;
    // 0x2b3384: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2b3384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b3388: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2b3388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b338c: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x2b338cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x2b3390: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3390u;
    {
        const bool branch_taken_0x2b3390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3390) {
            ctx->pc = 0x2B33A8u;
            goto label_2b33a8;
        }
    }
    ctx->pc = 0x2B3398u;
    // 0x2b3398: 0xc0accf6  jal         func_2B33D8
    ctx->pc = 0x2B3398u;
    SET_GPR_U32(ctx, 31, 0x2B33A0u);
    ctx->pc = 0x2B339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3398u;
    // 0x2b339c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B33D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B33D8u, 0x2B3398u, 0x2B33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33A0u;
label_2b33a0:
    // 0x2b33a0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B33A0u;
    {
        const bool branch_taken_0x2b33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33A0u;
        // 0x2b33a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33a0) {
            ctx->pc = 0x2B3358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3358;
        }
    }
    ctx->pc = 0x2B33A8u;
label_2b33a8:
    // 0x2b33a8: 0xc0acd36  jal         func_2B34D8
    ctx->pc = 0x2B33A8u;
    SET_GPR_U32(ctx, 31, 0x2B33B0u);
    ctx->pc = 0x2B33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B33A8u;
    // 0x2b33ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B34D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B34D8u, 0x2B33A8u, 0x2B33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B33B0u;
label_2b33b0:
    // 0x2b33b0: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2B33B0u;
    {
        const bool branch_taken_0x2b33b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b33b0) {
            ctx->pc = 0x2B33B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B33B0u;
            // 0x2b33b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3358;
        }
    }
    ctx->pc = 0x2B33B8u;
    // 0x2b33b8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2b33bc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2b33bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2b33c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b33c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b33c4:
    // 0x2b33c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b33c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b33c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b33c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b33cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B33CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33CCu;
        // 0x2b33d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B33CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B33D4u;
    // 0x2b33d4: 0x0  nop
    ctx->pc = 0x2b33d4u;
    // NOP
    ctx->pc = 0x2b33d8u;
}
