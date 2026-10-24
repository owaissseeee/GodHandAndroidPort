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

// Function: func_003331E0
// Address: 0x3331e0 - 0x333278
void func_003331E0_0x3331e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003331E0_0x3331e0");
#endif

    switch (ctx->pc) {
        case 0x3331fcu: goto label_3331fc;
        case 0x33321cu: goto label_33321c;
        case 0x333224u: goto label_333224;
        case 0x33322cu: goto label_33322c;
        case 0x333234u: goto label_333234;
        case 0x333240u: goto label_333240;
        case 0x333258u: goto label_333258;
        default: break;
    }

    ctx->pc = 0x3331e0u;

    // 0x3331e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3331e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3331e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3331e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3331e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3331e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3331ec: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3331ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3331f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3331f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3331f4: 0xc0ccf00  jal         func_333C00
    ctx->pc = 0x3331F4u;
    SET_GPR_U32(ctx, 31, 0x3331FCu);
    ctx->pc = 0x3331F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331F4u;
    // 0x3331f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333C00u, 0x3331F4u, 0x3331FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331FCu;
label_3331fc:
    // 0x3331fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3331fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x333200: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x333200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x333204: 0x24719c90  addiu       $s1, $v1, -0x6370
    ctx->pc = 0x333204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941840));
    // 0x333208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33320c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33320Cu;
    {
        const bool branch_taken_0x33320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x333210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33320Cu;
        // 0x333210: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33320c) {
            ctx->pc = 0x333264u;
            goto label_333264;
        }
    }
    ctx->pc = 0x333214u;
    // 0x333214: 0xc0ccce4  jal         func_333390
    ctx->pc = 0x333214u;
    SET_GPR_U32(ctx, 31, 0x33321Cu);
    ctx->pc = 0x333390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333390u, 0x333214u, 0x33321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33321Cu;
label_33321c:
    // 0x33321c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33321Cu;
    SET_GPR_U32(ctx, 31, 0x333224u);
    ctx->pc = 0x333220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33321Cu;
    // 0x333220: 0x34048400  ori         $a0, $zero, 0x8400 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33792);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33321Cu, 0x333224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333224u;
label_333224:
    // 0x333224: 0xc0e6368  jal         func_398DA0
    ctx->pc = 0x333224u;
    SET_GPR_U32(ctx, 31, 0x33322Cu);
    ctx->pc = 0x333228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333224u;
    // 0x333228: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DA0u, 0x333224u, 0x33322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33322Cu;
label_33322c:
    // 0x33322c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x33322Cu;
    SET_GPR_U32(ctx, 31, 0x333234u);
    ctx->pc = 0x333230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33322Cu;
    // 0x333230: 0x34048401  ori         $a0, $zero, 0x8401 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33793);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x33322Cu, 0x333234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333234u;
label_333234:
    // 0x333234: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333238: 0xc0cca0e  jal         func_332838
    ctx->pc = 0x333238u;
    SET_GPR_U32(ctx, 31, 0x333240u);
    ctx->pc = 0x33323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333238u;
    // 0x33323c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332838u, 0x333238u, 0x333240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333240u;
label_333240:
    // 0x333240: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333244: 0x24844328  addiu       $a0, $a0, 0x4328
    ctx->pc = 0x333244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17192));
    // 0x333248: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333248u;
    {
        const bool branch_taken_0x333248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333248u;
        // 0x33324c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333248) {
            ctx->pc = 0x333260u;
            goto label_333260;
        }
    }
    ctx->pc = 0x333250u;
    // 0x333250: 0xc0c9832  jal         func_3260C8
    ctx->pc = 0x333250u;
    SET_GPR_U32(ctx, 31, 0x333258u);
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x333250u, 0x333258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333258u;
label_333258:
    // 0x333258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x333258u;
    {
        const bool branch_taken_0x333258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333258u;
        // 0x33325c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333258) {
            ctx->pc = 0x333264u;
            goto label_333264;
        }
    }
    ctx->pc = 0x333260u;
label_333260:
    // 0x333260: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x333260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_333264:
    // 0x333264: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x333264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333268: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x333268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33326c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333270: 0x3e00008  jr          $ra
    ctx->pc = 0x333270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333270u;
        // 0x333274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333278u;
}
