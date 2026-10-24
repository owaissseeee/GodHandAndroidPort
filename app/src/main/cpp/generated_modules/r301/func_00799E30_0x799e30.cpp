#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_00799E30
// Address: 0x799e30 - 0x79a098
void func_00799E30_0x799e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799E30_0x799e30");
#endif

    switch (ctx->pc) {
        case 0x799e80u: goto label_799e80;
        case 0x799e8cu: goto label_799e8c;
        case 0x799eacu: goto label_799eac;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ed8u: goto label_799ed8;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f00u: goto label_799f00;
        case 0x799f10u: goto label_799f10;
        case 0x799f20u: goto label_799f20;
        case 0x799f28u: goto label_799f28;
        case 0x799f38u: goto label_799f38;
        case 0x799f50u: goto label_799f50;
        case 0x799f58u: goto label_799f58;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f78u: goto label_799f78;
        case 0x799f94u: goto label_799f94;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fe4u: goto label_799fe4;
        case 0x79a050u: goto label_79a050;
        case 0x79a064u: goto label_79a064;
        case 0x79a070u: goto label_79a070;
        default: break;
    }

    ctx->pc = 0x799e30u;

    // 0x799e30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x799e34: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799e38: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x799e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x799e3c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x799e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x799e40: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799e44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x799e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x799e48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x799e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x799e50: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x799e50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799e54: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x799e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x799e58: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799e5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x799e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x799e60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799e64: 0x8c43e010  lw          $v1, -0x1FF0($v0)
    ctx->pc = 0x799e64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x79E010u));
    // 0x799e68: 0x9c64009c  lwu         $a0, 0x9C($v1)
    ctx->pc = 0x799e68u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x799e6c: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x799e6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x799e70: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x799e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x799e74: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x3c15005f  lui         $s5, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799EA4u;
            goto label_799ea4;
        }
    }
    ctx->pc = 0x799E7Cu;
    // 0x799e7c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799e80:
    // 0x799e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e84: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799E84u;
    SET_GPR_U32(ctx, 31, 0x799E8Cu);
    ctx->pc = 0x799E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E84u;
    // 0x799e88: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799E84u, 0x799E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E8Cu;
label_799e8c:
    // 0x799e8c: 0x8e43e010  lw          $v1, -0x1FF0($s2)
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
    // 0x799e90: 0x9c62009c  lwu         $v0, 0x9C($v1)
    ctx->pc = 0x799e90u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x799e94: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x799e94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x799e98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799e9c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799E9Cu;
    {
        const bool branch_taken_0x799e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E9Cu;
        // 0x799ea0: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e9c) {
            ctx->pc = 0x799E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e80;
        }
    }
    ctx->pc = 0x799EA4u;
label_799ea4:
    // 0x799ea4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799EA4u;
    SET_GPR_U32(ctx, 31, 0x799EACu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799EA4u, 0x799EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EACu;
label_799eac:
    // 0x799eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eb0: 0xc04ab18  jal         func_12AC60
    ctx->pc = 0x799EB0u;
    SET_GPR_U32(ctx, 31, 0x799EB8u);
    ctx->pc = 0x799EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB0u;
    // 0x799eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC60u, 0x799EB0u, 0x799EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0xc04ae7c  jal         func_12B9F0
    ctx->pc = 0x799EB8u;
    SET_GPR_U32(ctx, 31, 0x799EC0u);
    ctx->pc = 0x799EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB8u;
    // 0x799ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B9F0u, 0x799EB8u, 0x799EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC0u;
label_799ec0:
    // 0x799ec0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x799ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799ec4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799ec8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799ecc: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799ed0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799ED0u;
    SET_GPR_U32(ctx, 31, 0x799ED8u);
    ctx->pc = 0x799ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED0u;
    // 0x799ed4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799ED0u, 0x799ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ED8u;
label_799ed8:
    // 0x799ed8: 0x8e43e010  lw          $v1, -0x1FF0($s2)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
    // 0x799edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee0: 0x8c620460  lw          $v0, 0x460($v1)
    ctx->pc = 0x799ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1120)));
    // 0x799ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799ee8: 0xac620460  sw          $v0, 0x460($v1)
    ctx->pc = 0x799ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1120), GPR_U32(ctx, 2));
    // 0x799eec: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ef8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799EF8u;
    SET_GPR_U32(ctx, 31, 0x799F00u);
    ctx->pc = 0x799EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EF8u;
    // 0x799efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799EF8u, 0x799F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F00u;
label_799f00:
    // 0x799f00: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799f04: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f08: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799F08u;
    SET_GPR_U32(ctx, 31, 0x799F10u);
    ctx->pc = 0x799F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F08u;
    // 0x799f0c: 0x24a5dd28  addiu       $a1, $a1, -0x22D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799F08u, 0x799F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F10u;
label_799f10:
    // 0x799f10: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799f14: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x799f18: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F18u;
    SET_GPR_U32(ctx, 31, 0x799F20u);
    ctx->pc = 0x799F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F18u;
    // 0x799f1c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F18u, 0x799F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F20u;
label_799f20:
    // 0x799f20: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799F20u;
    SET_GPR_U32(ctx, 31, 0x799F28u);
    ctx->pc = 0x799F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F20u;
    // 0x799f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F20u, 0x799F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F28u;
label_799f28:
    // 0x799f28: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799f2c: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x799f30: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F30u;
    SET_GPR_U32(ctx, 31, 0x799F38u);
    ctx->pc = 0x799F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F30u;
    // 0x799f34: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F30u, 0x799F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F38u;
label_799f38:
    // 0x799f38: 0x8e43e010  lw          $v1, -0x1FF0($s2)
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
    // 0x799f3c: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x799f40: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x799f44: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x799f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x799f48: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799F48u;
    SET_GPR_U32(ctx, 31, 0x799F50u);
    ctx->pc = 0x799F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F48u;
    // 0x799f4c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799F48u, 0x799F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799F50u;
    SET_GPR_U32(ctx, 31, 0x799F58u);
    ctx->pc = 0x799F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F50u;
    // 0x799f54: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799F50u, 0x799F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799f5c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799f60: 0x24a5a098  addiu       $a1, $a1, -0x5F68
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942872));
    // 0x799f64: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799F64u;
    SET_GPR_U32(ctx, 31, 0x799F6Cu);
    ctx->pc = 0x799F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F64u;
    // 0x799f68: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799F64u, 0x799F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F6Cu;
label_799f6c:
    // 0x799f6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x799F6Cu;
    {
        const bool branch_taken_0x799f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0x8e43e010  lw          $v1, -0x1FF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f6c) {
            ctx->pc = 0x799FA8u;
            goto label_799fa8;
        }
    }
    ctx->pc = 0x799F74u;
    // 0x799f74: 0x0  nop
    ctx->pc = 0x799f74u;
    // NOP
label_799f78:
    // 0x799f78: 0x9c62009c  lwu         $v0, 0x9C($v1)
    ctx->pc = 0x799f78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x799f7c: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x799f7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x799f80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F84u;
    {
        const bool branch_taken_0x799f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f84) {
            ctx->pc = 0x799F98u;
            goto label_799f98;
        }
    }
    ctx->pc = 0x799F8Cu;
    // 0x799f8c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799F8Cu;
    SET_GPR_U32(ctx, 31, 0x799F94u);
    ctx->pc = 0x799F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F8Cu;
    // 0x799f90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799F8Cu, 0x799F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F94u;
label_799f94:
    // 0x799f94: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
label_799f98:
    // 0x799f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f9c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799F9Cu;
    SET_GPR_U32(ctx, 31, 0x799FA4u);
    ctx->pc = 0x799FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F9Cu;
    // 0x799fa0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799F9Cu, 0x799FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA4u;
label_799fa4:
    // 0x799fa4: 0x8e43e010  lw          $v1, -0x1FF0($s2)
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
label_799fa8:
    // 0x799fa8: 0x9c62009c  lwu         $v0, 0x9C($v1)
    ctx->pc = 0x799fa8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x799fac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799fb0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x799FB0u;
    {
        const bool branch_taken_0x799fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FB0u;
        // 0x799fb4: 0x8e43e010  lw          $v1, -0x1FF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fb0) {
            ctx->pc = 0x799F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f78;
        }
    }
    ctx->pc = 0x799FB8u;
    // 0x799fb8: 0x8ea38658  lw          $v1, -0x79A8($s5)
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
    // 0x799fbc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x799fc0: 0x26a48658  addiu       $a0, $s5, -0x79A8
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936152));
    // 0x799fc4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799fc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799fcc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799fd0: 0xc0afbfa  jal         func_2BEFE8
    ctx->pc = 0x799FD0u;
    SET_GPR_U32(ctx, 31, 0x799FD8u);
    ctx->pc = 0x799FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD0u;
    // 0x799fd4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEFE8u, 0x799FD0u, 0x799FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799fdc: 0xc0a4230  jal         func_2908C0
    ctx->pc = 0x799FDCu;
    SET_GPR_U32(ctx, 31, 0x799FE4u);
    ctx->pc = 0x799FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FDCu;
    // 0x799fe0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2908C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2908C0u, 0x799FDCu, 0x799FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE4u;
label_799fe4:
    // 0x799fe4: 0x3c01c0d6  lui         $at, 0xC0D6
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49366 << 16));
    // 0x799fe8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x799fec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799ff0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799ff4: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x799ff8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a000: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x79a000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a004: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x79a004u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79a008: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x79a008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a00c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a010: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a018: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79a01c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a020: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x79a020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x79a024: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x79a024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x79a028: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x79a028u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x79a02c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x79a030: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a038: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x79a038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x79a03c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x79a03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x79a040: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x79a040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x79a044: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a044u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x79a048: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0xe683000c  swc1        $f3, 0xC($s4) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a054: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79a054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79a058: 0x24a59cf0  addiu       $a1, $a1, -0x6310
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941936));
    // 0x79a05c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79A05Cu;
    SET_GPR_U32(ctx, 31, 0x79A064u);
    ctx->pc = 0x79A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A05Cu;
    // 0x79a060: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79A05Cu, 0x79A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A064u;
label_79a064:
    // 0x79a064: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79a068: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A068u;
    SET_GPR_U32(ctx, 31, 0x79A070u);
    ctx->pc = 0x79A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A068u;
    // 0x79a06c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A068u, 0x79A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A070u;
label_79a070:
    // 0x79a070: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79a070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a074: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79a074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a078: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79a078u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a07c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79a07cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a080: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79a080u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a084: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79a084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a088: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79a088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a08c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A08Cu;
        // 0x79a090: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A094u;
    // 0x79a094: 0x0  nop
    ctx->pc = 0x79a094u;
    // NOP
    ctx->pc = 0x79a098u;
}
} // namespace gh_r301
