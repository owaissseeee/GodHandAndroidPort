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

// Function: func_003A9018
// Address: 0x3a9018 - 0x3a9228
void func_003A9018_0x3a9018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9018_0x3a9018");
#endif

    switch (ctx->pc) {
        case 0x3a9068u: goto label_3a9068;
        case 0x3a9114u: goto label_3a9114;
        case 0x3a9124u: goto label_3a9124;
        case 0x3a9138u: goto label_3a9138;
        case 0x3a9178u: goto label_3a9178;
        default: break;
    }

    ctx->pc = 0x3a9018u;

    // 0x3a9018: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a9018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3a901c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3a901cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3a9020: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3a9020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3a9024: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3a9024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3a9028: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3a9028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3a902c: 0x3c170046  lui         $s7, 0x46
    ctx->pc = 0x3a902cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
    // 0x3a9030: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3a9030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3a9034: 0x26e5f039  addiu       $a1, $s7, -0xFC7
    ctx->pc = 0x3a9034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963257));
    // 0x3a9038: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3a9038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3a903c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3a903cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9040: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3a9040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3a9044: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a9044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9048: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3a9048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3a904c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a904cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3a9050: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3a9050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3a9054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a9054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a9058: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3a9058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3a905c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x3a905cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a9060: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3a9060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3a9064: 0x0  nop
    ctx->pc = 0x3a9064u;
    // NOP
label_3a9068:
    // 0x3a9068: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3a9068u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a906c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x3a906cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3a9070: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a9070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9074: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a9074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3a9078: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A9078u;
    {
        const bool branch_taken_0x3a9078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9078u;
        // 0x3a907c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9078) {
            ctx->pc = 0x3A9068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9068;
        }
    }
    ctx->pc = 0x3A9080u;
    // 0x3a9080: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3a9080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a9084: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9084u;
    {
        const bool branch_taken_0x3a9084 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9084u;
        // 0x3a9088: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9084) {
            ctx->pc = 0x3A909Cu;
            goto label_3a909c;
        }
    }
    ctx->pc = 0x3A908Cu;
    // 0x3a908c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3a908cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a9090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a9090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9094u;
    {
        const bool branch_taken_0x3a9094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9094u;
        // 0x3a9098: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9094) {
            ctx->pc = 0x3A90A8u;
            goto label_3a90a8;
        }
    }
    ctx->pc = 0x3A909Cu;
label_3a909c:
    // 0x3a909c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A909Cu;
    {
        const bool branch_taken_0x3a909c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a909c) {
            ctx->pc = 0x3A90ACu;
            goto label_3a90ac;
        }
    }
    ctx->pc = 0x3A90A4u;
    // 0x3a90a4: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3a90a4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3a90a8:
    // 0x3a90a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a90a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a90ac:
    // 0x3a90ac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A90ACu;
    {
        const bool branch_taken_0x3a90ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A90B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90ACu;
        // 0x3a90b0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90ac) {
            ctx->pc = 0x3A90BCu;
            goto label_3a90bc;
        }
    }
    ctx->pc = 0x3A90B4u;
    // 0x3a90b4: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A90B4u;
    {
        const bool branch_taken_0x3a90b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a90b4) {
            ctx->pc = 0x3A90E8u;
            goto label_3a90e8;
        }
    }
    ctx->pc = 0x3A90BCu;
label_3a90bc:
    // 0x3a90bc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3a90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a90c0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A90C0u;
    {
        const bool branch_taken_0x3a90c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90C0u;
        // 0x3a90c4: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90c0) {
            ctx->pc = 0x3A90E8u;
            goto label_3a90e8;
        }
    }
    ctx->pc = 0x3A90C8u;
    // 0x3a90c8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x3a90c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a90cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A90CCu;
    {
        const bool branch_taken_0x3a90cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90CCu;
        // 0x3a90d0: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90cc) {
            ctx->pc = 0x3A90DCu;
            goto label_3a90dc;
        }
    }
    ctx->pc = 0x3A90D4u;
    // 0x3a90d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A90D4u;
    {
        const bool branch_taken_0x3a90d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a90d4) {
            ctx->pc = 0x3A90E8u;
            goto label_3a90e8;
        }
    }
    ctx->pc = 0x3A90DCu;
label_3a90dc:
    // 0x3a90dc: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x3a90dcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3a90e0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3a90e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a90e4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x3a90e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_3a90e8:
    // 0x3a90e8: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A90E8u;
    {
        const bool branch_taken_0x3a90e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90E8u;
        // 0x3a90ec: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90e8) {
            ctx->pc = 0x3A9104u;
            goto label_3a9104;
        }
    }
    ctx->pc = 0x3A90F0u;
    // 0x3a90f0: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x3a90f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a90f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3a90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3a90f8: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x3a90f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x3a90fc: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x3a90fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x3a9100: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3a9100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9104:
    // 0x3a9104: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a9104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a910c: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3A910Cu;
    SET_GPR_U32(ctx, 31, 0x3A9114u);
    ctx->pc = 0x3A9110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A910Cu;
    // 0x3a9110: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3A910Cu, 0x3A9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9114u;
label_3a9114:
    // 0x3a9114: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a9114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a9118: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3a9118u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a911c: 0xc0ee516  jal         func_3B9458
    ctx->pc = 0x3A911Cu;
    SET_GPR_U32(ctx, 31, 0x3A9124u);
    ctx->pc = 0x3A9120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A911Cu;
    // 0x3a9120: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9458u, 0x3A911Cu, 0x3A9124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9124u;
label_3a9124:
    // 0x3a9124: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x3a9124u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a9128: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x3a9128u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x3a912c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3A912Cu;
    {
        const bool branch_taken_0x3a912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A912Cu;
        // 0x3a9130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a912c) {
            ctx->pc = 0x3A9184u;
            goto label_3a9184;
        }
    }
    ctx->pc = 0x3A9134u;
    // 0x3a9134: 0x0  nop
    ctx->pc = 0x3a9134u;
    // NOP
label_3a9138:
    // 0x3a9138: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x3a9138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3a913c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A913Cu;
    {
        const bool branch_taken_0x3a913c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a913c) {
            ctx->pc = 0x3A91BCu;
            goto label_3a91bc;
        }
    }
    ctx->pc = 0x3A9144u;
    // 0x3a9144: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A9144u;
    {
        const bool branch_taken_0x3a9144 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x3A9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9144u;
        // 0x3a9148: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9144) {
            ctx->pc = 0x3A9168u;
            goto label_3a9168;
        }
    }
    ctx->pc = 0x3A914Cu;
    // 0x3a914c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3A914Cu;
    {
        const bool branch_taken_0x3a914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a914c) {
            ctx->pc = 0x3A9150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A914Cu;
            // 0x3a9150: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A917Cu;
            goto label_3a917c;
        }
    }
    ctx->pc = 0x3A9154u;
    // 0x3a9154: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A9154u;
    {
        const bool branch_taken_0x3a9154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x3A9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9154u;
        // 0x3a9158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9154) {
            ctx->pc = 0x3A9170u;
            goto label_3a9170;
        }
    }
    ctx->pc = 0x3A915Cu;
    // 0x3a915c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x3a915cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a9160: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9160u;
    {
        const bool branch_taken_0x3a9160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9160) {
            ctx->pc = 0x3A9170u;
            goto label_3a9170;
        }
    }
    ctx->pc = 0x3A9168u;
label_3a9168:
    // 0x3a9168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9168u;
    {
        const bool branch_taken_0x3a9168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9168u;
        // 0x3a916c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9168) {
            ctx->pc = 0x3A917Cu;
            goto label_3a917c;
        }
    }
    ctx->pc = 0x3A9170u;
label_3a9170:
    // 0x3a9170: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x3A9170u;
    SET_GPR_U32(ctx, 31, 0x3A9178u);
    ctx->pc = 0x3A9174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9170u;
    // 0x3a9174: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x3A9170u, 0x3A9178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9178u;
label_3a9178:
    // 0x3a9178: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x3a9178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_3a917c:
    // 0x3a917c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x3a917cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a9180: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3a9180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3a9184:
    // 0x3a9184: 0x26e2f039  addiu       $v0, $s7, -0xFC7
    ctx->pc = 0x3a9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963257));
    // 0x3a9188: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a9188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a918c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x3a918cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a9190: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3a9190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3a9194: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9194u;
    {
        const bool branch_taken_0x3a9194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9194u;
        // 0x3a9198: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9194) {
            ctx->pc = 0x3A91A4u;
            goto label_3a91a4;
        }
    }
    ctx->pc = 0x3A919Cu;
    // 0x3a919c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x3A919Cu;
    {
        const bool branch_taken_0x3a919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A919Cu;
        // 0x3a91a0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a919c) {
            ctx->pc = 0x3A9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9138;
        }
    }
    ctx->pc = 0x3A91A4u;
label_3a91a4:
    // 0x3a91a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A91A4u;
    {
        const bool branch_taken_0x3a91a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91A4u;
        // 0x3a91a8: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91a4) {
            ctx->pc = 0x3A91BCu;
            goto label_3a91bc;
        }
    }
    ctx->pc = 0x3A91ACu;
    // 0x3a91ac: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3a91acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3a91b0: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x3a91b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x3a91b4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3A91B4u;
    {
        const bool branch_taken_0x3a91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91B4u;
        // 0x3a91b8: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91b4) {
            ctx->pc = 0x3A9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9138;
        }
    }
    ctx->pc = 0x3A91BCu;
label_3a91bc:
    // 0x3a91bc: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A91BCu;
    {
        const bool branch_taken_0x3a91bc = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x3A91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91BCu;
        // 0x3a91c0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91bc) {
            ctx->pc = 0x3A91D8u;
            goto label_3a91d8;
        }
    }
    ctx->pc = 0x3A91C4u;
    // 0x3a91c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a91c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a91c8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3a91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3a91cc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a91d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A91D0u;
    {
        const bool branch_taken_0x3a91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91D0u;
        // 0x3a91d4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91d0) {
            ctx->pc = 0x3A91E0u;
            goto label_3a91e0;
        }
    }
    ctx->pc = 0x3A91D8u;
label_3a91d8:
    // 0x3a91d8: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x3a91d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x3a91dc: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3a91dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3a91e0:
    // 0x3a91e0: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A91E0u;
    {
        const bool branch_taken_0x3a91e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91E0u;
        // 0x3a91e4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91e0) {
            ctx->pc = 0x3A91F4u;
            goto label_3a91f4;
        }
    }
    ctx->pc = 0x3A91E8u;
    // 0x3a91e8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x3a91e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3a91ec: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x3a91ecu;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3a91f0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3a91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_3a91f4:
    // 0x3a91f4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3a91f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a91f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a91f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a91fc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3a91fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a9200: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3a9200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a9204: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3a9204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a9208: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3a9208u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a920c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a920cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a9210: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3a9210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9214: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3a9214u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9218: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3a9218u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a921c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a921cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9220: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9220u;
        // 0x3a9224: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9228u;
}
