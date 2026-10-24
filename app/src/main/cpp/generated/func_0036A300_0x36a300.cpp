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

// Function: func_0036A300
// Address: 0x36a300 - 0x36a378
void func_0036A300_0x36a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A300_0x36a300");
#endif

    switch (ctx->pc) {
        case 0x36a324u: goto label_36a324;
        default: break;
    }

    ctx->pc = 0x36a300u;

    // 0x36a300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a30c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36a310: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36a310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36a318: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x36a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36a31c: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x36A31Cu;
    SET_GPR_U32(ctx, 31, 0x36A324u);
    ctx->pc = 0x36A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A31Cu;
    // 0x36a320: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x36A31Cu, 0x36A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A324u;
label_36a324:
    // 0x36a324: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x36a324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x36a328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x36a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a32c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A32Cu;
    {
        const bool branch_taken_0x36a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A32Cu;
        // 0x36a330: 0x34a5020e  ori         $a1, $a1, 0x20E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)526);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a32c) {
            ctx->pc = 0x36A350u;
            goto label_36a350;
        }
    }
    ctx->pc = 0x36A334u;
    // 0x36a334: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a33c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36a33cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a340: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36a340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a344: 0x80da7c8  j           func_369F20
    ctx->pc = 0x36A344u;
    ctx->pc = 0x36A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A344u;
    // 0x36a348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x36A344u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x36A34Cu;
    // 0x36a34c: 0x0  nop
    ctx->pc = 0x36a34cu;
    // NOP
label_36a350:
    // 0x36a350: 0x8e0302b4  lw          $v1, 0x2B4($s0)
    ctx->pc = 0x36a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x36a354: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x36a354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a358: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36a358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x36a35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a360: 0x8e0402b8  lw          $a0, 0x2B8($s0)
    ctx->pc = 0x36a360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x36a364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a368: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x36a368u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x36a36c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36a36cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a370: 0x3e00008  jr          $ra
    ctx->pc = 0x36A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A370u;
        // 0x36a374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A378u;
}
