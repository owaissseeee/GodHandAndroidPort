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

// Function: func_00308DA8
// Address: 0x308da8 - 0x308ee8
void func_00308DA8_0x308da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00308DA8_0x308da8");
#endif

    switch (ctx->pc) {
        case 0x308e14u: goto label_308e14;
        case 0x308e28u: goto label_308e28;
        case 0x308e38u: goto label_308e38;
        case 0x308e60u: goto label_308e60;
        case 0x308e80u: goto label_308e80;
        default: break;
    }

    ctx->pc = 0x308da8u;

    // 0x308da8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x308da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x308dac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x308dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308db0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x308db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x308db4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x308db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x308db8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x308db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308dbc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x308dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x308dc0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x308dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x308dc4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x308dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x308dc8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x308dc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308dcc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x308dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x308dd0: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x308dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x308dd4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x308dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x308dd8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x308dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x308ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x308ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308de0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x308de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x308de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x308de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308de8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x308de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x308dec: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x308df0: 0x240a012c  addiu       $t2, $zero, 0x12C
    ctx->pc = 0x308df0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x308df4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x308df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x308df8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x308df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x308dfc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x308dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x308e00: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x308e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x308e04: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x308e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x308e08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x308e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x308e0c: 0xc04bb58  jal         func_12ED60
    ctx->pc = 0x308E0Cu;
    SET_GPR_U32(ctx, 31, 0x308E14u);
    ctx->pc = 0x308E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E0Cu;
    // 0x308e10: 0x27ab0030  addiu       $t3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ED60u, 0x308E0Cu, 0x308E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E14u;
label_308e14:
    // 0x308e14: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x308E14u;
    {
        const bool branch_taken_0x308e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E14u;
        // 0x308e18: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e14) {
            ctx->pc = 0x308EB8u;
            goto label_308eb8;
        }
    }
    ctx->pc = 0x308E1Cu;
    // 0x308e1c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x308E1Cu;
    {
        const bool branch_taken_0x308e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E1Cu;
        // 0x308e20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e1c) {
            ctx->pc = 0x308EB8u;
            goto label_308eb8;
        }
    }
    ctx->pc = 0x308E24u;
    // 0x308e24: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x308e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_308e28:
    // 0x308e28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x308e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308e2c: 0x26c4ae50  addiu       $a0, $s6, -0x51B0
    ctx->pc = 0x308e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946384));
    // 0x308e30: 0xc04ccee  jal         func_1333B8
    ctx->pc = 0x308E30u;
    SET_GPR_U32(ctx, 31, 0x308E38u);
    ctx->pc = 0x308E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E30u;
    // 0x308e34: 0x94450008  lhu         $a1, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1333B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333B8u, 0x308E30u, 0x308E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E38u;
label_308e38:
    // 0x308e38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x308e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e40: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x308e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x308e44: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x308E44u;
    {
        const bool branch_taken_0x308e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308e44) {
            ctx->pc = 0x308E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308E44u;
            // 0x308e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308EBCu;
            goto label_308ebc;
        }
    }
    ctx->pc = 0x308E4Cu;
    // 0x308e4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x308E4Cu;
    {
        const bool branch_taken_0x308e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E4Cu;
        // 0x308e50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e4c) {
            ctx->pc = 0x308EA4u;
            goto label_308ea4;
        }
    }
    ctx->pc = 0x308E54u;
    // 0x308e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e58: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x308e58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e5c: 0x0  nop
    ctx->pc = 0x308e5cu;
    // NOP
label_308e60:
    // 0x308e60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x308e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x308e64: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x308E64u;
    {
        const bool branch_taken_0x308e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308e64) {
            ctx->pc = 0x308E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308E64u;
            // 0x308e68: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308E90u;
            goto label_308e90;
        }
    }
    ctx->pc = 0x308E6Cu;
    // 0x308e6c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x308e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308e70: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x308E70u;
    {
        const bool branch_taken_0x308e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x308e70) {
            ctx->pc = 0x308E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308E70u;
            // 0x308e74: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308E90u;
            goto label_308e90;
        }
    }
    ctx->pc = 0x308E78u;
    // 0x308e78: 0xc0c235a  jal         func_308D68
    ctx->pc = 0x308E78u;
    SET_GPR_U32(ctx, 31, 0x308E80u);
    ctx->pc = 0x308E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E78u;
    // 0x308e7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D68u, 0x308E78u, 0x308E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E80u;
label_308e80:
    // 0x308e80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x308E80u;
    {
        const bool branch_taken_0x308e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308e80) {
            ctx->pc = 0x308E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308E80u;
            // 0x308e84: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308E90u;
            goto label_308e90;
        }
    }
    ctx->pc = 0x308E88u;
    // 0x308e88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x308E88u;
    {
        const bool branch_taken_0x308e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E88u;
        // 0x308e8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e88) {
            ctx->pc = 0x308EBCu;
            goto label_308ebc;
        }
    }
    ctx->pc = 0x308E90u;
label_308e90:
    // 0x308e90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x308e94: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x308e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x308e98: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x308e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x308e9c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x308E9Cu;
    {
        const bool branch_taken_0x308e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E9Cu;
        // 0x308ea0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e9c) {
            ctx->pc = 0x308E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308e60;
        }
    }
    ctx->pc = 0x308EA4u;
label_308ea4:
    // 0x308ea4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x308ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308ea8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x308ea8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x308eac: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x308eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308eb0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x308EB0u;
    {
        const bool branch_taken_0x308eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EB0u;
        // 0x308eb4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308eb0) {
            ctx->pc = 0x308E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308e28;
        }
    }
    ctx->pc = 0x308EB8u;
label_308eb8:
    // 0x308eb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308ebc:
    // 0x308ebc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x308ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x308ec0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x308ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x308ec4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x308ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x308ec8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x308ec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x308ecc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x308eccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x308ed0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x308ed0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x308ed4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x308ed4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x308ed8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x308ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x308edc: 0x3e00008  jr          $ra
    ctx->pc = 0x308EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308EDCu;
        // 0x308ee0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308EE4u;
    // 0x308ee4: 0x0  nop
    ctx->pc = 0x308ee4u;
    // NOP
    ctx->pc = 0x308ee8u;
}
