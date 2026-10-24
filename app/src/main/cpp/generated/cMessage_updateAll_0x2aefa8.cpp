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

// Function: cMessage_updateAll
// Address: 0x2aefa8 - 0x2af028
void cMessage_updateAll_0x2aefa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_updateAll_0x2aefa8");
#endif

    switch (ctx->pc) {
        case 0x2aefe0u: goto label_2aefe0;
        case 0x2aefe8u: goto label_2aefe8;
        case 0x2af004u: goto label_2af004;
        default: break;
    }

    ctx->pc = 0x2aefa8u;

    // 0x2aefa8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2aefa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2aefac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aefacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aefb0: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x2aefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x2aefb4: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2aefb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2aefb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aefb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aefbc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aefbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aefc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aefc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefc4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2aefc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2aefc8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AEFC8u;
    {
        const bool branch_taken_0x2aefc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFC8u;
        // 0x2aefcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aefc8) {
            ctx->pc = 0x2AF010u;
            goto label_2af010;
        }
    }
    ctx->pc = 0x2AEFD0u;
    // 0x2aefd0: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x2aefd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2aefd4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2AEFD4u;
    {
        const bool branch_taken_0x2aefd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aefd4) {
            ctx->pc = 0x2AEFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEFD4u;
            // 0x2aefd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF014u;
            goto label_2af014;
        }
    }
    ctx->pc = 0x2AEFDCu;
    // 0x2aefdc: 0x0  nop
    ctx->pc = 0x2aefdcu;
    // NOP
label_2aefe0:
    // 0x2aefe0: 0xc0ac90e  jal         func_2B2438
    ctx->pc = 0x2AEFE0u;
    SET_GPR_U32(ctx, 31, 0x2AEFE8u);
    ctx->pc = 0x2AEFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFE0u;
    // 0x2aefe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2438u, 0x2AEFE0u, 0x2AEFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFE8u;
label_2aefe8:
    // 0x2aefe8: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2aefe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aefec: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2aefecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2aeff0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEFF0u;
    {
        const bool branch_taken_0x2aeff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeff0) {
            ctx->pc = 0x2AEFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEFF0u;
            // 0x2aeff4: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF008u;
            goto label_2af008;
        }
    }
    ctx->pc = 0x2AEFF8u;
    // 0x2aeff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aeff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeffc: 0xc0abbc4  jal         func_2AEF10
    ctx->pc = 0x2AEFFCu;
    SET_GPR_U32(ctx, 31, 0x2AF004u);
    ctx->pc = 0x2AF000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFFCu;
    // 0x2af000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF10u, 0x2AEFFCu, 0x2AF004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF004u;
label_2af004:
    // 0x2af004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2af004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af008:
    // 0x2af008: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2AF008u;
    {
        const bool branch_taken_0x2af008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2af008) {
            ctx->pc = 0x2AEFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aefe0;
        }
    }
    ctx->pc = 0x2AF010u;
label_2af010:
    // 0x2af010: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2af010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2af014:
    // 0x2af014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af01c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF01Cu;
        // 0x2af020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF024u;
    // 0x2af024: 0x0  nop
    ctx->pc = 0x2af024u;
    // NOP
    ctx->pc = 0x2af028u;
}
