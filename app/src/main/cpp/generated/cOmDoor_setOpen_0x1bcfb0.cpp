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

// Function: cOmDoor_setOpen
// Address: 0x1bcfb0 - 0x1bd120
void cOmDoor_setOpen_0x1bcfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmDoor_setOpen_0x1bcfb0");
#endif

    switch (ctx->pc) {
        case 0x1bd0d4u: goto label_1bd0d4;
        default: break;
    }

    ctx->pc = 0x1bcfb0u;

    // 0x1bcfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bcfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bcfb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bcfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bcfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bcfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bcfbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bcfbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bcfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bcfc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bcfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcfc8: 0x9e030620  lwu         $v1, 0x620($s0)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1568)));
    // 0x1bcfcc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1bcfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bcfd0: 0x1044004d  beq         $v0, $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1BCFD0u;
    {
        const bool branch_taken_0x1bcfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFD0u;
        // 0x1bcfd4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfd0) {
            ctx->pc = 0x1BD108u;
            goto label_1bd108;
        }
    }
    ctx->pc = 0x1BCFD8u;
    // 0x1bcfd8: 0x3107b  dsra        $v0, $v1, 1
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> 1);
    // 0x1bcfdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bcfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bcfe0: 0x5044004a  beql        $v0, $a0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1BCFE0u;
    {
        const bool branch_taken_0x1bcfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bcfe0) {
            ctx->pc = 0x1BCFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCFE0u;
            // 0x1bcfe4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD10Cu;
            goto label_1bd10c;
        }
    }
    ctx->pc = 0x1BCFE8u;
    // 0x1bcfe8: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1bcfe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x1bcfec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bcfecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bcff0: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x1BCFF0u;
    {
        const bool branch_taken_0x1bcff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcff0) {
            ctx->pc = 0x1BCFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCFF0u;
            // 0x1bcff4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD10Cu;
            goto label_1bd10c;
        }
    }
    ctx->pc = 0x1BCFF8u;
    // 0x1bcff8: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1bcff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcffc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCFFCu;
    {
        const bool branch_taken_0x1bcffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFFCu;
        // 0x1bd000: 0xe6000638  swc1        $f0, 0x638($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcffc) {
            ctx->pc = 0x1BD014u;
            goto label_1bd014;
        }
    }
    ctx->pc = 0x1BD004u;
    // 0x1bd004: 0x50a4001b  beql        $a1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BD004u;
    {
        const bool branch_taken_0x1bd004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bd004) {
            ctx->pc = 0x1BD008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD004u;
            // 0x1bd008: 0x960302fe  lhu         $v1, 0x2FE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD074u;
            goto label_1bd074;
        }
    }
    ctx->pc = 0x1BD00Cu;
    // 0x1bd00c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1BD00Cu;
    {
        const bool branch_taken_0x1bd00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD00Cu;
        // 0x1bd010: 0x8e020620  lw          $v0, 0x620($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd00c) {
            ctx->pc = 0x1BD0DCu;
            goto label_1bd0dc;
        }
    }
    ctx->pc = 0x1BD014u;
label_1bd014:
    // 0x1bd014: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1bd014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1bd018: 0x24020354  addiu       $v0, $zero, 0x354
    ctx->pc = 0x1bd018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 852));
    // 0x1bd01c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD01Cu;
    {
        const bool branch_taken_0x1bd01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD01Cu;
        // 0x1bd020: 0x28620355  slti        $v0, $v1, 0x355 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)853) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd01c) {
            ctx->pc = 0x1BD048u;
            goto label_1bd048;
        }
    }
    ctx->pc = 0x1BD024u;
    // 0x1bd024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD024u;
    {
        const bool branch_taken_0x1bd024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD024u;
        // 0x1bd028: 0x24020314  addiu       $v0, $zero, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd024) {
            ctx->pc = 0x1BD03Cu;
            goto label_1bd03c;
        }
    }
    ctx->pc = 0x1BD02Cu;
    // 0x1bd02c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD02Cu;
    {
        const bool branch_taken_0x1bd02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD02Cu;
        // 0x1bd030: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd02c) {
            ctx->pc = 0x1BD04Cu;
            goto label_1bd04c;
        }
    }
    ctx->pc = 0x1BD034u;
    // 0x1bd034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BD034u;
    {
        const bool branch_taken_0x1bd034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd034) {
            ctx->pc = 0x1BD060u;
            goto label_1bd060;
        }
    }
    ctx->pc = 0x1BD03Cu;
label_1bd03c:
    // 0x1bd03c: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x1bd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1bd040: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD040u;
    {
        const bool branch_taken_0x1bd040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd040) {
            ctx->pc = 0x1BD044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD040u;
            // 0x1bd044: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD060u;
            goto label_1bd060;
        }
    }
    ctx->pc = 0x1BD048u;
label_1bd048:
    // 0x1bd048: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x1bd048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bd04c:
    // 0x1bd04c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1bd04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1bd050: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bd050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bd054: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd058: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BD058u;
    {
        const bool branch_taken_0x1bd058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD058u;
        // 0x1bd05c: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd058) {
            ctx->pc = 0x1BD0CCu;
            goto label_1bd0cc;
        }
    }
    ctx->pc = 0x1BD060u;
label_1bd060:
    // 0x1bd060: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x1bd060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x1bd064: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1bd064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1bd068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd06c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1BD06Cu;
    {
        const bool branch_taken_0x1bd06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD06Cu;
        // 0x1bd070: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd06c) {
            ctx->pc = 0x1BD0CCu;
            goto label_1bd0cc;
        }
    }
    ctx->pc = 0x1BD074u;
label_1bd074:
    // 0x1bd074: 0x24020354  addiu       $v0, $zero, 0x354
    ctx->pc = 0x1bd074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 852));
    // 0x1bd078: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BD078u;
    {
        const bool branch_taken_0x1bd078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD078u;
        // 0x1bd07c: 0x28620355  slti        $v0, $v1, 0x355 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)853) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd078) {
            ctx->pc = 0x1BD0A4u;
            goto label_1bd0a4;
        }
    }
    ctx->pc = 0x1BD080u;
    // 0x1bd080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD080u;
    {
        const bool branch_taken_0x1bd080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD080u;
        // 0x1bd084: 0x24020314  addiu       $v0, $zero, 0x314 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 788));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd080) {
            ctx->pc = 0x1BD098u;
            goto label_1bd098;
        }
    }
    ctx->pc = 0x1BD088u;
    // 0x1bd088: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD088u;
    {
        const bool branch_taken_0x1bd088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bd088) {
            ctx->pc = 0x1BD0A4u;
            goto label_1bd0a4;
        }
    }
    ctx->pc = 0x1BD090u;
    // 0x1bd090: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD090u;
    {
        const bool branch_taken_0x1bd090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD090u;
        // 0x1bd094: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd090) {
            ctx->pc = 0x1BD0B8u;
            goto label_1bd0b8;
        }
    }
    ctx->pc = 0x1BD098u;
label_1bd098:
    // 0x1bd098: 0x24020420  addiu       $v0, $zero, 0x420
    ctx->pc = 0x1bd098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1bd09c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD09Cu;
    {
        const bool branch_taken_0x1bd09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd09c) {
            ctx->pc = 0x1BD0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD09Cu;
            // 0x1bd0a0: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD0B8u;
            goto label_1bd0b8;
        }
    }
    ctx->pc = 0x1BD0A4u;
label_1bd0a4:
    // 0x1bd0a4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1bd0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1bd0a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1bd0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1bd0ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bd0b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD0B0u;
    {
        const bool branch_taken_0x1bd0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0B0u;
        // 0x1bd0b4: 0xc6000104  lwc1        $f0, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0b0) {
            ctx->pc = 0x1BD0C4u;
            goto label_1bd0c4;
        }
    }
    ctx->pc = 0x1BD0B8u;
label_1bd0b8:
    // 0x1bd0b8: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x1bd0bc: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x1bd0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x1bd0c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bd0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bd0c4:
    // 0x1bd0c4: 0x0  nop
    ctx->pc = 0x1bd0c4u;
    // NOP
    // 0x1bd0c8: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1bd0c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_1bd0cc:
    // 0x1bd0cc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BD0CCu;
    SET_GPR_U32(ctx, 31, 0x1BD0D4u);
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BD0CCu, 0x1BD0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD0D4u;
label_1bd0d4:
    // 0x1bd0d4: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1bd0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1bd0d8: 0x8e020620  lw          $v0, 0x620($s0)
    ctx->pc = 0x1bd0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1568)));
label_1bd0dc:
    // 0x1bd0dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1bd0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1bd0e0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD0E0u;
    {
        const bool branch_taken_0x1bd0e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0E0u;
        // 0x1bd0e4: 0xae020620  sw          $v0, 0x620($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0e0) {
            ctx->pc = 0x1BD100u;
            goto label_1bd100;
        }
    }
    ctx->pc = 0x1BD0E8u;
    // 0x1bd0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd0ec: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bd0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd0f0: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1bd0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bd0f4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1bd0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd0f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD0F8u;
    {
        const bool branch_taken_0x1bd0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD0F8u;
        // 0x1bd0fc: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd0f8) {
            ctx->pc = 0x1BD108u;
            goto label_1bd108;
        }
    }
    ctx->pc = 0x1BD100u;
label_1bd100:
    // 0x1bd100: 0xc6000640  lwc1        $f0, 0x640($s0)
    ctx->pc = 0x1bd100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd104: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1bd104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_1bd108:
    // 0x1bd108: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bd108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd10c:
    // 0x1bd10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd114: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD114u;
        // 0x1bd118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD11Cu;
    // 0x1bd11c: 0x0  nop
    ctx->pc = 0x1bd11cu;
    // NOP
    ctx->pc = 0x1bd120u;
}
