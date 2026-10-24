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

// Function: func_00334EF0
// Address: 0x334ef0 - 0x334f90
void func_00334EF0_0x334ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334EF0_0x334ef0");
#endif

    switch (ctx->pc) {
        case 0x334f14u: goto label_334f14;
        case 0x334f20u: goto label_334f20;
        case 0x334f28u: goto label_334f28;
        case 0x334f40u: goto label_334f40;
        case 0x334f54u: goto label_334f54;
        default: break;
    }

    ctx->pc = 0x334ef0u;

    // 0x334ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x334ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x334ef4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x334ef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x334ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334efc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334f00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x334f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x334f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x334f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334f08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334f0c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x334F0Cu;
    SET_GPR_U32(ctx, 31, 0x334F14u);
    ctx->pc = 0x334F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F0Cu;
    // 0x334f10: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x334F0Cu, 0x334F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F14u;
label_334f14:
    // 0x334f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x334f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334f18: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x334F18u;
    SET_GPR_U32(ctx, 31, 0x334F20u);
    ctx->pc = 0x334F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F18u;
    // 0x334f1c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x334F18u, 0x334F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F20u;
label_334f20:
    // 0x334f20: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334F20u;
    {
        const bool branch_taken_0x334f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x334f20) {
            ctx->pc = 0x334F30u;
            goto label_334f30;
        }
    }
    ctx->pc = 0x334F28u;
label_334f28:
    // 0x334f28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x334F28u;
    {
        const bool branch_taken_0x334f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F28u;
        // 0x334f2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f28) {
            ctx->pc = 0x334F68u;
            goto label_334f68;
        }
    }
    ctx->pc = 0x334F30u;
label_334f30:
    // 0x334f30: 0x1a20000c  blez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x334F30u;
    {
        const bool branch_taken_0x334f30 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x334F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F30u;
        // 0x334f34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f30) {
            ctx->pc = 0x334F64u;
            goto label_334f64;
        }
    }
    ctx->pc = 0x334F38u;
    // 0x334f38: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x334f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x334f3c: 0x0  nop
    ctx->pc = 0x334f3cu;
    // NOP
label_334f40:
    // 0x334f40: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x334f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x334f44: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x334f44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x334f48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x334f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x334f4c: 0xc0cd3a6  jal         func_334E98
    ctx->pc = 0x334F4Cu;
    SET_GPR_U32(ctx, 31, 0x334F54u);
    ctx->pc = 0x334F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334F4Cu;
    // 0x334f50: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E98u, 0x334F4Cu, 0x334F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334F54u;
label_334f54:
    // 0x334f54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x334F54u;
    {
        const bool branch_taken_0x334f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F54u;
        // 0x334f58: 0x211182a  slt         $v1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f54) {
            ctx->pc = 0x334F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334f28;
        }
    }
    ctx->pc = 0x334F5Cu;
    // 0x334f5c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x334F5Cu;
    {
        const bool branch_taken_0x334f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F5Cu;
        // 0x334f60: 0x2501821  addu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334f5c) {
            ctx->pc = 0x334F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334f40;
        }
    }
    ctx->pc = 0x334F64u;
label_334f64:
    // 0x334f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334f68:
    // 0x334f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x334f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334f74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x334f74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x334f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x334F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334F7Cu;
        // 0x334f80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334F84u;
    // 0x334f84: 0x0  nop
    ctx->pc = 0x334f84u;
    // NOP
    // 0x334f88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x334f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x334f8c: 0x0  nop
    ctx->pc = 0x334f8cu;
    // NOP
    ctx->pc = 0x334f90u;
}
