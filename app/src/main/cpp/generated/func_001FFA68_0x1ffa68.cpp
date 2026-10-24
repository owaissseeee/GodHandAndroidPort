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

// Function: func_001FFA68
// Address: 0x1ffa68 - 0x1ffbf0
void func_001FFA68_0x1ffa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FFA68_0x1ffa68");
#endif

    switch (ctx->pc) {
        case 0x1ffaa8u: goto label_1ffaa8;
        case 0x1ffac8u: goto label_1ffac8;
        case 0x1ffb10u: goto label_1ffb10;
        case 0x1ffb20u: goto label_1ffb20;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb4cu: goto label_1ffb4c;
        case 0x1ffb70u: goto label_1ffb70;
        case 0x1ffb80u: goto label_1ffb80;
        case 0x1ffbb0u: goto label_1ffbb0;
        default: break;
    }

    ctx->pc = 0x1ffa68u;

    // 0x1ffa68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ffa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ffa6c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ffa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1ffa70: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1ffa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1ffa74: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ffa74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa78: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1ffa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1ffa7c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1ffa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1ffa80: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1ffa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1ffa84: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1ffa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1ffa88: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ffa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ffa8c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1ffa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1ffa90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ffa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ffa94: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ffa98: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1FFA98u;
    {
        const bool branch_taken_0x1ffa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA98u;
        // 0x1ffa9c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa98) {
            ctx->pc = 0x1FFBBCu;
            goto label_1ffbbc;
        }
    }
    ctx->pc = 0x1FFAA0u;
    // 0x1ffaa0: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x1FFAA0u;
    SET_GPR_U32(ctx, 31, 0x1FFAA8u);
    ctx->pc = 0x1FFAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAA0u;
    // 0x1ffaa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x1FFAA0u, 0x1FFAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAA8u;
label_1ffaa8:
    // 0x1ffaa8: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1ffaa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffaac: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FFAACu;
    {
        const bool branch_taken_0x1ffaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAACu;
        // 0x1ffab0: 0x3c160043  lui         $s6, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffaac) {
            ctx->pc = 0x1FFB00u;
            goto label_1ffb00;
        }
    }
    ctx->pc = 0x1FFAB4u;
    // 0x1ffab4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ffab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ffab8: 0x2408002f  addiu       $t0, $zero, 0x2F
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1ffabc: 0x2447f039  addiu       $a3, $v0, -0xFC7
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
    // 0x1ffac0: 0x2406005c  addiu       $a2, $zero, 0x5C
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1ffac4: 0x0  nop
    ctx->pc = 0x1ffac4u;
    // NOP
label_1ffac8:
    // 0x1ffac8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ffac8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffacc: 0x50480001  beql        $v0, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FFACCu;
    {
        const bool branch_taken_0x1ffacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ffacc) {
            ctx->pc = 0x1FFAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFACCu;
            // 0x1ffad0: 0xa2060000  sb          $a2, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFAD4u;
            goto label_1ffad4;
        }
    }
    ctx->pc = 0x1FFAD4u;
label_1ffad4:
    // 0x1ffad4: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x1ffad4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffad8: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x1ffad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ffadc: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1ffae0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x1ffae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ffae4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ffae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ffae8: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1ffae8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ffaec: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1ffaecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ffaf0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ffaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ffaf4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ffaf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffaf8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FFAF8u;
    {
        const bool branch_taken_0x1ffaf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffaf8) {
            ctx->pc = 0x1FFAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffac8;
        }
    }
    ctx->pc = 0x1FFB00u;
label_1ffb00:
    // 0x1ffb00: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x1ffb00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ffb04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ffb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb08: 0xc0ea51c  jal         func_3A9470
    ctx->pc = 0x1FFB08u;
    SET_GPR_U32(ctx, 31, 0x1FFB10u);
    ctx->pc = 0x1FFB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB08u;
    // 0x1ffb0c: 0x26c5c750  addiu       $a1, $s6, -0x38B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9470u, 0x1FFB08u, 0x1FFB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB10u;
label_1ffb10:
    // 0x1ffb10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffb10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb14: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1FFB14u;
    {
        const bool branch_taken_0x1ffb14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB14u;
        // 0x1ffb18: 0x24170003  addiu       $s7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb14) {
            ctx->pc = 0x1FFBBCu;
            goto label_1ffbbc;
        }
    }
    ctx->pc = 0x1FFB1Cu;
    // 0x1ffb1c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ffb1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ffb20:
    // 0x1ffb20: 0x5057001f  beql        $v0, $s7, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FFB20u;
    {
        const bool branch_taken_0x1ffb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1ffb20) {
            ctx->pc = 0x1FFB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB20u;
            // 0x1ffb24: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFBA0u;
            goto label_1ffba0;
        }
    }
    ctx->pc = 0x1FFB28u;
    // 0x1ffb28: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1ffb28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffb2c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ffb2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffb30: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1ffb30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ffb34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ffb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ffb38:
    // 0x1ffb38: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FFB38u;
    {
        const bool branch_taken_0x1ffb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1ffb38) {
            ctx->pc = 0x1FFB5Cu;
            goto label_1ffb5c;
        }
    }
    ctx->pc = 0x1FFB40u;
    // 0x1ffb40: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ffb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ffb44: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x1FFB44u;
    SET_GPR_U32(ctx, 31, 0x1FFB4Cu);
    ctx->pc = 0x1FFB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB44u;
    // 0x1ffb48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x1FFB44u, 0x1FFB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB4Cu;
label_1ffb4c:
    // 0x1ffb4c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FFB4Cu;
    {
        const bool branch_taken_0x1ffb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb4c) {
            ctx->pc = 0x1FFB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB4Cu;
            // 0x1ffb50: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB90u;
            goto label_1ffb90;
        }
    }
    ctx->pc = 0x1FFB54u;
    // 0x1ffb54: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FFB54u;
    {
        const bool branch_taken_0x1ffb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB54u;
        // 0x1ffb58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb54) {
            ctx->pc = 0x1FFBC0u;
            goto label_1ffbc0;
        }
    }
    ctx->pc = 0x1FFB5Cu;
label_1ffb5c:
    // 0x1ffb5c: 0x5453000c  bnel        $v0, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1FFB5Cu;
    {
        const bool branch_taken_0x1ffb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ffb5c) {
            ctx->pc = 0x1FFB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB5Cu;
            // 0x1ffb60: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB90u;
            goto label_1ffb90;
        }
    }
    ctx->pc = 0x1FFB64u;
    // 0x1ffb64: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ffb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ffb68: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x1FFB68u;
    SET_GPR_U32(ctx, 31, 0x1FFB70u);
    ctx->pc = 0x1FFB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB68u;
    // 0x1ffb6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x1FFB68u, 0x1FFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB70u;
label_1ffb70:
    // 0x1ffb70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFB70u;
    {
        const bool branch_taken_0x1ffb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB70u;
        // 0x1ffb74: 0x26a40019  addiu       $a0, $s5, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb70) {
            ctx->pc = 0x1FFB88u;
            goto label_1ffb88;
        }
    }
    ctx->pc = 0x1FFB78u;
    // 0x1ffb78: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x1FFB78u;
    SET_GPR_U32(ctx, 31, 0x1FFB80u);
    ctx->pc = 0x1FFB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFB78u;
    // 0x1ffb7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x1FFB78u, 0x1FFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFB80u;
label_1ffb80:
    // 0x1ffb80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFB80u;
    {
        const bool branch_taken_0x1ffb80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb80) {
            ctx->pc = 0x1FFB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFB80u;
            // 0x1ffb84: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB90u;
            goto label_1ffb90;
        }
    }
    ctx->pc = 0x1FFB88u;
label_1ffb88:
    // 0x1ffb88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFB88u;
    {
        const bool branch_taken_0x1ffb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB88u;
        // 0x1ffb8c: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb88) {
            ctx->pc = 0x1FFB9Cu;
            goto label_1ffb9c;
        }
    }
    ctx->pc = 0x1FFB90u;
label_1ffb90:
    // 0x1ffb90: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ffb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ffb94: 0x1452ffe8  bne         $v0, $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1FFB94u;
    {
        const bool branch_taken_0x1ffb94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1FFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB94u;
        // 0x1ffb98: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb94) {
            ctx->pc = 0x1FFB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffb38;
        }
    }
    ctx->pc = 0x1FFB9Cu;
label_1ffb9c:
    // 0x1ffb9c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1ffb9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ffba0:
    // 0x1ffba0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FFBA0u;
    {
        const bool branch_taken_0x1ffba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBA0u;
        // 0x1ffba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffba0) {
            ctx->pc = 0x1FFBBCu;
            goto label_1ffbbc;
        }
    }
    ctx->pc = 0x1FFBA8u;
    // 0x1ffba8: 0xc0ea51c  jal         func_3A9470
    ctx->pc = 0x1FFBA8u;
    SET_GPR_U32(ctx, 31, 0x1FFBB0u);
    ctx->pc = 0x1FFBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFBA8u;
    // 0x1ffbac: 0x26c5c750  addiu       $a1, $s6, -0x38B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9470u, 0x1FFBA8u, 0x1FFBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFBB0u;
label_1ffbb0:
    // 0x1ffbb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffbb4: 0x5620ffda  bnel        $s1, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1FFBB4u;
    {
        const bool branch_taken_0x1ffbb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffbb4) {
            ctx->pc = 0x1FFBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFBB4u;
            // 0x1ffbb8: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ffb20;
        }
    }
    ctx->pc = 0x1FFBBCu;
label_1ffbbc:
    // 0x1ffbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ffbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffbc0:
    // 0x1ffbc0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1ffbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ffbc4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1ffbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ffbc8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1ffbc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ffbcc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1ffbccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ffbd0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1ffbd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ffbd4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ffbd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ffbd8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ffbd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ffbdc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1ffbdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffbe0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ffbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFBE4u;
        // 0x1ffbe8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFBECu;
    // 0x1ffbec: 0x0  nop
    ctx->pc = 0x1ffbecu;
    // NOP
    ctx->pc = 0x1ffbf0u;
}
