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

// Function: func_00293138
// Address: 0x293138 - 0x293718
void func_00293138_0x293138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00293138_0x293138");
#endif

    switch (ctx->pc) {
        case 0x2931e0u: goto label_2931e0;
        case 0x293214u: goto label_293214;
        case 0x293274u: goto label_293274;
        case 0x293284u: goto label_293284;
        case 0x2932c0u: goto label_2932c0;
        case 0x293318u: goto label_293318;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933d4u: goto label_2933d4;
        case 0x293418u: goto label_293418;
        case 0x29342cu: goto label_29342c;
        case 0x29343cu: goto label_29343c;
        case 0x2934a4u: goto label_2934a4;
        case 0x2934ecu: goto label_2934ec;
        case 0x293534u: goto label_293534;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935e0u: goto label_2935e0;
        default: break;
    }

    ctx->pc = 0x293138u;

    // 0x293138: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x293138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x29313c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x29313cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x293140: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x293140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x293144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x293144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293148: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x293148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x29314c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x29314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x293150: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x293150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x293154: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x293154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x293158: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x293158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x29315c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x29315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x293160: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x293160u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x293164: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x293164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x293168: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x293168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x29316c: 0x1060015d  beqz        $v1, . + 4 + (0x15D << 2)
    ctx->pc = 0x29316Cu;
    {
        const bool branch_taken_0x29316c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29316Cu;
        // 0x293170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29316c) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x293174u;
    // 0x293174: 0x8e240564  lw          $a0, 0x564($s1)
    ctx->pc = 0x293174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x293178: 0x1080015b  beqz        $a0, . + 4 + (0x15B << 2)
    ctx->pc = 0x293178u;
    {
        const bool branch_taken_0x293178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293178u;
        // 0x29317c: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293178) {
            ctx->pc = 0x2936E8u;
            goto label_2936e8;
        }
    }
    ctx->pc = 0x293180u;
    // 0x293180: 0x8462054a  lh          $v0, 0x54A($v1)
    ctx->pc = 0x293180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1354)));
    // 0x293184: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293184u;
    {
        const bool branch_taken_0x293184 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x293184) {
            ctx->pc = 0x293188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293184u;
            // 0x293188: 0x8482054a  lh          $v0, 0x54A($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293194u;
            goto label_293194;
        }
    }
    ctx->pc = 0x29318Cu;
    // 0x29318c: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x29318Cu;
    {
        const bool branch_taken_0x29318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29318Cu;
        // 0x293190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29318c) {
            ctx->pc = 0x2936E8u;
            goto label_2936e8;
        }
    }
    ctx->pc = 0x293194u;
label_293194:
    // 0x293194: 0x18400153  blez        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x293194u;
    {
        const bool branch_taken_0x293194 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x293198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293194u;
        // 0x293198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293194) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x29319Cu;
    // 0x29319c: 0x906202f4  lbu         $v0, 0x2F4($v1)
    ctx->pc = 0x29319cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 756)));
    // 0x2931a0: 0x14400150  bnez        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x2931A0u;
    {
        const bool branch_taken_0x2931a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931A0u;
        // 0x2931a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931a0) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2931A8u;
    // 0x2931a8: 0x908202f4  lbu         $v0, 0x2F4($a0)
    ctx->pc = 0x2931a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x2931ac: 0x1440014d  bnez        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x2931ACu;
    {
        const bool branch_taken_0x2931ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931ACu;
        // 0x2931b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931ac) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2931B4u;
    // 0x2931b4: 0x946203ac  lhu         $v0, 0x3AC($v1)
    ctx->pc = 0x2931b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 940)));
    // 0x2931b8: 0x3042090c  andi        $v0, $v0, 0x90C
    ctx->pc = 0x2931b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2316);
    // 0x2931bc: 0x14400149  bnez        $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x2931BCu;
    {
        const bool branch_taken_0x2931bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931BCu;
        // 0x2931c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931bc) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2931C4u;
    // 0x2931c4: 0x948203ac  lhu         $v0, 0x3AC($a0)
    ctx->pc = 0x2931c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 940)));
    // 0x2931c8: 0x3042090c  andi        $v0, $v0, 0x90C
    ctx->pc = 0x2931c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2316);
    // 0x2931cc: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x2931CCu;
    {
        const bool branch_taken_0x2931cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931CCu;
        // 0x2931d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931cc) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2931D4u;
    // 0x2931d4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2931d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2931d8: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2931D8u;
    SET_GPR_U32(ctx, 31, 0x2931E0u);
    ctx->pc = 0x2931DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2931D8u;
    // 0x2931dc: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2931D8u, 0x2931E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2931E0u;
label_2931e0:
    // 0x2931e0: 0x14400140  bnez        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x2931E0u;
    {
        const bool branch_taken_0x2931e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931E0u;
        // 0x2931e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931e0) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2931E8u;
    // 0x2931e8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2931e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2931ec: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x2931ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x2931f0: 0x1460013c  bnez        $v1, . + 4 + (0x13C << 2)
    ctx->pc = 0x2931F0u;
    {
        const bool branch_taken_0x2931f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2931F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931F0u;
        // 0x2931f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2931f0) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2931F8u;
    // 0x2931f8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2931f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2931fc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2931fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293200: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x293200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293204: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x293204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x293208: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x293208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x29320c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29320Cu;
    SET_GPR_U32(ctx, 31, 0x293214u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29320Cu, 0x293214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293214u;
label_293214:
    // 0x293214: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x293214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x293218: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x293218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29321c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29321Cu;
    {
        const bool branch_taken_0x29321c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x293220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29321Cu;
        // 0x293220: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29321c) {
            ctx->pc = 0x293240u;
            goto label_293240;
        }
    }
    ctx->pc = 0x293224u;
    // 0x293224: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x293224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293228: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x293228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29322c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x29322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293230: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x293230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x293234: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x293234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293238: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x293238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29323c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x29323cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293240:
    // 0x293240: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x293240u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x293244: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x293244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x293248: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x293248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29324c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x29324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x293250: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293254: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x293254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x293258: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x29325c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29325cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293260: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x293260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x293264: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x293264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x293268: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x293268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x29326c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29326Cu;
    SET_GPR_U32(ctx, 31, 0x293274u);
    ctx->pc = 0x293270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29326Cu;
    // 0x293270: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29326Cu, 0x293274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293274u;
label_293274:
    // 0x293274: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x293274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293278: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x293278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29327c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29327Cu;
    SET_GPR_U32(ctx, 31, 0x293284u);
    ctx->pc = 0x293280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29327Cu;
    // 0x293280: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29327Cu, 0x293284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293284u;
label_293284:
    // 0x293284: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x293284u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x293288: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x293288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29328c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29328cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x293290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x293290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293294: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x293294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x293298: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x293298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29329c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x29329cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2932a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2932a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932a4: 0xafb60020  sw          $s6, 0x20($sp)
    ctx->pc = 0x2932a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
    // 0x2932a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2932a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932ac: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2932acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2932b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2932b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2932b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932b8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2932B8u;
    SET_GPR_U32(ctx, 31, 0x2932C0u);
    ctx->pc = 0x2932BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2932B8u;
    // 0x2932bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2932B8u, 0x2932C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2932C0u;
label_2932c0:
    // 0x2932c0: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2932C0u;
    {
        const bool branch_taken_0x2932c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2932C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932C0u;
        // 0x2932c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932c0) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2932C8u;
    // 0x2932c8: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x2932c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2932cc: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2932ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2932d0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2932d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2932d4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2932d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2932d8: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2932d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2932dc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2932dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2932e0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2932e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2932e4: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2932e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2932e8: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2932e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2932ec: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2932ECu;
    {
        const bool branch_taken_0x2932ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2932F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932ECu;
        // 0x2932f0: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932ec) {
            ctx->pc = 0x293308u;
            goto label_293308;
        }
    }
    ctx->pc = 0x2932F4u;
    // 0x2932f4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2932f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2932f8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2932f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2932fc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2932fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293300: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x293300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293304: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x293304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_293308:
    // 0x293308: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x293308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x29330c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29330cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x293310: 0xc04078a  jal         func_101E28
    ctx->pc = 0x293310u;
    SET_GPR_U32(ctx, 31, 0x293318u);
    ctx->pc = 0x293314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293310u;
    // 0x293314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x293310u, 0x293318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293318u;
label_293318:
    // 0x293318: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x293318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29331c: 0x0  nop
    ctx->pc = 0x29331cu;
    // NOP
    // 0x293320: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x293320u;
    {
        const bool branch_taken_0x293320 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293320u;
        // 0x293324: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293320) {
            ctx->pc = 0x293364u;
            goto label_293364;
        }
    }
    ctx->pc = 0x293328u;
    // 0x293328: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29332c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29332cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x293330: 0x0  nop
    ctx->pc = 0x293330u;
    // NOP
    // 0x293334: 0x0  nop
    ctx->pc = 0x293334u;
    // NOP
    // 0x293338: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x293338u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x29333c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29333cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x293340: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x293340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x293344: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x293344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293348: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x293348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29334c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x29334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x293350: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x293350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293354: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x293354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x293358: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x293358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29335c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x29335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293360: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x293360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_293364:
    // 0x293364: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x293364u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x293368: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x293368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x29336c: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x29336Cu;
    {
        const bool branch_taken_0x29336c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x293370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29336Cu;
        // 0x293370: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29336c) {
            ctx->pc = 0x293388u;
            goto label_293388;
        }
    }
    ctx->pc = 0x293374u;
    // 0x293374: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x293374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293378: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x293378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29337c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x29337cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x293380: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x293380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293384: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x293384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_293388:
    // 0x293388: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x293388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x29338c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29338cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x293390: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x293390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293394: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x293394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x293398: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x293398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x29339c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x29339cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2933a0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2933a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2933a4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2933a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2933a8: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2933a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2933ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2933acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2933b0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2933b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2933b4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2933B4u;
    SET_GPR_U32(ctx, 31, 0x2933BCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2933B4u, 0x2933BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933BCu;
label_2933bc:
    // 0x2933bc: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2933bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2933c0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2933c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2933c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2933c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2933c8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2933c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2933cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2933CCu;
    SET_GPR_U32(ctx, 31, 0x2933D4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2933CCu, 0x2933D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933D4u;
label_2933d4:
    // 0x2933d4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2933d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2933d8: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x2933d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2933dc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2933dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2933e0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2933e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2933e4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2933e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2933e8: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2933e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2933ec: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2933ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2933f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2933f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2933f4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2933f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2933f8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2933f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2933fc: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x2933fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293400: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293404: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x293404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x293408: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x293408u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x29340c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x29340cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x293410: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x293410u;
    SET_GPR_U32(ctx, 31, 0x293418u);
    ctx->pc = 0x293414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293410u;
    // 0x293414: 0xe7b40074  swc1        $f20, 0x74($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x293410u, 0x293418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293418u;
label_293418:
    // 0x293418: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x293418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x29341c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x29341cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x293420: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x293420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x293424: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x293424u;
    SET_GPR_U32(ctx, 31, 0x29342Cu);
    ctx->pc = 0x293428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293424u;
    // 0x293428: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x293424u, 0x29342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29342Cu;
label_29342c:
    // 0x29342c: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x29342cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x293430: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x293430u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x293434: 0xc051e62  jal         func_147988
    ctx->pc = 0x293434u;
    SET_GPR_U32(ctx, 31, 0x29343Cu);
    ctx->pc = 0x293438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293434u;
    // 0x293438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x293434u, 0x29343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29343Cu;
label_29343c:
    // 0x29343c: 0x12700006  beq         $s3, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29343Cu;
    {
        const bool branch_taken_0x29343c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x293440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29343Cu;
        // 0x293440: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29343c) {
            ctx->pc = 0x293458u;
            goto label_293458;
        }
    }
    ctx->pc = 0x293444u;
    // 0x293444: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x293444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x293448: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x293448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29344c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x29344cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x293450: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x293450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293454: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x293454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_293458:
    // 0x293458: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x293458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29345c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29345cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293460: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x293460u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x293464: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x293464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293468: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x293468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x29346c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x29346cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x293470: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x293470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x293474: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x293474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x293478: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x293478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29347c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29347cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293480: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x293480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x293484: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x293484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x293488: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x293488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x29348c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29348cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x293490: 0xc4400118  lwc1        $f0, 0x118($v0)
    ctx->pc = 0x293490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293494: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x293494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x293498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29349c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29349Cu;
    SET_GPR_U32(ctx, 31, 0x2934A4u);
    ctx->pc = 0x2934A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29349Cu;
    // 0x2934a0: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29349Cu, 0x2934A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934A4u;
label_2934a4:
    // 0x2934a4: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2934a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2934a8: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2934a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2934ac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2934acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2934b0: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2934b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2934b4: 0xafb60020  sw          $s6, 0x20($sp)
    ctx->pc = 0x2934b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
    // 0x2934b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2934b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2934bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2934c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2934c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2934c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2934c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2934c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2934ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2934d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2934d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2934d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2934d8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x2934d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2934dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2934dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2934e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2934e4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2934E4u;
    SET_GPR_U32(ctx, 31, 0x2934ECu);
    ctx->pc = 0x2934E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934E4u;
    // 0x2934e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2934E4u, 0x2934ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934ECu;
label_2934ec:
    // 0x2934ec: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2934ECu;
    {
        const bool branch_taken_0x2934ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2934F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934ECu;
        // 0x2934f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2934ec) {
            ctx->pc = 0x2936E4u;
            goto label_2936e4;
        }
    }
    ctx->pc = 0x2934F4u;
    // 0x2934f4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2934f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2934f8: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2934f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2934fc: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2934fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x293500: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x293500u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x293504: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x293504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293508: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x293508u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29350c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x29350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293510: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x293510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293514: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x293514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293518: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x293518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29351c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x29351cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x293520: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x293520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x293524: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x293524u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x293528: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x293528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x29352c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x29352Cu;
    SET_GPR_U32(ctx, 31, 0x293534u);
    ctx->pc = 0x293530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29352Cu;
    // 0x293530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x29352Cu, 0x293534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293534u;
label_293534:
    // 0x293534: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x293534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x293538: 0x0  nop
    ctx->pc = 0x293538u;
    // NOP
    // 0x29353c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x29353Cu;
    {
        const bool branch_taken_0x29353c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x293540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29353Cu;
        // 0x293540: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29353c) {
            ctx->pc = 0x293580u;
            goto label_293580;
        }
    }
    ctx->pc = 0x293544u;
    // 0x293544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x293544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x293548: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x293548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29354c: 0x0  nop
    ctx->pc = 0x29354cu;
    // NOP
    // 0x293550: 0x0  nop
    ctx->pc = 0x293550u;
    // NOP
    // 0x293554: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x293554u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x293558: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x293558u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29355c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x29355cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x293560: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x293560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293564: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x293564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x293568: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x293568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x29356c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x29356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293570: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x293570u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x293574: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x293574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x293578: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x293578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29357c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x29357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_293580:
    // 0x293580: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x293580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x293584: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x293584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x293588: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x293588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29358c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x29358cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293590: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x293590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293594: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x293594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x293598: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x293598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29359c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x29359cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2935a0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2935a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2935a4: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2935a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2935a8: 0x4408a800  mfc1        $t0, $f21
    ctx->pc = 0x2935a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2935ac: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2935acu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2935b0: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2935b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2935b4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2935b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2935b8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2935b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2935bc: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x2935bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2935c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2935c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2935c4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2935c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2935c8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2935C8u;
    SET_GPR_U32(ctx, 31, 0x2935D0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2935C8u, 0x2935D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935D0u;
label_2935d0:
    // 0x2935d0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2935d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2935d4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2935d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2935d8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2935D8u;
    SET_GPR_U32(ctx, 31, 0x2935E0u);
    ctx->pc = 0x2935DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935D8u;
    // 0x2935dc: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2935D8u, 0x2935E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935E0u;
label_2935e0:
    // 0x2935e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2935e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2935e4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2935E4u;
    {
        const bool branch_taken_0x2935e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935e4) {
            ctx->pc = 0x2935E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2935E4u;
            // 0x2935e8: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293654u;
            goto label_293654;
        }
    }
    ctx->pc = 0x2935ECu;
    // 0x2935ec: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x2935ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x2935f0: 0x24620580  addiu       $v0, $v1, 0x580
    ctx->pc = 0x2935f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x2935f4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2935F4u;
    {
        const bool branch_taken_0x2935f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2935F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2935F4u;
        // 0x2935f8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935f4) {
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x2935FCu;
    // 0x2935fc: 0xe4600580  swc1        $f0, 0x580($v1)
    ctx->pc = 0x2935fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1408), bits); }
    // 0x293600: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x293600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293604: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293608: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x293608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29360c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293610:
    // 0x293610: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x293610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x293614: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x293614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x293618: 0xa04302f5  sb          $v1, 0x2F5($v0)
    ctx->pc = 0x293618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x29361c: 0xa04002f7  sb          $zero, 0x2F7($v0)
    ctx->pc = 0x29361cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x293620: 0xa04002f4  sb          $zero, 0x2F4($v0)
    ctx->pc = 0x293620u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x293624: 0xa04002f6  sb          $zero, 0x2F6($v0)
    ctx->pc = 0x293624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x293628: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x293628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x29362c: 0x24620580  addiu       $v0, $v1, 0x580
    ctx->pc = 0x29362cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x293630: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x293630u;
    {
        const bool branch_taken_0x293630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x293634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293630u;
        // 0x293634: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293630) {
            ctx->pc = 0x29364Cu;
            goto label_29364c;
        }
    }
    ctx->pc = 0x293638u;
    // 0x293638: 0xe4600580  swc1        $f0, 0x580($v1)
    ctx->pc = 0x293638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1408), bits); }
    // 0x29363c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x29363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293640: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x293644: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x293644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293648: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_29364c:
    // 0x29364c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29364Cu;
    {
        const bool branch_taken_0x29364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29364Cu;
        // 0x293650: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29364c) {
            ctx->pc = 0x2936B4u;
            goto label_2936b4;
        }
    }
    ctx->pc = 0x293654u;
label_293654:
    // 0x293654: 0x24620580  addiu       $v0, $v1, 0x580
    ctx->pc = 0x293654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x293658: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x293658u;
    {
        const bool branch_taken_0x293658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x29365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293658u;
        // 0x29365c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293658) {
            ctx->pc = 0x293674u;
            goto label_293674;
        }
    }
    ctx->pc = 0x293660u;
    // 0x293660: 0xe4600580  swc1        $f0, 0x580($v1)
    ctx->pc = 0x293660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1408), bits); }
    // 0x293664: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x293664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x293668: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x293668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x29366c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x29366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293670: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x293670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_293674:
    // 0x293674: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x293674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x293678: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x293678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x29367c: 0xa04302f5  sb          $v1, 0x2F5($v0)
    ctx->pc = 0x29367cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x293680: 0xa04002f7  sb          $zero, 0x2F7($v0)
    ctx->pc = 0x293680u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x293684: 0xa04002f4  sb          $zero, 0x2F4($v0)
    ctx->pc = 0x293684u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x293688: 0xa04002f6  sb          $zero, 0x2F6($v0)
    ctx->pc = 0x293688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x29368c: 0x8e230560  lw          $v1, 0x560($s1)
    ctx->pc = 0x29368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x293690: 0x24620580  addiu       $v0, $v1, 0x580
    ctx->pc = 0x293690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1408));
    // 0x293694: 0x10520006  beq         $v0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x293694u;
    {
        const bool branch_taken_0x293694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x293698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293694u;
        // 0x293698: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x293694) {
            ctx->pc = 0x2936B0u;
            goto label_2936b0;
        }
    }
    ctx->pc = 0x29369Cu;
    // 0x29369c: 0xe4600580  swc1        $f0, 0x580($v1)
    ctx->pc = 0x29369cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1408), bits); }
    // 0x2936a0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2936a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2936a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2936a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2936a8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2936a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2936ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2936acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2936b0:
    // 0x2936b0: 0x8e220560  lw          $v0, 0x560($s1)
    ctx->pc = 0x2936b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
label_2936b4:
    // 0x2936b4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2936b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2936b8: 0xa04302f5  sb          $v1, 0x2F5($v0)
    ctx->pc = 0x2936b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x2936bc: 0xa04002f7  sb          $zero, 0x2F7($v0)
    ctx->pc = 0x2936bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936c0: 0xa04002f4  sb          $zero, 0x2F4($v0)
    ctx->pc = 0x2936c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936c4: 0xa04002f6  sb          $zero, 0x2F6($v0)
    ctx->pc = 0x2936c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936c8: 0xa22005a2  sb          $zero, 0x5A2($s1)
    ctx->pc = 0x2936c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1442), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2936ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2936d0: 0xa22005a3  sb          $zero, 0x5A3($s1)
    ctx->pc = 0x2936d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1443), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936d4: 0xa22005a4  sb          $zero, 0x5A4($s1)
    ctx->pc = 0x2936d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1444), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936d8: 0xa22005a5  sb          $zero, 0x5A5($s1)
    ctx->pc = 0x2936d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1445), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936dc: 0xa22005a0  sb          $zero, 0x5A0($s1)
    ctx->pc = 0x2936dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1440), (uint8_t)GPR_U32(ctx, 0));
    // 0x2936e0: 0xa22005a1  sb          $zero, 0x5A1($s1)
    ctx->pc = 0x2936e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1441), (uint8_t)GPR_U32(ctx, 0));
label_2936e4:
    // 0x2936e4: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x2936e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2936e8:
    // 0x2936e8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x2936e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2936ec: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x2936ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2936f0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x2936f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2936f4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x2936f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2936f8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x2936f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2936fc: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x2936fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x293700: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x293700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x293704: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x293704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x293708: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x293708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29370c: 0x3e00008  jr          $ra
    ctx->pc = 0x29370Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29370Cu;
        // 0x293710: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29370Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293714u;
    // 0x293714: 0x0  nop
    ctx->pc = 0x293714u;
    // NOP
    ctx->pc = 0x293718u;
}
