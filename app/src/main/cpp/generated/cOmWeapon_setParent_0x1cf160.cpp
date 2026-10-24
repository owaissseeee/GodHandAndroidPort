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

// Function: cOmWeapon_setParent
// Address: 0x1cf160 - 0x1cf340
void cOmWeapon_setParent_0x1cf160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmWeapon_setParent_0x1cf160");
#endif

    switch (ctx->pc) {
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf328u: goto label_1cf328;
        default: break;
    }

    ctx->pc = 0x1cf160u;

    // 0x1cf160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf168: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cf168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cf16c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cf16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cf170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf178: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cf178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf17c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1cf17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1cf180: 0x4c00002  bltz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF180u;
    {
        const bool branch_taken_0x1cf180 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x1CF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF180u;
        // 0x1cf184: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf180) {
            ctx->pc = 0x1CF18Cu;
            goto label_1cf18c;
        }
    }
    ctx->pc = 0x1CF188u;
    // 0x1cf188: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1cf188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1cf18c:
    // 0x1cf18c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cf18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cf190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF190u;
    {
        const bool branch_taken_0x1cf190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF190u;
        // 0x1cf194: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf190) {
            ctx->pc = 0x1CF1A8u;
            goto label_1cf1a8;
        }
    }
    ctx->pc = 0x1CF198u;
    // 0x1cf198: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1cf19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cf1a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF1A0u;
    {
        const bool branch_taken_0x1cf1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1A0u;
        // 0x1cf1a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1a0) {
            ctx->pc = 0x1CF1ACu;
            goto label_1cf1ac;
        }
    }
    ctx->pc = 0x1CF1A8u;
label_1cf1a8:
    // 0x1cf1a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cf1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1ac:
    // 0x1cf1ac: 0x5080005f  beql        $a0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x1CF1ACu;
    {
        const bool branch_taken_0x1cf1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1ac) {
            ctx->pc = 0x1CF1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF1ACu;
            // 0x1cf1b0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF32Cu;
            goto label_1cf32c;
        }
    }
    ctx->pc = 0x1CF1B4u;
    // 0x1cf1b4: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1cf1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1cf1b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF1B8u;
    {
        const bool branch_taken_0x1cf1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1B8u;
        // 0x1cf1bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1b8) {
            ctx->pc = 0x1CF1CCu;
            goto label_1cf1cc;
        }
    }
    ctx->pc = 0x1CF1C0u;
    // 0x1cf1c0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1cf1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1cf1c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF1C4u;
    {
        const bool branch_taken_0x1cf1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1C4u;
        // 0x1cf1c8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1c4) {
            ctx->pc = 0x1CF1D0u;
            goto label_1cf1d0;
        }
    }
    ctx->pc = 0x1CF1CCu;
label_1cf1cc:
    // 0x1cf1cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf1d0:
    // 0x1cf1d0: 0x50400056  beql        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x1CF1D0u;
    {
        const bool branch_taken_0x1cf1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1d0) {
            ctx->pc = 0x1CF1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF1D0u;
            // 0x1cf1d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF32Cu;
            goto label_1cf32c;
        }
    }
    ctx->pc = 0x1CF1D8u;
    // 0x1cf1d8: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x1cf1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x1cf1dc: 0xac440148  sw          $a0, 0x148($v0)
    ctx->pc = 0x1cf1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 4));
    // 0x1cf1e0: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1cf1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1cf1e4: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1cf1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
    // 0x1cf1e8: 0x10670007  beq         $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF1E8u;
    {
        const bool branch_taken_0x1cf1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1CF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1E8u;
        // 0x1cf1ec: 0xac400108  sw          $zero, 0x108($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1e8) {
            ctx->pc = 0x1CF208u;
            goto label_1cf208;
        }
    }
    ctx->pc = 0x1CF1F0u;
    // 0x1cf1f0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1cf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cf1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1cf1f8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1cf1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1fc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cf1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf200: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1cf200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf204: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1cf208:
    // 0x1cf208: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1cf20c: 0x50680008  beql        $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF20Cu;
    {
        const bool branch_taken_0x1cf20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        if (branch_taken_0x1cf20c) {
            ctx->pc = 0x1CF210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF20Cu;
            // 0x1cf210: 0xae060604  sw          $a2, 0x604($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF230u;
            goto label_1cf230;
        }
    }
    ctx->pc = 0x1CF214u;
    // 0x1cf214: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1cf214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf218: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1cf218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x1cf21c: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1cf21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf220: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1cf220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1cf224: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1cf224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf228: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1cf228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1cf22c: 0xae060604  sw          $a2, 0x604($s0)
    ctx->pc = 0x1cf22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 6));
label_1cf230:
    // 0x1cf230: 0x26020610  addiu       $v0, $s0, 0x610
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1cf234: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF234u;
    {
        const bool branch_taken_0x1cf234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1CF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF234u;
        // 0x1cf238: 0xae110600  sw          $s1, 0x600($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf234) {
            ctx->pc = 0x1CF254u;
            goto label_1cf254;
        }
    }
    ctx->pc = 0x1CF23Cu;
    // 0x1cf23c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1cf23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf240: 0xe6000610  swc1        $f0, 0x610($s0)
    ctx->pc = 0x1cf240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1552), bits); }
    // 0x1cf244: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1cf244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf248: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cf24c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1cf24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf250: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cf254:
    // 0x1cf254: 0x26020620  addiu       $v0, $s0, 0x620
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1568));
    // 0x1cf258: 0x50480008  beql        $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF258u;
    {
        const bool branch_taken_0x1cf258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x1cf258) {
            ctx->pc = 0x1CF25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF258u;
            // 0x1cf25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF27Cu;
            goto label_1cf27c;
        }
    }
    ctx->pc = 0x1CF260u;
    // 0x1cf260: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1cf260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf264: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x1cf264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x1cf268: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1cf268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf26c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cf26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cf270: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x1cf270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf274: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cf274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cf278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf27c:
    // 0x1cf27c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cf27cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf280: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cf280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf288: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cf288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf28c: 0xa2000664  sb          $zero, 0x664($s0)
    ctx->pc = 0x1cf28cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1636), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cf290: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x1CF290u;
    SET_GPR_U32(ctx, 31, 0x1CF298u);
    ctx->pc = 0x1CF294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF290u;
    // 0x1cf294: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x1CF290u, 0x1CF298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF298u;
label_1cf298:
    // 0x1cf298: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1CF298u;
    SET_GPR_U32(ctx, 31, 0x1CF2A0u);
    ctx->pc = 0x1CF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF298u;
    // 0x1cf29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1CF298u, 0x1CF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2A0u;
label_1cf2a0:
    // 0x1cf2a0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1cf2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1cf2a4: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x1cf2a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x1cf2a8: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1cf2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1cf2ac: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1CF2ACu;
    SET_GPR_U32(ctx, 31, 0x1CF2B4u);
    ctx->pc = 0x1CF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2ACu;
    // 0x1cf2b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1CF2ACu, 0x1CF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2B4u;
label_1cf2b4:
    // 0x1cf2b4: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1cf2b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1cf2b8: 0x24020369  addiu       $v0, $zero, 0x369
    ctx->pc = 0x1cf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    // 0x1cf2bc: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CF2BCu;
    {
        const bool branch_taken_0x1cf2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf2bc) {
            ctx->pc = 0x1CF2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF2BCu;
            // 0x1cf2c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF32Cu;
            goto label_1cf32c;
        }
    }
    ctx->pc = 0x1CF2C4u;
    // 0x1cf2c4: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CF2C4u;
    {
        const bool branch_taken_0x1cf2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2C4u;
        // 0x1cf2c8: 0x24020252  addiu       $v0, $zero, 0x252 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2c4) {
            ctx->pc = 0x1CF328u;
            goto label_1cf328;
        }
    }
    ctx->pc = 0x1CF2CCu;
    // 0x1cf2cc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x1cf2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x1cf2d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF2D0u;
    {
        const bool branch_taken_0x1cf2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF2D0u;
        // 0x1cf2d4: 0x24020263  addiu       $v0, $zero, 0x263 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf2d0) {
            ctx->pc = 0x1CF300u;
            goto label_1cf300;
        }
    }
    ctx->pc = 0x1CF2D8u;
    // 0x1cf2d8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cf2d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf2dc: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1cf2e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cf2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cf2e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf2ec: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1cf2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf2f0: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CF2F0u;
    SET_GPR_U32(ctx, 31, 0x1CF2F8u);
    ctx->pc = 0x1CF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF2F0u;
    // 0x1cf2f4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CF2F0u, 0x1CF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF2F8u;
label_1cf2f8:
    // 0x1cf2f8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x1cf2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x1cf2fc: 0x24020263  addiu       $v0, $zero, 0x263
    ctx->pc = 0x1cf2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 611));
label_1cf300:
    // 0x1cf300: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF300u;
    {
        const bool branch_taken_0x1cf300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cf300) {
            ctx->pc = 0x1CF304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF300u;
            // 0x1cf304: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF32Cu;
            goto label_1cf32c;
        }
    }
    ctx->pc = 0x1CF308u;
    // 0x1cf308: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cf308u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1cf30c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf310: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1cf310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1cf314: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1cf314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1cf318: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf31c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1cf31cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf320: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CF320u;
    SET_GPR_U32(ctx, 31, 0x1CF328u);
    ctx->pc = 0x1CF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF320u;
    // 0x1cf324: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CF320u, 0x1CF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF328u;
label_1cf328:
    // 0x1cf328: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cf328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cf32c:
    // 0x1cf32c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cf32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf334: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF334u;
        // 0x1cf338: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF33Cu;
    // 0x1cf33c: 0x0  nop
    ctx->pc = 0x1cf33cu;
    // NOP
    ctx->pc = 0x1cf340u;
}
