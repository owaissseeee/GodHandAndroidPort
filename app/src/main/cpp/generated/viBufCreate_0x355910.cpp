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

// Function: viBufCreate
// Address: 0x355910 - 0x355988
void viBufCreate_0x355910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufCreate_0x355910");
#endif

    switch (ctx->pc) {
        case 0x355964u: goto label_355964;
        case 0x355970u: goto label_355970;
        default: break;
    }

    ctx->pc = 0x355910u;

    // 0x355910: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x355910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x355914: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355918: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x355918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35591c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x355920: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x355920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x355924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355928: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x355928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x35592c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35592cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355930: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x355930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x355934: 0x752c0  sll         $t2, $a3, 11
    ctx->pc = 0x355934u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x355938: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x355938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35593c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35593cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355940: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x355940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
    // 0x355944: 0xae0a0018  sw          $t2, 0x18($s0)
    ctx->pc = 0x355944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 10));
    // 0x355948: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x355948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x35594c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x35594cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x355950: 0xae080050  sw          $t0, 0x50($s0)
    ctx->pc = 0x355950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x355954: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x355954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x355958: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x355958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x35595c: 0xc0ebf28  jal         func_3AFCA0
    ctx->pc = 0x35595Cu;
    SET_GPR_U32(ctx, 31, 0x355964u);
    ctx->pc = 0x355960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35595Cu;
    // 0x355960: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCA0u, 0x35595Cu, 0x355964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355964u;
label_355964:
    // 0x355964: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x355964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x355968: 0xc0d5662  jal         func_355988
    ctx->pc = 0x355968u;
    SET_GPR_U32(ctx, 31, 0x355970u);
    ctx->pc = 0x35596Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355968u;
    // 0x35596c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355988u, 0x355968u, 0x355970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355970u;
label_355970:
    // 0x355970: 0xfe000048  sd          $zero, 0x48($s0)
    ctx->pc = 0x355970u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 0));
    // 0x355974: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x355974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x355978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35597c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x35597cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355980: 0x3e00008  jr          $ra
    ctx->pc = 0x355980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355980u;
        // 0x355984: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355988u;
}
