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

// Function: func_00378D18
// Address: 0x378d18 - 0x379190
void func_00378D18_0x378d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378D18_0x378d18");
#endif

    switch (ctx->pc) {
        case 0x378d6cu: goto label_378d6c;
        case 0x378d84u: goto label_378d84;
        case 0x378d98u: goto label_378d98;
        case 0x378dbcu: goto label_378dbc;
        case 0x378de4u: goto label_378de4;
        case 0x378e00u: goto label_378e00;
        case 0x378eacu: goto label_378eac;
        case 0x378ed4u: goto label_378ed4;
        case 0x378f00u: goto label_378f00;
        case 0x378f1cu: goto label_378f1c;
        case 0x378f40u: goto label_378f40;
        case 0x378f64u: goto label_378f64;
        case 0x378f84u: goto label_378f84;
        case 0x378fa8u: goto label_378fa8;
        case 0x378fc8u: goto label_378fc8;
        case 0x378fe8u: goto label_378fe8;
        case 0x379004u: goto label_379004;
        case 0x379020u: goto label_379020;
        case 0x37903cu: goto label_37903c;
        case 0x379058u: goto label_379058;
        case 0x37907cu: goto label_37907c;
        case 0x37909cu: goto label_37909c;
        case 0x3790bcu: goto label_3790bc;
        case 0x3790ecu: goto label_3790ec;
        case 0x379108u: goto label_379108;
        case 0x379124u: goto label_379124;
        case 0x379140u: goto label_379140;
        case 0x37915cu: goto label_37915c;
        case 0x379164u: goto label_379164;
        case 0x37916cu: goto label_37916c;
        default: break;
    }

    ctx->pc = 0x378d18u;

    // 0x378d18: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x378d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x378d1c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x378d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x378d20: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x378d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x378d24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x378d24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378d28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x378d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x378d2c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x378d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x378d30: 0x26b3009c  addiu       $s3, $s5, 0x9C
    ctx->pc = 0x378d30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
    // 0x378d34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x378d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x378d38: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x378d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x378d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378d40: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x378d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x378d44: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x378d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x378d48: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x378D48u;
    {
        const bool branch_taken_0x378d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D48u;
        // 0x378d4c: 0x2412001b  addiu       $s2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d48) {
            ctx->pc = 0x378DA0u;
            goto label_378da0;
        }
    }
    ctx->pc = 0x378D50u;
    // 0x378d50: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x378d50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x378d54: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x378d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x378d58: 0x2610b350  addiu       $s0, $s0, -0x4CB0
    ctx->pc = 0x378d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947664));
    // 0x378d5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378d60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x378d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378d64: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378D64u;
    SET_GPR_U32(ctx, 31, 0x378D6Cu);
    ctx->pc = 0x378D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D64u;
    // 0x378d68: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378D64u, 0x378D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D6Cu;
label_378d6c:
    // 0x378d6c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378d70: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x378d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x378d74: 0x24e7b360  addiu       $a3, $a3, -0x4CA0
    ctx->pc = 0x378d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947680));
    // 0x378d78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378d7c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378D7Cu;
    SET_GPR_U32(ctx, 31, 0x378D84u);
    ctx->pc = 0x378D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D7Cu;
    // 0x378d80: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378D7Cu, 0x378D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D84u;
label_378d84:
    // 0x378d84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x378d84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378d88: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x378d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x378d8c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x378d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x378d90: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378D90u;
    SET_GPR_U32(ctx, 31, 0x378D98u);
    ctx->pc = 0x378D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378D90u;
    // 0x378d94: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378D90u, 0x378D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378D98u;
label_378d98:
    // 0x378d98: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x378D98u;
    {
        const bool branch_taken_0x378d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378D98u;
        // 0x378d9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378d98) {
            ctx->pc = 0x379170u;
            goto label_379170;
        }
    }
    ctx->pc = 0x378DA0u;
label_378da0:
    // 0x378da0: 0x86680004  lh          $t0, 0x4($s3)
    ctx->pc = 0x378da0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x378da4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378da4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378da8: 0x24e7b370  addiu       $a3, $a3, -0x4C90
    ctx->pc = 0x378da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947696));
    // 0x378dac: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x378dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x378db0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x378db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x378db4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378DB4u;
    SET_GPR_U32(ctx, 31, 0x378DBCu);
    ctx->pc = 0x378DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DB4u;
    // 0x378db8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378DB4u, 0x378DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378DBCu;
label_378dbc:
    // 0x378dbc: 0x8268001e  lb          $t0, 0x1E($s3)
    ctx->pc = 0x378dbcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x378dc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x378dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x378dc4: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x378DC4u;
    {
        const bool branch_taken_0x378dc4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x378DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DC4u;
        // 0x378dc8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378dc4) {
            ctx->pc = 0x378DECu;
            goto label_378dec;
        }
    }
    ctx->pc = 0x378DCCu;
    // 0x378dcc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378dd0: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x378dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x378dd4: 0x24e7b388  addiu       $a3, $a3, -0x4C78
    ctx->pc = 0x378dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947720));
    // 0x378dd8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378ddc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378DDCu;
    SET_GPR_U32(ctx, 31, 0x378DE4u);
    ctx->pc = 0x378DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DDCu;
    // 0x378de0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378DDCu, 0x378DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378DE4u;
label_378de4:
    // 0x378de4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x378DE4u;
    {
        const bool branch_taken_0x378de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378DE4u;
        // 0x378de8: 0x96630028  lhu         $v1, 0x28($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378de4) {
            ctx->pc = 0x378E04u;
            goto label_378e04;
        }
    }
    ctx->pc = 0x378DECu;
label_378dec:
    // 0x378dec: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x378decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x378df0: 0x24e7b3a0  addiu       $a3, $a3, -0x4C60
    ctx->pc = 0x378df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947744));
    // 0x378df4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x378df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x378df8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378DF8u;
    SET_GPR_U32(ctx, 31, 0x378E00u);
    ctx->pc = 0x378DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378DF8u;
    // 0x378dfc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378DF8u, 0x378E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E00u;
label_378e00:
    // 0x378e00: 0x96630028  lhu         $v1, 0x28($s3)
    ctx->pc = 0x378e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_378e04:
    // 0x378e04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x378e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x378e08: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x378E08u;
    {
        const bool branch_taken_0x378e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x378E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E08u;
        // 0x378e0c: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e08) {
            ctx->pc = 0x378EDCu;
            goto label_378edc;
        }
    }
    ctx->pc = 0x378E10u;
    // 0x378e10: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x378e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x378e14: 0x24423250  addiu       $v0, $v0, 0x3250
    ctx->pc = 0x378e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12880));
    // 0x378e18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x378e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x378e1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x378e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378e20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x378e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x378e24: 0x106000d2  beqz        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x378E24u;
    {
        const bool branch_taken_0x378e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x378E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378E24u;
        // 0x378e28: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378e24) {
            ctx->pc = 0x379170u;
            goto label_379170;
        }
    }
    ctx->pc = 0x378E2Cu;
    // 0x378e2c: 0x96620028  lhu         $v0, 0x28($s3)
    ctx->pc = 0x378e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x378e30: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x378e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x378e34: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x378e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x378e38: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x378E38u;
    {
        const bool branch_taken_0x378e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e38) {
            ctx->pc = 0x378E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378E38u;
            // 0x378e3c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x378E40u;
            goto label_378e40;
        }
    }
    ctx->pc = 0x378E40u;
label_378e40:
    // 0x378e40: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x378e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x378e44: 0x86680010  lh          $t0, 0x10($s3)
    ctx->pc = 0x378e44u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x378e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x378e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x378e4c: 0x86650012  lh          $a1, 0x12($s3)
    ctx->pc = 0x378e4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x378e50: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x378e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x378e54: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x378e54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x378e58: 0x9070000d  lbu         $s0, 0xD($v1)
    ctx->pc = 0x378e58u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13)));
    // 0x378e5c: 0x26312060  addiu       $s1, $s1, 0x2060
    ctx->pc = 0x378e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8288));
    // 0x378e60: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x378e60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x378e64: 0x124c00  sll         $t1, $s2, 16
    ctx->pc = 0x378e64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x378e68: 0x2058018  mult        $s0, $s0, $a1
    ctx->pc = 0x378e68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x378e6c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x378e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x378e70: 0x99403  sra         $s2, $t1, 16
    ctx->pc = 0x378e70u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 9), 16));
    // 0x378e74: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x378e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378e78: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378e7c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x378e7cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x378e80: 0x24e7b3b8  addiu       $a3, $a3, -0x4C48
    ctx->pc = 0x378e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947768));
    // 0x378e84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x378e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x378e88: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x378e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x378e8c: 0x1012  mflo        $v0
    ctx->pc = 0x378e8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x378e90: 0x204001a  div         $zero, $s0, $a0
    ctx->pc = 0x378e90u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x378e94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x378e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x378e98: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x378e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x378e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ea0: 0x8012  mflo        $s0
    ctx->pc = 0x378ea0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x378ea4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378EA4u;
    SET_GPR_U32(ctx, 31, 0x378EACu);
    ctx->pc = 0x378EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378EA4u;
    // 0x378ea8: 0x84490000  lh          $t1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378EA4u, 0x378EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378EACu;
label_378eac:
    // 0x378eac: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x378eacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x378eb0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378eb4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x378eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x378eb8: 0x86680012  lh          $t0, 0x12($s3)
    ctx->pc = 0x378eb8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x378ebc: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x378ebcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x378ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ec4: 0x24e7b3d0  addiu       $a3, $a3, -0x4C30
    ctx->pc = 0x378ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947792));
    // 0x378ec8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x378ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x378ecc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378ECCu;
    SET_GPR_U32(ctx, 31, 0x378ED4u);
    ctx->pc = 0x378ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378ECCu;
    // 0x378ed0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378ECCu, 0x378ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378ED4u;
label_378ed4:
    // 0x378ed4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x378ED4u;
    {
        const bool branch_taken_0x378ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378ED4u;
        // 0x378ed8: 0x148403  sra         $s0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378ed4) {
            ctx->pc = 0x378F24u;
            goto label_378f24;
        }
    }
    ctx->pc = 0x378EDCu;
label_378edc:
    // 0x378edc: 0x128c00  sll         $s1, $s2, 16
    ctx->pc = 0x378edcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x378ee0: 0x86680010  lh          $t0, 0x10($s3)
    ctx->pc = 0x378ee0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x378ee4: 0x118403  sra         $s0, $s1, 16
    ctx->pc = 0x378ee4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 16));
    // 0x378ee8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378eec: 0x24e7b3e8  addiu       $a3, $a3, -0x4C18
    ctx->pc = 0x378eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947816));
    // 0x378ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ef4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x378ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x378ef8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378EF8u;
    SET_GPR_U32(ctx, 31, 0x378F00u);
    ctx->pc = 0x378EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378EF8u;
    // 0x378efc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378EF8u, 0x378F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F00u;
label_378f00:
    // 0x378f00: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378f00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378f04: 0x86680012  lh          $t0, 0x12($s3)
    ctx->pc = 0x378f04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x378f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f0c: 0x24e7b400  addiu       $a3, $a3, -0x4C00
    ctx->pc = 0x378f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947840));
    // 0x378f10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x378f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x378f14: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378F14u;
    SET_GPR_U32(ctx, 31, 0x378F1Cu);
    ctx->pc = 0x378F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F14u;
    // 0x378f18: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378F14u, 0x378F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F1Cu;
label_378f1c:
    // 0x378f1c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x378f1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f20: 0x148403  sra         $s0, $s4, 16
    ctx->pc = 0x378f20u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 16));
label_378f24:
    // 0x378f24: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378f24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378f28: 0x86680014  lh          $t0, 0x14($s3)
    ctx->pc = 0x378f28u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x378f2c: 0x24e7b418  addiu       $a3, $a3, -0x4BE8
    ctx->pc = 0x378f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947864));
    // 0x378f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f34: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x378f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x378f38: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378F38u;
    SET_GPR_U32(ctx, 31, 0x378F40u);
    ctx->pc = 0x378F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F38u;
    // 0x378f3c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378F38u, 0x378F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F40u;
label_378f40:
    // 0x378f40: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x378f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x378f44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x378f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x378f48: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x378F48u;
    {
        const bool branch_taken_0x378f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F48u;
        // 0x378f4c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f48) {
            ctx->pc = 0x378F6Cu;
            goto label_378f6c;
        }
    }
    ctx->pc = 0x378F50u;
    // 0x378f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f54: 0x24e7b430  addiu       $a3, $a3, -0x4BD0
    ctx->pc = 0x378f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947888));
    // 0x378f58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x378f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x378f5c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378F5Cu;
    SET_GPR_U32(ctx, 31, 0x378F64u);
    ctx->pc = 0x378F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F5Cu;
    // 0x378f60: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378F5Cu, 0x378F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F64u;
label_378f64:
    // 0x378f64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378F64u;
    {
        const bool branch_taken_0x378f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F64u;
        // 0x378f68: 0x9662000c  lhu         $v0, 0xC($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f64) {
            ctx->pc = 0x378F88u;
            goto label_378f88;
        }
    }
    ctx->pc = 0x378F6Cu;
label_378f6c:
    // 0x378f6c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378f74: 0x24e7b448  addiu       $a3, $a3, -0x4BB8
    ctx->pc = 0x378f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947912));
    // 0x378f78: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x378f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x378f7c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378F7Cu;
    SET_GPR_U32(ctx, 31, 0x378F84u);
    ctx->pc = 0x378F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F7Cu;
    // 0x378f80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378F7Cu, 0x378F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F84u;
label_378f84:
    // 0x378f84: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x378f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_378f88:
    // 0x378f88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x378f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x378f8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x378F8Cu;
    {
        const bool branch_taken_0x378f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x378F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378F8Cu;
        // 0x378f90: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378f8c) {
            ctx->pc = 0x378FB0u;
            goto label_378fb0;
        }
    }
    ctx->pc = 0x378F94u;
    // 0x378f94: 0x142402  srl         $a0, $s4, 16
    ctx->pc = 0x378f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
    // 0x378f98: 0x24e7b460  addiu       $a3, $a3, -0x4BA0
    ctx->pc = 0x378f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947936));
    // 0x378f9c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x378f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x378fa0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378FA0u;
    SET_GPR_U32(ctx, 31, 0x378FA8u);
    ctx->pc = 0x378FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FA0u;
    // 0x378fa4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378FA0u, 0x378FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FA8u;
label_378fa8:
    // 0x378fa8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x378FA8u;
    {
        const bool branch_taken_0x378fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378FA8u;
        // 0x378fac: 0x148403  sra         $s0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378fa8) {
            ctx->pc = 0x378FCCu;
            goto label_378fcc;
        }
    }
    ctx->pc = 0x378FB0u;
label_378fb0:
    // 0x378fb0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378fb4: 0x142402  srl         $a0, $s4, 16
    ctx->pc = 0x378fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
    // 0x378fb8: 0x24e7b478  addiu       $a3, $a3, -0x4B88
    ctx->pc = 0x378fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947960));
    // 0x378fbc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x378fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x378fc0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378FC0u;
    SET_GPR_U32(ctx, 31, 0x378FC8u);
    ctx->pc = 0x378FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FC0u;
    // 0x378fc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378FC0u, 0x378FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FC8u;
label_378fc8:
    // 0x378fc8: 0x148403  sra         $s0, $s4, 16
    ctx->pc = 0x378fc8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 16));
label_378fcc:
    // 0x378fcc: 0x86680018  lh          $t0, 0x18($s3)
    ctx->pc = 0x378fccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x378fd0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378fd8: 0x24e7b490  addiu       $a3, $a3, -0x4B70
    ctx->pc = 0x378fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947984));
    // 0x378fdc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x378fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x378fe0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378FE0u;
    SET_GPR_U32(ctx, 31, 0x378FE8u);
    ctx->pc = 0x378FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FE0u;
    // 0x378fe4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378FE0u, 0x378FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378FE8u;
label_378fe8:
    // 0x378fe8: 0x8668001a  lh          $t0, 0x1A($s3)
    ctx->pc = 0x378fe8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x378fec: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x378fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x378ff0: 0x24e7b4a8  addiu       $a3, $a3, -0x4B58
    ctx->pc = 0x378ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948008));
    // 0x378ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378ff8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x378ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x378ffc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x378FFCu;
    SET_GPR_U32(ctx, 31, 0x379004u);
    ctx->pc = 0x379000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378FFCu;
    // 0x379000: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x378FFCu, 0x379004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379004u;
label_379004:
    // 0x379004: 0x82680006  lb          $t0, 0x6($s3)
    ctx->pc = 0x379004u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x379008: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379008u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37900c: 0x24e7b4c0  addiu       $a3, $a3, -0x4B40
    ctx->pc = 0x37900cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948032));
    // 0x379010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379014: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x379014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x379018: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379018u;
    SET_GPR_U32(ctx, 31, 0x379020u);
    ctx->pc = 0x37901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379018u;
    // 0x37901c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379018u, 0x379020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379020u;
label_379020:
    // 0x379020: 0x82680007  lb          $t0, 0x7($s3)
    ctx->pc = 0x379020u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 7)));
    // 0x379024: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379028: 0x24e7b4d8  addiu       $a3, $a3, -0x4B28
    ctx->pc = 0x379028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948056));
    // 0x37902c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37902cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379030: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x379030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x379034: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379034u;
    SET_GPR_U32(ctx, 31, 0x37903Cu);
    ctx->pc = 0x379038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379034u;
    // 0x379038: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379034u, 0x37903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37903Cu;
label_37903c:
    // 0x37903c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37903cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379040: 0x82680008  lb          $t0, 0x8($s3)
    ctx->pc = 0x379040u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x379044: 0x24e7b4f0  addiu       $a3, $a3, -0x4B10
    ctx->pc = 0x379044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948080));
    // 0x379048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37904c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x37904cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379050: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379050u;
    SET_GPR_U32(ctx, 31, 0x379058u);
    ctx->pc = 0x379054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379050u;
    // 0x379054: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379050u, 0x379058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379058u;
label_379058:
    // 0x379058: 0x9662000e  lhu         $v0, 0xE($s3)
    ctx->pc = 0x379058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x37905c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x379060: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x379060u;
    {
        const bool branch_taken_0x379060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379060u;
        // 0x379064: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379060) {
            ctx->pc = 0x379084u;
            goto label_379084;
        }
    }
    ctx->pc = 0x379068u;
    // 0x379068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37906c: 0x24e7b508  addiu       $a3, $a3, -0x4AF8
    ctx->pc = 0x37906cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948104));
    // 0x379070: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x379070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x379074: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379074u;
    SET_GPR_U32(ctx, 31, 0x37907Cu);
    ctx->pc = 0x379078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379074u;
    // 0x379078: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379074u, 0x37907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37907Cu;
label_37907c:
    // 0x37907c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37907Cu;
    {
        const bool branch_taken_0x37907c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37907Cu;
        // 0x379080: 0x148403  sra         $s0, $s4, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37907c) {
            ctx->pc = 0x3790A0u;
            goto label_3790a0;
        }
    }
    ctx->pc = 0x379084u;
label_379084:
    // 0x379084: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37908c: 0x24e7b520  addiu       $a3, $a3, -0x4AE0
    ctx->pc = 0x37908cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948128));
    // 0x379090: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x379090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x379094: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379094u;
    SET_GPR_U32(ctx, 31, 0x37909Cu);
    ctx->pc = 0x379098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379094u;
    // 0x379098: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379094u, 0x37909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37909Cu;
label_37909c:
    // 0x37909c: 0x148403  sra         $s0, $s4, 16
    ctx->pc = 0x37909cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 16));
label_3790a0:
    // 0x3790a0: 0x86680016  lh          $t0, 0x16($s3)
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x3790a4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3790a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3790a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3790a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790ac: 0x24e7b538  addiu       $a3, $a3, -0x4AC8
    ctx->pc = 0x3790acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948152));
    // 0x3790b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3790b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3790b4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3790B4u;
    SET_GPR_U32(ctx, 31, 0x3790BCu);
    ctx->pc = 0x3790B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790B4u;
    // 0x3790b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3790B4u, 0x3790BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790BCu;
label_3790bc:
    // 0x3790bc: 0x82630009  lb          $v1, 0x9($s3)
    ctx->pc = 0x3790bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x3790c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3790c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3790c4: 0x24422600  addiu       $v0, $v0, 0x2600
    ctx->pc = 0x3790c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9728));
    // 0x3790c8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3790c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3790cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3790ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3790d0: 0x24e7b550  addiu       $a3, $a3, -0x4AB0
    ctx->pc = 0x3790d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948176));
    // 0x3790d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3790d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3790d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3790d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790dc: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3790dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3790e0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3790e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3790e4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3790E4u;
    SET_GPR_U32(ctx, 31, 0x3790ECu);
    ctx->pc = 0x3790E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790E4u;
    // 0x3790e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3790E4u, 0x3790ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790ECu;
label_3790ec:
    // 0x3790ec: 0x82680020  lb          $t0, 0x20($s3)
    ctx->pc = 0x3790ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3790f0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3790f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3790f4: 0x24e7b560  addiu       $a3, $a3, -0x4AA0
    ctx->pc = 0x3790f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948192));
    // 0x3790f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3790f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790fc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x3790fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x379100: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379100u;
    SET_GPR_U32(ctx, 31, 0x379108u);
    ctx->pc = 0x379104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379100u;
    // 0x379104: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379100u, 0x379108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379108u;
label_379108:
    // 0x379108: 0x82680021  lb          $t0, 0x21($s3)
    ctx->pc = 0x379108u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
    // 0x37910c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37910cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379110: 0x24e7b578  addiu       $a3, $a3, -0x4A88
    ctx->pc = 0x379110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948216));
    // 0x379114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379118: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x379118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37911c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37911Cu;
    SET_GPR_U32(ctx, 31, 0x379124u);
    ctx->pc = 0x379120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37911Cu;
    // 0x379120: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37911Cu, 0x379124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379124u;
label_379124:
    // 0x379124: 0x82680022  lb          $t0, 0x22($s3)
    ctx->pc = 0x379124u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x379128: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379128u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37912c: 0x24e7b590  addiu       $a3, $a3, -0x4A70
    ctx->pc = 0x37912cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948240));
    // 0x379130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379134: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x379134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379138: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379138u;
    SET_GPR_U32(ctx, 31, 0x379140u);
    ctx->pc = 0x37913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379138u;
    // 0x37913c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379138u, 0x379140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379140u;
label_379140:
    // 0x379140: 0x82680023  lb          $t0, 0x23($s3)
    ctx->pc = 0x379140u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
    // 0x379144: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37914c: 0x24e7b5a8  addiu       $a3, $a3, -0x4A58
    ctx->pc = 0x37914cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948264));
    // 0x379150: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x379150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x379154: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379154u;
    SET_GPR_U32(ctx, 31, 0x37915Cu);
    ctx->pc = 0x379158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379154u;
    // 0x379158: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379154u, 0x37915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37915Cu;
label_37915c:
    // 0x37915c: 0xc0de60e  jal         func_379838
    ctx->pc = 0x37915Cu;
    SET_GPR_U32(ctx, 31, 0x379164u);
    ctx->pc = 0x379160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37915Cu;
    // 0x379160: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379838u, 0x37915Cu, 0x379164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379164u;
label_379164:
    // 0x379164: 0xc0de644  jal         func_379910
    ctx->pc = 0x379164u;
    SET_GPR_U32(ctx, 31, 0x37916Cu);
    ctx->pc = 0x379168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379164u;
    // 0x379168: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379910u, 0x379164u, 0x37916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37916Cu;
label_37916c:
    // 0x37916c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37916cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_379170:
    // 0x379170: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x379170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x379174: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x379174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379178: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379178u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37917c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x37917cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379180: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x379180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379188: 0x3e00008  jr          $ra
    ctx->pc = 0x379188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379188u;
        // 0x37918c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379190u;
}
