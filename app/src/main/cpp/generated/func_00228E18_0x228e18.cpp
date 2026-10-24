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

// Function: func_00228E18
// Address: 0x228e18 - 0x229268
void func_00228E18_0x228e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00228E18_0x228e18");
#endif

    switch (ctx->pc) {
        case 0x228e54u: goto label_228e54;
        case 0x228e9cu: goto label_228e9c;
        case 0x228ebcu: goto label_228ebc;
        case 0x228ee0u: goto label_228ee0;
        case 0x228f18u: goto label_228f18;
        case 0x228f28u: goto label_228f28;
        case 0x228fccu: goto label_228fcc;
        case 0x228fecu: goto label_228fec;
        case 0x228ff4u: goto label_228ff4;
        case 0x229004u: goto label_229004;
        case 0x229018u: goto label_229018;
        case 0x229024u: goto label_229024;
        case 0x229074u: goto label_229074;
        case 0x229094u: goto label_229094;
        case 0x2290b8u: goto label_2290b8;
        case 0x2290f0u: goto label_2290f0;
        case 0x229100u: goto label_229100;
        case 0x2291a0u: goto label_2291a0;
        case 0x2291c0u: goto label_2291c0;
        case 0x2291c8u: goto label_2291c8;
        case 0x2291d8u: goto label_2291d8;
        case 0x2291ecu: goto label_2291ec;
        case 0x2291f8u: goto label_2291f8;
        case 0x22920cu: goto label_22920c;
        default: break;
    }

    ctx->pc = 0x228e18u;

    // 0x228e18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x228e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x228e1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x228e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228e20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x228e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x228e24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x228e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x228e28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x228e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x228e30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x228e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x228e34: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x228e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x228e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228e3c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x228e3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x228e40: 0xa202186a  sb          $v0, 0x186A($s0)
    ctx->pc = 0x228e40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x228e44: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x228e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x228e48: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x228e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x228e4c: 0xc098a84  jal         func_262A10
    ctx->pc = 0x228E4Cu;
    SET_GPR_U32(ctx, 31, 0x228E54u);
    ctx->pc = 0x228E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E4Cu;
    // 0x228e50: 0xae0316d4  sw          $v1, 0x16D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x228E4Cu, 0x228E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E54u;
label_228e54:
    // 0x228e54: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x228e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x228e58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x228e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228e5c: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x228E5Cu;
    {
        const bool branch_taken_0x228e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E5Cu;
        // 0x228e60: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e5c) {
            ctx->pc = 0x228FB8u;
            goto label_228fb8;
        }
    }
    ctx->pc = 0x228E64u;
    // 0x228e64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x228E64u;
    {
        const bool branch_taken_0x228e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E64u;
        // 0x228e68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e64) {
            ctx->pc = 0x228E7Cu;
            goto label_228e7c;
        }
    }
    ctx->pc = 0x228E6Cu;
    // 0x228e6c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x228E6Cu;
    {
        const bool branch_taken_0x228e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x228e6c) {
            ctx->pc = 0x228E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228E6Cu;
            // 0x228e70: 0xa2001864  sb          $zero, 0x1864($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228E94u;
            goto label_228e94;
        }
    }
    ctx->pc = 0x228E74u;
    // 0x228e74: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x228E74u;
    {
        const bool branch_taken_0x228e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E74u;
        // 0x228e78: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e74) {
            ctx->pc = 0x2291FCu;
            goto label_2291fc;
        }
    }
    ctx->pc = 0x228E7Cu;
label_228e7c:
    // 0x228e7c: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x228E7Cu;
    {
        const bool branch_taken_0x228e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x228E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E7Cu;
        // 0x228e80: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e7c) {
            ctx->pc = 0x229068u;
            goto label_229068;
        }
    }
    ctx->pc = 0x228E84u;
    // 0x228e84: 0x506200c2  beql        $v1, $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x228E84u;
    {
        const bool branch_taken_0x228e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228e84) {
            ctx->pc = 0x228E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228E84u;
            // 0x228e88: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229190u;
            goto label_229190;
        }
    }
    ctx->pc = 0x228E8Cu;
    // 0x228e8c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x228E8Cu;
    {
        const bool branch_taken_0x228e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228E8Cu;
        // 0x228e90: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e8c) {
            ctx->pc = 0x2291FCu;
            goto label_2291fc;
        }
    }
    ctx->pc = 0x228E94u;
label_228e94:
    // 0x228e94: 0xc09d91a  jal         func_276468
    ctx->pc = 0x228E94u;
    SET_GPR_U32(ctx, 31, 0x228E9Cu);
    ctx->pc = 0x228E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228E94u;
    // 0x228e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x228E94u, 0x228E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228E9Cu;
label_228e9c:
    // 0x228e9c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x228e9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x228ea0: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x228ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x228ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x228ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228eac: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x228eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x228eb0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x228eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x228eb4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x228EB4u;
    SET_GPR_U32(ctx, 31, 0x228EBCu);
    ctx->pc = 0x228EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228EB4u;
    // 0x228eb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x228EB4u, 0x228EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228EBCu;
label_228ebc:
    // 0x228ebc: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x228ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228ec0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x228ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x228ec4: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x228ec4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x228ec8: 0x8c65254c  lw          $a1, 0x254C($v1)
    ctx->pc = 0x228ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9548)));
    // 0x228ecc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x228eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ed0: 0x8c622550  lw          $v0, 0x2550($v1)
    ctx->pc = 0x228ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9552)));
    // 0x228ed4: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x228ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x228ed8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228ED8u;
    SET_GPR_U32(ctx, 31, 0x228EE0u);
    ctx->pc = 0x228EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228ED8u;
    // 0x228edc: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228ED8u, 0x228EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228EE0u;
label_228ee0:
    // 0x228ee0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x228ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x228ee4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x228EE4u;
    {
        const bool branch_taken_0x228ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x228ee4) {
            ctx->pc = 0x228EF8u;
            goto label_228ef8;
        }
    }
    ctx->pc = 0x228EECu;
    // 0x228eec: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x228eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x228ef0: 0x8c622554  lw          $v0, 0x2554($v1)
    ctx->pc = 0x228ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9556)));
    // 0x228ef4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x228ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_228ef8:
    // 0x228ef8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x228ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228efc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x228f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f04: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x228f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f0c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x228f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x228f10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x228F10u;
    SET_GPR_U32(ctx, 31, 0x228F18u);
    ctx->pc = 0x228F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F10u;
    // 0x228f14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x228F10u, 0x228F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F18u;
label_228f18:
    // 0x228f18: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x228f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x228f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x228f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228f20: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x228F20u;
    SET_GPR_U32(ctx, 31, 0x228F28u);
    ctx->pc = 0x228F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228F20u;
    // 0x228f24: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x228F20u, 0x228F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228F28u;
label_228f28:
    // 0x228f28: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x228f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x228f2c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x228f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x228f30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x228F30u;
    {
        const bool branch_taken_0x228f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F30u;
        // 0x228f34: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f30) {
            ctx->pc = 0x228F50u;
            goto label_228f50;
        }
    }
    ctx->pc = 0x228F38u;
    // 0x228f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x228f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x228f3c: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x228f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x228f40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x228f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228f44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x228f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x228f48: 0x800008  jr          $a0
    ctx->pc = 0x228F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228F50u: goto label_228f50;
            case 0x228F68u: goto label_228f68;
            case 0x228F84u: goto label_228f84;
            case 0x228FA8u: goto label_228fa8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228F48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x228F50u;
label_228f50:
    // 0x228f50: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228f58: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x228f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x228f5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228f60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x228F60u;
    {
        const bool branch_taken_0x228f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F60u;
        // 0x228f64: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f60) {
            ctx->pc = 0x228FA0u;
            goto label_228fa0;
        }
    }
    ctx->pc = 0x228F68u;
label_228f68:
    // 0x228f68: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228f70: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x228f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x228f74: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x228f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x228f78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228f7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x228F7Cu;
    {
        const bool branch_taken_0x228f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228F7Cu;
        // 0x228f80: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x228f7c) {
            ctx->pc = 0x228FA0u;
            goto label_228fa0;
        }
    }
    ctx->pc = 0x228F84u;
label_228f84:
    // 0x228f84: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x228f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228f88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228f8c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x228f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x228f90: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x228f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x228f94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228f98: 0x0  nop
    ctx->pc = 0x228f98u;
    // NOP
    // 0x228f9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_228fa0:
    // 0x228fa0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x228fa4: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x228fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_228fa8:
    // 0x228fa8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x228fa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x228fac: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x228facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x228fb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x228fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x228fb4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x228fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_228fb8:
    // 0x228fb8: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x228fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
    // 0x228fbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228FBCu;
    {
        const bool branch_taken_0x228fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228FBCu;
        // 0x228fc0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228fbc) {
            ctx->pc = 0x228FECu;
            goto label_228fec;
        }
    }
    ctx->pc = 0x228FC4u;
    // 0x228fc4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x228FC4u;
    SET_GPR_U32(ctx, 31, 0x228FCCu);
    ctx->pc = 0x228FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FC4u;
    // 0x228fc8: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x228FC4u, 0x228FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FCCu;
label_228fcc:
    // 0x228fcc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x228fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x228fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228fd4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x228fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x228fd8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x228fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x228fdc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x228fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x228fe0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x228fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x228fe4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x228FE4u;
    SET_GPR_U32(ctx, 31, 0x228FECu);
    ctx->pc = 0x228FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FE4u;
    // 0x228fe8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x228FE4u, 0x228FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FECu;
label_228fec:
    // 0x228fec: 0xc055f06  jal         func_157C18
    ctx->pc = 0x228FECu;
    SET_GPR_U32(ctx, 31, 0x228FF4u);
    ctx->pc = 0x228FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FECu;
    // 0x228ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x228FECu, 0x228FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228FF4u;
label_228ff4:
    // 0x228ff4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x228FF4u;
    {
        const bool branch_taken_0x228ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228ff4) {
            ctx->pc = 0x229004u;
            goto label_229004;
        }
    }
    ctx->pc = 0x228FFCu;
    // 0x228ffc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x228FFCu;
    SET_GPR_U32(ctx, 31, 0x229004u);
    ctx->pc = 0x229000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228FFCu;
    // 0x229000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x228FFCu, 0x229004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229004u;
label_229004:
    // 0x229004: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229008: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x22900c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229010: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x229010u;
    SET_GPR_U32(ctx, 31, 0x229018u);
    ctx->pc = 0x229014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229010u;
    // 0x229014: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x229010u, 0x229018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229018u;
label_229018:
    // 0x229018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x22901c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x22901Cu;
    SET_GPR_U32(ctx, 31, 0x229024u);
    ctx->pc = 0x229020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22901Cu;
    // 0x229020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x22901Cu, 0x229024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229024u;
label_229024:
    // 0x229024: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x229024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x229028: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x229028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22902c: 0x50400073  beql        $v0, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x22902Cu;
    {
        const bool branch_taken_0x22902c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22902c) {
            ctx->pc = 0x229030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22902Cu;
            // 0x229030: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2291FCu;
            goto label_2291fc;
        }
    }
    ctx->pc = 0x229034u;
    // 0x229034: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x229034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229038: 0x3c0140a9  lui         $at, 0x40A9
    ctx->pc = 0x229038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16553 << 16));
    // 0x22903c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x22903cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x229040: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x229040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229044: 0x0  nop
    ctx->pc = 0x229044u;
    // NOP
    // 0x229048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x229048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22904c: 0x0  nop
    ctx->pc = 0x22904cu;
    // NOP
    // 0x229050: 0x4502006a  bc1fl       . + 4 + (0x6A << 2)
    ctx->pc = 0x229050u;
    {
        const bool branch_taken_0x229050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229050) {
            ctx->pc = 0x229054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229050u;
            // 0x229054: 0x92021864  lbu         $v0, 0x1864($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2291FCu;
            goto label_2291fc;
        }
    }
    ctx->pc = 0x229058u;
    // 0x229058: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x229058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x22905c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229060: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x229060u;
    {
        const bool branch_taken_0x229060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229060u;
        // 0x229064: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229060) {
            ctx->pc = 0x2291F8u;
            goto label_2291f8;
        }
    }
    ctx->pc = 0x229068u;
label_229068:
    // 0x229068: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x229068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x22906c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x22906Cu;
    SET_GPR_U32(ctx, 31, 0x229074u);
    ctx->pc = 0x229070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22906Cu;
    // 0x229070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x22906Cu, 0x229074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229074u;
label_229074:
    // 0x229074: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x229074u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x229078: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x229078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x22907c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229080: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x229080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x229084: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x229084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x229088: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x229088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22908c: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x22908Cu;
    SET_GPR_U32(ctx, 31, 0x229094u);
    ctx->pc = 0x229090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22908Cu;
    // 0x229090: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x22908Cu, 0x229094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229094u;
label_229094:
    // 0x229094: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x229094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x229098: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x229098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x22909c: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x22909cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x2290a0: 0x8c652558  lw          $a1, 0x2558($v1)
    ctx->pc = 0x2290a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9560)));
    // 0x2290a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2290a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290a8: 0x8c62255c  lw          $v0, 0x255C($v1)
    ctx->pc = 0x2290a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9564)));
    // 0x2290ac: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2290acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2290b0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2290B0u;
    SET_GPR_U32(ctx, 31, 0x2290B8u);
    ctx->pc = 0x2290B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290B0u;
    // 0x2290b4: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2290B0u, 0x2290B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290B8u;
label_2290b8:
    // 0x2290b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2290b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2290bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2290BCu;
    {
        const bool branch_taken_0x2290bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2290bc) {
            ctx->pc = 0x2290D0u;
            goto label_2290d0;
        }
    }
    ctx->pc = 0x2290C4u;
    // 0x2290c4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2290c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2290c8: 0x8c622560  lw          $v0, 0x2560($v1)
    ctx->pc = 0x2290c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9568)));
    // 0x2290cc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2290ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2290d0:
    // 0x2290d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2290d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2290d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2290d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2290d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290dc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2290dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2290e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2290e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2290e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2290E8u;
    SET_GPR_U32(ctx, 31, 0x2290F0u);
    ctx->pc = 0x2290ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290E8u;
    // 0x2290ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2290E8u, 0x2290F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2290F0u;
label_2290f0:
    // 0x2290f0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2290f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2290f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2290f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2290f8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2290F8u;
    SET_GPR_U32(ctx, 31, 0x229100u);
    ctx->pc = 0x2290FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2290F8u;
    // 0x2290fc: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2290F8u, 0x229100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229100u;
label_229100:
    // 0x229100: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x229100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229104: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x229104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x229108: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229108u;
    {
        const bool branch_taken_0x229108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229108u;
        // 0x22910c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229108) {
            ctx->pc = 0x229128u;
            goto label_229128;
        }
    }
    ctx->pc = 0x229110u;
    // 0x229110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x229110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229114: 0x24428790  addiu       $v0, $v0, -0x7870
    ctx->pc = 0x229114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936464));
    // 0x229118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22911c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22911cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x229120: 0x800008  jr          $a0
    ctx->pc = 0x229120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229128u: goto label_229128;
            case 0x229140u: goto label_229140;
            case 0x22915Cu: goto label_22915c;
            case 0x229180u: goto label_229180;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229120u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229128u;
label_229128:
    // 0x229128: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x229128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22912c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22912cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229130: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x229130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x229134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x229134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229138: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x229138u;
    {
        const bool branch_taken_0x229138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229138u;
        // 0x22913c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229138) {
            ctx->pc = 0x229178u;
            goto label_229178;
        }
    }
    ctx->pc = 0x229140u;
label_229140:
    // 0x229140: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x229140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229148: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x229148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x22914c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22914cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x229150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x229150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229154: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x229154u;
    {
        const bool branch_taken_0x229154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229154u;
        // 0x229158: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229154) {
            ctx->pc = 0x229178u;
            goto label_229178;
        }
    }
    ctx->pc = 0x22915Cu;
label_22915c:
    // 0x22915c: 0xc60005f0  lwc1        $f0, 0x5F0($s0)
    ctx->pc = 0x22915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229164: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x229164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x229168: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x229168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x22916c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22916cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229170: 0x0  nop
    ctx->pc = 0x229170u;
    // NOP
    // 0x229174: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_229178:
    // 0x229178: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22917c: 0xe60105f0  swc1        $f1, 0x5F0($s0)
    ctx->pc = 0x22917cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1520), bits); }
label_229180:
    // 0x229180: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x229180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x229184: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229188: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x229188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x22918c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x22918cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_229190:
    // 0x229190: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x229190u;
    {
        const bool branch_taken_0x229190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229190u;
        // 0x229194: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229190) {
            ctx->pc = 0x2291C0u;
            goto label_2291c0;
        }
    }
    ctx->pc = 0x229198u;
    // 0x229198: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x229198u;
    SET_GPR_U32(ctx, 31, 0x2291A0u);
    ctx->pc = 0x22919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229198u;
    // 0x22919c: 0xae0205f0  sw          $v0, 0x5F0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x229198u, 0x2291A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291A0u;
label_2291a0:
    // 0x2291a0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2291a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2291a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2291a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291a8: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2291a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2291ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2291acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2291b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2291b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2291b4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2291b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2291b8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2291B8u;
    SET_GPR_U32(ctx, 31, 0x2291C0u);
    ctx->pc = 0x2291BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291B8u;
    // 0x2291bc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2291B8u, 0x2291C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291C0u;
label_2291c0:
    // 0x2291c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2291C0u;
    SET_GPR_U32(ctx, 31, 0x2291C8u);
    ctx->pc = 0x2291C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291C0u;
    // 0x2291c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2291C0u, 0x2291C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291C8u;
label_2291c8:
    // 0x2291c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2291C8u;
    {
        const bool branch_taken_0x2291c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2291c8) {
            ctx->pc = 0x2291D8u;
            goto label_2291d8;
        }
    }
    ctx->pc = 0x2291D0u;
    // 0x2291d0: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2291D0u;
    SET_GPR_U32(ctx, 31, 0x2291D8u);
    ctx->pc = 0x2291D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291D0u;
    // 0x2291d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2291D0u, 0x2291D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291D8u;
label_2291d8:
    // 0x2291d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2291d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2291dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2291dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2291e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2291e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2291e4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2291E4u;
    SET_GPR_U32(ctx, 31, 0x2291ECu);
    ctx->pc = 0x2291E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291E4u;
    // 0x2291e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2291E4u, 0x2291ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291ECu;
label_2291ec:
    // 0x2291ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2291ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2291f0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2291F0u;
    SET_GPR_U32(ctx, 31, 0x2291F8u);
    ctx->pc = 0x2291F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2291F0u;
    // 0x2291f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2291F0u, 0x2291F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2291F8u;
label_2291f8:
    // 0x2291f8: 0x92021864  lbu         $v0, 0x1864($s0)
    ctx->pc = 0x2291f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6244)));
label_2291fc:
    // 0x2291fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2291FCu;
    {
        const bool branch_taken_0x2291fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2291fc) {
            ctx->pc = 0x229200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2291FCu;
            // 0x229200: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229210u;
            goto label_229210;
        }
    }
    ctx->pc = 0x229204u;
    // 0x229204: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x229204u;
    SET_GPR_U32(ctx, 31, 0x22920Cu);
    ctx->pc = 0x229208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229204u;
    // 0x229208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x229204u, 0x22920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22920Cu;
label_22920c:
    // 0x22920c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x22920cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_229210:
    // 0x229210: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x229210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x229214: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x229214u;
    {
        const bool branch_taken_0x229214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229214u;
        // 0x229218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229214) {
            ctx->pc = 0x229220u;
            goto label_229220;
        }
    }
    ctx->pc = 0x22921Cu;
    // 0x22921c: 0xae0205fc  sw          $v0, 0x5FC($s0)
    ctx->pc = 0x22921cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 2));
label_229220:
    // 0x229220: 0x8e0205fc  lw          $v0, 0x5FC($s0)
    ctx->pc = 0x229220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1532)));
    // 0x229224: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x229224u;
    {
        const bool branch_taken_0x229224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229224) {
            ctx->pc = 0x229228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229224u;
            // 0x229228: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229244u;
            goto label_229244;
        }
    }
    ctx->pc = 0x22922Cu;
    // 0x22922c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x22922cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x229230: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x229230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x229234: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x229234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x229238: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x229238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x22923c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x22923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x229240: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x229240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_229244:
    // 0x229244: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x229244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x229248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22924c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22924cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229250: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x229250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229258: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x229258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22925c: 0x3e00008  jr          $ra
    ctx->pc = 0x22925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22925Cu;
        // 0x229260: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229264u;
    // 0x229264: 0x0  nop
    ctx->pc = 0x229264u;
    // NOP
    ctx->pc = 0x229268u;
}
