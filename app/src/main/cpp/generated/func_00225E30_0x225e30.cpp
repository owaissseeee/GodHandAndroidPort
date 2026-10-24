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

// Function: func_00225E30
// Address: 0x225e30 - 0x2261c8
void func_00225E30_0x225e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00225E30_0x225e30");
#endif

    switch (ctx->pc) {
        case 0x225e6cu: goto label_225e6c;
        case 0x225e98u: goto label_225e98;
        case 0x225ec0u: goto label_225ec0;
        case 0x225ec8u: goto label_225ec8;
        case 0x225edcu: goto label_225edc;
        case 0x225f00u: goto label_225f00;
        case 0x225f3cu: goto label_225f3c;
        case 0x225f80u: goto label_225f80;
        case 0x225f90u: goto label_225f90;
        case 0x226034u: goto label_226034;
        case 0x226054u: goto label_226054;
        case 0x22605cu: goto label_22605c;
        case 0x22606cu: goto label_22606c;
        case 0x226080u: goto label_226080;
        case 0x22608cu: goto label_22608c;
        case 0x2260a4u: goto label_2260a4;
        case 0x2260d8u: goto label_2260d8;
        case 0x2260ecu: goto label_2260ec;
        default: break;
    }

    ctx->pc = 0x225e30u;

    // 0x225e30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x225e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x225e34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x225e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225e38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x225e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x225e3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x225e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x225e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x225e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x225e48: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x225e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x225e4c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x225e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x225e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225e54: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x225e54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x225e58: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x225e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x225e5c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x225e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x225e60: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x225e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x225e64: 0xc098a84  jal         func_262A10
    ctx->pc = 0x225E64u;
    SET_GPR_U32(ctx, 31, 0x225E6Cu);
    ctx->pc = 0x225E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E64u;
    // 0x225e68: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x225E64u, 0x225E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E6Cu;
label_225e6c:
    // 0x225e6c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x225e6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x225e70: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x225E70u;
    {
        const bool branch_taken_0x225e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E70u;
        // 0x225e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e70) {
            ctx->pc = 0x225E88u;
            goto label_225e88;
        }
    }
    ctx->pc = 0x225E78u;
    // 0x225e78: 0x5062006a  beql        $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x225E78u;
    {
        const bool branch_taken_0x225e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x225e78) {
            ctx->pc = 0x225E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225E78u;
            // 0x225e7c: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226024u;
            goto label_226024;
        }
    }
    ctx->pc = 0x225E80u;
    // 0x225e80: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x225E80u;
    {
        const bool branch_taken_0x225e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225E80u;
        // 0x225e84: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225e80) {
            ctx->pc = 0x226090u;
            goto label_226090;
        }
    }
    ctx->pc = 0x225E88u;
label_225e88:
    // 0x225e88: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x225e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x225e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e90: 0xc09d91a  jal         func_276468
    ctx->pc = 0x225E90u;
    SET_GPR_U32(ctx, 31, 0x225E98u);
    ctx->pc = 0x225E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225E90u;
    // 0x225e94: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x225E90u, 0x225E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E98u;
label_225e98:
    // 0x225e98: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x225e98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225e9c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x225e9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x225ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225ea4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x225ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x225ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x225ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225eac: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x225eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x225eb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x225eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225eb4: 0x24090111  addiu       $t1, $zero, 0x111
    ctx->pc = 0x225eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x225eb8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x225EB8u;
    SET_GPR_U32(ctx, 31, 0x225EC0u);
    ctx->pc = 0x225EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EB8u;
    // 0x225ebc: 0x26109b70  addiu       $s0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x225EB8u, 0x225EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC0u;
label_225ec0:
    // 0x225ec0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x225EC0u;
    SET_GPR_U32(ctx, 31, 0x225EC8u);
    ctx->pc = 0x225EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EC0u;
    // 0x225ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x225EC0u, 0x225EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC8u;
label_225ec8:
    // 0x225ec8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x225ec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x225ecc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x225ECCu;
    {
        const bool branch_taken_0x225ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ecc) {
            ctx->pc = 0x225ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225ECCu;
            // 0x225ed0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225F24u;
            goto label_225f24;
        }
    }
    ctx->pc = 0x225ED4u;
    // 0x225ed4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x225ED4u;
    SET_GPR_U32(ctx, 31, 0x225EDCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x225ED4u, 0x225EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EDCu;
label_225edc:
    // 0x225edc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x225edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x225ee0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x225EE0u;
    {
        const bool branch_taken_0x225ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225EE0u;
        // 0x225ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ee0) {
            ctx->pc = 0x225F20u;
            goto label_225f20;
        }
    }
    ctx->pc = 0x225EE8u;
    // 0x225ee8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x225ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x225eec: 0x8c431df0  lw          $v1, 0x1DF0($v0)
    ctx->pc = 0x225eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7664)));
    // 0x225ef0: 0x8c451df4  lw          $a1, 0x1DF4($v0)
    ctx->pc = 0x225ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7668)));
    // 0x225ef4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x225ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225ef8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x225EF8u;
    SET_GPR_U32(ctx, 31, 0x225F00u);
    ctx->pc = 0x225EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225EF8u;
    // 0x225efc: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x225EF8u, 0x225F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F00u;
label_225f00:
    // 0x225f00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x225f04: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x225F04u;
    {
        const bool branch_taken_0x225f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x225f04) {
            ctx->pc = 0x225F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225F04u;
            // 0x225f08: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225F58u;
            goto label_225f58;
        }
    }
    ctx->pc = 0x225F0Cu;
    // 0x225f0c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x225f10: 0x8c621df8  lw          $v0, 0x1DF8($v1)
    ctx->pc = 0x225f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7672)));
    // 0x225f14: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x225f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225f18: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x225F18u;
    {
        const bool branch_taken_0x225f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F18u;
        // 0x225f1c: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f18) {
            ctx->pc = 0x225F58u;
            goto label_225f58;
        }
    }
    ctx->pc = 0x225F20u;
label_225f20:
    // 0x225f20: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_225f24:
    // 0x225f24: 0x26849b70  addiu       $a0, $s4, -0x6490
    ctx->pc = 0x225f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x225f28: 0x8c431de4  lw          $v1, 0x1DE4($v0)
    ctx->pc = 0x225f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7652)));
    // 0x225f2c: 0x8c451de8  lw          $a1, 0x1DE8($v0)
    ctx->pc = 0x225f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7656)));
    // 0x225f30: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x225f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225f34: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x225F34u;
    SET_GPR_U32(ctx, 31, 0x225F3Cu);
    ctx->pc = 0x225F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F34u;
    // 0x225f38: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x225F34u, 0x225F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F3Cu;
label_225f3c:
    // 0x225f3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x225f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x225f40: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x225F40u;
    {
        const bool branch_taken_0x225f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x225F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F40u;
        // 0x225f44: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f40) {
            ctx->pc = 0x225F58u;
            goto label_225f58;
        }
    }
    ctx->pc = 0x225F48u;
    // 0x225f48: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x225f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x225f4c: 0x8c621dec  lw          $v0, 0x1DEC($v1)
    ctx->pc = 0x225f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7660)));
    // 0x225f50: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x225f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225f54: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_225f58:
    // 0x225f58: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x225f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x225f5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x225f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x225f60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f64: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x225f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x225f68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x225f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f6c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x225f6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f74: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x225f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x225f78: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x225F78u;
    SET_GPR_U32(ctx, 31, 0x225F80u);
    ctx->pc = 0x225F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F78u;
    // 0x225f7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x225F78u, 0x225F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F80u;
label_225f80:
    // 0x225f80: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x225f84: 0x26849b70  addiu       $a0, $s4, -0x6490
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    // 0x225f88: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x225F88u;
    SET_GPR_U32(ctx, 31, 0x225F90u);
    ctx->pc = 0x225F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225F88u;
    // 0x225f8c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x225F88u, 0x225F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F90u;
label_225f90:
    // 0x225f90: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x225f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x225f94: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x225f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x225f98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225F98u;
    {
        const bool branch_taken_0x225f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F98u;
        // 0x225f9c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f98) {
            ctx->pc = 0x225FB8u;
            goto label_225fb8;
        }
    }
    ctx->pc = 0x225FA0u;
    // 0x225fa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x225fa4: 0x24428550  addiu       $v0, $v0, -0x7AB0
    ctx->pc = 0x225fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935888));
    // 0x225fa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x225fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225fac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x225facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x225fb0: 0x800008  jr          $a0
    ctx->pc = 0x225FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225FB8u: goto label_225fb8;
            case 0x225FD0u: goto label_225fd0;
            case 0x225FECu: goto label_225fec;
            case 0x226010u: goto label_226010;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225FB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x225FB8u;
label_225fb8:
    // 0x225fb8: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x225fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225fbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225fc0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x225fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x225fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225fc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x225FC8u;
    {
        const bool branch_taken_0x225fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FC8u;
        // 0x225fcc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fc8) {
            ctx->pc = 0x226008u;
            goto label_226008;
        }
    }
    ctx->pc = 0x225FD0u;
label_225fd0:
    // 0x225fd0: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x225fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225fd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225fd8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x225fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x225fdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x225fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x225fe0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x225fe4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225FE4u;
    {
        const bool branch_taken_0x225fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FE4u;
        // 0x225fe8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fe4) {
            ctx->pc = 0x226008u;
            goto label_226008;
        }
    }
    ctx->pc = 0x225FECu;
label_225fec:
    // 0x225fec: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x225fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ff0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x225ff4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x225ff8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x225ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x225ffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x225ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226000: 0x0  nop
    ctx->pc = 0x226000u;
    // NOP
    // 0x226004: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_226008:
    // 0x226008: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x226008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22600c: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x22600cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_226010:
    // 0x226010: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x226010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x226014: 0xae2005f8  sw          $zero, 0x5F8($s1)
    ctx->pc = 0x226014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
    // 0x226018: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22601c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x22601cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x226020: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x226020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_226024:
    // 0x226024: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x226024u;
    {
        const bool branch_taken_0x226024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226024u;
        // 0x226028: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226024) {
            ctx->pc = 0x226054u;
            goto label_226054;
        }
    }
    ctx->pc = 0x22602Cu;
    // 0x22602c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x22602Cu;
    SET_GPR_U32(ctx, 31, 0x226034u);
    ctx->pc = 0x226030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22602Cu;
    // 0x226030: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x22602Cu, 0x226034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226034u;
label_226034:
    // 0x226034: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x226034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22603c: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x22603cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x226040: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x226040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x226044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x226044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226048: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x226048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x22604c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x22604Cu;
    SET_GPR_U32(ctx, 31, 0x226054u);
    ctx->pc = 0x226050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22604Cu;
    // 0x226050: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x22604Cu, 0x226054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226054u;
label_226054:
    // 0x226054: 0xc055f06  jal         func_157C18
    ctx->pc = 0x226054u;
    SET_GPR_U32(ctx, 31, 0x22605Cu);
    ctx->pc = 0x226058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226054u;
    // 0x226058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x226054u, 0x22605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22605Cu;
label_22605c:
    // 0x22605c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22605Cu;
    {
        const bool branch_taken_0x22605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22605c) {
            ctx->pc = 0x22606Cu;
            goto label_22606c;
        }
    }
    ctx->pc = 0x226064u;
    // 0x226064: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x226064u;
    SET_GPR_U32(ctx, 31, 0x22606Cu);
    ctx->pc = 0x226068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226064u;
    // 0x226068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x226064u, 0x22606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22606Cu;
label_22606c:
    // 0x22606c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x226070: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x226070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x226074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226078: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x226078u;
    SET_GPR_U32(ctx, 31, 0x226080u);
    ctx->pc = 0x22607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226078u;
    // 0x22607c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x226078u, 0x226080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226080u;
label_226080:
    // 0x226080: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x226080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x226084: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x226084u;
    SET_GPR_U32(ctx, 31, 0x22608Cu);
    ctx->pc = 0x226088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226084u;
    // 0x226088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x226084u, 0x22608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22608Cu;
label_22608c:
    // 0x22608c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x22608cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_226090:
    // 0x226090: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226094: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x226094u;
    {
        const bool branch_taken_0x226094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226094) {
            ctx->pc = 0x226098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226094u;
            // 0x226098: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2260A8u;
            goto label_2260a8;
        }
    }
    ctx->pc = 0x22609Cu;
    // 0x22609c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22609Cu;
    SET_GPR_U32(ctx, 31, 0x2260A4u);
    ctx->pc = 0x2260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22609Cu;
    // 0x2260a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22609Cu, 0x2260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260A4u;
label_2260a4:
    // 0x2260a4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x2260a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_2260a8:
    // 0x2260a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2260a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2260ac: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x2260ACu;
    {
        const bool branch_taken_0x2260ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2260ac) {
            ctx->pc = 0x2260B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2260ACu;
            // 0x2260b0: 0xae2005f8  sw          $zero, 0x5F8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226174u;
            goto label_226174;
        }
    }
    ctx->pc = 0x2260B4u;
    // 0x2260b4: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x2260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x2260b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2260B8u;
    {
        const bool branch_taken_0x2260b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260B8u;
        // 0x2260bc: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260b8) {
            ctx->pc = 0x2260DCu;
            goto label_2260dc;
        }
    }
    ctx->pc = 0x2260C0u;
    // 0x2260c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2260c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2260c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260c8: 0xae2205f8  sw          $v0, 0x5F8($s1)
    ctx->pc = 0x2260c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
    // 0x2260cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2260ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2260d0: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x2260D0u;
    SET_GPR_U32(ctx, 31, 0x2260D8u);
    ctx->pc = 0x2260D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260D0u;
    // 0x2260d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x2260D0u, 0x2260D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260D8u;
label_2260d8:
    // 0x2260d8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2260dc:
    // 0x2260dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2260dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2260e0: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x2260e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x2260e4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2260E4u;
    SET_GPR_U32(ctx, 31, 0x2260ECu);
    ctx->pc = 0x2260E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2260E4u;
    // 0x2260e8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2260E4u, 0x2260ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260ECu;
label_2260ec:
    // 0x2260ec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2260f0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2260f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2260f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2260F4u;
    {
        const bool branch_taken_0x2260f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2260F4u;
        // 0x2260f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260f4) {
            ctx->pc = 0x226114u;
            goto label_226114;
        }
    }
    ctx->pc = 0x2260FCu;
    // 0x2260fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x226100: 0x24428570  addiu       $v0, $v0, -0x7A90
    ctx->pc = 0x226100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935920));
    // 0x226104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x226104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226108: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22610c: 0x800008  jr          $a0
    ctx->pc = 0x22610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x226114u: goto label_226114;
            case 0x22612Cu: goto label_22612c;
            case 0x226148u: goto label_226148;
            case 0x226174u: goto label_226174;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22610Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x226114u;
label_226114:
    // 0x226114: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226118: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22611c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x226120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226124: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x226124u;
    {
        const bool branch_taken_0x226124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226124u;
        // 0x226128: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226124) {
            ctx->pc = 0x226164u;
            goto label_226164;
        }
    }
    ctx->pc = 0x22612Cu;
label_22612c:
    // 0x22612c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x22612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x226130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226134: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x226138: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x226138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22613c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22613cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226140: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x226140u;
    {
        const bool branch_taken_0x226140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226140u;
        // 0x226144: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226140) {
            ctx->pc = 0x226164u;
            goto label_226164;
        }
    }
    ctx->pc = 0x226148u;
label_226148:
    // 0x226148: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x226148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22614c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22614cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x226150: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x226150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x226154: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x226154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x226158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x226158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22615c: 0x0  nop
    ctx->pc = 0x22615cu;
    // NOP
    // 0x226160: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x226160u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_226164:
    // 0x226164: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x226164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x226168: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x226168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
    // 0x22616c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22616Cu;
    {
        const bool branch_taken_0x22616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22616Cu;
        // 0x226170: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22616c) {
            ctx->pc = 0x226178u;
            goto label_226178;
        }
    }
    ctx->pc = 0x226174u;
label_226174:
    // 0x226174: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x226174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_226178:
    // 0x226178: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x226178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22617c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22617Cu;
    {
        const bool branch_taken_0x22617c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22617Cu;
        // 0x226180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22617c) {
            ctx->pc = 0x226188u;
            goto label_226188;
        }
    }
    ctx->pc = 0x226184u;
    // 0x226184: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x226184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_226188:
    // 0x226188: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x226188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x22618c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22618Cu;
    {
        const bool branch_taken_0x22618c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22618Cu;
        // 0x226190: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22618c) {
            ctx->pc = 0x2261A8u;
            goto label_2261a8;
        }
    }
    ctx->pc = 0x226194u;
    // 0x226194: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x226194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x226198: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x226198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x22619c: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x22619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2261a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2261a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2261a4: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2261a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2261a8:
    // 0x2261a8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2261a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2261ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2261acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2261b0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2261b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2261b4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2261b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2261b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2261b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2261bc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2261bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2261c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2261C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2261C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261C0u;
        // 0x2261c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2261C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2261C8u;
}
