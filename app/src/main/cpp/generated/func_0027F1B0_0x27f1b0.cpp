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

// Function: func_0027F1B0
// Address: 0x27f1b0 - 0x27f3a0
void func_0027F1B0_0x27f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F1B0_0x27f1b0");
#endif

    switch (ctx->pc) {
        case 0x27f1b0u: goto label_27f1b0;
        case 0x27f1b4u: goto label_27f1b4;
        case 0x27f1b8u: goto label_27f1b8;
        case 0x27f1bcu: goto label_27f1bc;
        case 0x27f1c0u: goto label_27f1c0;
        case 0x27f1c4u: goto label_27f1c4;
        case 0x27f1c8u: goto label_27f1c8;
        case 0x27f1ccu: goto label_27f1cc;
        case 0x27f1d0u: goto label_27f1d0;
        case 0x27f1d4u: goto label_27f1d4;
        case 0x27f1d8u: goto label_27f1d8;
        case 0x27f1dcu: goto label_27f1dc;
        case 0x27f1e0u: goto label_27f1e0;
        case 0x27f1e4u: goto label_27f1e4;
        case 0x27f1e8u: goto label_27f1e8;
        case 0x27f1ecu: goto label_27f1ec;
        case 0x27f1f0u: goto label_27f1f0;
        case 0x27f1f4u: goto label_27f1f4;
        case 0x27f1f8u: goto label_27f1f8;
        case 0x27f1fcu: goto label_27f1fc;
        case 0x27f200u: goto label_27f200;
        case 0x27f204u: goto label_27f204;
        case 0x27f208u: goto label_27f208;
        case 0x27f20cu: goto label_27f20c;
        case 0x27f210u: goto label_27f210;
        case 0x27f214u: goto label_27f214;
        case 0x27f218u: goto label_27f218;
        case 0x27f21cu: goto label_27f21c;
        case 0x27f220u: goto label_27f220;
        case 0x27f224u: goto label_27f224;
        case 0x27f228u: goto label_27f228;
        case 0x27f22cu: goto label_27f22c;
        case 0x27f230u: goto label_27f230;
        case 0x27f234u: goto label_27f234;
        case 0x27f238u: goto label_27f238;
        case 0x27f23cu: goto label_27f23c;
        case 0x27f240u: goto label_27f240;
        case 0x27f244u: goto label_27f244;
        case 0x27f248u: goto label_27f248;
        case 0x27f24cu: goto label_27f24c;
        case 0x27f250u: goto label_27f250;
        case 0x27f254u: goto label_27f254;
        case 0x27f258u: goto label_27f258;
        case 0x27f25cu: goto label_27f25c;
        case 0x27f260u: goto label_27f260;
        case 0x27f264u: goto label_27f264;
        case 0x27f268u: goto label_27f268;
        case 0x27f26cu: goto label_27f26c;
        case 0x27f270u: goto label_27f270;
        case 0x27f274u: goto label_27f274;
        case 0x27f278u: goto label_27f278;
        case 0x27f27cu: goto label_27f27c;
        case 0x27f280u: goto label_27f280;
        case 0x27f284u: goto label_27f284;
        case 0x27f288u: goto label_27f288;
        case 0x27f28cu: goto label_27f28c;
        case 0x27f290u: goto label_27f290;
        case 0x27f294u: goto label_27f294;
        case 0x27f298u: goto label_27f298;
        case 0x27f29cu: goto label_27f29c;
        case 0x27f2a0u: goto label_27f2a0;
        case 0x27f2a4u: goto label_27f2a4;
        case 0x27f2a8u: goto label_27f2a8;
        case 0x27f2acu: goto label_27f2ac;
        case 0x27f2b0u: goto label_27f2b0;
        case 0x27f2b4u: goto label_27f2b4;
        case 0x27f2b8u: goto label_27f2b8;
        case 0x27f2bcu: goto label_27f2bc;
        case 0x27f2c0u: goto label_27f2c0;
        case 0x27f2c4u: goto label_27f2c4;
        case 0x27f2c8u: goto label_27f2c8;
        case 0x27f2ccu: goto label_27f2cc;
        case 0x27f2d0u: goto label_27f2d0;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f2d8u: goto label_27f2d8;
        case 0x27f2dcu: goto label_27f2dc;
        case 0x27f2e0u: goto label_27f2e0;
        case 0x27f2e4u: goto label_27f2e4;
        case 0x27f2e8u: goto label_27f2e8;
        case 0x27f2ecu: goto label_27f2ec;
        case 0x27f2f0u: goto label_27f2f0;
        case 0x27f2f4u: goto label_27f2f4;
        case 0x27f2f8u: goto label_27f2f8;
        case 0x27f2fcu: goto label_27f2fc;
        case 0x27f300u: goto label_27f300;
        case 0x27f304u: goto label_27f304;
        case 0x27f308u: goto label_27f308;
        case 0x27f30cu: goto label_27f30c;
        case 0x27f310u: goto label_27f310;
        case 0x27f314u: goto label_27f314;
        case 0x27f318u: goto label_27f318;
        case 0x27f31cu: goto label_27f31c;
        case 0x27f320u: goto label_27f320;
        case 0x27f324u: goto label_27f324;
        case 0x27f328u: goto label_27f328;
        case 0x27f32cu: goto label_27f32c;
        case 0x27f330u: goto label_27f330;
        case 0x27f334u: goto label_27f334;
        case 0x27f338u: goto label_27f338;
        case 0x27f33cu: goto label_27f33c;
        case 0x27f340u: goto label_27f340;
        case 0x27f344u: goto label_27f344;
        case 0x27f348u: goto label_27f348;
        case 0x27f34cu: goto label_27f34c;
        case 0x27f350u: goto label_27f350;
        case 0x27f354u: goto label_27f354;
        case 0x27f358u: goto label_27f358;
        case 0x27f35cu: goto label_27f35c;
        case 0x27f360u: goto label_27f360;
        case 0x27f364u: goto label_27f364;
        case 0x27f368u: goto label_27f368;
        case 0x27f36cu: goto label_27f36c;
        case 0x27f370u: goto label_27f370;
        case 0x27f374u: goto label_27f374;
        case 0x27f378u: goto label_27f378;
        case 0x27f37cu: goto label_27f37c;
        case 0x27f380u: goto label_27f380;
        case 0x27f384u: goto label_27f384;
        case 0x27f388u: goto label_27f388;
        case 0x27f38cu: goto label_27f38c;
        case 0x27f390u: goto label_27f390;
        case 0x27f394u: goto label_27f394;
        case 0x27f398u: goto label_27f398;
        case 0x27f39cu: goto label_27f39c;
        default: break;
    }

    ctx->pc = 0x27f1b0u;

label_27f1b0:
    // 0x27f1b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27f1b4:
    // 0x27f1b4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27f1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27f1b8:
    // 0x27f1b8: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x27f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_27f1bc:
    // 0x27f1bc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_27f1c0:
    // 0x27f1c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27f1c4:
    // 0x27f1c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f1c8:
    // 0x27f1c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f1cc:
    // 0x27f1cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27f1d0:
    // 0x27f1d0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x27f1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_27f1d4:
    // 0x27f1d4: 0x1460006b  bnez        $v1, . + 4 + (0x6B << 2)
label_27f1d8:
    if (ctx->pc == 0x27F1D8u) {
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F1DCu;
        goto label_27f1dc;
    }
    ctx->pc = 0x27F1D4u;
    {
        const bool branch_taken_0x27f1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1D4u;
        // 0x27f1d8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1d4) {
            ctx->pc = 0x27F384u;
            goto label_27f384;
        }
    }
    ctx->pc = 0x27F1DCu;
label_27f1dc:
    // 0x27f1dc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x27f1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_27f1e0:
    // 0x27f1e0: 0xc0a4bd4  jal         func_292F50
label_27f1e4:
    if (ctx->pc == 0x27F1E4u) {
        ctx->pc = 0x27F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1E0u;
        // 0x27f1e4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F1E8u;
        goto label_27f1e8;
    }
    ctx->pc = 0x27F1E0u;
    SET_GPR_U32(ctx, 31, 0x27F1E8u);
    ctx->pc = 0x27F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1E0u;
    // 0x27f1e4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x27F1E0u, 0x27F1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1E8u;
label_27f1e8:
    // 0x27f1e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27f1e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_27f1ec:
    // 0x27f1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f1f0:
    // 0x27f1f0: 0xc0560a2  jal         func_158288
label_27f1f4:
    if (ctx->pc == 0x27F1F4u) {
        ctx->pc = 0x27F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F1F0u;
        // 0x27f1f4: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F1F8u;
        goto label_27f1f8;
    }
    ctx->pc = 0x27F1F0u;
    SET_GPR_U32(ctx, 31, 0x27F1F8u);
    ctx->pc = 0x27F1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F1F0u;
    // 0x27f1f4: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x27F1F0u, 0x27F1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F1F8u;
label_27f1f8:
    // 0x27f1f8: 0xc0b6dac  jal         func_2DB6B0
label_27f1fc:
    if (ctx->pc == 0x27F1FCu) {
        ctx->pc = 0x27F200u;
        goto label_27f200;
    }
    ctx->pc = 0x27F1F8u;
    SET_GPR_U32(ctx, 31, 0x27F200u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27F1F8u, 0x27F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F200u;
label_27f200:
    // 0x27f200: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x27f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
label_27f204:
    // 0x27f204: 0xc07dfac  jal         func_1F7EB0
label_27f208:
    if (ctx->pc == 0x27F208u) {
        ctx->pc = 0x27F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F204u;
        // 0x27f208: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F20Cu;
        goto label_27f20c;
    }
    ctx->pc = 0x27F204u;
    SET_GPR_U32(ctx, 31, 0x27F20Cu);
    ctx->pc = 0x27F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F204u;
    // 0x27f208: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x27F204u, 0x27F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F20Cu;
label_27f20c:
    // 0x27f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f210:
    // 0x27f210: 0xc09fce8  jal         func_27F3A0
label_27f214:
    if (ctx->pc == 0x27F214u) {
        ctx->pc = 0x27F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F210u;
        // 0x27f214: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F218u;
        goto label_27f218;
    }
    ctx->pc = 0x27F210u;
    SET_GPR_U32(ctx, 31, 0x27F218u);
    ctx->pc = 0x27F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F210u;
    // 0x27f214: 0xe6000618  swc1        $f0, 0x618($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1560), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3A0u, 0x27F210u, 0x27F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F218u;
label_27f218:
    // 0x27f218: 0x8e041560  lw          $a0, 0x1560($s0)
    ctx->pc = 0x27f218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
label_27f21c:
    // 0x27f21c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_27f220:
    // 0x27f220: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x27f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_27f224:
    // 0x27f224: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x27f224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_27f228:
    // 0x27f228: 0x920502f4  lbu         $a1, 0x2F4($s0)
    ctx->pc = 0x27f228u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27f22c:
    // 0x27f22c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x27f22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_27f230:
    // 0x27f230: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x27f230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27f234:
    // 0x27f234: 0xae041560  sw          $a0, 0x1560($s0)
    ctx->pc = 0x27f234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5472), GPR_U32(ctx, 4));
label_27f238:
    // 0x27f238: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27f23c:
    // 0x27f23c: 0x2463fe98  addiu       $v1, $v1, -0x168
    ctx->pc = 0x27f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966936));
label_27f240:
    // 0x27f240: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f244:
    // 0x27f244: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x27f244u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27f248:
    // 0x27f248: 0x4c0000a  bltz        $a2, . + 4 + (0xA << 2)
label_27f24c:
    if (ctx->pc == 0x27F24Cu) {
        ctx->pc = 0x27F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F248u;
        // 0x27f24c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F250u;
        goto label_27f250;
    }
    ctx->pc = 0x27F248u;
    {
        const bool branch_taken_0x27f248 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F248u;
        // 0x27f24c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f248) {
            ctx->pc = 0x27F274u;
            goto label_27f274;
        }
    }
    ctx->pc = 0x27F250u;
label_27f250:
    // 0x27f250: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x27f250u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27f254:
    // 0x27f254: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x27f254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_27f258:
    // 0x27f258: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x27f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_27f25c:
    // 0x27f25c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27f260:
    // 0x27f260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27f264:
    // 0x27f264: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x27f264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27f268:
    // 0x27f268: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x27f268u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
label_27f26c:
    // 0x27f26c: 0x10000003  b           . + 4 + (0x3 << 2)
label_27f270:
    if (ctx->pc == 0x27F270u) {
        ctx->pc = 0x27F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F26Cu;
        // 0x27f270: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F274u;
        goto label_27f274;
    }
    ctx->pc = 0x27F26Cu;
    {
        const bool branch_taken_0x27f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F26Cu;
        // 0x27f270: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f26c) {
            ctx->pc = 0x27F27Cu;
            goto label_27f27c;
        }
    }
    ctx->pc = 0x27F274u;
label_27f274:
    // 0x27f274: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27f274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27f278:
    // 0x27f278: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x27f278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_27f27c:
    // 0x27f27c: 0x24e3fe98  addiu       $v1, $a3, -0x168
    ctx->pc = 0x27f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966936));
label_27f280:
    // 0x27f280: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x27f280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27f284:
    // 0x27f284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27f288:
    // 0x27f288: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_27f28c:
    if (ctx->pc == 0x27F28Cu) {
        ctx->pc = 0x27F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F288u;
        // 0x27f28c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F290u;
        goto label_27f290;
    }
    ctx->pc = 0x27F288u;
    {
        const bool branch_taken_0x27f288 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x27F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F288u;
        // 0x27f28c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f288) {
            ctx->pc = 0x27F2A4u;
            goto label_27f2a4;
        }
    }
    ctx->pc = 0x27F290u;
label_27f290:
    // 0x27f290: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x27f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_27f294:
    // 0x27f294: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27f294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27f298:
    // 0x27f298: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27f298u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27f29c:
    // 0x27f29c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27f2a0:
    if (ctx->pc == 0x27F2A0u) {
        ctx->pc = 0x27F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F29Cu;
        // 0x27f2a0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2A4u;
        goto label_27f2a4;
    }
    ctx->pc = 0x27F29Cu;
    {
        const bool branch_taken_0x27f29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F29Cu;
        // 0x27f2a0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f29c) {
            ctx->pc = 0x27F2A8u;
            goto label_27f2a8;
        }
    }
    ctx->pc = 0x27F2A4u;
label_27f2a4:
    // 0x27f2a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27f2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27f2a8:
    // 0x27f2a8: 0xa0f809  jalr        $a1
label_27f2ac:
    if (ctx->pc == 0x27F2ACu) {
        ctx->pc = 0x27F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2A8u;
        // 0x27f2ac: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2B0u;
        goto label_27f2b0;
    }
    ctx->pc = 0x27F2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x27F2B0u);
        ctx->pc = 0x27F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2A8u;
        // 0x27f2ac: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F2A8u, 0x27F2B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F2B0u;
label_27f2b0:
    // 0x27f2b0: 0xc053ed2  jal         func_14FB48
label_27f2b4:
    if (ctx->pc == 0x27F2B4u) {
        ctx->pc = 0x27F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2B0u;
        // 0x27f2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2B8u;
        goto label_27f2b8;
    }
    ctx->pc = 0x27F2B0u;
    SET_GPR_U32(ctx, 31, 0x27F2B8u);
    ctx->pc = 0x27F2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2B0u;
    // 0x27f2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x27F2B0u, 0x27F2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2B8u;
label_27f2b8:
    // 0x27f2b8: 0xc0a036e  jal         func_280DB8
label_27f2bc:
    if (ctx->pc == 0x27F2BCu) {
        ctx->pc = 0x27F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2B8u;
        // 0x27f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2C0u;
        goto label_27f2c0;
    }
    ctx->pc = 0x27F2B8u;
    SET_GPR_U32(ctx, 31, 0x27F2C0u);
    ctx->pc = 0x27F2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2B8u;
    // 0x27f2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280DB8u, 0x27F2B8u, 0x27F2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2C0u;
label_27f2c0:
    // 0x27f2c0: 0xc0527ae  jal         func_149EB8
label_27f2c4:
    if (ctx->pc == 0x27F2C4u) {
        ctx->pc = 0x27F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2C0u;
        // 0x27f2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2C8u;
        goto label_27f2c8;
    }
    ctx->pc = 0x27F2C0u;
    SET_GPR_U32(ctx, 31, 0x27F2C8u);
    ctx->pc = 0x27F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2C0u;
    // 0x27f2c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27F2C0u, 0x27F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2C8u;
label_27f2c8:
    // 0x27f2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f2cc:
    // 0x27f2cc: 0xc054a88  jal         func_152A20
label_27f2d0:
    if (ctx->pc == 0x27F2D0u) {
        ctx->pc = 0x27F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2CCu;
        // 0x27f2d0: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2D4u;
        goto label_27f2d4;
    }
    ctx->pc = 0x27F2CCu;
    SET_GPR_U32(ctx, 31, 0x27F2D4u);
    ctx->pc = 0x27F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2CCu;
    // 0x27f2d0: 0x26040448  addiu       $a0, $s0, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27F2CCu, 0x27F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2D4u;
label_27f2d4:
    // 0x27f2d4: 0xc05280e  jal         func_14A038
label_27f2d8:
    if (ctx->pc == 0x27F2D8u) {
        ctx->pc = 0x27F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2D4u;
        // 0x27f2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2DCu;
        goto label_27f2dc;
    }
    ctx->pc = 0x27F2D4u;
    SET_GPR_U32(ctx, 31, 0x27F2DCu);
    ctx->pc = 0x27F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2D4u;
    // 0x27f2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27F2D4u, 0x27F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2DCu;
label_27f2dc:
    // 0x27f2dc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_27f2e0:
    // 0x27f2e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f2e4:
    // 0x27f2e4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x27f2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_27f2e8:
    // 0x27f2e8: 0xc04d476  jal         func_1351D8
label_27f2ec:
    if (ctx->pc == 0x27F2ECu) {
        ctx->pc = 0x27F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2E8u;
        // 0x27f2ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2F0u;
        goto label_27f2f0;
    }
    ctx->pc = 0x27F2E8u;
    SET_GPR_U32(ctx, 31, 0x27F2F0u);
    ctx->pc = 0x27F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2E8u;
    // 0x27f2ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x27F2E8u, 0x27F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2F0u;
label_27f2f0:
    // 0x27f2f0: 0xc07dfbc  jal         func_1F7EF0
label_27f2f4:
    if (ctx->pc == 0x27F2F4u) {
        ctx->pc = 0x27F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2F0u;
        // 0x27f2f4: 0xc60c15b0  lwc1        $f12, 0x15B0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2F8u;
        goto label_27f2f8;
    }
    ctx->pc = 0x27F2F0u;
    SET_GPR_U32(ctx, 31, 0x27F2F8u);
    ctx->pc = 0x27F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2F0u;
    // 0x27f2f4: 0xc60c15b0  lwc1        $f12, 0x15B0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x27F2F0u, 0x27F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2F8u;
label_27f2f8:
    // 0x27f2f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27f2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_27f2fc:
    // 0x27f2fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27f2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f300:
    // 0x27f300: 0xc60405a8  lwc1        $f4, 0x5A8($s0)
    ctx->pc = 0x27f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27f304:
    // 0x27f304: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x27f304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_27f308:
    // 0x27f308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27f308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f30c:
    // 0x27f30c: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x27f30cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_27f310:
    // 0x27f310: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27f314:
    // 0x27f314: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27f314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_27f318:
    // 0x27f318: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x27f318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_27f31c:
    // 0x27f31c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x27f31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_27f320:
    // 0x27f320: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x27f320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_27f324:
    // 0x27f324: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27f324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f328:
    // 0x27f328: 0x4603a500  add.s       $f20, $f20, $f3
    ctx->pc = 0x27f328u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
label_27f32c:
    // 0x27f32c: 0xc60015b0  lwc1        $f0, 0x15B0($s0)
    ctx->pc = 0x27f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f330:
    // 0x27f330: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x27f330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_27f334:
    // 0x27f334: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x27f334u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_27f338:
    // 0x27f338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27f338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27f33c:
    // 0x27f33c: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x27f33cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_27f340:
    // 0x27f340: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x27f340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_27f344:
    // 0x27f344: 0xc07df52  jal         func_1F7D48
label_27f348:
    if (ctx->pc == 0x27F348u) {
        ctx->pc = 0x27F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F344u;
        // 0x27f348: 0xe60015b0  swc1        $f0, 0x15B0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5552), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F34Cu;
        goto label_27f34c;
    }
    ctx->pc = 0x27F344u;
    SET_GPR_U32(ctx, 31, 0x27F34Cu);
    ctx->pc = 0x27F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F344u;
    // 0x27f348: 0xe60015b0  swc1        $f0, 0x15B0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5552), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x27F344u, 0x27F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F34Cu;
label_27f34c:
    // 0x27f34c: 0xe60015b0  swc1        $f0, 0x15B0($s0)
    ctx->pc = 0x27f34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5552), bits); }
label_27f350:
    // 0x27f350: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_27f354:
    // 0x27f354: 0xc053934  jal         func_14E4D0
label_27f358:
    if (ctx->pc == 0x27F358u) {
        ctx->pc = 0x27F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F354u;
        // 0x27f358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F35Cu;
        goto label_27f35c;
    }
    ctx->pc = 0x27F354u;
    SET_GPR_U32(ctx, 31, 0x27F35Cu);
    ctx->pc = 0x27F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F354u;
    // 0x27f358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E4D0u, 0x27F354u, 0x27F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F35Cu;
label_27f35c:
    // 0x27f35c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x27f35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_27f360:
    // 0x27f360: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x27f360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_27f364:
    // 0x27f364: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_27f368:
    if (ctx->pc == 0x27F368u) {
        ctx->pc = 0x27F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F364u;
        // 0x27f368: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F36Cu;
        goto label_27f36c;
    }
    ctx->pc = 0x27F364u;
    {
        const bool branch_taken_0x27f364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f364) {
            ctx->pc = 0x27F368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F364u;
            // 0x27f368: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F388u;
            goto label_27f388;
        }
    }
    ctx->pc = 0x27F36Cu;
label_27f36c:
    // 0x27f36c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f370:
    // 0x27f370: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x27f370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_27f374:
    // 0x27f374: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27f374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f378:
    // 0x27f378: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27f378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27f37c:
    // 0x27f37c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27f37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f380:
    // 0x27f380: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x27f380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27f384:
    // 0x27f384: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x27f384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f388:
    // 0x27f388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f38c:
    // 0x27f38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27f390:
    // 0x27f390: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x27f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27f394:
    // 0x27f394: 0x3e00008  jr          $ra
label_27f398:
    if (ctx->pc == 0x27F398u) {
        ctx->pc = 0x27F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F394u;
        // 0x27f398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F39Cu;
        goto label_27f39c;
    }
    ctx->pc = 0x27F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F394u;
        // 0x27f398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F39Cu;
label_27f39c:
    // 0x27f39c: 0x0  nop
    ctx->pc = 0x27f39cu;
    // NOP
    ctx->pc = 0x27f3a0u;
}
