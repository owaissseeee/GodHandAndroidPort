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

// Function: cSubScr_SubScrOn
// Address: 0x160020 - 0x1601d8
void cSubScr_SubScrOn_0x160020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSubScr_SubScrOn_0x160020");
#endif

    switch (ctx->pc) {
        case 0x16013cu: goto label_16013c;
        default: break;
    }

    ctx->pc = 0x160020u;

    // 0x160020: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x160020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x160024: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160024u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x160028: 0x8c487a84  lw          $t0, 0x7A84($v0)
    ctx->pc = 0x160028u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x747A84u));
    // 0x16002c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x16002cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x160030: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x160030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x160034: 0x24497a84  addiu       $t1, $v0, 0x7A84
    ctx->pc = 0x160034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
    // 0x160038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16003c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16003cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160044: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x160044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160048: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x160048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x16004c: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x16004cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x160050: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x160050u;
    {
        const bool branch_taken_0x160050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160050u;
        // 0x160054: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160050) {
            ctx->pc = 0x1601C0u;
            goto label_1601c0;
        }
    }
    ctx->pc = 0x160058u;
    // 0x160058: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x160058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x16005c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x16005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x160060: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x160060u;
    {
        const bool branch_taken_0x160060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160060) {
            ctx->pc = 0x160064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160060u;
            // 0x160064: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601C4u;
            goto label_1601c4;
        }
    }
    ctx->pc = 0x160068u;
    // 0x160068: 0x811ba  dsrl        $v0, $t0, 6
    ctx->pc = 0x160068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 6);
    // 0x16006c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160070: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x160070u;
    {
        const bool branch_taken_0x160070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160070) {
            ctx->pc = 0x160074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160070u;
            // 0x160074: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601C4u;
            goto label_1601c4;
        }
    }
    ctx->pc = 0x160078u;
    // 0x160078: 0x8d22ffa0  lw          $v0, -0x60($t1)
    ctx->pc = 0x160078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294967200)));
    // 0x16007c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x16007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x160080: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160084: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x160084u;
    {
        const bool branch_taken_0x160084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160084) {
            ctx->pc = 0x160088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160084u;
            // 0x160088: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601C4u;
            goto label_1601c4;
        }
    }
    ctx->pc = 0x16008Cu;
    // 0x16008c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x16008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x160090: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x160090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x160094: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x160094u;
    {
        const bool branch_taken_0x160094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x160094) {
            ctx->pc = 0x160098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160094u;
            // 0x160098: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601C4u;
            goto label_1601c4;
        }
    }
    ctx->pc = 0x16009Cu;
    // 0x16009c: 0x86020050  lh          $v0, 0x50($s0)
    ctx->pc = 0x16009cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1600a0: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1600A0u;
    {
        const bool branch_taken_0x1600a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1600a0) {
            ctx->pc = 0x1600A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1600A0u;
            // 0x1600a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1601C4u;
            goto label_1601c4;
        }
    }
    ctx->pc = 0x1600A8u;
    // 0x1600a8: 0xa2070edc  sb          $a3, 0xEDC($s0)
    ctx->pc = 0x1600a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3804), (uint8_t)GPR_U32(ctx, 7));
    // 0x1600ac: 0x2524fa1c  addiu       $a0, $t1, -0x5E4
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965788));
    // 0x1600b0: 0x2e250009  sltiu       $a1, $s1, 0x9
    ctx->pc = 0x1600b0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1600b4: 0x8c8205d8  lw          $v0, 0x5D8($a0)
    ctx->pc = 0x1600b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1496)));
    // 0x1600b8: 0xae020ee0  sw          $v0, 0xEE0($s0)
    ctx->pc = 0x1600b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3808), GPR_U32(ctx, 2));
    // 0x1600bc: 0x8c8305e0  lw          $v1, 0x5E0($a0)
    ctx->pc = 0x1600bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1504)));
    // 0x1600c0: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x1600c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x1600c4: 0xae030ee4  sw          $v1, 0xEE4($s0)
    ctx->pc = 0x1600c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3812), GPR_U32(ctx, 3));
    // 0x1600c8: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1600C8u;
    {
        const bool branch_taken_0x1600c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600C8u;
        // 0x1600cc: 0xa2000f15  sb          $zero, 0xF15($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3861), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600c8) {
            ctx->pc = 0x16012Cu;
            goto label_16012c;
        }
    }
    ctx->pc = 0x1600D0u;
    // 0x1600d0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1600d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1600d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1600d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1600d8: 0x2442f0b0  addiu       $v0, $v0, -0xF50
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963376));
    // 0x1600dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1600dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1600e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1600e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1600e4: 0x800008  jr          $a0
    ctx->pc = 0x1600E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1600ECu: goto label_1600ec;
            case 0x1600F4u: goto label_1600f4;
            case 0x1600FCu: goto label_1600fc;
            case 0x160104u: goto label_160104;
            case 0x16010Cu: goto label_16010c;
            case 0x160114u: goto label_160114;
            case 0x16011Cu: goto label_16011c;
            case 0x160124u: goto label_160124;
            case 0x16012Cu: goto label_16012c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1600E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1600ECu;
label_1600ec:
    // 0x1600ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1600ECu;
    {
        const bool branch_taken_0x1600ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600ECu;
        // 0x1600f0: 0xa2060374  sb          $a2, 0x374($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600ec) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x1600F4u;
label_1600f4:
    // 0x1600f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1600F4u;
    {
        const bool branch_taken_0x1600f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1600F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600F4u;
        // 0x1600f8: 0xa2060684  sb          $a2, 0x684($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1668), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600f4) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x1600FCu;
label_1600fc:
    // 0x1600fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1600FCu;
    {
        const bool branch_taken_0x1600fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600FCu;
        // 0x160100: 0xa2060794  sb          $a2, 0x794($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1940), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600fc) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x160104u;
label_160104:
    // 0x160104: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x160104u;
    {
        const bool branch_taken_0x160104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160104u;
        // 0x160108: 0xa20008e4  sb          $zero, 0x8E4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160104) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x16010Cu;
label_16010c:
    // 0x16010c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16010Cu;
    {
        const bool branch_taken_0x16010c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16010Cu;
        // 0x160110: 0xa2000a24  sb          $zero, 0xA24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2596), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16010c) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x160114u;
label_160114:
    // 0x160114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x160114u;
    {
        const bool branch_taken_0x160114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160114u;
        // 0x160118: 0xa2000ca4  sb          $zero, 0xCA4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3236), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160114) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x16011Cu;
label_16011c:
    // 0x16011c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16011Cu;
    {
        const bool branch_taken_0x16011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16011Cu;
        // 0x160120: 0xa2000c04  sb          $zero, 0xC04($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3076), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16011c) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x160124u;
label_160124:
    // 0x160124: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x160124u;
    {
        const bool branch_taken_0x160124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160124u;
        // 0x160128: 0xa2000b44  sb          $zero, 0xB44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2884), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160124) {
            ctx->pc = 0x160130u;
            goto label_160130;
        }
    }
    ctx->pc = 0x16012Cu;
label_16012c:
    // 0x16012c: 0xa2000794  sb          $zero, 0x794($s0)
    ctx->pc = 0x16012cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1940), (uint8_t)GPR_U32(ctx, 0));
label_160130:
    // 0x160130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160134: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x160134u;
    SET_GPR_U32(ctx, 31, 0x16013Cu);
    ctx->pc = 0x160138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160134u;
    // 0x160138: 0xa6020050  sh          $v0, 0x50($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x160134u, 0x16013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16013Cu;
label_16013c:
    // 0x16013c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x16013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x160140: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160144: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x160144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x160148: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x160148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x16014c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x16014cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x160150: 0xe440054c  swc1        $f0, 0x54C($v0)
    ctx->pc = 0x160150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x160154: 0x24e67a78  addiu       $a2, $a3, 0x7A78
    ctx->pc = 0x160154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 31352));
    // 0x160158: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x16015c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x16015cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x160160: 0x8ce37a78  lw          $v1, 0x7A78($a3)
    ctx->pc = 0x160160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x160164: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x160164u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x160168: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x160168u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A80u));
    // 0x16016c: 0x3c0c0004  lui         $t4, 0x4
    ctx->pc = 0x16016cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4 << 16));
    // 0x160170: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x160170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x160174: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x160174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x160178: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x160178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x16017c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x16017cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x160180: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x160180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x160184: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x160184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x160188: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x160188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x16018c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x16018cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x160190: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x160190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x160194: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x160194u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A84u, _value); } while (0);
    // 0x160198: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x160198u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x16019c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x16019cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x1601a0: 0xace37a78  sw          $v1, 0x7A78($a3)
    ctx->pc = 0x1601a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747A78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A78u, _value); } while (0);
    // 0x1601a4: 0x92020f15  lbu         $v0, 0xF15($s0)
    ctx->pc = 0x1601a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
    // 0x1601a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1601a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1601ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1601acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1601b0: 0xac510ee8  sw          $s1, 0xEE8($v0)
    ctx->pc = 0x1601b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3816), GPR_U32(ctx, 17));
    // 0x1601b4: 0x92030f15  lbu         $v1, 0xF15($s0)
    ctx->pc = 0x1601b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3861)));
    // 0x1601b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1601b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1601bc: 0xa2030f15  sb          $v1, 0xF15($s0)
    ctx->pc = 0x1601bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3861), (uint8_t)GPR_U32(ctx, 3));
label_1601c0:
    // 0x1601c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1601c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1601c4:
    // 0x1601c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1601c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1601c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1601c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1601cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1601CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1601D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601CCu;
        // 0x1601d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1601CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1601D4u;
    // 0x1601d4: 0x0  nop
    ctx->pc = 0x1601d4u;
    // NOP
    ctx->pc = 0x1601d8u;
}
