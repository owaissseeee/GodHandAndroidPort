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

// Function: func_00356F48
// Address: 0x356f48 - 0x356fd8
void func_00356F48_0x356f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356F48_0x356f48");
#endif

    switch (ctx->pc) {
        case 0x356f64u: goto label_356f64;
        case 0x356fb8u: goto label_356fb8;
        default: break;
    }

    ctx->pc = 0x356f48u;

    // 0x356f48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x356f4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356f50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x356f5c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x356F5Cu;
    SET_GPR_U32(ctx, 31, 0x356F64u);
    ctx->pc = 0x356F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F5Cu;
    // 0x356f60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x356F5Cu, 0x356F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F64u;
label_356f64:
    // 0x356f64: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x356f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x356f68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f6c: 0x34a50142  ori         $a1, $a1, 0x142
    ctx->pc = 0x356f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)322);
    // 0x356f70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356F70u;
    {
        const bool branch_taken_0x356f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F70u;
        // 0x356f74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f70) {
            ctx->pc = 0x356F90u;
            goto label_356f90;
        }
    }
    ctx->pc = 0x356F78u;
    // 0x356f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356f84: 0x80d375c  j           func_34DD70
    ctx->pc = 0x356F84u;
    ctx->pc = 0x356F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F84u;
    // 0x356f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x356F84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356F8Cu;
    // 0x356f8c: 0x0  nop
    ctx->pc = 0x356f8cu;
    // NOP
label_356f90:
    // 0x356f90: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x356f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x356f94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x356f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356f98: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x356F98u;
    {
        const bool branch_taken_0x356f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x356F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F98u;
        // 0x356f9c: 0x64300b  movn        $a2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f98) {
            ctx->pc = 0x356FA8u;
            goto label_356fa8;
        }
    }
    ctx->pc = 0x356FA0u;
    // 0x356fa0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356FA0u;
    {
        const bool branch_taken_0x356fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x356FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356FA0u;
        // 0x356fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356fa0) {
            ctx->pc = 0x356FC0u;
            goto label_356fc0;
        }
    }
    ctx->pc = 0x356FA8u;
label_356fa8:
    // 0x356fa8: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x356fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x356fac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x356facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356fb0: 0xc0d5bf6  jal         func_356FD8
    ctx->pc = 0x356FB0u;
    SET_GPR_U32(ctx, 31, 0x356FB8u);
    ctx->pc = 0x356FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356FB0u;
    // 0x356fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356FD8u, 0x356FB0u, 0x356FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356FB8u;
label_356fb8:
    // 0x356fb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356fbc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x356fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_356fc0:
    // 0x356fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356fc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x356FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356FCCu;
        // 0x356fd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356FD4u;
    // 0x356fd4: 0x0  nop
    ctx->pc = 0x356fd4u;
    // NOP
    ctx->pc = 0x356fd8u;
}
