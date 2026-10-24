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

// Function: func_001CA040
// Address: 0x1ca040 - 0x1ca1f8
void func_001CA040_0x1ca040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CA040_0x1ca040");
#endif

    switch (ctx->pc) {
        case 0x1ca064u: goto label_1ca064;
        case 0x1ca11cu: goto label_1ca11c;
        case 0x1ca1b0u: goto label_1ca1b0;
        default: break;
    }

    ctx->pc = 0x1ca040u;

    // 0x1ca040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ca040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ca044: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ca044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ca048: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca04c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1ca04cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ca050: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ca050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ca054: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ca054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ca058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca05c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CA05Cu;
    SET_GPR_U32(ctx, 31, 0x1CA064u);
    ctx->pc = 0x1CA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA05Cu;
    // 0x1ca060: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CA05Cu, 0x1CA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA064u;
label_1ca064:
    // 0x1ca064: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x1ca064u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca068: 0x240203aa  addiu       $v0, $zero, 0x3AA
    ctx->pc = 0x1ca068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 938));
    // 0x1ca06c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA06Cu;
    {
        const bool branch_taken_0x1ca06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA06Cu;
        // 0x1ca070: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca06c) {
            ctx->pc = 0x1CA080u;
            goto label_1ca080;
        }
    }
    ctx->pc = 0x1CA074u;
    // 0x1ca074: 0x240203ab  addiu       $v0, $zero, 0x3AB
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 939));
    // 0x1ca078: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA078u;
    {
        const bool branch_taken_0x1ca078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca078) {
            ctx->pc = 0x1CA07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA078u;
            // 0x1ca07c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA0E8u;
            goto label_1ca0e8;
        }
    }
    ctx->pc = 0x1CA080u;
label_1ca080:
    // 0x1ca080: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ca080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ca084: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ca084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca088: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ca088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ca08c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA08Cu;
    {
        const bool branch_taken_0x1ca08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA08Cu;
        // 0x1ca090: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca08c) {
            ctx->pc = 0x1CA0A0u;
            goto label_1ca0a0;
        }
    }
    ctx->pc = 0x1CA094u;
    // 0x1ca094: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ca094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ca098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA098u;
    {
        const bool branch_taken_0x1ca098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA098u;
        // 0x1ca09c: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca098) {
            ctx->pc = 0x1CA0A4u;
            goto label_1ca0a4;
        }
    }
    ctx->pc = 0x1CA0A0u;
label_1ca0a0:
    // 0x1ca0a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca0a4:
    // 0x1ca0a4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA0A4u;
    {
        const bool branch_taken_0x1ca0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0a4) {
            ctx->pc = 0x1CA0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0A4u;
            // 0x1ca0a8: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA0E8u;
            goto label_1ca0e8;
        }
    }
    ctx->pc = 0x1CA0ACu;
    // 0x1ca0ac: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1ca0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca0b0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1ca0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1ca0b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ca0b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ca0b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca0bc: 0x0  nop
    ctx->pc = 0x1ca0bcu;
    // NOP
    // 0x1ca0c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca0c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca0c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ca0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca0c8: 0x0  nop
    ctx->pc = 0x1ca0c8u;
    // NOP
    // 0x1ca0cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA0CCu;
    {
        const bool branch_taken_0x1ca0cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0CCu;
        // 0x1ca0d0: 0xe4400110  swc1        $f0, 0x110($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0cc) {
            ctx->pc = 0x1CA0D8u;
            goto label_1ca0d8;
        }
    }
    ctx->pc = 0x1CA0D4u;
    // 0x1ca0d4: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1ca0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1ca0d8:
    // 0x1ca0d8: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1ca0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca0dc: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1ca0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1ca0e0: 0xe4400118  swc1        $f0, 0x118($v0)
    ctx->pc = 0x1ca0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1ca0e4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ca0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1ca0e8:
    // 0x1ca0e8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA0E8u;
    {
        const bool branch_taken_0x1ca0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0e8) {
            ctx->pc = 0x1CA0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0E8u;
            // 0x1ca0ec: 0xc6210684  lwc1        $f1, 0x684($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA12Cu;
            goto label_1ca12c;
        }
    }
    ctx->pc = 0x1CA0F0u;
    // 0x1ca0f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ca0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca0f4: 0x962402fe  lhu         $a0, 0x2FE($s1)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x1ca0f8: 0x240203ae  addiu       $v0, $zero, 0x3AE
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 942));
    // 0x1ca0fc: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA0FCu;
    {
        const bool branch_taken_0x1ca0fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0FCu;
        // 0x1ca100: 0xa2230531  sb          $v1, 0x531($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0fc) {
            ctx->pc = 0x1CA11Cu;
            goto label_1ca11c;
        }
    }
    ctx->pc = 0x1CA104u;
    // 0x1ca104: 0x240203b7  addiu       $v0, $zero, 0x3B7
    ctx->pc = 0x1ca104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
    // 0x1ca108: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA108u;
    {
        const bool branch_taken_0x1ca108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA108u;
        // 0x1ca10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca108) {
            ctx->pc = 0x1CA11Cu;
            goto label_1ca11c;
        }
    }
    ctx->pc = 0x1CA110u;
    // 0x1ca110: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca114: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1CA114u;
    SET_GPR_U32(ctx, 31, 0x1CA11Cu);
    ctx->pc = 0x1CA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA114u;
    // 0x1ca118: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1CA114u, 0x1CA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA11Cu;
label_1ca11c:
    // 0x1ca11c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ca11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ca120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca124: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ca124u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ca128: 0xc6210684  lwc1        $f1, 0x684($s1)
    ctx->pc = 0x1ca128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca12c:
    // 0x1ca12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca130: 0x0  nop
    ctx->pc = 0x1ca130u;
    // NOP
    // 0x1ca134: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ca134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca138: 0x0  nop
    ctx->pc = 0x1ca138u;
    // NOP
    // 0x1ca13c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1CA13Cu;
    {
        const bool branch_taken_0x1ca13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA13Cu;
        // 0x1ca140: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca13c) {
            ctx->pc = 0x1CA1E0u;
            goto label_1ca1e0;
        }
    }
    ctx->pc = 0x1CA144u;
    // 0x1ca144: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x1ca144u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1ca148: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1ca148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ca14c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ca14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1ca150: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA150u;
    {
        const bool branch_taken_0x1ca150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA150u;
        // 0x1ca154: 0xe6200684  swc1        $f0, 0x684($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca150) {
            ctx->pc = 0x1CA164u;
            goto label_1ca164;
        }
    }
    ctx->pc = 0x1CA158u;
    // 0x1ca158: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ca15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA15Cu;
    {
        const bool branch_taken_0x1ca15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA15Cu;
        // 0x1ca160: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca15c) {
            ctx->pc = 0x1CA168u;
            goto label_1ca168;
        }
    }
    ctx->pc = 0x1CA164u;
label_1ca164:
    // 0x1ca164: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ca164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca168:
    // 0x1ca168: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CA168u;
    {
        const bool branch_taken_0x1ca168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca168) {
            ctx->pc = 0x1CA16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA168u;
            // 0x1ca16c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA1E0u;
            goto label_1ca1e0;
        }
    }
    ctx->pc = 0x1CA170u;
    // 0x1ca170: 0xc6210684  lwc1        $f1, 0x684($s1)
    ctx->pc = 0x1ca170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca178: 0x0  nop
    ctx->pc = 0x1ca178u;
    // NOP
    // 0x1ca17c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ca17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca180: 0x0  nop
    ctx->pc = 0x1ca180u;
    // NOP
    // 0x1ca184: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1CA184u;
    {
        const bool branch_taken_0x1ca184 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CA188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA184u;
        // 0x1ca188: 0x26220620  addiu       $v0, $s1, 0x620 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca184) {
            ctx->pc = 0x1CA1B8u;
            goto label_1ca1b8;
        }
    }
    ctx->pc = 0x1CA18Cu;
    // 0x1ca18c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1ca18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1ca190: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1ca190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1ca194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca198: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x1ca198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca19c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ca19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ca1a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ca1a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ca1a4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1ca1a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1ca1a8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1CA1A8u;
    SET_GPR_U32(ctx, 31, 0x1CA1B0u);
    ctx->pc = 0x1CA1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1A8u;
    // 0x1ca1ac: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1CA1A8u, 0x1CA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B0u;
label_1ca1b0:
    // 0x1ca1b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CA1B0u;
    {
        const bool branch_taken_0x1ca1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1B0u;
        // 0x1ca1b4: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1b0) {
            ctx->pc = 0x1CA1DCu;
            goto label_1ca1dc;
        }
    }
    ctx->pc = 0x1CA1B8u;
label_1ca1b8:
    // 0x1ca1b8: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x1ca1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1ca1bc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA1BCu;
    {
        const bool branch_taken_0x1ca1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca1bc) {
            ctx->pc = 0x1CA1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA1BCu;
            // 0x1ca1c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA1E0u;
            goto label_1ca1e0;
        }
    }
    ctx->pc = 0x1CA1C4u;
    // 0x1ca1c4: 0xc6200620  lwc1        $f0, 0x620($s1)
    ctx->pc = 0x1ca1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1c8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1ca1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1ca1cc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ca1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca1d0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1ca1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1ca1d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca1d8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ca1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ca1dc:
    // 0x1ca1dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ca1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ca1e0:
    // 0x1ca1e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ca1e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca1e8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1ca1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1ECu;
        // 0x1ca1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA1F4u;
    // 0x1ca1f4: 0x0  nop
    ctx->pc = 0x1ca1f4u;
    // NOP
    ctx->pc = 0x1ca1f8u;
}
