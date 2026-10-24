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

// Function: func_00350048
// Address: 0x350048 - 0x3500e8
void func_00350048_0x350048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00350048_0x350048");
#endif

    switch (ctx->pc) {
        case 0x35008cu: goto label_35008c;
        case 0x3500a8u: goto label_3500a8;
        case 0x3500c8u: goto label_3500c8;
        default: break;
    }

    ctx->pc = 0x350048u;

    // 0x350048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35004c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x350050: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x350050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350054: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x350054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x350058: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x350058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35005c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x350060: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x350060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x350064: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x350064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x350068: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x350068u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35006c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35006cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x350070: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x350070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x350074: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x350074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x350078: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x350078u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35007c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350080: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x350080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x350084: 0xc0d9b86  jal         func_366E18
    ctx->pc = 0x350084u;
    SET_GPR_U32(ctx, 31, 0x35008Cu);
    ctx->pc = 0x350088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350084u;
    // 0x350088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366E18u, 0x350084u, 0x35008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35008Cu;
label_35008c:
    // 0x35008c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350090: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x350090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x350094: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x350094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x350098: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x350098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35009c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x35009cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3500a0: 0xc0d9b86  jal         func_366E18
    ctx->pc = 0x3500A0u;
    SET_GPR_U32(ctx, 31, 0x3500A8u);
    ctx->pc = 0x3500A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3500A0u;
    // 0x3500a4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366E18u, 0x3500A0u, 0x3500A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500A8u;
label_3500a8:
    // 0x3500a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3500a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3500ac: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3500acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3500b0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3500B0u;
    {
        const bool branch_taken_0x3500b0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3500B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500B0u;
        // 0x3500b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500b0) {
            ctx->pc = 0x3500C0u;
            goto label_3500c0;
        }
    }
    ctx->pc = 0x3500B8u;
    // 0x3500b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3500B8u;
    {
        const bool branch_taken_0x3500b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3500BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500B8u;
        // 0x3500bc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3500b8) {
            ctx->pc = 0x3500CCu;
            goto label_3500cc;
        }
    }
    ctx->pc = 0x3500C0u;
label_3500c0:
    // 0x3500c0: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x3500C0u;
    SET_GPR_U32(ctx, 31, 0x3500C8u);
    ctx->pc = 0x3500C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3500C0u;
    // 0x3500c4: 0x34a50d0d  ori         $a1, $a1, 0xD0D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3341);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3500C0u, 0x3500C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3500C8u;
label_3500c8:
    // 0x3500c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3500c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3500cc:
    // 0x3500cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3500ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3500d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3500d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3500d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3500d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3500d8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3500d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3500dc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3500dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3500e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3500E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3500E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3500E0u;
        // 0x3500e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3500E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3500E8u;
}
