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

// Function: func_0032EFE8
// Address: 0x32efe8 - 0x32f068
void func_0032EFE8_0x32efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032EFE8_0x32efe8");
#endif

    switch (ctx->pc) {
        case 0x32f010u: goto label_32f010;
        case 0x32f028u: goto label_32f028;
        case 0x32f03cu: goto label_32f03c;
        default: break;
    }

    ctx->pc = 0x32efe8u;

    // 0x32efe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32efe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32efec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32efecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32eff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32eff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32eff4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32eff8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32effc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x32effcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f000: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32f004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32f008: 0xc0cbd32  jal         func_32F4C8
    ctx->pc = 0x32F008u;
    SET_GPR_U32(ctx, 31, 0x32F010u);
    ctx->pc = 0x32F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F008u;
    // 0x32f00c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C8u, 0x32F008u, 0x32F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F010u;
label_32f010:
    // 0x32f010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32f010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f014: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x32F014u;
    {
        const bool branch_taken_0x32f014 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x32f014) {
            ctx->pc = 0x32F018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F014u;
            // 0x32f018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F04Cu;
            goto label_32f04c;
        }
    }
    ctx->pc = 0x32F01Cu;
    // 0x32f01c: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x32f01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x32f020: 0x26100094  addiu       $s0, $s0, 0x94
    ctx->pc = 0x32f020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x32f024: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x32f024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32f028:
    // 0x32f028: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x32f028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x32f02c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x32f02cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32f030: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x32f030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x32f034: 0xc0ca74e  jal         func_329D38
    ctx->pc = 0x32F034u;
    SET_GPR_U32(ctx, 31, 0x32F03Cu);
    ctx->pc = 0x32F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F034u;
    // 0x32f038: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D38u, 0x32F034u, 0x32F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F03Cu;
label_32f03c:
    // 0x32f03c: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x32f03cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x32f040: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32F040u;
    {
        const bool branch_taken_0x32f040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f040) {
            ctx->pc = 0x32F044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F040u;
            // 0x32f044: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f028;
        }
    }
    ctx->pc = 0x32F048u;
    // 0x32f048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32f04c:
    // 0x32f04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32f054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f058: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32f058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f05c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F05Cu;
        // 0x32f060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F064u;
    // 0x32f064: 0x0  nop
    ctx->pc = 0x32f064u;
    // NOP
    ctx->pc = 0x32f068u;
}
