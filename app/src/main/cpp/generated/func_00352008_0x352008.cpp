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

// Function: func_00352008
// Address: 0x352008 - 0x3520b0
void func_00352008_0x352008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00352008_0x352008");
#endif

    switch (ctx->pc) {
        case 0x352064u: goto label_352064;
        case 0x352088u: goto label_352088;
        default: break;
    }

    ctx->pc = 0x352008u;

    // 0x352008: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x352008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35200c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x352010: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x352010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x352014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x352014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352018: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x352018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35201c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35201cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352020: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x352020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x352024: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x352024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352028: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x352028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35202c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x35202cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352030: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x352030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x352034: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x352034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352038: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x352038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35203c: 0x26021fb8  addiu       $v0, $s0, 0x1FB8
    ctx->pc = 0x35203cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8120));
    // 0x352040: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x352040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x352044: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x352044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352048: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x352048u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x35204c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x35204cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x352050: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x352050u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x352054: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x352054u;
    {
        const bool branch_taken_0x352054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x352058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352054u;
        // 0x352058: 0xfe230000  sd          $v1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352054) {
            ctx->pc = 0x35208Cu;
            goto label_35208c;
        }
    }
    ctx->pc = 0x35205Cu;
    // 0x35205c: 0xc0d6546  jal         func_359518
    ctx->pc = 0x35205Cu;
    SET_GPR_U32(ctx, 31, 0x352064u);
    ctx->pc = 0x359518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359518u, 0x35205Cu, 0x352064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352064u;
label_352064:
    // 0x352064: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x352064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x352068: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x352068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35206c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x35206cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352070: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x352070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352074: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x352074u;
    {
        const bool branch_taken_0x352074 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x352078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352074u;
        // 0x352078: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352074) {
            ctx->pc = 0x35208Cu;
            goto label_35208c;
        }
    }
    ctx->pc = 0x35207Cu;
    // 0x35207c: 0x26650118  addiu       $a1, $s3, 0x118
    ctx->pc = 0x35207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
    // 0x352080: 0xc0d4836  jal         func_3520D8
    ctx->pc = 0x352080u;
    SET_GPR_U32(ctx, 31, 0x352088u);
    ctx->pc = 0x352084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352080u;
    // 0x352084: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3520D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3520D8u, 0x352080u, 0x352088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352088u;
label_352088:
    // 0x352088: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x352088u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_35208c:
    // 0x35208c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35208cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352090: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x352090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x352094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x352094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x352098: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x352098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35209c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35209cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3520a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3520a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3520a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3520a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3520a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3520A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3520ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3520A8u;
        // 0x3520ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3520A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3520B0u;
}
