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

// Function: func_0038F9B8
// Address: 0x38f9b8 - 0x38fbf0
void func_0038F9B8_0x38f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038F9B8_0x38f9b8");
#endif

    switch (ctx->pc) {
        case 0x38fa24u: goto label_38fa24;
        case 0x38fa50u: goto label_38fa50;
        case 0x38faa0u: goto label_38faa0;
        case 0x38fac0u: goto label_38fac0;
        case 0x38fb40u: goto label_38fb40;
        case 0x38fba8u: goto label_38fba8;
        default: break;
    }

    ctx->pc = 0x38f9b8u;

    // 0x38f9b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38f9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38f9bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38f9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38f9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38f9c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x38f9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38f9cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38f9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38f9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38f9d4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38f9d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38f9dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38f9e0: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x38f9e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38f9e4: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x38f9e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x38f9e8: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x38f9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x38f9ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38F9ECu;
    {
        const bool branch_taken_0x38f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9ECu;
        // 0x38f9f0: 0x80c82d  daddu       $t9, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9ec) {
            ctx->pc = 0x38FA08u;
            goto label_38fa08;
        }
    }
    ctx->pc = 0x38F9F4u;
    // 0x38f9f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38f9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x38f9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f9fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38f9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa00: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x38fa00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38fa04: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x38fa04u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_38fa08:
    // 0x38fa08: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x38fa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38fa0c: 0x253a021  addu        $s4, $s2, $s3
    ctx->pc = 0x38fa0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x38fa10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38fa14: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x38fa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa18: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x38fa18u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x38fa1c: 0xc0e3d6e  jal         func_38F5B8
    ctx->pc = 0x38FA1Cu;
    SET_GPR_U32(ctx, 31, 0x38FA24u);
    ctx->pc = 0x38FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FA1Cu;
    // 0x38fa20: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F5B8u, 0x38FA1Cu, 0x38FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA24u;
label_38fa24:
    // 0x38fa24: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x38fa24u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fa28: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x38fa28u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x38fa2c: 0x27380014  addiu       $t8, $t9, 0x14
    ctx->pc = 0x38fa2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 25), 20));
    // 0x38fa30: 0x3152021  addu        $a0, $t8, $s5
    ctx->pc = 0x38fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
    // 0x38fa34: 0x304102b  sltu        $v0, $t8, $a0
    ctx->pc = 0x38fa34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x38fa38: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38FA38u;
    {
        const bool branch_taken_0x38fa38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA38u;
        // 0x38fa3c: 0x300482d  daddu       $t1, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa38) {
            ctx->pc = 0x38FA74u;
            goto label_38fa74;
        }
    }
    ctx->pc = 0x38FA40u;
    // 0x38fa40: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x38fa40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x38fa44: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x38fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38fa48: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x38fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x38fa4c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x38fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_38fa50:
    // 0x38fa50: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x38fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x38fa54: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x38fa54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x38fa58: 0x124102b  sltu        $v0, $t1, $a0
    ctx->pc = 0x38fa58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x38fa5c: 0x0  nop
    ctx->pc = 0x38fa5cu;
    // NOP
    // 0x38fa60: 0x0  nop
    ctx->pc = 0x38fa60u;
    // NOP
    // 0x38fa64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38FA64u;
    {
        const bool branch_taken_0x38fa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fa64) {
            ctx->pc = 0x38FA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fa50;
        }
    }
    ctx->pc = 0x38FA6Cu;
    // 0x38fa6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38FA6Cu;
    {
        const bool branch_taken_0x38fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA6Cu;
        // 0x38fa70: 0xc0602d  daddu       $t4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa6c) {
            ctx->pc = 0x38FA88u;
            goto label_38fa88;
        }
    }
    ctx->pc = 0x38FA74u;
label_38fa74:
    // 0x38fa74: 0x260e0014  addiu       $t6, $s0, 0x14
    ctx->pc = 0x38fa74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x38fa78: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x38fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x38fa7c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x38fa7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x38fa80: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x38fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x38fa84: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x38fa84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38fa88:
    // 0x38fa88: 0x1c58821  addu        $s1, $t6, $a1
    ctx->pc = 0x38fa88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x38fa8c: 0x1839021  addu        $s2, $t4, $v1
    ctx->pc = 0x38fa8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x38fa90: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x38fa90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x38fa94: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x38FA94u;
    {
        const bool branch_taken_0x38fa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA94u;
        // 0x38fa98: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa94) {
            ctx->pc = 0x38FBA4u;
            goto label_38fba4;
        }
    }
    ctx->pc = 0x38FA9Cu;
    // 0x38fa9c: 0x0  nop
    ctx->pc = 0x38fa9cu;
    // NOP
label_38faa0:
    // 0x38faa0: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x38faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x38faa4: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x38faa4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38faa8: 0x1140001c  beqz        $t2, . + 4 + (0x1C << 2)
    ctx->pc = 0x38FAA8u;
    {
        const bool branch_taken_0x38faa8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FAA8u;
        // 0x38faac: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38faa8) {
            ctx->pc = 0x38FB1Cu;
            goto label_38fb1c;
        }
    }
    ctx->pc = 0x38FAB0u;
    // 0x38fab0: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x38fab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fab4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38fab4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fab8: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x38fab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x38fabc: 0x250f0004  addiu       $t7, $t0, 0x4
    ctx->pc = 0x38fabcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_38fac0:
    // 0x38fac0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x38fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38fac4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x38fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38fac8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x38fac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x38facc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x38faccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x38fad0: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x38fad0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x38fad4: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x38fad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38fad8: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x38fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x38fadc: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x38fadcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38fae0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x38fae0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x38fae4: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x38fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x38fae8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38faec: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x38faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x38faf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38faf4: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x38faf4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x38faf8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x38faf8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x38fafc: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x38fafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x38fb00: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x38fb00u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x38fb04: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x38fb04u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x38fb08: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x38FB08u;
    {
        const bool branch_taken_0x38fb08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB08u;
        // 0x38fb0c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb08) {
            ctx->pc = 0x38FAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fac0;
        }
    }
    ctx->pc = 0x38FB10u;
    // 0x38fb10: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x38fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x38fb14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FB14u;
    {
        const bool branch_taken_0x38fb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB14u;
        // 0x38fb18: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb14) {
            ctx->pc = 0x38FB24u;
            goto label_38fb24;
        }
    }
    ctx->pc = 0x38FB1Cu;
label_38fb1c:
    // 0x38fb1c: 0x25900004  addiu       $s0, $t4, 0x4
    ctx->pc = 0x38fb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x38fb20: 0x25af0004  addiu       $t7, $t5, 0x4
    ctx->pc = 0x38fb20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_38fb24:
    // 0x38fb24: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x38fb24u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x38fb28: 0x1140001a  beqz        $t2, . + 4 + (0x1A << 2)
    ctx->pc = 0x38FB28u;
    {
        const bool branch_taken_0x38fb28 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB28u;
        // 0x38fb2c: 0x1a0402d  daddu       $t0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb28) {
            ctx->pc = 0x38FB94u;
            goto label_38fb94;
        }
    }
    ctx->pc = 0x38FB30u;
    // 0x38fb30: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x38fb30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fb34: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x38fb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38fb38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38fb38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fb3c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x38fb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38fb40:
    // 0x38fb40: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x38fb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x38fb44: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x38fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x38fb48: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x38fb48u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x38fb4c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x38fb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x38fb50: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x38fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x38fb54: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x38fb54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x38fb58: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x38fb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38fb5c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x38fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x38fb60: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x38fb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38fb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38fb68: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x38fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x38fb6c: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x38fb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x38fb70: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x38fb70u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x38fb74: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x38fb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x38fb78: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38fb7c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x38fb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x38fb80: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38fb84: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x38fb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x38fb88: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x38FB88u;
    {
        const bool branch_taken_0x38fb88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB88u;
        // 0x38fb8c: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb88) {
            ctx->pc = 0x38FB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fb40;
        }
    }
    ctx->pc = 0x38FB90u;
    // 0x38fb90: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x38fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
label_38fb94:
    // 0x38fb94: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x38fb94u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fb98: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x38fb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x38fb9c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x38FB9Cu;
    {
        const bool branch_taken_0x38fb9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FB9Cu;
        // 0x38fba0: 0x1e0682d  daddu       $t5, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fb9c) {
            ctx->pc = 0x38FAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38faa0;
        }
    }
    ctx->pc = 0x38FBA4u;
label_38fba4:
    // 0x38fba4: 0x3154021  addu        $t0, $t8, $s5
    ctx->pc = 0x38fba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 21)));
label_38fba8:
    // 0x38fba8: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FBA8u;
    {
        const bool branch_taken_0x38fba8 = (GPR_S64(ctx, 20) <= 0);
        if (branch_taken_0x38fba8) {
            ctx->pc = 0x38FBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FBA8u;
            // 0x38fbac: 0xaf340010  sw          $s4, 0x10($t9) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FBC4u;
            goto label_38fbc4;
        }
    }
    ctx->pc = 0x38FBB0u;
    // 0x38fbb0: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x38fbb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x38fbb4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x38fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x38fbb8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x38FBB8u;
    {
        const bool branch_taken_0x38fbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fbb8) {
            ctx->pc = 0x38FBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FBB8u;
            // 0x38fbbc: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38fba8;
        }
    }
    ctx->pc = 0x38FBC0u;
    // 0x38fbc0: 0xaf340010  sw          $s4, 0x10($t9)
    ctx->pc = 0x38fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 20));
label_38fbc4:
    // 0x38fbc4: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x38fbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fbc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38fbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38fbcc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38fbccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38fbd0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38fbd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38fbd4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38fbd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38fbd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38fbd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38fbdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38fbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38fbe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38fbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38fbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x38FBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FBE4u;
        // 0x38fbe8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FBECu;
    // 0x38fbec: 0x0  nop
    ctx->pc = 0x38fbecu;
    // NOP
    ctx->pc = 0x38fbf0u;
}
