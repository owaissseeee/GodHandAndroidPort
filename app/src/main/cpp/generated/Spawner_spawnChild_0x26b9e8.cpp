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

// Function: Spawner_spawnChild
// Address: 0x26b9e8 - 0x26bad8
void Spawner_spawnChild_0x26b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Spawner_spawnChild_0x26b9e8");
#endif

    switch (ctx->pc) {
        case 0x26b9e8u: goto label_26b9e8;
        case 0x26b9ecu: goto label_26b9ec;
        case 0x26b9f0u: goto label_26b9f0;
        case 0x26b9f4u: goto label_26b9f4;
        case 0x26b9f8u: goto label_26b9f8;
        case 0x26b9fcu: goto label_26b9fc;
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        case 0x26ba60u: goto label_26ba60;
        case 0x26ba64u: goto label_26ba64;
        case 0x26ba68u: goto label_26ba68;
        case 0x26ba6cu: goto label_26ba6c;
        case 0x26ba70u: goto label_26ba70;
        case 0x26ba74u: goto label_26ba74;
        case 0x26ba78u: goto label_26ba78;
        case 0x26ba7cu: goto label_26ba7c;
        case 0x26ba80u: goto label_26ba80;
        case 0x26ba84u: goto label_26ba84;
        case 0x26ba88u: goto label_26ba88;
        case 0x26ba8cu: goto label_26ba8c;
        case 0x26ba90u: goto label_26ba90;
        case 0x26ba94u: goto label_26ba94;
        case 0x26ba98u: goto label_26ba98;
        case 0x26ba9cu: goto label_26ba9c;
        case 0x26baa0u: goto label_26baa0;
        case 0x26baa4u: goto label_26baa4;
        case 0x26baa8u: goto label_26baa8;
        case 0x26baacu: goto label_26baac;
        case 0x26bab0u: goto label_26bab0;
        case 0x26bab4u: goto label_26bab4;
        case 0x26bab8u: goto label_26bab8;
        case 0x26babcu: goto label_26babc;
        case 0x26bac0u: goto label_26bac0;
        case 0x26bac4u: goto label_26bac4;
        case 0x26bac8u: goto label_26bac8;
        case 0x26baccu: goto label_26bacc;
        case 0x26bad0u: goto label_26bad0;
        case 0x26bad4u: goto label_26bad4;
        default: break;
    }

    ctx->pc = 0x26b9e8u;

label_26b9e8:
    // 0x26b9e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26b9ec:
    // 0x26b9ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26b9f0:
    // 0x26b9f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_26b9f4:
    // 0x26b9f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b9f8:
    // 0x26b9f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26b9fc:
    // 0x26b9fc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_26ba00:
    // 0x26ba00: 0x38420211  xori        $v0, $v0, 0x211
    ctx->pc = 0x26ba00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)529);
label_26ba04:
    // 0x26ba04: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_26ba08:
    if (ctx->pc == 0x26BA08u) {
        ctx->pc = 0x26BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA04u;
        // 0x26ba08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA0Cu;
        goto label_26ba0c;
    }
    ctx->pc = 0x26BA04u;
    {
        const bool branch_taken_0x26ba04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA04u;
        // 0x26ba08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba04) {
            ctx->pc = 0x26BAC8u;
            goto label_26bac8;
        }
    }
    ctx->pc = 0x26BA0Cu;
label_26ba0c:
    // 0x26ba0c: 0x240403b8  addiu       $a0, $zero, 0x3B8
    ctx->pc = 0x26ba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 952));
label_26ba10:
    // 0x26ba10: 0xc0c3ea6  jal         func_30FA98
label_26ba14:
    if (ctx->pc == 0x26BA14u) {
        ctx->pc = 0x26BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA10u;
        // 0x26ba14: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA18u;
        goto label_26ba18;
    }
    ctx->pc = 0x26BA10u;
    SET_GPR_U32(ctx, 31, 0x26BA18u);
    ctx->pc = 0x26BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BA10u;
    // 0x26ba14: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x26BA10u, 0x26BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BA18u;
label_26ba18:
    // 0x26ba18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ba18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ba1c:
    // 0x26ba1c: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
label_26ba20:
    if (ctx->pc == 0x26BA20u) {
        ctx->pc = 0x26BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA1Cu;
        // 0x26ba20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA24u;
        goto label_26ba24;
    }
    ctx->pc = 0x26BA1Cu;
    {
        const bool branch_taken_0x26ba1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba1c) {
            ctx->pc = 0x26BA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BA1Cu;
            // 0x26ba20: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BAC8u;
            goto label_26bac8;
        }
    }
    ctx->pc = 0x26BA24u;
label_26ba24:
    // 0x26ba24: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x26ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_26ba28:
    // 0x26ba28: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26ba28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26ba2c:
    // 0x26ba2c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26ba30:
    // 0x26ba30: 0x40f809  jalr        $v0
label_26ba34:
    if (ctx->pc == 0x26BA34u) {
        ctx->pc = 0x26BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA30u;
        // 0x26ba34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA38u;
        goto label_26ba38;
    }
    ctx->pc = 0x26BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26BA38u);
        ctx->pc = 0x26BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA30u;
        // 0x26ba34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA30u, 0x26BA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26BA38u;
label_26ba38:
    // 0x26ba38: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x26ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26ba3c:
    // 0x26ba3c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_26ba40:
    // 0x26ba40: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26ba44:
    if (ctx->pc == 0x26BA44u) {
        ctx->pc = 0x26BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA40u;
        // 0x26ba44: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA48u;
        goto label_26ba48;
    }
    ctx->pc = 0x26BA40u;
    {
        const bool branch_taken_0x26ba40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ba40) {
            ctx->pc = 0x26BA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BA40u;
            // 0x26ba44: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BA64u;
            goto label_26ba64;
        }
    }
    ctx->pc = 0x26BA48u;
label_26ba48:
    // 0x26ba48: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26ba48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ba4c:
    // 0x26ba4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x26ba4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_26ba50:
    // 0x26ba50: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26ba50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ba54:
    // 0x26ba54: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26ba54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26ba58:
    // 0x26ba58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ba5c:
    // 0x26ba5c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26ba60:
    // 0x26ba60: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26ba64:
    // 0x26ba64: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x26ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_26ba68:
    // 0x26ba68: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x26ba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_26ba6c:
    // 0x26ba6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26ba6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_26ba70:
    // 0x26ba70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ba70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26ba74:
    // 0x26ba74: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26ba74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ba78:
    // 0x26ba78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26ba78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26ba7c:
    // 0x26ba7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x26ba7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_26ba80:
    // 0x26ba80: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x26ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_26ba84:
    // 0x26ba84: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_26ba88:
    if (ctx->pc == 0x26BA88u) {
        ctx->pc = 0x26BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA84u;
        // 0x26ba88: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BA8Cu;
        goto label_26ba8c;
    }
    ctx->pc = 0x26BA84u;
    {
        const bool branch_taken_0x26ba84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26ba84) {
            ctx->pc = 0x26BA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26BA84u;
            // 0x26ba88: 0xae000100  sw          $zero, 0x100($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26BAA8u;
            goto label_26baa8;
        }
    }
    ctx->pc = 0x26BA8Cu;
label_26ba8c:
    // 0x26ba8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ba90:
    // 0x26ba90: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x26ba90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_26ba94:
    // 0x26ba94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x26ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ba98:
    // 0x26ba98: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x26ba98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_26ba9c:
    // 0x26ba9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x26ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26baa0:
    // 0x26baa0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x26baa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_26baa4:
    // 0x26baa4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x26baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_26baa8:
    // 0x26baa8: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x26baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_26baac:
    // 0x26baac: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26baacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_26bab0:
    // 0x26bab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26bab4:
    // 0x26bab4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26bab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_26bab8:
    // 0x26bab8: 0xc074024  jal         func_1D0090
label_26babc:
    if (ctx->pc == 0x26BABCu) {
        ctx->pc = 0x26BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAB8u;
        // 0x26babc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BAC0u;
        goto label_26bac0;
    }
    ctx->pc = 0x26BAB8u;
    SET_GPR_U32(ctx, 31, 0x26BAC0u);
    ctx->pc = 0x26BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BAB8u;
    // 0x26babc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0090u, 0x26BAB8u, 0x26BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BAC0u;
label_26bac0:
    // 0x26bac0: 0xae300730  sw          $s0, 0x730($s1)
    ctx->pc = 0x26bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1840), GPR_U32(ctx, 16));
label_26bac4:
    // 0x26bac4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26bac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26bac8:
    // 0x26bac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26bacc:
    // 0x26bacc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26baccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26bad0:
    // 0x26bad0: 0x3e00008  jr          $ra
label_26bad4:
    if (ctx->pc == 0x26BAD4u) {
        ctx->pc = 0x26BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAD0u;
        // 0x26bad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26BAD8u;
        goto label_fallthrough_0x26bad0;
    }
    ctx->pc = 0x26BAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BAD0u;
        // 0x26bad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26bad0:
    ctx->pc = 0x26BAD8u;
}
