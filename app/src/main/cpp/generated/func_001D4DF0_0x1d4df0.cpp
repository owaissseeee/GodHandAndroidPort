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

// Function: func_001D4DF0
// Address: 0x1d4df0 - 0x1d4f48
void func_001D4DF0_0x1d4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4DF0_0x1d4df0");
#endif

    switch (ctx->pc) {
        case 0x1d4e30u: goto label_1d4e30;
        case 0x1d4e60u: goto label_1d4e60;
        case 0x1d4e74u: goto label_1d4e74;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ec4u: goto label_1d4ec4;
        case 0x1d4ed4u: goto label_1d4ed4;
        case 0x1d4eecu: goto label_1d4eec;
        case 0x1d4ef8u: goto label_1d4ef8;
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f24u: goto label_1d4f24;
        default: break;
    }

    ctx->pc = 0x1d4df0u;

    // 0x1d4df0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1d4df4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1d4df8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1d4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1d4dfc: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x1d4dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x1d4e00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d4e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4e08: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1d4e0c: 0x24c6b190  addiu       $a2, $a2, -0x4E70
    ctx->pc = 0x1d4e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947216));
    // 0x1d4e10: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1d4e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1d4e14: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1d4e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1d4e18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1d4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1d4e1c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d4e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1d4e20: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d4e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d4e24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d4e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d4e28: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x1D4E28u;
    SET_GPR_U32(ctx, 31, 0x1D4E30u);
    ctx->pc = 0x1D4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E28u;
    // 0x1d4e2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x1D4E28u, 0x1D4E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E30u;
label_1d4e30:
    // 0x1d4e30: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x1d4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x1d4e34: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x1d4e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x1d4e38: 0x24703f20  addiu       $s0, $v1, 0x3F20
    ctx->pc = 0x1d4e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
    // 0x1d4e3c: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x1d4e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x1d4e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d4e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e48: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d4e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d4e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d4e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d4e50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d4e54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e58: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x1D4E58u;
    SET_GPR_U32(ctx, 31, 0x1D4E60u);
    ctx->pc = 0x1D4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E58u;
    // 0x1d4e5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x1D4E58u, 0x1D4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E60u;
label_1d4e60:
    // 0x1d4e60: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D4E60u;
    {
        const bool branch_taken_0x1d4e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e60) {
            ctx->pc = 0x1D4E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4E60u;
            // 0x1d4e64: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4F28u;
            goto label_1d4f28;
        }
    }
    ctx->pc = 0x1D4E68u;
    // 0x1d4e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e6c: 0xc080458  jal         func_201160
    ctx->pc = 0x1D4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E74u);
    ctx->pc = 0x1D4E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E6Cu;
    // 0x1d4e70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x1D4E6Cu, 0x1D4E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E74u;
label_1d4e74:
    // 0x1d4e74: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1d4e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1d4e78: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1d4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1d4e7c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1d4e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4e80: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1d4e80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x1d4e84: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d4e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d4e88: 0x26750060  addiu       $s5, $s3, 0x60
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1d4e8c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d4e8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4e94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d4e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e98: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1D4E98u;
    SET_GPR_U32(ctx, 31, 0x1D4EA0u);
    ctx->pc = 0x1D4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4E98u;
    // 0x1d4e9c: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1D4E98u, 0x1D4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EA0u;
label_1d4ea0:
    // 0x1d4ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ea4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d4ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d4ea8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1D4EA8u;
    SET_GPR_U32(ctx, 31, 0x1D4EB0u);
    ctx->pc = 0x1D4EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EA8u;
    // 0x1d4eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1D4EA8u, 0x1D4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EB0u;
label_1d4eb0:
    // 0x1d4eb0: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1D4EB0u;
    SET_GPR_U32(ctx, 31, 0x1D4EB8u);
    ctx->pc = 0x1D4EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EB0u;
    // 0x1d4eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1D4EB0u, 0x1D4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EB8u;
label_1d4eb8:
    // 0x1d4eb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d4eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ebc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1D4EBCu;
    SET_GPR_U32(ctx, 31, 0x1D4EC4u);
    ctx->pc = 0x1D4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EBCu;
    // 0x1d4ec0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1D4EBCu, 0x1D4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EC4u;
label_1d4ec4:
    // 0x1d4ec4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d4ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d4ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ecc: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1D4ECCu;
    SET_GPR_U32(ctx, 31, 0x1D4ED4u);
    ctx->pc = 0x1D4ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4ECCu;
    // 0x1d4ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1D4ECCu, 0x1D4ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4ED4u;
label_1d4ed4:
    // 0x1d4ed4: 0x2a42002d  slti        $v0, $s2, 0x2D
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1d4ed8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D4ED8u;
    {
        const bool branch_taken_0x1d4ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4ED8u;
        // 0x1d4edc: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ed8) {
            ctx->pc = 0x1D4EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4eb8;
        }
    }
    ctx->pc = 0x1D4EE0u;
    // 0x1d4ee0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d4ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ee4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1D4EE4u;
    SET_GPR_U32(ctx, 31, 0x1D4EECu);
    ctx->pc = 0x1D4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EE4u;
    // 0x1d4ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1D4EE4u, 0x1D4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EECu;
label_1d4eec:
    // 0x1d4eec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4ef0: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D4EF0u;
    SET_GPR_U32(ctx, 31, 0x1D4EF8u);
    ctx->pc = 0x1D4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EF0u;
    // 0x1d4ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D4EF0u, 0x1D4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EF8u;
label_1d4ef8:
    // 0x1d4ef8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4efc: 0xc0755e0  jal         func_1D5780
    ctx->pc = 0x1D4EFCu;
    SET_GPR_U32(ctx, 31, 0x1D4F04u);
    ctx->pc = 0x1D4F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4EFCu;
    // 0x1d4f00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5780u, 0x1D4EFCu, 0x1D4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F04u;
label_1d4f04:
    // 0x1d4f04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f08: 0xc075a8c  jal         func_1D6A30
    ctx->pc = 0x1D4F08u;
    SET_GPR_U32(ctx, 31, 0x1D4F10u);
    ctx->pc = 0x1D4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F08u;
    // 0x1d4f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A30u, 0x1D4F08u, 0x1D4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F10u;
label_1d4f10:
    // 0x1d4f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d4f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4f14: 0xc075a94  jal         func_1D6A50
    ctx->pc = 0x1D4F14u;
    SET_GPR_U32(ctx, 31, 0x1D4F1Cu);
    ctx->pc = 0x1D4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F14u;
    // 0x1d4f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A50u, 0x1D4F14u, 0x1D4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F1Cu;
label_1d4f1c:
    // 0x1d4f1c: 0xc0754a8  jal         func_1D52A0
    ctx->pc = 0x1D4F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F24u);
    ctx->pc = 0x1D4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4F1Cu;
    // 0x1d4f20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52A0u, 0x1D4F1Cu, 0x1D4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F24u;
label_1d4f24:
    // 0x1d4f24: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1d4f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d4f28:
    // 0x1d4f28: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1d4f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d4f2c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1d4f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d4f30: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1d4f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d4f34: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d4f34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d4f38: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d4f38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d4f3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d4f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F40u;
        // 0x1d4f44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4F48u;
}
