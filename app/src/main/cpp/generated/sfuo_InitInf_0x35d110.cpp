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

// Function: sfuo_InitInf
// Address: 0x35d110 - 0x35d188
void sfuo_InitInf_0x35d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfuo_InitInf_0x35d110");
#endif

    switch (ctx->pc) {
        case 0x35d140u: goto label_35d140;
        case 0x35d148u: goto label_35d148;
        case 0x35d164u: goto label_35d164;
        default: break;
    }

    ctx->pc = 0x35d110u;

    // 0x35d110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d118: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x35d118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x35d11c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35d120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d128: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35d128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d12c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35d130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35d130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35d138: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x35d138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x35d13c: 0x0  nop
    ctx->pc = 0x35d13cu;
    // NOP
label_35d140:
    // 0x35d140: 0xc0d7462  jal         func_35D188
    ctx->pc = 0x35D140u;
    SET_GPR_U32(ctx, 31, 0x35D148u);
    ctx->pc = 0x35D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D140u;
    // 0x35d144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D188u, 0x35D140u, 0x35D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D148u;
label_35d148:
    // 0x35d148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35d148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d14c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d150: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35d150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35d154: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x35d154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d158: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x35d158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x35d15c: 0xc0d3082  jal         func_34C208
    ctx->pc = 0x35D15Cu;
    SET_GPR_U32(ctx, 31, 0x35D164u);
    ctx->pc = 0x35D160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D15Cu;
    // 0x35d160: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C208u, 0x35D15Cu, 0x35D164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D164u;
label_35d164:
    // 0x35d164: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x35d164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35d168: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35D168u;
    {
        const bool branch_taken_0x35d168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D168u;
        // 0x35d16c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d168) {
            ctx->pc = 0x35D140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d140;
        }
    }
    ctx->pc = 0x35D170u;
    // 0x35d170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d174: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35d178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d17c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35d17cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d180: 0x3e00008  jr          $ra
    ctx->pc = 0x35D180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D180u;
        // 0x35d184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D188u;
}
