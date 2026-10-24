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

// Function: ColiseumBattle_spawnWave
// Address: 0x1f05f8 - 0x1f06a8
void ColiseumBattle_spawnWave_0x1f05f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_spawnWave_0x1f05f8");
#endif

    switch (ctx->pc) {
        case 0x1f0638u: goto label_1f0638;
        case 0x1f0664u: goto label_1f0664;
        case 0x1f0674u: goto label_1f0674;
        case 0x1f0688u: goto label_1f0688;
        default: break;
    }

    ctx->pc = 0x1f05f8u;

    // 0x1f05f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f05fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f05fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f0600: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f0600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f0604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0608: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f060c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F060Cu;
    {
        const bool branch_taken_0x1f060c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F060Cu;
        // 0x1f0610: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f060c) {
            ctx->pc = 0x1F0624u;
            goto label_1f0624;
        }
    }
    ctx->pc = 0x1F0614u;
    // 0x1f0614: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0614u;
    {
        const bool branch_taken_0x1f0614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0614) {
            ctx->pc = 0x1F0618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0614u;
            // 0x1f0618: 0x8e020b88  lw          $v0, 0xB88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0648u;
            goto label_1f0648;
        }
    }
    ctx->pc = 0x1F061Cu;
    // 0x1f061c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1F061Cu;
    {
        const bool branch_taken_0x1f061c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F061Cu;
        // 0x1f0620: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f061c) {
            ctx->pc = 0x1F0698u;
            goto label_1f0698;
        }
    }
    ctx->pc = 0x1F0624u;
label_1f0624:
    // 0x1f0624: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1f0628: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f062c: 0xa0406aa5  sb          $zero, 0x6AA5($v0)
    ctx->pc = 0x1f062cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x586AA5u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x586AA5u, _value); } while (0);
    // 0x1f0630: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0630u;
    SET_GPR_U32(ctx, 31, 0x1F0638u);
    ctx->pc = 0x1F0634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0630u;
    // 0x1f0634: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0630u, 0x1F0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0638u;
label_1f0638:
    // 0x1f0638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f063c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0640: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0640u;
    {
        const bool branch_taken_0x1f0640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0640u;
        // 0x1f0644: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0640) {
            ctx->pc = 0x1F0680u;
            goto label_1f0680;
        }
    }
    ctx->pc = 0x1F0648u;
label_1f0648:
    // 0x1f0648: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f0648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f064c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F064Cu;
    {
        const bool branch_taken_0x1f064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f064c) {
            ctx->pc = 0x1F0650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F064Cu;
            // 0x1f0650: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0698u;
            goto label_1f0698;
        }
    }
    ctx->pc = 0x1F0654u;
    // 0x1f0654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0658: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f0658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f065c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F065Cu;
    SET_GPR_U32(ctx, 31, 0x1F0664u);
    ctx->pc = 0x1F0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F065Cu;
    // 0x1f0660: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F065Cu, 0x1F0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0664u;
label_1f0664:
    // 0x1f0664: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f0664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f0668: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f066c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F066Cu;
    SET_GPR_U32(ctx, 31, 0x1F0674u);
    ctx->pc = 0x1F0670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F066Cu;
    // 0x1f0670: 0xa3a20020  sb          $v0, 0x20($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F066Cu, 0x1F0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0674u;
label_1f0674:
    // 0x1f0674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0678: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1f0678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f067c: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x1f067cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
label_1f0680:
    // 0x1f0680: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0680u;
    SET_GPR_U32(ctx, 31, 0x1F0688u);
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0680u, 0x1F0688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0688u;
label_1f0688:
    // 0x1f0688: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f068c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0690: 0xae020b94  sw          $v0, 0xB94($s0)
    ctx->pc = 0x1f0690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
    // 0x1f0694: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f0694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f0698:
    // 0x1f0698: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f0698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f069c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F069Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F069Cu;
        // 0x1f06a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F069Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F06A4u;
    // 0x1f06a4: 0x0  nop
    ctx->pc = 0x1f06a4u;
    // NOP
    ctx->pc = 0x1f06a8u;
}
