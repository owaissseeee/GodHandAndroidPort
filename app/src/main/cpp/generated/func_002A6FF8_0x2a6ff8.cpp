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

// Function: func_002A6FF8
// Address: 0x2a6ff8 - 0x2a71b0
void func_002A6FF8_0x2a6ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A6FF8_0x2a6ff8");
#endif

    switch (ctx->pc) {
        case 0x2a7050u: goto label_2a7050;
        case 0x2a714cu: goto label_2a714c;
        default: break;
    }

    ctx->pc = 0x2a6ff8u;

    // 0x2a6ff8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a6ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a6ffc: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a6ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a7000: 0x8c437a38  lw          $v1, 0x7A38($v0)
    ctx->pc = 0x2a7000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A38u));
    // 0x2a7004: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x2a7004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x2a7008: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a7008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a700c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a700cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a7010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7014: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a7014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a7018: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2a7018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2a701c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a701cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a7020: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a7020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a7024: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a7024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a7028: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x2A7028u;
    {
        const bool branch_taken_0x2a7028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7028u;
        // 0x2a702c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7028) {
            ctx->pc = 0x2A718Cu;
            goto label_2a718c;
        }
    }
    ctx->pc = 0x2A7030u;
    // 0x2a7030: 0x2623018c  addiu       $v1, $s1, 0x18C
    ctx->pc = 0x2a7030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 396));
    // 0x2a7034: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a7034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a7038: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2A7038u;
    {
        const bool branch_taken_0x2a7038 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7038u;
        // 0x2a703c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7038) {
            ctx->pc = 0x2A718Cu;
            goto label_2a718c;
        }
    }
    ctx->pc = 0x2A7040u;
    // 0x2a7040: 0x3c137fff  lui         $s3, 0x7FFF
    ctx->pc = 0x2a7040u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32767 << 16));
    // 0x2a7044: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x2a7044u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x2a7048: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2a7048u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2a704c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a704cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7050:
    // 0x2a7050: 0x8e2401a8  lw          $a0, 0x1A8($s1)
    ctx->pc = 0x2a7050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x2a7054: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2a7054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7058: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7058u;
    {
        const bool branch_taken_0x2a7058 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2A705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7058u;
        // 0x2a705c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7058) {
            ctx->pc = 0x2A7068u;
            goto label_2a7068;
        }
    }
    ctx->pc = 0x2A7060u;
    // 0x2a7060: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x2a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x2a7064: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2a7064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2a7068:
    // 0x2a7068: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a7068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a706c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A706Cu;
    {
        const bool branch_taken_0x2a706c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A706Cu;
        // 0x2a7070: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a706c) {
            ctx->pc = 0x2A707Cu;
            goto label_2a707c;
        }
    }
    ctx->pc = 0x2A7074u;
    // 0x2a7074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7074u;
    {
        const bool branch_taken_0x2a7074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7074u;
        // 0x2a7078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7074) {
            ctx->pc = 0x2A7088u;
            goto label_2a7088;
        }
    }
    ctx->pc = 0x2A707Cu;
label_2a707c:
    // 0x2a707c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2a707cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2a7080: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2a7080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a7084: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2a7084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7088:
    // 0x2a7088: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2A7088u;
    {
        const bool branch_taken_0x2a7088 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7088u;
        // 0x2a708c: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7088) {
            ctx->pc = 0x2A7164u;
            goto label_2a7164;
        }
    }
    ctx->pc = 0x2A7090u;
    // 0x2a7090: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2a7090u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a7094: 0x50430034  beql        $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x2A7094u;
    {
        const bool branch_taken_0x2a7094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a7094) {
            ctx->pc = 0x2A7098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7094u;
            // 0x2a7098: 0x8e2301a8  lw          $v1, 0x1A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7168u;
            goto label_2a7168;
        }
    }
    ctx->pc = 0x2A709Cu;
    // 0x2a709c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2a709cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2a70a0: 0x50430031  beql        $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A70A0u;
    {
        const bool branch_taken_0x2a70a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a70a0) {
            ctx->pc = 0x2A70A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A70A0u;
            // 0x2a70a4: 0x8e2301a8  lw          $v1, 0x1A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7168u;
            goto label_2a7168;
        }
    }
    ctx->pc = 0x2A70A8u;
    // 0x2a70a8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x2a70a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a70ac: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x2a70acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a70b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A70B0u;
    {
        const bool branch_taken_0x2a70b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70B0u;
        // 0x2a70b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70b0) {
            ctx->pc = 0x2A70C4u;
            goto label_2a70c4;
        }
    }
    ctx->pc = 0x2A70B8u;
    // 0x2a70b8: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x2a70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x2a70bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2a70bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a70c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a70c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a70c4:
    // 0x2a70c4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a70c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a70c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A70C8u;
    {
        const bool branch_taken_0x2a70c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a70c8) {
            ctx->pc = 0x2A70CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A70C8u;
            // 0x2a70cc: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A70D8u;
            goto label_2a70d8;
        }
    }
    ctx->pc = 0x2A70D0u;
    // 0x2a70d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A70D0u;
    {
        const bool branch_taken_0x2a70d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A70D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70D0u;
        // 0x2a70d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70d0) {
            ctx->pc = 0x2A70E0u;
            goto label_2a70e0;
        }
    }
    ctx->pc = 0x2A70D8u;
label_2a70d8:
    // 0x2a70d8: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x2a70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2a70dc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x2a70dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a70e0:
    // 0x2a70e0: 0x96060002  lhu         $a2, 0x2($s0)
    ctx->pc = 0x2a70e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2a70e4: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x2a70e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2a70e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A70E8u;
    {
        const bool branch_taken_0x2a70e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A70E8u;
        // 0x2a70ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a70e8) {
            ctx->pc = 0x2A70FCu;
            goto label_2a70fc;
        }
    }
    ctx->pc = 0x2A70F0u;
    // 0x2a70f0: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x2a70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x2a70f4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a70f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a70f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a70f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a70fc:
    // 0x2a70fc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2a70fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a7100: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7100u;
    {
        const bool branch_taken_0x2a7100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7100) {
            ctx->pc = 0x2A7104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7100u;
            // 0x2a7104: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7110u;
            goto label_2a7110;
        }
    }
    ctx->pc = 0x2A7108u;
    // 0x2a7108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A7108u;
    {
        const bool branch_taken_0x2a7108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7108u;
        // 0x2a710c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7108) {
            ctx->pc = 0x2A7118u;
            goto label_2a7118;
        }
    }
    ctx->pc = 0x2A7110u;
label_2a7110:
    // 0x2a7110: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x2a7110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2a7114: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2a7114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a7118:
    // 0x2a7118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a711c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a711cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7120: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2a7120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2a7124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7128: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2a7128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2a712c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a712cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7130: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2a7130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2a7134: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a7134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7138: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2a7138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2a713c: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x2a713cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a7140: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a7140u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7144: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2A7144u;
    SET_GPR_U32(ctx, 31, 0x2A714Cu);
    ctx->pc = 0x2A7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7144u;
    // 0x2a7148: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2A7144u, 0x2A714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A714Cu;
label_2a714c:
    // 0x2a714c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A714Cu;
    {
        const bool branch_taken_0x2a714c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A714Cu;
        // 0x2a7150: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a714c) {
            ctx->pc = 0x2A715Cu;
            goto label_2a715c;
        }
    }
    ctx->pc = 0x2A7154u;
    // 0x2a7154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7154u;
    {
        const bool branch_taken_0x2a7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7154u;
        // 0x2a7158: 0x551025  or          $v0, $v0, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7154) {
            ctx->pc = 0x2A7160u;
            goto label_2a7160;
        }
    }
    ctx->pc = 0x2A715Cu;
label_2a715c:
    // 0x2a715c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2a715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2a7160:
    // 0x2a7160: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a7160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2a7164:
    // 0x2a7164: 0x8e2301a8  lw          $v1, 0x1A8($s1)
    ctx->pc = 0x2a7164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_2a7168:
    // 0x2a7168: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2a7168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2a716c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2a716cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2a7170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a7174: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2a7174u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2a7178: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A7178u;
    {
        const bool branch_taken_0x2a7178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7178) {
            ctx->pc = 0x2A717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7178u;
            // 0x2a717c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7180u;
            goto label_2a7180;
        }
    }
    ctx->pc = 0x2A7180u;
label_2a7180:
    // 0x2a7180: 0x2010  mfhi        $a0
    ctx->pc = 0x2a7180u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a7184: 0x681ffb2  bgez        $s4, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2A7184u;
    {
        const bool branch_taken_0x2a7184 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2A7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7184u;
        // 0x2a7188: 0xae2401a8  sw          $a0, 0x1A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7184) {
            ctx->pc = 0x2A7050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7050;
        }
    }
    ctx->pc = 0x2A718Cu;
label_2a718c:
    // 0x2a718c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a718cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a7190: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a7190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a7194: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a7194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7198: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a7198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a719c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a719cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a71a0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a71a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a71a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a71a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a71a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A71A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A71A8u;
        // 0x2a71ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A71A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A71B0u;
}
