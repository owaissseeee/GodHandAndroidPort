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

// Function: func_0036A708
// Address: 0x36a708 - 0x36a7b0
void func_0036A708_0x36a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A708_0x36a708");
#endif

    switch (ctx->pc) {
        case 0x36a73cu: goto label_36a73c;
        case 0x36a764u: goto label_36a764;
        case 0x36a778u: goto label_36a778;
        default: break;
    }

    ctx->pc = 0x36a708u;

    // 0x36a708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a710: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36a710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36a718: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36a718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a71c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a720: 0x8e23035c  lw          $v1, 0x35C($s1)
    ctx->pc = 0x36a720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
    // 0x36a724: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x36A724u;
    {
        const bool branch_taken_0x36a724 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A724u;
        // 0x36a728: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a724) {
            ctx->pc = 0x36A798u;
            goto label_36a798;
        }
    }
    ctx->pc = 0x36A72Cu;
    // 0x36a72c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x36a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a730: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x36a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36a734: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x36A734u;
    SET_GPR_U32(ctx, 31, 0x36A73Cu);
    ctx->pc = 0x36A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A734u;
    // 0x36a738: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x36A734u, 0x36A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A73Cu;
label_36a73c:
    // 0x36a73c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36a73cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a740: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x36A740u;
    {
        const bool branch_taken_0x36a740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A740u;
        // 0x36a744: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a740) {
            ctx->pc = 0x36A794u;
            goto label_36a794;
        }
    }
    ctx->pc = 0x36A748u;
    // 0x36a748: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x36a748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36a74c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x36a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x36a750: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x36a750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a754: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x36a754u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36a758: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x36a758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36a75c: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x36A75Cu;
    SET_GPR_U32(ctx, 31, 0x36A764u);
    ctx->pc = 0x36A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A75Cu;
    // 0x36a760: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x36A75Cu, 0x36A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A764u;
label_36a764:
    // 0x36a764: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36a764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a768: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x36A768u;
    {
        const bool branch_taken_0x36a768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a768) {
            ctx->pc = 0x36A76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A768u;
            // 0x36a76c: 0x8e22035c  lw          $v0, 0x35C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A798u;
            goto label_36a798;
        }
    }
    ctx->pc = 0x36A770u;
    // 0x36a770: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x36A770u;
    SET_GPR_U32(ctx, 31, 0x36A778u);
    ctx->pc = 0x36A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A770u;
    // 0x36a774: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x36A770u, 0x36A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A778u;
label_36a778:
    // 0x36a778: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x36a778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a77c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x36a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x36a780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A780u;
    {
        const bool branch_taken_0x36a780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A780u;
        // 0x36a784: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a780) {
            ctx->pc = 0x36A790u;
            goto label_36a790;
        }
    }
    ctx->pc = 0x36A788u;
    // 0x36a788: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x36A788u;
    {
        const bool branch_taken_0x36a788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A788u;
        // 0x36a78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a788) {
            ctx->pc = 0x36A794u;
            goto label_36a794;
        }
    }
    ctx->pc = 0x36A790u;
label_36a790:
    // 0x36a790: 0xae22035c  sw          $v0, 0x35C($s1)
    ctx->pc = 0x36a790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 2));
label_36a794:
    // 0x36a794: 0x8e22035c  lw          $v0, 0x35C($s1)
    ctx->pc = 0x36a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 860)));
label_36a798:
    // 0x36a798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36a79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a7a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36a7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7A4u;
        // 0x36a7a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A7ACu;
    // 0x36a7ac: 0x0  nop
    ctx->pc = 0x36a7acu;
    // NOP
    ctx->pc = 0x36a7b0u;
}
