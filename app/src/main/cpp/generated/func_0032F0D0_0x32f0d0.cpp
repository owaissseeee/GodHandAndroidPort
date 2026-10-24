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

// Function: func_0032F0D0
// Address: 0x32f0d0 - 0x32f178
void func_0032F0D0_0x32f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F0D0_0x32f0d0");
#endif

    switch (ctx->pc) {
        case 0x32f114u: goto label_32f114;
        case 0x32f120u: goto label_32f120;
        case 0x32f13cu: goto label_32f13c;
        default: break;
    }

    ctx->pc = 0x32f0d0u;

    // 0x32f0d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32f0d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f0d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f0dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x32f0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f0e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f0e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32f0e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32f0e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f0ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32f0f0: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x32f0f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f0f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x32f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x32f0f8: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x32f0f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f0fc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x32f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x32f100: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x32f100u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32f104: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x32f104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x32f108: 0x2670000c  addiu       $s0, $s3, 0xC
    ctx->pc = 0x32f108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x32f10c: 0xc0cbd32  jal         func_32F4C8
    ctx->pc = 0x32F10Cu;
    SET_GPR_U32(ctx, 31, 0x32F114u);
    ctx->pc = 0x32F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F10Cu;
    // 0x32f110: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C8u, 0x32F10Cu, 0x32F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F114u;
label_32f114:
    // 0x32f114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F114u;
    {
        const bool branch_taken_0x32f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F114u;
        // 0x32f118: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f114) {
            ctx->pc = 0x32F124u;
            goto label_32f124;
        }
    }
    ctx->pc = 0x32F11Cu;
    // 0x32f11c: 0x0  nop
    ctx->pc = 0x32f11cu;
    // NOP
label_32f120:
    // 0x32f120: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32f120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32f124:
    // 0x32f124: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x32f124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x32f128: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x32F128u;
    {
        const bool branch_taken_0x32f128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f128) {
            ctx->pc = 0x32F12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F128u;
            // 0x32f12c: 0x2321026  xor         $v0, $s1, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F14Cu;
            goto label_32f14c;
        }
    }
    ctx->pc = 0x32F130u;
    // 0x32f130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32f134: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x32F134u;
    SET_GPR_U32(ctx, 31, 0x32F13Cu);
    ctx->pc = 0x32F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F134u;
    // 0x32f138: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x32F134u, 0x32F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F13Cu;
label_32f13c:
    // 0x32f13c: 0x50560001  beql        $v0, $s6, . + 4 + (0x1 << 2)
    ctx->pc = 0x32F13Cu;
    {
        const bool branch_taken_0x32f13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x32f13c) {
            ctx->pc = 0x32F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F13Cu;
            // 0x32f140: 0xa2750001  sb          $s5, 0x1($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F144u;
            goto label_32f144;
        }
    }
    ctx->pc = 0x32F144u;
label_32f144:
    // 0x32f144: 0x1054fff6  beq         $v0, $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x32F144u;
    {
        const bool branch_taken_0x32f144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x32F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F144u;
        // 0x32f148: 0x2321026  xor         $v0, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f144) {
            ctx->pc = 0x32F120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f120;
        }
    }
    ctx->pc = 0x32F14Cu;
label_32f14c:
    // 0x32f14c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f154: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x32f154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32f158: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f15c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32f15cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f160: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32f160u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f164: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x32f164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32f168: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x32f168u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f16c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32f16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32f170: 0x3e00008  jr          $ra
    ctx->pc = 0x32F170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F170u;
        // 0x32f174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F178u;
}
