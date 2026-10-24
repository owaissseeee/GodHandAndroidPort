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

// Function: func_00111DD8
// Address: 0x111dd8 - 0x1120a8
void func_00111DD8_0x111dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00111DD8_0x111dd8");
#endif

    switch (ctx->pc) {
        case 0x111e1cu: goto label_111e1c;
        case 0x111e24u: goto label_111e24;
        case 0x111e30u: goto label_111e30;
        case 0x111e60u: goto label_111e60;
        case 0x111e78u: goto label_111e78;
        case 0x111e88u: goto label_111e88;
        case 0x111e90u: goto label_111e90;
        case 0x111e98u: goto label_111e98;
        case 0x111ec4u: goto label_111ec4;
        case 0x111ed8u: goto label_111ed8;
        case 0x111ef4u: goto label_111ef4;
        case 0x111efcu: goto label_111efc;
        case 0x111f0cu: goto label_111f0c;
        case 0x111f1cu: goto label_111f1c;
        case 0x111f40u: goto label_111f40;
        case 0x111f4cu: goto label_111f4c;
        case 0x111f74u: goto label_111f74;
        case 0x111facu: goto label_111fac;
        case 0x111fc4u: goto label_111fc4;
        case 0x111fd4u: goto label_111fd4;
        case 0x111ff8u: goto label_111ff8;
        case 0x112018u: goto label_112018;
        case 0x112048u: goto label_112048;
        case 0x112058u: goto label_112058;
        case 0x112068u: goto label_112068;
        default: break;
    }

    ctx->pc = 0x111dd8u;

    // 0x111dd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111ddc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x111ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x111de0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x111de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x111de4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x111de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x111de8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x111dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111df0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x111df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x111df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111df8: 0x245264f0  addiu       $s2, $v0, 0x64F0
    ctx->pc = 0x111df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x111dfc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x111dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x111e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x111e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x111e08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x111e08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111e10: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x111e10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x111e14: 0xc0a480c  jal         func_292030
    ctx->pc = 0x111E14u;
    SET_GPR_U32(ctx, 31, 0x111E1Cu);
    ctx->pc = 0x111E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E14u;
    // 0x111e18: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x111E14u, 0x111E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E1Cu;
label_111e1c:
    // 0x111e1c: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x111E1Cu;
    SET_GPR_U32(ctx, 31, 0x111E24u);
    ctx->pc = 0x111E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E1Cu;
    // 0x111e20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x111E1Cu, 0x111E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E24u;
label_111e24:
    // 0x111e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x111e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e28: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x111E28u;
    SET_GPR_U32(ctx, 31, 0x111E30u);
    ctx->pc = 0x111E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E28u;
    // 0x111e2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x111E28u, 0x111E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E30u;
label_111e30:
    // 0x111e30: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x111e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x111e34: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x111e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x111e38: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x111e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x111e3c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x111E3Cu;
    {
        const bool branch_taken_0x111e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E3Cu;
        // 0x111e40: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e3c) {
            ctx->pc = 0x111E58u;
            goto label_111e58;
        }
    }
    ctx->pc = 0x111E44u;
    // 0x111e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111e48: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x111E48u;
    {
        const bool branch_taken_0x111e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x111e48) {
            ctx->pc = 0x111EECu;
            goto label_111eec;
        }
    }
    ctx->pc = 0x111E50u;
    // 0x111e50: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x111E50u;
    {
        const bool branch_taken_0x111e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E50u;
        // 0x111e54: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e50) {
            ctx->pc = 0x111F50u;
            goto label_111f50;
        }
    }
    ctx->pc = 0x111E58u;
label_111e58:
    // 0x111e58: 0xc049396  jal         func_124E58
    ctx->pc = 0x111E58u;
    SET_GPR_U32(ctx, 31, 0x111E60u);
    ctx->pc = 0x111E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E58u;
    // 0x111e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x111E58u, 0x111E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E60u;
label_111e60:
    // 0x111e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111e64: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x111e64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x111e68: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x111e68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x111e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e70: 0xc04a55e  jal         func_129578
    ctx->pc = 0x111E70u;
    SET_GPR_U32(ctx, 31, 0x111E78u);
    ctx->pc = 0x111E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E70u;
    // 0x111e74: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x111E70u, 0x111E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E78u;
label_111e78:
    // 0x111e78: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x111e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x111e7c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x111e80: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x111E80u;
    SET_GPR_U32(ctx, 31, 0x111E88u);
    ctx->pc = 0x111E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E80u;
    // 0x111e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x111E80u, 0x111E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E88u;
label_111e88:
    // 0x111e88: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x111E88u;
    SET_GPR_U32(ctx, 31, 0x111E90u);
    ctx->pc = 0x111E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E88u;
    // 0x111e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x111E88u, 0x111E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E90u;
label_111e90:
    // 0x111e90: 0xc07eb00  jal         func_1FAC00
    ctx->pc = 0x111E90u;
    SET_GPR_U32(ctx, 31, 0x111E98u);
    ctx->pc = 0x111E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E90u;
    // 0x111e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x111E90u, 0x111E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E98u;
label_111e98:
    // 0x111e98: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x111e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x111e9c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x111e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111ea0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x111ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111ea4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x111ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea8: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x111ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x111eac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x111eacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eb0: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x111eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x111eb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eb8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x111eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x111ebc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x111EBCu;
    SET_GPR_U32(ctx, 31, 0x111EC4u);
    ctx->pc = 0x111EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EBCu;
    // 0x111ec0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x111EBCu, 0x111EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EC4u;
label_111ec4:
    // 0x111ec4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x111ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x111ec8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111ecc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111ed0: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111ED0u;
    SET_GPR_U32(ctx, 31, 0x111ED8u);
    ctx->pc = 0x111ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111ED0u;
    // 0x111ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111ED0u, 0x111ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111ED8u;
label_111ed8:
    // 0x111ed8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x111ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x111edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x111edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111ee0: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x111ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x111ee4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x111ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x111ee8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x111ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_111eec:
    // 0x111eec: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x111EECu;
    SET_GPR_U32(ctx, 31, 0x111EF4u);
    ctx->pc = 0x111EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EECu;
    // 0x111ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x111EECu, 0x111EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EF4u;
label_111ef4:
    // 0x111ef4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x111EF4u;
    SET_GPR_U32(ctx, 31, 0x111EFCu);
    ctx->pc = 0x111EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EF4u;
    // 0x111ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x111EF4u, 0x111EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EFCu;
label_111efc:
    // 0x111efc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111EFCu;
    {
        const bool branch_taken_0x111efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111efc) {
            ctx->pc = 0x111F2Cu;
            goto label_111f2c;
        }
    }
    ctx->pc = 0x111F04u;
    // 0x111f04: 0xc04a58c  jal         func_129630
    ctx->pc = 0x111F04u;
    SET_GPR_U32(ctx, 31, 0x111F0Cu);
    ctx->pc = 0x111F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F04u;
    // 0x111f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x111F04u, 0x111F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F0Cu;
label_111f0c:
    // 0x111f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x111f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111f14: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x111F14u;
    SET_GPR_U32(ctx, 31, 0x111F1Cu);
    ctx->pc = 0x111F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F14u;
    // 0x111f18: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x111F14u, 0x111F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F1Cu;
label_111f1c:
    // 0x111f1c: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x111f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x111f20: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x111f20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x111f24: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x111f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x111f28: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x111f28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_111f2c:
    // 0x111f2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x111f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x111f30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x111f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x111f34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x111F38u;
    SET_GPR_U32(ctx, 31, 0x111F40u);
    ctx->pc = 0x111F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F38u;
    // 0x111f3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x111F38u, 0x111F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F40u;
label_111f40:
    // 0x111f40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x111f40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x111f44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x111F44u;
    SET_GPR_U32(ctx, 31, 0x111F4Cu);
    ctx->pc = 0x111F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F44u;
    // 0x111f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x111F44u, 0x111F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F4Cu;
label_111f4c:
    // 0x111f4c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111f4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111f50:
    // 0x111f50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x111f54: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x111F54u;
    {
        const bool branch_taken_0x111f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111f54) {
            ctx->pc = 0x111F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111F54u;
            // 0x111f58: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111FD8u;
            goto label_111fd8;
        }
    }
    ctx->pc = 0x111F5Cu;
    // 0x111f5c: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x111f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x111f60: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x111F60u;
    {
        const bool branch_taken_0x111f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F60u;
        // 0x111f64: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f60) {
            ctx->pc = 0x111FD4u;
            goto label_111fd4;
        }
    }
    ctx->pc = 0x111F68u;
    // 0x111f68: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x111f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x111f6c: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x111F6Cu;
    SET_GPR_U32(ctx, 31, 0x111F74u);
    ctx->pc = 0x111F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111F6Cu;
    // 0x111f70: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x111F6Cu, 0x111F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111F74u;
label_111f74:
    // 0x111f74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111f74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111f78: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x111f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x111f7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x111F7Cu;
    {
        const bool branch_taken_0x111f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111F7Cu;
        // 0x111f80: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111f7c) {
            ctx->pc = 0x111F9Cu;
            goto label_111f9c;
        }
    }
    ctx->pc = 0x111F84u;
    // 0x111f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111f88: 0x2442c1b0  addiu       $v0, $v0, -0x3E50
    ctx->pc = 0x111f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951344));
    // 0x111f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111f90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111f94: 0x800008  jr          $a0
    ctx->pc = 0x111F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x111F9Cu: goto label_111f9c;
            case 0x111FB4u: goto label_111fb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x111F9Cu;
label_111f9c:
    // 0x111f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fa0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x111fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x111fa4: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x111FA4u;
    SET_GPR_U32(ctx, 31, 0x111FACu);
    ctx->pc = 0x111FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FA4u;
    // 0x111fa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x111FA4u, 0x111FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FACu;
label_111fac:
    // 0x111fac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x111FACu;
    {
        const bool branch_taken_0x111fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FACu;
        // 0x111fb0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fac) {
            ctx->pc = 0x111FD8u;
            goto label_111fd8;
        }
    }
    ctx->pc = 0x111FB4u;
label_111fb4:
    // 0x111fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fb8: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x111fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x111fbc: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x111FBCu;
    SET_GPR_U32(ctx, 31, 0x111FC4u);
    ctx->pc = 0x111FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FBCu;
    // 0x111fc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x111FBCu, 0x111FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FC4u;
label_111fc4:
    // 0x111fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fc8: 0x2405002b  addiu       $a1, $zero, 0x2B
    ctx->pc = 0x111fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x111fcc: 0xc04af00  jal         func_12BC00
    ctx->pc = 0x111FCCu;
    SET_GPR_U32(ctx, 31, 0x111FD4u);
    ctx->pc = 0x111FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FCCu;
    // 0x111fd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC00u, 0x111FCCu, 0x111FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FD4u;
label_111fd4:
    // 0x111fd4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111fd8:
    // 0x111fd8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x111fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x111fdc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111FDCu;
    {
        const bool branch_taken_0x111fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111fdc) {
            ctx->pc = 0x111FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111FDCu;
            // 0x111fe0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111FFCu;
            goto label_111ffc;
        }
    }
    ctx->pc = 0x111FE4u;
    // 0x111fe4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x111fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x111fe8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x111fe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x111fec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x111fecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x111ff0: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x111FF0u;
    SET_GPR_U32(ctx, 31, 0x111FF8u);
    ctx->pc = 0x111FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111FF0u;
    // 0x111ff4: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x111FF0u, 0x111FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FF8u;
label_111ff8:
    // 0x111ff8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x111ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_111ffc:
    // 0x111ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x111ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x112000: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x112000u;
    {
        const bool branch_taken_0x112000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112000u;
        // 0x112004: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112000) {
            ctx->pc = 0x11203Cu;
            goto label_11203c;
        }
    }
    ctx->pc = 0x112008u;
    // 0x112008: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x112008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x11200c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11200cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x112010: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x112010u;
    SET_GPR_U32(ctx, 31, 0x112018u);
    ctx->pc = 0x112014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112010u;
    // 0x112014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x112010u, 0x112018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112018u;
label_112018:
    // 0x112018: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x112018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x11201c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x11201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x112020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x112020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x112024: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x112024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x112028: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x112028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x11202c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x112030: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x112030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x112034: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x112034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x112038: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x112038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
label_11203c:
    // 0x11203c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11203cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112040: 0xc048e4e  jal         func_123938
    ctx->pc = 0x112040u;
    SET_GPR_U32(ctx, 31, 0x112048u);
    ctx->pc = 0x112044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112040u;
    // 0x112044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x112040u, 0x112048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112048u;
label_112048:
    // 0x112048: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x112048u;
    {
        const bool branch_taken_0x112048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112048) {
            ctx->pc = 0x11204Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112048u;
            // 0x11204c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112070u;
            goto label_112070;
        }
    }
    ctx->pc = 0x112050u;
    // 0x112050: 0xc04a58c  jal         func_129630
    ctx->pc = 0x112050u;
    SET_GPR_U32(ctx, 31, 0x112058u);
    ctx->pc = 0x112054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112050u;
    // 0x112054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x112050u, 0x112058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112058u;
label_112058:
    // 0x112058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11205c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112060: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x112060u;
    SET_GPR_U32(ctx, 31, 0x112068u);
    ctx->pc = 0x112064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112060u;
    // 0x112064: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x112060u, 0x112068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112068u;
label_112068:
    // 0x112068: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x112068u;
    {
        const bool branch_taken_0x112068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112068u;
        // 0x11206c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112068) {
            ctx->pc = 0x11208Cu;
            goto label_11208c;
        }
    }
    ctx->pc = 0x112070u;
label_112070:
    // 0x112070: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x112070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x112074: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x112074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x112078: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11207c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x11207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x112080: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x112080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
    // 0x112084: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x112084u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x112088: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x112088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11208c:
    // 0x11208c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11208cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112094: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x112094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11209c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1120a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1120A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1120A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1120A0u;
        // 0x1120a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1120A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1120A8u;
}
