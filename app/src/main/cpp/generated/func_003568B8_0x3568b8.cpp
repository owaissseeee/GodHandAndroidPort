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

// Function: func_003568B8
// Address: 0x3568b8 - 0x356928
void func_003568B8_0x3568b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003568B8_0x3568b8");
#endif

    switch (ctx->pc) {
        case 0x3568dcu: goto label_3568dc;
        default: break;
    }

    ctx->pc = 0x3568b8u;

    // 0x3568b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3568b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3568bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3568bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3568c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3568c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3568c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3568c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3568c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3568ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3568d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3568d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3568d4: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x3568D4u;
    SET_GPR_U32(ctx, 31, 0x3568DCu);
    ctx->pc = 0x3568D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3568D4u;
    // 0x3568d8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x3568D4u, 0x3568DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568DCu;
label_3568dc:
    // 0x3568dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3568dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3568E0u;
    {
        const bool branch_taken_0x3568e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3568E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568E0u;
        // 0x3568e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3568e0) {
            ctx->pc = 0x356908u;
            goto label_356908;
        }
    }
    ctx->pc = 0x3568E8u;
    // 0x3568e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3568e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3568ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3568f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3568f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3568f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3568f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3568f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3568f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3568fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3568FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568FCu;
        // 0x356900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3568FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356904u;
    // 0x356904: 0x0  nop
    ctx->pc = 0x356904u;
    // NOP
label_356908:
    // 0x356908: 0x8e441fc0  lw          $a0, 0x1FC0($s2)
    ctx->pc = 0x356908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x35690c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35690cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356914: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x356914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x356918: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x356918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35691c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35691cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356920: 0x80d5992  j           func_356648
    ctx->pc = 0x356920u;
    ctx->pc = 0x356924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356920u;
    // 0x356924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356648u, 0x356920u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356928u;
}
