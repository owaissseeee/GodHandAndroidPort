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

// Function: func_00146A18
// Address: 0x146a18 - 0x146e20
void func_00146A18_0x146a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00146A18_0x146a18");
#endif

    switch (ctx->pc) {
        case 0x146a60u: goto label_146a60;
        case 0x146a68u: goto label_146a68;
        case 0x146aa0u: goto label_146aa0;
        case 0x146aa8u: goto label_146aa8;
        case 0x146d50u: goto label_146d50;
        case 0x146db8u: goto label_146db8;
        case 0x146decu: goto label_146dec;
        case 0x146e04u: goto label_146e04;
        default: break;
    }

    ctx->pc = 0x146a18u;

    // 0x146a18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x146a1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x146a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x146a20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x146a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x146a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x146a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146a2c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x146a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x146a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146a34: 0x82230079  lb          $v1, 0x79($s1)
    ctx->pc = 0x146a34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
    // 0x146a38: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x146A38u;
    {
        const bool branch_taken_0x146a38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A38u;
        // 0x146a3c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a38) {
            ctx->pc = 0x146AC8u;
            goto label_146ac8;
        }
    }
    ctx->pc = 0x146A40u;
    // 0x146a40: 0x50620022  beql        $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x146A40u;
    {
        const bool branch_taken_0x146a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146a40) {
            ctx->pc = 0x146A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146A40u;
            // 0x146a44: 0x92230104  lbu         $v1, 0x104($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146ACCu;
            goto label_146acc;
        }
    }
    ctx->pc = 0x146A48u;
    // 0x146a48: 0x962200f8  lhu         $v0, 0xF8($s1)
    ctx->pc = 0x146a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x146a4c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x146A4Cu;
    {
        const bool branch_taken_0x146a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A4Cu;
        // 0x146a50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a4c) {
            ctx->pc = 0x146A90u;
            goto label_146a90;
        }
    }
    ctx->pc = 0x146A54u;
    // 0x146a54: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x146a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x146a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a5c: 0x0  nop
    ctx->pc = 0x146a5cu;
    // NOP
label_146a60:
    // 0x146a60: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x146A60u;
    SET_GPR_U32(ctx, 31, 0x146A68u);
    ctx->pc = 0x146A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146A60u;
    // 0x146a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x146A60u, 0x146A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A68u;
label_146a68:
    // 0x146a68: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x146a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x146a6c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x146a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146a70: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x146a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x146a74: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x146a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x146a78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146a7c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x146a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146a80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x146A80u;
    {
        const bool branch_taken_0x146a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A80u;
        // 0x146a84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a80) {
            ctx->pc = 0x146A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146a60;
        }
    }
    ctx->pc = 0x146A88u;
    // 0x146a88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x146A88u;
    {
        const bool branch_taken_0x146a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146A88u;
        // 0x146a8c: 0x92230104  lbu         $v1, 0x104($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a88) {
            ctx->pc = 0x146ACCu;
            goto label_146acc;
        }
    }
    ctx->pc = 0x146A90u;
label_146a90:
    // 0x146a90: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x146a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x146a94: 0x263300a0  addiu       $s3, $s1, 0xA0
    ctx->pc = 0x146a94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x146a98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a9c: 0x0  nop
    ctx->pc = 0x146a9cu;
    // NOP
label_146aa0:
    // 0x146aa0: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x146AA0u;
    SET_GPR_U32(ctx, 31, 0x146AA8u);
    ctx->pc = 0x146AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146AA0u;
    // 0x146aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x146AA0u, 0x146AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146AA8u;
label_146aa8:
    // 0x146aa8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x146aac: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x146aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146ab0: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x146ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x146ab4: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x146ab4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x146ab8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146abc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x146abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x146ac0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x146AC0u;
    {
        const bool branch_taken_0x146ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AC0u;
        // 0x146ac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ac0) {
            ctx->pc = 0x146AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146aa0;
        }
    }
    ctx->pc = 0x146AC8u;
label_146ac8:
    // 0x146ac8: 0x92230104  lbu         $v1, 0x104($s1)
    ctx->pc = 0x146ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 260)));
label_146acc:
    // 0x146acc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x146accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x146ad0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x146ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x146ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146AD4u;
    {
        const bool branch_taken_0x146ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AD4u;
        // 0x146ad8: 0x82240079  lb          $a0, 0x79($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ad4) {
            ctx->pc = 0x146AE4u;
            goto label_146ae4;
        }
    }
    ctx->pc = 0x146ADCu;
    // 0x146adc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x146adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x146ae0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x146ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_146ae4:
    // 0x146ae4: 0x306200fe  andi        $v0, $v1, 0xFE
    ctx->pc = 0x146ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x146ae8: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x146ae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x146aec: 0x106000b3  beqz        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x146AECu;
    {
        const bool branch_taken_0x146aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146AECu;
        // 0x146af0: 0xa2220104  sb          $v0, 0x104($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 260), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146aec) {
            ctx->pc = 0x146DBCu;
            goto label_146dbc;
        }
    }
    ctx->pc = 0x146AF4u;
    // 0x146af4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x146af8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x146af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x146afc: 0x2442e8a0  addiu       $v0, $v0, -0x1760
    ctx->pc = 0x146afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961312));
    // 0x146b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146b04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x146b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146b08: 0x800008  jr          $a0
    ctx->pc = 0x146B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146B10u: goto label_146b10;
            case 0x146B24u: goto label_146b24;
            case 0x146BC0u: goto label_146bc0;
            case 0x146C24u: goto label_146c24;
            case 0x146C90u: goto label_146c90;
            case 0x146CE0u: goto label_146ce0;
            case 0x146D2Cu: goto label_146d2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146B08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x146B10u;
label_146b10:
    // 0x146b10: 0x86220100  lh          $v0, 0x100($s1)
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x146b14: 0x504000aa  beql        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x146B14u;
    {
        const bool branch_taken_0x146b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b14) {
            ctx->pc = 0x146B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B14u;
            // 0x146b18: 0x82230079  lb          $v1, 0x79($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146DC0u;
            goto label_146dc0;
        }
    }
    ctx->pc = 0x146B1Cu;
    // 0x146b1c: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x146B1Cu;
    {
        const bool branch_taken_0x146b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146B1Cu;
        // 0x146b20: 0x92220079  lbu         $v0, 0x79($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b1c) {
            ctx->pc = 0x146D20u;
            goto label_146d20;
        }
    }
    ctx->pc = 0x146B24u;
label_146b24:
    // 0x146b24: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x146b28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x146b2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x146b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x146b30: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x146b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b34: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x146b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x146b38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146b3c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x146b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x146b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146b44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146b48: 0x3c014116  lui         $at, 0x4116
    ctx->pc = 0x146b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16662 << 16));
    // 0x146b4c: 0x3421cbe2  ori         $at, $at, 0xCBE2
    ctx->pc = 0x146b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52194);
    // 0x146b50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x146b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x146b54: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x146b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x146b58: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x146b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x146b5c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x146b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x146b60: 0xc463003c  lwc1        $f3, 0x3C($v1)
    ctx->pc = 0x146b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146b64: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x146b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b68: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x146b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x146b6c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x146b6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x146b70: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x146b70u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x146b74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x146b74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146b78: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x146b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x146b7c: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x146b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x146b80: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x146b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x146b84: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x146b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x146b88: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x146b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146b8c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x146b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146b90: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x146b90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x146b94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x146b94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146b98: 0x0  nop
    ctx->pc = 0x146b98u;
    // NOP
    // 0x146b9c: 0x45020088  bc1fl       . + 4 + (0x88 << 2)
    ctx->pc = 0x146B9Cu;
    {
        const bool branch_taken_0x146b9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146b9c) {
            ctx->pc = 0x146BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146B9Cu;
            // 0x146ba0: 0x82230079  lb          $v1, 0x79($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146DC0u;
            goto label_146dc0;
        }
    }
    ctx->pc = 0x146BA4u;
    // 0x146ba4: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x146ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x146ba8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x146ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x146bac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x146bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x146bb0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x146bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146bb4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x146bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x146bb8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x146BB8u;
    {
        const bool branch_taken_0x146bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146BB8u;
        // 0x146bbc: 0xe460003c  swc1        $f0, 0x3C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bb8) {
            ctx->pc = 0x146D1Cu;
            goto label_146d1c;
        }
    }
    ctx->pc = 0x146BC0u;
label_146bc0:
    // 0x146bc0: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x146bc4: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x146bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x146bc8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x146bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x146bcc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x146bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x146bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146bd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x146bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x146bd8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x146bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146bdc: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x146bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x146be0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x146be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x146be4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146be8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x146be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x146bec: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x146becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x146bf0: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x146bf4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x146bf8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x146bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x146bfc: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x146bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x146c00: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x146c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x146c04: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x146c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146c08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x146c08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146c0c: 0x0  nop
    ctx->pc = 0x146c0cu;
    // NOP
    // 0x146c10: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x146C10u;
    {
        const bool branch_taken_0x146c10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C10u;
        // 0x146c14: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c10) {
            ctx->pc = 0x146DBCu;
            goto label_146dbc;
        }
    }
    ctx->pc = 0x146C18u;
    // 0x146c18: 0xe4420040  swc1        $f2, 0x40($v0)
    ctx->pc = 0x146c18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x146c1c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x146C1Cu;
    {
        const bool branch_taken_0x146c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C1Cu;
        // 0x146c20: 0xa6230102  sh          $v1, 0x102($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c1c) {
            ctx->pc = 0x146D1Cu;
            goto label_146d1c;
        }
    }
    ctx->pc = 0x146C24u;
label_146c24:
    // 0x146c24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x146c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x146c28: 0x962500f0  lhu         $a1, 0xF0($s1)
    ctx->pc = 0x146c28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x146c2c: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x146c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x146c30: 0x240630f0  addiu       $a2, $zero, 0x30F0
    ctx->pc = 0x146c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12528));
    // 0x146c34: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x146c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x146c38: 0xa4850bee  sh          $a1, 0xBEE($a0)
    ctx->pc = 0x146c38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3054), (uint16_t)GPR_U32(ctx, 5));
    // 0x146c3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x146c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x146c40: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x146c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x146c44: 0xa4460090  sh          $a2, 0x90($v0)
    ctx->pc = 0x146c44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x146c48: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x146c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x146c4c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x146c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x146c50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x146c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x146c54: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x146c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x146c58: 0x96230102  lhu         $v1, 0x102($s1)
    ctx->pc = 0x146c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 258)));
    // 0x146c5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146c60: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x146c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x146c64: 0x4410055  bgez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x146C64u;
    {
        const bool branch_taken_0x146c64 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x146C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C64u;
        // 0x146c68: 0xa6230102  sh          $v1, 0x102($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 258), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c64) {
            ctx->pc = 0x146DBCu;
            goto label_146dbc;
        }
    }
    ctx->pc = 0x146C6Cu;
    // 0x146c6c: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x146c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x146c70: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x146c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x146c74: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x146c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x146c78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x146c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x146c7c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x146c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x146c80: 0x92230079  lbu         $v1, 0x79($s1)
    ctx->pc = 0x146c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
    // 0x146c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x146c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x146c88: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x146C88u;
    {
        const bool branch_taken_0x146c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146C88u;
        // 0x146c8c: 0xa2230079  sb          $v1, 0x79($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c88) {
            ctx->pc = 0x146DBCu;
            goto label_146dbc;
        }
    }
    ctx->pc = 0x146C90u;
label_146c90:
    // 0x146c90: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x146c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x146c94: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x146c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x146c98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x146c98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x146c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146ca0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x146ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146ca4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x146ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146ca8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x146ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x146cac: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x146cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x146cb0: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x146cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x146cb4: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x146cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146cb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x146cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146cbc: 0x0  nop
    ctx->pc = 0x146cbcu;
    // NOP
    // 0x146cc0: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
    ctx->pc = 0x146CC0u;
    {
        const bool branch_taken_0x146cc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x146CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CC0u;
        // 0x146cc4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cc0) {
            ctx->pc = 0x146DBCu;
            goto label_146dbc;
        }
    }
    ctx->pc = 0x146CC8u;
    // 0x146cc8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x146cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x146ccc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x146cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x146cd0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x146cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x146cd4: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x146cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x146cd8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x146CD8u;
    {
        const bool branch_taken_0x146cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146CD8u;
        // 0x146cdc: 0xe4620040  swc1        $f2, 0x40($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146cd8) {
            ctx->pc = 0x146D1Cu;
            goto label_146d1c;
        }
    }
    ctx->pc = 0x146CE0u;
label_146ce0:
    // 0x146ce0: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x146ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x146ce4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x146ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x146ce8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146cec: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x146cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146cf0: 0x3c01c248  lui         $at, 0xC248
    ctx->pc = 0x146cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49736 << 16));
    // 0x146cf4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x146cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146cf8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x146cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x146cfc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x146cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x146d00: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x146d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x146d04: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x146d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146d08: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x146d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146d0c: 0x0  nop
    ctx->pc = 0x146d0cu;
    // NOP
    // 0x146d10: 0x4502002b  bc1fl       . + 4 + (0x2B << 2)
    ctx->pc = 0x146D10u;
    {
        const bool branch_taken_0x146d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x146d10) {
            ctx->pc = 0x146D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146D10u;
            // 0x146d14: 0x82230079  lb          $v1, 0x79($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146DC0u;
            goto label_146dc0;
        }
    }
    ctx->pc = 0x146D18u;
    // 0x146d18: 0xe442003c  swc1        $f2, 0x3C($v0)
    ctx->pc = 0x146d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_146d1c:
    // 0x146d1c: 0x92220079  lbu         $v0, 0x79($s1)
    ctx->pc = 0x146d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
label_146d20:
    // 0x146d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146d24: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x146D24u;
    {
        const bool branch_taken_0x146d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D24u;
        // 0x146d28: 0xa2220079  sb          $v0, 0x79($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d24) {
            ctx->pc = 0x146DBCu;
            goto label_146dbc;
        }
    }
    ctx->pc = 0x146D2Cu;
label_146d2c:
    // 0x146d2c: 0x86220100  lh          $v0, 0x100($s1)
    ctx->pc = 0x146d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x146d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d34: 0x262600f0  addiu       $a2, $s1, 0xF0
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x146d38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146d3c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146D3Cu;
    {
        const bool branch_taken_0x146d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D3Cu;
        // 0x146d40: 0x262700f8  addiu       $a3, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d3c) {
            ctx->pc = 0x146D7Cu;
            goto label_146d7c;
        }
    }
    ctx->pc = 0x146D44u;
    // 0x146d44: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x146d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d48: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x146d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d4c: 0x0  nop
    ctx->pc = 0x146d4cu;
    // NOP
label_146d50:
    // 0x146d50: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x146d50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x146d54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x146d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146d58: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x146d58u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146d5c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x146d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x146d60: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x146d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x146d64: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x146d64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x146d68: 0x86220100  lh          $v0, 0x100($s1)
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x146d6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146d70: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x146d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x146d74: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x146D74u;
    {
        const bool branch_taken_0x146d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146D74u;
        // 0x146d78: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d74) {
            ctx->pc = 0x146D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146d50;
        }
    }
    ctx->pc = 0x146D7Cu;
label_146d7c:
    // 0x146d7c: 0x86220100  lh          $v0, 0x100($s1)
    ctx->pc = 0x146d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x146d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146d88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x146d8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x146d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x146d90: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x146d90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146d94: 0x86230100  lh          $v1, 0x100($s1)
    ctx->pc = 0x146d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x146d98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146d9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x146d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x146da0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x146da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x146da4: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x146da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x146da8: 0x96220100  lhu         $v0, 0x100($s1)
    ctx->pc = 0x146da8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x146dac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146db0: 0xc051a2c  jal         func_1468B0
    ctx->pc = 0x146DB0u;
    SET_GPR_U32(ctx, 31, 0x146DB8u);
    ctx->pc = 0x146DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DB0u;
    // 0x146db4: 0xa6220100  sh          $v0, 0x100($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 256), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1468B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1468B0u, 0x146DB0u, 0x146DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DB8u;
label_146db8:
    // 0x146db8: 0xa2200079  sb          $zero, 0x79($s1)
    ctx->pc = 0x146db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 121), (uint8_t)GPR_U32(ctx, 0));
label_146dbc:
    // 0x146dbc: 0x82230079  lb          $v1, 0x79($s1)
    ctx->pc = 0x146dbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
label_146dc0:
    // 0x146dc0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x146DC0u;
    {
        const bool branch_taken_0x146dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DC0u;
        // 0x146dc4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dc0) {
            ctx->pc = 0x146E04u;
            goto label_146e04;
        }
    }
    ctx->pc = 0x146DC8u;
    // 0x146dc8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146DC8u;
    {
        const bool branch_taken_0x146dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DC8u;
        // 0x146dcc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dc8) {
            ctx->pc = 0x146E08u;
            goto label_146e08;
        }
    }
    ctx->pc = 0x146DD0u;
    // 0x146dd0: 0x962200f8  lhu         $v0, 0xF8($s1)
    ctx->pc = 0x146dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x146dd4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x146DD4u;
    {
        const bool branch_taken_0x146dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DD4u;
        // 0x146dd8: 0x8e23009c  lw          $v1, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dd4) {
            ctx->pc = 0x146DF4u;
            goto label_146df4;
        }
    }
    ctx->pc = 0x146DDCu;
    // 0x146ddc: 0x240230f1  addiu       $v0, $zero, 0x30F1
    ctx->pc = 0x146ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12529));
    // 0x146de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146de4: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x146DE4u;
    SET_GPR_U32(ctx, 31, 0x146DECu);
    ctx->pc = 0x146DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DE4u;
    // 0x146de8: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x146DE4u, 0x146DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DECu;
label_146dec:
    // 0x146dec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x146DECu;
    {
        const bool branch_taken_0x146dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146DECu;
        // 0x146df0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146dec) {
            ctx->pc = 0x146E08u;
            goto label_146e08;
        }
    }
    ctx->pc = 0x146DF4u;
label_146df4:
    // 0x146df4: 0x240230c5  addiu       $v0, $zero, 0x30C5
    ctx->pc = 0x146df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12485));
    // 0x146df8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x146df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x146dfc: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x146DFCu;
    SET_GPR_U32(ctx, 31, 0x146E04u);
    ctx->pc = 0x146E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146DFCu;
    // 0x146e00: 0xa4620090  sh          $v0, 0x90($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x146DFCu, 0x146E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E04u;
label_146e04:
    // 0x146e04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x146e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_146e08:
    // 0x146e08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x146e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146e0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146e10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x146e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146e18: 0x3e00008  jr          $ra
    ctx->pc = 0x146E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146E18u;
        // 0x146e1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146E20u;
}
