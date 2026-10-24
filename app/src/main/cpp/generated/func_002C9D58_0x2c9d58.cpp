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

// Function: func_002C9D58
// Address: 0x2c9d58 - 0x2c9e78
void func_002C9D58_0x2c9d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C9D58_0x2c9d58");
#endif

    switch (ctx->pc) {
        case 0x2c9db0u: goto label_2c9db0;
        case 0x2c9dc0u: goto label_2c9dc0;
        case 0x2c9dd0u: goto label_2c9dd0;
        case 0x2c9de0u: goto label_2c9de0;
        case 0x2c9de8u: goto label_2c9de8;
        case 0x2c9df8u: goto label_2c9df8;
        case 0x2c9e00u: goto label_2c9e00;
        case 0x2c9e10u: goto label_2c9e10;
        case 0x2c9e20u: goto label_2c9e20;
        case 0x2c9e28u: goto label_2c9e28;
        case 0x2c9e30u: goto label_2c9e30;
        case 0x2c9e40u: goto label_2c9e40;
        default: break;
    }

    ctx->pc = 0x2c9d58u;

    // 0x2c9d58: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c9d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c9d5c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c9d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c9d60: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c9d64: 0x3c11005f  lui         $s1, 0x5F
    ctx->pc = 0x2c9d64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)95 << 16));
    // 0x2c9d68: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c9d6c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2c9d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c9d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c9d74: 0x3c120045  lui         $s2, 0x45
    ctx->pc = 0x2c9d74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)69 << 16));
    // 0x2c9d78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c9d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c9d7c: 0x3c130045  lui         $s3, 0x45
    ctx->pc = 0x2c9d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)69 << 16));
    // 0x2c9d80: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2c9d84: 0x3c140045  lui         $s4, 0x45
    ctx->pc = 0x2c9d84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
    // 0x2c9d88: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2c9d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2c9d8c: 0x3c150045  lui         $s5, 0x45
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)69 << 16));
    // 0x2c9d90: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2c9d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2c9d94: 0x3c160045  lui         $s6, 0x45
    ctx->pc = 0x2c9d94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)69 << 16));
    // 0x2c9d98: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2c9d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2c9d9c: 0x3c170045  lui         $s7, 0x45
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)69 << 16));
    // 0x2c9da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9da4: 0x3c1e0045  lui         $fp, 0x45
    ctx->pc = 0x2c9da4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)69 << 16));
    // 0x2c9da8: 0x26248140  addiu       $a0, $s1, -0x7EC0
    ctx->pc = 0x2c9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934848));
    // 0x2c9dac: 0x0  nop
    ctx->pc = 0x2c9dacu;
    // NOP
label_2c9db0:
    // 0x2c9db0: 0x2645cd20  addiu       $a1, $s2, -0x32E0
    ctx->pc = 0x2c9db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294954272));
    // 0x2c9db4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9db8: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2C9DB8u;
    SET_GPR_U32(ctx, 31, 0x2C9DC0u);
    ctx->pc = 0x2C9DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DB8u;
    // 0x2c9dbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2C9DB8u, 0x2C9DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DC0u;
label_2c9dc0:
    // 0x2c9dc0: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9DC0u;
    {
        const bool branch_taken_0x2c9dc0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DC0u;
        // 0x2c9dc4: 0x26248140  addiu       $a0, $s1, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dc0) {
            ctx->pc = 0x2C9DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9db0;
        }
    }
    ctx->pc = 0x2C9DC8u;
    // 0x2c9dc8: 0x26048140  addiu       $a0, $s0, -0x7EC0
    ctx->pc = 0x2c9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x2c9dcc: 0x0  nop
    ctx->pc = 0x2c9dccu;
    // NOP
label_2c9dd0:
    // 0x2c9dd0: 0x2665cd40  addiu       $a1, $s3, -0x32C0
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954304));
    // 0x2c9dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dd8: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2C9DD8u;
    SET_GPR_U32(ctx, 31, 0x2C9DE0u);
    ctx->pc = 0x2C9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DD8u;
    // 0x2c9ddc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2C9DD8u, 0x2C9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DE0u;
label_2c9de0:
    // 0x2c9de0: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9DE0u;
    {
        const bool branch_taken_0x2c9de0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DE0u;
        // 0x2c9de4: 0x26048140  addiu       $a0, $s0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9de0) {
            ctx->pc = 0x2C9DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9dd0;
        }
    }
    ctx->pc = 0x2C9DE8u;
label_2c9de8:
    // 0x2c9de8: 0x2685cd60  addiu       $a1, $s4, -0x32A0
    ctx->pc = 0x2c9de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954336));
    // 0x2c9dec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c9decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9df0: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2C9DF0u;
    SET_GPR_U32(ctx, 31, 0x2C9DF8u);
    ctx->pc = 0x2C9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DF0u;
    // 0x2c9df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2C9DF0u, 0x2C9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DF8u;
label_2c9df8:
    // 0x2c9df8: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9DF8u;
    {
        const bool branch_taken_0x2c9df8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C9DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DF8u;
        // 0x2c9dfc: 0x26048140  addiu       $a0, $s0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9df8) {
            ctx->pc = 0x2C9DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9de8;
        }
    }
    ctx->pc = 0x2C9E00u;
label_2c9e00:
    // 0x2c9e00: 0x26c5cd80  addiu       $a1, $s6, -0x3280
    ctx->pc = 0x2c9e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294954368));
    // 0x2c9e04: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c9e08: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2C9E08u;
    SET_GPR_U32(ctx, 31, 0x2C9E10u);
    ctx->pc = 0x2C9E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E08u;
    // 0x2c9e0c: 0x26a7cda0  addiu       $a3, $s5, -0x3260 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2C9E08u, 0x2C9E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E10u;
label_2c9e10:
    // 0x2c9e10: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9E10u;
    {
        const bool branch_taken_0x2c9e10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E10u;
        // 0x2c9e14: 0x26048140  addiu       $a0, $s0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e10) {
            ctx->pc = 0x2C9E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9e00;
        }
    }
    ctx->pc = 0x2C9E18u;
    // 0x2c9e18: 0xc0dd4c6  jal         func_375318
    ctx->pc = 0x2C9E18u;
    SET_GPR_U32(ctx, 31, 0x2C9E20u);
    ctx->pc = 0x375318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375318u, 0x2C9E18u, 0x2C9E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E20u;
label_2c9e20:
    // 0x2c9e20: 0xc0e847e  jal         func_3A11F8
    ctx->pc = 0x2C9E20u;
    SET_GPR_U32(ctx, 31, 0x2C9E28u);
    ctx->pc = 0x3A11F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A11F8u, 0x2C9E20u, 0x2C9E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E28u;
label_2c9e28:
    // 0x2c9e28: 0x26048140  addiu       $a0, $s0, -0x7EC0
    ctx->pc = 0x2c9e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
    // 0x2c9e2c: 0x0  nop
    ctx->pc = 0x2c9e2cu;
    // NOP
label_2c9e30:
    // 0x2c9e30: 0x27c5cda8  addiu       $a1, $fp, -0x3258
    ctx->pc = 0x2c9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954408));
    // 0x2c9e34: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2c9e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c9e38: 0xc0af890  jal         func_2BE240
    ctx->pc = 0x2C9E38u;
    SET_GPR_U32(ctx, 31, 0x2C9E40u);
    ctx->pc = 0x2C9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9E38u;
    // 0x2c9e3c: 0x26e7cdc8  addiu       $a3, $s7, -0x3238 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294954440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE240u, 0x2C9E38u, 0x2C9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9E40u;
label_2c9e40:
    // 0x2c9e40: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9E40u;
    {
        const bool branch_taken_0x2c9e40 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E40u;
        // 0x2c9e44: 0x26048140  addiu       $a0, $s0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e40) {
            ctx->pc = 0x2C9E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9e30;
        }
    }
    ctx->pc = 0x2C9E48u;
    // 0x2c9e48: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c9e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c9e4c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c9e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c9e50: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c9e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c9e54: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c9e54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c9e58: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c9e58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c9e5c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c9e5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e60: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2c9e60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9e64: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2c9e64u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9e68: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2c9e68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E70u;
        // 0x2c9e74: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E78u;
}
