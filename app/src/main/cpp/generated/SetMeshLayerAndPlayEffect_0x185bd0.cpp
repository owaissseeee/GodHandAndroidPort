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

// Function: SetMeshLayerAndPlayEffect
// Address: 0x185bd0 - 0x185cb8
void SetMeshLayerAndPlayEffect_0x185bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMeshLayerAndPlayEffect_0x185bd0");
#endif

    switch (ctx->pc) {
        case 0x185bf4u: goto label_185bf4;
        case 0x185c04u: goto label_185c04;
        case 0x185c54u: goto label_185c54;
        case 0x185c84u: goto label_185c84;
        case 0x185ca4u: goto label_185ca4;
        default: break;
    }

    ctx->pc = 0x185bd0u;

    // 0x185bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185bd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185bdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185be0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185be4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185bec: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185BECu;
    SET_GPR_U32(ctx, 31, 0x185BF4u);
    ctx->pc = 0x185BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BECu;
    // 0x185bf0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185BECu, 0x185BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BF4u;
label_185bf4:
    // 0x185bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bf8: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x185bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x185bfc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185BFCu;
    SET_GPR_U32(ctx, 31, 0x185C04u);
    ctx->pc = 0x185C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BFCu;
    // 0x185c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185BFCu, 0x185C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C04u;
label_185c04:
    // 0x185c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185c08: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185C08u;
    {
        const bool branch_taken_0x185c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C08u;
        // 0x185c0c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c08) {
            ctx->pc = 0x185C44u;
            goto label_185c44;
        }
    }
    ctx->pc = 0x185C10u;
    // 0x185c10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x185C10u;
    {
        const bool branch_taken_0x185c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185c10) {
            ctx->pc = 0x185C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185C10u;
            // 0x185c14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185C28u;
            goto label_185c28;
        }
    }
    ctx->pc = 0x185C18u;
    // 0x185c18: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185C18u;
    {
        const bool branch_taken_0x185c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C18u;
        // 0x185c1c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c18) {
            ctx->pc = 0x185C38u;
            goto label_185c38;
        }
    }
    ctx->pc = 0x185C20u;
    // 0x185c20: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185C20u;
    {
        const bool branch_taken_0x185c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C20u;
        // 0x185c24: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c20) {
            ctx->pc = 0x185CACu;
            goto label_185cac;
        }
    }
    ctx->pc = 0x185C28u;
label_185c28:
    // 0x185c28: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185C28u;
    {
        const bool branch_taken_0x185c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C28u;
        // 0x185c2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c28) {
            ctx->pc = 0x185C5Cu;
            goto label_185c5c;
        }
    }
    ctx->pc = 0x185C30u;
    // 0x185c30: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185C30u;
    {
        const bool branch_taken_0x185c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C30u;
        // 0x185c34: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c30) {
            ctx->pc = 0x185CACu;
            goto label_185cac;
        }
    }
    ctx->pc = 0x185C38u;
label_185c38:
    // 0x185c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185C3Cu;
    {
        const bool branch_taken_0x185c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C3Cu;
        // 0x185c40: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c3c) {
            ctx->pc = 0x185C4Cu;
            goto label_185c4c;
        }
    }
    ctx->pc = 0x185C44u;
label_185c44:
    // 0x185c44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c48: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x185c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_185c4c:
    // 0x185c4c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185C4Cu;
    SET_GPR_U32(ctx, 31, 0x185C54u);
    ctx->pc = 0x185C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C4Cu;
    // 0x185c50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185C4Cu, 0x185C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C54u;
label_185c54:
    // 0x185c54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185C54u;
    {
        const bool branch_taken_0x185c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C54u;
        // 0x185c58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c54) {
            ctx->pc = 0x185CA8u;
            goto label_185ca8;
        }
    }
    ctx->pc = 0x185C5Cu;
label_185c5c:
    // 0x185c5c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x185c60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x185c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x185c64: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x185c68: 0x24060113  addiu       $a2, $zero, 0x113
    ctx->pc = 0x185c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x185c6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x185c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x185c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x185c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x185c78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c7c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x185C7Cu;
    SET_GPR_U32(ctx, 31, 0x185C84u);
    ctx->pc = 0x185C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C7Cu;
    // 0x185c80: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x185C7Cu, 0x185C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C84u;
label_185c84:
    // 0x185c84: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185c84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185c88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c8c: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x185c90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x185c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x185c94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c98: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185c9c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185C9Cu;
    SET_GPR_U32(ctx, 31, 0x185CA4u);
    ctx->pc = 0x185CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C9Cu;
    // 0x185ca0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185C9Cu, 0x185CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185CA4u;
label_185ca4:
    // 0x185ca4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x185ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185ca8:
    // 0x185ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185cac:
    // 0x185cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x185CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CB0u;
        // 0x185cb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185CB8u;
}
