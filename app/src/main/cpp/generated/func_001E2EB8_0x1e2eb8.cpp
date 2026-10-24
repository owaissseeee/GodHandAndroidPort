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

// Function: func_001E2EB8
// Address: 0x1e2eb8 - 0x1e2fd0
void func_001E2EB8_0x1e2eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E2EB8_0x1e2eb8");
#endif

    switch (ctx->pc) {
        case 0x1e2f28u: goto label_1e2f28;
        case 0x1e2f4cu: goto label_1e2f4c;
        case 0x1e2f5cu: goto label_1e2f5c;
        case 0x1e2fa4u: goto label_1e2fa4;
        default: break;
    }

    ctx->pc = 0x1e2eb8u;

    // 0x1e2eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2ec0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e2ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e2ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ecc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1e2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2ed0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2ED0u;
    {
        const bool branch_taken_0x1e2ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ED0u;
        // 0x1e2ed4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ed0) {
            ctx->pc = 0x1E2F38u;
            goto label_1e2f38;
        }
    }
    ctx->pc = 0x1E2ED8u;
    // 0x1e2ed8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2ED8u;
    {
        const bool branch_taken_0x1e2ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ed8) {
            ctx->pc = 0x1E2EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2ED8u;
            // 0x1e2edc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2EE0u;
    // 0x1e2ee0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2EE0u;
    {
        const bool branch_taken_0x1e2ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ee0) {
            ctx->pc = 0x1E2EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2EE0u;
            // 0x1e2ee4: 0x9e020054  lwu         $v0, 0x54($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2F08u;
            goto label_1e2f08;
        }
    }
    ctx->pc = 0x1E2EE8u;
    // 0x1e2ee8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1E2EE8u;
    {
        const bool branch_taken_0x1e2ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EE8u;
        // 0x1e2eec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ee8) {
            ctx->pc = 0x1E2FC0u;
            goto label_1e2fc0;
        }
    }
    ctx->pc = 0x1E2EF0u;
label_1e2ef0:
    // 0x1e2ef0: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E2EF0u;
    {
        const bool branch_taken_0x1e2ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EF0u;
        // 0x1e2ef4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ef0) {
            ctx->pc = 0x1E2F6Cu;
            goto label_1e2f6c;
        }
    }
    ctx->pc = 0x1E2EF8u;
    // 0x1e2ef8: 0x5062002e  beql        $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E2EF8u;
    {
        const bool branch_taken_0x1e2ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2ef8) {
            ctx->pc = 0x1E2EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2EF8u;
            // 0x1e2efc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2FB4u;
            goto label_1e2fb4;
        }
    }
    ctx->pc = 0x1E2F00u;
    // 0x1e2f00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1E2F00u;
    {
        const bool branch_taken_0x1e2f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F00u;
        // 0x1e2f04: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f00) {
            ctx->pc = 0x1E2FC0u;
            goto label_1e2fc0;
        }
    }
    ctx->pc = 0x1E2F08u;
label_1e2f08:
    // 0x1e2f08: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e2f0c: 0x2123b  dsra        $v0, $v0, 8
    ctx->pc = 0x1e2f0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 8);
    // 0x1e2f10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e2f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e2f14: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E2F14u;
    {
        const bool branch_taken_0x1e2f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F14u;
        // 0x1e2f18: 0xa60304c2  sh          $v1, 0x4C2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1218), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f14) {
            ctx->pc = 0x1E2FA4u;
            goto label_1e2fa4;
        }
    }
    ctx->pc = 0x1E2F1Cu;
    // 0x1e2f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f20: 0xc079148  jal         func_1E4520
    ctx->pc = 0x1E2F20u;
    SET_GPR_U32(ctx, 31, 0x1E2F28u);
    ctx->pc = 0x1E2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F20u;
    // 0x1e2f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4520u, 0x1E2F20u, 0x1E2F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F28u;
label_1e2f28:
    // 0x1e2f28: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1e2f2c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1e2f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1e2f30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1E2F30u;
    {
        const bool branch_taken_0x1e2f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F30u;
        // 0x1e2f34: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f30) {
            ctx->pc = 0x1E2FA4u;
            goto label_1e2fa4;
        }
    }
    ctx->pc = 0x1E2F38u;
label_1e2f38:
    // 0x1e2f38: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2f38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e2f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2f44: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2F44u;
    SET_GPR_U32(ctx, 31, 0x1E2F4Cu);
    ctx->pc = 0x1E2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F44u;
    // 0x1e2f48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2F44u, 0x1E2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F4Cu;
label_1e2f4c:
    // 0x1e2f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e2f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f54: 0xc07910e  jal         func_1E4438
    ctx->pc = 0x1E2F54u;
    SET_GPR_U32(ctx, 31, 0x1E2F5Cu);
    ctx->pc = 0x1E2F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F54u;
    // 0x1e2f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4438u, 0x1E2F54u, 0x1E2F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2F5Cu;
label_1e2f5c:
    // 0x1e2f5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e2f60: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1e2f64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E2F64u;
    {
        const bool branch_taken_0x1e2f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F64u;
        // 0x1e2f68: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f64) {
            ctx->pc = 0x1E2FA8u;
            goto label_1e2fa8;
        }
    }
    ctx->pc = 0x1E2F6Cu;
label_1e2f6c:
    // 0x1e2f6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1e2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1e2f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2F70u;
    {
        const bool branch_taken_0x1e2f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F70u;
        // 0x1e2f74: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f70) {
            ctx->pc = 0x1E2F84u;
            goto label_1e2f84;
        }
    }
    ctx->pc = 0x1E2F78u;
    // 0x1e2f78: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e2f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2F7Cu;
    {
        const bool branch_taken_0x1e2f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F7Cu;
        // 0x1e2f80: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f7c) {
            ctx->pc = 0x1E2F88u;
            goto label_1e2f88;
        }
    }
    ctx->pc = 0x1E2F84u;
label_1e2f84:
    // 0x1e2f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2f88:
    // 0x1e2f88: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e2f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e2f8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E2F8Cu;
    {
        const bool branch_taken_0x1e2f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F8Cu;
        // 0x1e2f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f8c) {
            ctx->pc = 0x1E2FBCu;
            goto label_1e2fbc;
        }
    }
    ctx->pc = 0x1E2F94u;
    // 0x1e2f94: 0x96050494  lhu         $a1, 0x494($s0)
    ctx->pc = 0x1e2f94u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x1e2f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f9c: 0xc079080  jal         func_1E4200
    ctx->pc = 0x1E2F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E2FA4u);
    ctx->pc = 0x1E2FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2F9Cu;
    // 0x1e2fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4200u, 0x1E2F9Cu, 0x1E2FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2FA4u;
label_1e2fa4:
    // 0x1e2fa4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e2fa8:
    // 0x1e2fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2fac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2FACu;
    {
        const bool branch_taken_0x1e2fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FACu;
        // 0x1e2fb0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fac) {
            ctx->pc = 0x1E2FBCu;
            goto label_1e2fbc;
        }
    }
    ctx->pc = 0x1E2FB4u;
label_1e2fb4:
    // 0x1e2fb4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e2fb8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e2fbc:
    // 0x1e2fbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e2fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2fc0:
    // 0x1e2fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FC4u;
        // 0x1e2fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2FCCu;
    // 0x1e2fcc: 0x0  nop
    ctx->pc = 0x1e2fccu;
    // NOP
    ctx->pc = 0x1e2fd0u;
}
