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

// Function: cEm00_stepMotionThenTimedEnd
// Address: 0x25ab70 - 0x25adc0
void cEm00_stepMotionThenTimedEnd_0x25ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepMotionThenTimedEnd_0x25ab70");
#endif

    switch (ctx->pc) {
        case 0x25ac7cu: goto label_25ac7c;
        case 0x25acd4u: goto label_25acd4;
        case 0x25acf4u: goto label_25acf4;
        case 0x25ad1cu: goto label_25ad1c;
        case 0x25ad2cu: goto label_25ad2c;
        case 0x25ad38u: goto label_25ad38;
        case 0x25ad68u: goto label_25ad68;
        case 0x25ad90u: goto label_25ad90;
        case 0x25ada0u: goto label_25ada0;
        default: break;
    }

    ctx->pc = 0x25ab70u;

    // 0x25ab70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25ab74: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25ab74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x25ab78: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25ab78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x25ab7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ab7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x25ab84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ab88: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x25ab88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x25ab8c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x25ab8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x25ab90: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x25ab94: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25ab94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25ab98: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x25ab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x25ab9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB9Cu;
    {
        const bool branch_taken_0x25ab9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB9Cu;
        // 0x25aba0: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab9c) {
            ctx->pc = 0x25ABB8u;
            goto label_25abb8;
        }
    }
    ctx->pc = 0x25ABA4u;
    // 0x25aba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aba8: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x25ABA8u;
    {
        const bool branch_taken_0x25aba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25aba8) {
            ctx->pc = 0x25AD0Cu;
            goto label_25ad0c;
        }
    }
    ctx->pc = 0x25ABB0u;
    // 0x25abb0: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x25ABB0u;
    {
        const bool branch_taken_0x25abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABB0u;
        // 0x25abb4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abb0) {
            ctx->pc = 0x25ADA4u;
            goto label_25ada4;
        }
    }
    ctx->pc = 0x25ABB8u;
label_25abb8:
    // 0x25abb8: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x25abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x25abbc: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x25abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x25abc0: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x25abc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x25abc4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x25ABC4u;
    {
        const bool branch_taken_0x25abc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABC4u;
        // 0x25abc8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abc4) {
            ctx->pc = 0x25AC54u;
            goto label_25ac54;
        }
    }
    ctx->pc = 0x25ABCCu;
    // 0x25abcc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25abccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25abd0: 0x244235a0  addiu       $v0, $v0, 0x35A0
    ctx->pc = 0x25abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13728));
    // 0x25abd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25abd8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25abdc: 0x800008  jr          $a0
    ctx->pc = 0x25ABDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25ABE4u: goto label_25abe4;
            case 0x25ABF4u: goto label_25abf4;
            case 0x25AC04u: goto label_25ac04;
            case 0x25AC14u: goto label_25ac14;
            case 0x25AC24u: goto label_25ac24;
            case 0x25AC34u: goto label_25ac34;
            case 0x25AC44u: goto label_25ac44;
            case 0x25AC54u: goto label_25ac54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ABDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25ABE4u;
label_25abe4:
    // 0x25abe4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25abe8: 0x8c431124  lw          $v1, 0x1124($v0)
    ctx->pc = 0x25abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4388)));
    // 0x25abec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x25ABECu;
    {
        const bool branch_taken_0x25abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABECu;
        // 0x25abf0: 0x8c441128  lw          $a0, 0x1128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abec) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25ABF4u;
label_25abf4:
    // 0x25abf4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25abf8: 0x8c430894  lw          $v1, 0x894($v0)
    ctx->pc = 0x25abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x25abfc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25ABFCu;
    {
        const bool branch_taken_0x25abfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABFCu;
        // 0x25ac00: 0x8c440898  lw          $a0, 0x898($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abfc) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25AC04u;
label_25ac04:
    // 0x25ac04: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25ac08: 0x8c430894  lw          $v1, 0x894($v0)
    ctx->pc = 0x25ac08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2196)));
    // 0x25ac0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25AC0Cu;
    {
        const bool branch_taken_0x25ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC0Cu;
        // 0x25ac10: 0x8c440898  lw          $a0, 0x898($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac0c) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25AC14u;
label_25ac14:
    // 0x25ac14: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25ac18: 0x8c4315cc  lw          $v1, 0x15CC($v0)
    ctx->pc = 0x25ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5580)));
    // 0x25ac1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25AC1Cu;
    {
        const bool branch_taken_0x25ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC1Cu;
        // 0x25ac20: 0x8c4415d0  lw          $a0, 0x15D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac1c) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25AC24u;
label_25ac24:
    // 0x25ac24: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25ac28: 0x8c4315cc  lw          $v1, 0x15CC($v0)
    ctx->pc = 0x25ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5580)));
    // 0x25ac2c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25AC2Cu;
    {
        const bool branch_taken_0x25ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC2Cu;
        // 0x25ac30: 0x8c4415d0  lw          $a0, 0x15D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac2c) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25AC34u;
label_25ac34:
    // 0x25ac34: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25ac38: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x25ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x25ac3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25AC3Cu;
    {
        const bool branch_taken_0x25ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC3Cu;
        // 0x25ac40: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac3c) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25AC44u;
label_25ac44:
    // 0x25ac44: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25ac48: 0x8c432e34  lw          $v1, 0x2E34($v0)
    ctx->pc = 0x25ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11828)));
    // 0x25ac4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC4Cu;
    {
        const bool branch_taken_0x25ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC4Cu;
        // 0x25ac50: 0x8c442e38  lw          $a0, 0x2E38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac4c) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25AC54u;
label_25ac54:
    // 0x25ac54: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x25ac58: 0x8c43011c  lw          $v1, 0x11C($v0)
    ctx->pc = 0x25ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 284)));
    // 0x25ac5c: 0x8c440120  lw          $a0, 0x120($v0)
    ctx->pc = 0x25ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_25ac60:
    // 0x25ac60: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ac64: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x25ac64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25ac68: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x25ac6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac70: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x25ac74: 0xc04d484  jal         func_135210
    ctx->pc = 0x25AC74u;
    SET_GPR_U32(ctx, 31, 0x25AC7Cu);
    ctx->pc = 0x25AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AC74u;
    // 0x25ac78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x25AC74u, 0x25AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AC7Cu;
label_25ac7c:
    // 0x25ac7c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25ac80: 0x260306d0  addiu       $v1, $s0, 0x6D0
    ctx->pc = 0x25ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x25ac84: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x25ac84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25ac88: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25ac88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ac8c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25ac8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ac90: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25ac90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25ac94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x25ac94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25ac98: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x25ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ac9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25ac9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25aca0: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x25aca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25aca4: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x25aca8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x25ACA8u;
    {
        const bool branch_taken_0x25aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x25ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ACA8u;
        // 0x25acac: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aca8) {
            ctx->pc = 0x25ACC4u;
            goto label_25acc4;
        }
    }
    ctx->pc = 0x25ACB0u;
    // 0x25acb0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x25acb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25acb4: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x25acb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x25acb8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x25acb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25acbc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x25acbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25acc0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25acc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_25acc4:
    // 0x25acc4: 0xc60006e0  lwc1        $f0, 0x6E0($s0)
    ctx->pc = 0x25acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25acc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25acc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25accc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25ACCCu;
    SET_GPR_U32(ctx, 31, 0x25ACD4u);
    ctx->pc = 0x25ACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACCCu;
    // 0x25acd0: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25ACCCu, 0x25ACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACD4u;
label_25acd4:
    // 0x25acd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25acd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25acd8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x25acd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25acdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25acdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ace0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25ace0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ace4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ace4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ace8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25ace8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25acec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25ACECu;
    SET_GPR_U32(ctx, 31, 0x25ACF4u);
    ctx->pc = 0x25ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ACECu;
    // 0x25acf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25ACECu, 0x25ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ACF4u;
label_25acf4:
    // 0x25acf4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25acf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x25acf8: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x25acf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x25acfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25acfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ad00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ad04: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x25ad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x25ad08: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25ad08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25ad0c:
    // 0x25ad0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25ad10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ad10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25ad14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x25AD14u;
    SET_GPR_U32(ctx, 31, 0x25AD1Cu);
    ctx->pc = 0x25AD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD14u;
    // 0x25ad18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25AD14u, 0x25AD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD1Cu;
label_25ad1c:
    // 0x25ad1c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x25ad1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x25ad20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad24: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x25AD24u;
    SET_GPR_U32(ctx, 31, 0x25AD2Cu);
    ctx->pc = 0x25AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD24u;
    // 0x25ad28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25AD24u, 0x25AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD2Cu;
label_25ad2c:
    // 0x25ad2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ad2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25ad30: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x25AD30u;
    SET_GPR_U32(ctx, 31, 0x25AD38u);
    ctx->pc = 0x25AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD30u;
    // 0x25ad34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25AD30u, 0x25AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD38u;
label_25ad38:
    // 0x25ad38: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x25ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ad3c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x25ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ad40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25ad40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25ad44: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x25ad44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ad48: 0x0  nop
    ctx->pc = 0x25ad48u;
    // NOP
    // 0x25ad4c: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x25AD4Cu;
    {
        const bool branch_taken_0x25ad4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD4Cu;
        // 0x25ad50: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad4c) {
            ctx->pc = 0x25ADA0u;
            goto label_25ada0;
        }
    }
    ctx->pc = 0x25AD54u;
    // 0x25ad54: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x25ad58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25ad58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ad5c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25ad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x25ad60: 0xc04d484  jal         func_135210
    ctx->pc = 0x25AD60u;
    SET_GPR_U32(ctx, 31, 0x25AD68u);
    ctx->pc = 0x25AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD60u;
    // 0x25ad64: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135210u, 0x25AD60u, 0x25AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD68u;
label_25ad68:
    // 0x25ad68: 0x920217bb  lbu         $v0, 0x17BB($s0)
    ctx->pc = 0x25ad68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6075)));
    // 0x25ad6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25AD6Cu;
    {
        const bool branch_taken_0x25ad6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad6c) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD74u;
    // 0x25ad74: 0xc6001740  lwc1        $f0, 0x1740($s0)
    ctx->pc = 0x25ad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ad78: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x25ad78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ad7c: 0x0  nop
    ctx->pc = 0x25ad7cu;
    // NOP
    // 0x25ad80: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25AD80u;
    {
        const bool branch_taken_0x25ad80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD80u;
        // 0x25ad84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad80) {
            ctx->pc = 0x25AD98u;
            goto label_25ad98;
        }
    }
    ctx->pc = 0x25AD88u;
    // 0x25ad88: 0xc09d08e  jal         func_274238
    ctx->pc = 0x25AD88u;
    SET_GPR_U32(ctx, 31, 0x25AD90u);
    ctx->pc = 0x25AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD88u;
    // 0x25ad8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x25AD88u, 0x25AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AD90u;
label_25ad90:
    // 0x25ad90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25AD90u;
    {
        const bool branch_taken_0x25ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AD90u;
        // 0x25ad94: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad90) {
            ctx->pc = 0x25ADA4u;
            goto label_25ada4;
        }
    }
    ctx->pc = 0x25AD98u;
label_25ad98:
    // 0x25ad98: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x25AD98u;
    SET_GPR_U32(ctx, 31, 0x25ADA0u);
    ctx->pc = 0x25AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AD98u;
    // 0x25ad9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25AD98u, 0x25ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADA0u;
label_25ada0:
    // 0x25ada0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25ada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25ada4:
    // 0x25ada4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25ada4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ada8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25ada8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25adac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25adacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25adb0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x25adb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25adb4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25adb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25adb8: 0x3e00008  jr          $ra
    ctx->pc = 0x25ADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ADB8u;
        // 0x25adbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25ADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25ADC0u;
}
