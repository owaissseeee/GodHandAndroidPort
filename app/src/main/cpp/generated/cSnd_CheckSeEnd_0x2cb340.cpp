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

// Function: cSnd_CheckSeEnd
// Address: 0x2cb340 - 0x2cb3a8
void cSnd_CheckSeEnd_0x2cb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_CheckSeEnd_0x2cb340");
#endif

    switch (ctx->pc) {
        case 0x2cb35cu: goto label_2cb35c;
        case 0x2cb378u: goto label_2cb378;
        case 0x2cb388u: goto label_2cb388;
        default: break;
    }

    ctx->pc = 0x2cb340u;

    // 0x2cb340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb344: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2cb344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2cb348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb34c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb354: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB354u;
    SET_GPR_U32(ctx, 31, 0x2CB35Cu);
    ctx->pc = 0x2CB358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB354u;
    // 0x2cb358: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB354u, 0x2CB35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB35Cu;
label_2cb35c:
    // 0x2cb35c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cb35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cb360: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x2cb360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x2cb364: 0x2c630100  sltiu       $v1, $v1, 0x100
    ctx->pc = 0x2cb364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2cb368: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB368u;
    {
        const bool branch_taken_0x2cb368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB368u;
        // 0x2cb36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb368) {
            ctx->pc = 0x2CB380u;
            goto label_2cb380;
        }
    }
    ctx->pc = 0x2CB370u;
    // 0x2cb370: 0xc0b2dfa  jal         func_2CB7E8
    ctx->pc = 0x2CB370u;
    SET_GPR_U32(ctx, 31, 0x2CB378u);
    ctx->pc = 0x2CB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB370u;
    // 0x2cb374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7E8u, 0x2CB370u, 0x2CB378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB378u;
label_2cb378:
    // 0x2cb378: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB378u;
    {
        const bool branch_taken_0x2cb378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB378u;
        // 0x2cb37c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb378) {
            ctx->pc = 0x2CB38Cu;
            goto label_2cb38c;
        }
    }
    ctx->pc = 0x2CB380u;
label_2cb380:
    // 0x2cb380: 0xc0b2dfa  jal         func_2CB7E8
    ctx->pc = 0x2CB380u;
    SET_GPR_U32(ctx, 31, 0x2CB388u);
    ctx->pc = 0x2CB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB380u;
    // 0x2cb384: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7E8u, 0x2CB380u, 0x2CB388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB388u;
label_2cb388:
    // 0x2cb388: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cb388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cb38c:
    // 0x2cb38c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb394: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB394u;
        // 0x2cb398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB39Cu;
    // 0x2cb39c: 0x0  nop
    ctx->pc = 0x2cb39cu;
    // NOP
    // 0x2cb3a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb3a4: 0x0  nop
    ctx->pc = 0x2cb3a4u;
    // NOP
    ctx->pc = 0x2cb3a8u;
}
