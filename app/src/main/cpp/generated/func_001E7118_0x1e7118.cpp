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

// Function: func_001E7118
// Address: 0x1e7118 - 0x1e71b8
void func_001E7118_0x1e7118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7118_0x1e7118");
#endif

    switch (ctx->pc) {
        case 0x1e7140u: goto label_1e7140;
        case 0x1e7148u: goto label_1e7148;
        case 0x1e7154u: goto label_1e7154;
        case 0x1e716cu: goto label_1e716c;
        case 0x1e7178u: goto label_1e7178;
        case 0x1e7184u: goto label_1e7184;
        default: break;
    }

    ctx->pc = 0x1e7118u;

    // 0x1e7118: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e7118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e711c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e7120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7124: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e7124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e7128: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e7128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e712c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e7130: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1e7130u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e7134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7138: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1E7138u;
    SET_GPR_U32(ctx, 31, 0x1E7140u);
    ctx->pc = 0x1E713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7138u;
    // 0x1e713c: 0x26500050  addiu       $s0, $s2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1E7138u, 0x1E7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7140u;
label_1e7140:
    // 0x1e7140: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e7140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7144: 0x0  nop
    ctx->pc = 0x1e7144u;
    // NOP
label_1e7148:
    // 0x1e7148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e714c: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1E714Cu;
    SET_GPR_U32(ctx, 31, 0x1E7154u);
    ctx->pc = 0x1E7150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E714Cu;
    // 0x1e7150: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1E714Cu, 0x1E7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7154u;
label_1e7154:
    // 0x1e7154: 0x0  nop
    ctx->pc = 0x1e7154u;
    // NOP
    // 0x1e7158: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7158u;
    {
        const bool branch_taken_0x1e7158 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7158u;
        // 0x1e715c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7158) {
            ctx->pc = 0x1E7148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7148;
        }
    }
    ctx->pc = 0x1E7160u;
    // 0x1e7160: 0x26440530  addiu       $a0, $s2, 0x530
    ctx->pc = 0x1e7160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
    // 0x1e7164: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x1E7164u;
    SET_GPR_U32(ctx, 31, 0x1E716Cu);
    ctx->pc = 0x1E7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7164u;
    // 0x1e7168: 0x26500580  addiu       $s0, $s2, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x1E7164u, 0x1E716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E716Cu;
label_1e716c:
    // 0x1e716c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e716cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7170: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1e7170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e7174: 0x0  nop
    ctx->pc = 0x1e7174u;
    // NOP
label_1e7178:
    // 0x1e7178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e717c: 0xc0b5758  jal         func_2D5D60
    ctx->pc = 0x1E717Cu;
    SET_GPR_U32(ctx, 31, 0x1E7184u);
    ctx->pc = 0x1E7180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E717Cu;
    // 0x1e7180: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D60u, 0x1E717Cu, 0x1E7184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7184u;
label_1e7184:
    // 0x1e7184: 0x0  nop
    ctx->pc = 0x1e7184u;
    // NOP
    // 0x1e7188: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E7188u;
    {
        const bool branch_taken_0x1e7188 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x1E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7188u;
        // 0x1e718c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7188) {
            ctx->pc = 0x1E7178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7178;
        }
    }
    ctx->pc = 0x1E7190u;
    // 0x1e7190: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1e7190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7194: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e7194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7198: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e7198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e719c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e719cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e71a0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e71a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e71a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e71a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e71a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E71A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E71A8u;
        // 0x1e71ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E71A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E71B0u;
    // 0x1e71b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e71b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e71b4: 0x0  nop
    ctx->pc = 0x1e71b4u;
    // NOP
    ctx->pc = 0x1e71b8u;
}
