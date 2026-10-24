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

// Function: cModel_calcPartsInline
// Address: 0x14a170 - 0x14a2b0
void cModel_calcPartsInline_0x14a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_calcPartsInline_0x14a170");
#endif

    switch (ctx->pc) {
        case 0x14a1b4u: goto label_14a1b4;
        case 0x14a1d0u: goto label_14a1d0;
        case 0x14a1d8u: goto label_14a1d8;
        case 0x14a214u: goto label_14a214;
        case 0x14a234u: goto label_14a234;
        case 0x14a248u: goto label_14a248;
        case 0x14a258u: goto label_14a258;
        case 0x14a280u: goto label_14a280;
        default: break;
    }

    ctx->pc = 0x14a170u;

    // 0x14a170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14a170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14a174: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14a178: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14a17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a180: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a188: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x14a188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14a18c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x14a190: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x14a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x14a194: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A194u;
    {
        const bool branch_taken_0x14a194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a194) {
            ctx->pc = 0x14A198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A194u;
            // 0x14a198: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A1B8u;
            goto label_14a1b8;
        }
    }
    ctx->pc = 0x14A19Cu;
    // 0x14a19c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x14a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x14a1a0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x14a1a4: 0x92280140  lbu         $t0, 0x140($s1)
    ctx->pc = 0x14a1a4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x14a1a8: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x14a1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x14a1ac: 0xc051e92  jal         func_147A48
    ctx->pc = 0x14A1ACu;
    SET_GPR_U32(ctx, 31, 0x14A1B4u);
    ctx->pc = 0x14A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1ACu;
    // 0x14a1b0: 0x26270110  addiu       $a3, $s1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147A48u, 0x14A1ACu, 0x14A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1B4u;
label_14a1b4:
    // 0x14a1b4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x14a1b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_14a1b8:
    // 0x14a1b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14a1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1bc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14A1BCu;
    {
        const bool branch_taken_0x14a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A1BCu;
        // 0x14a1c0: 0x8e300144  lw          $s0, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1bc) {
            ctx->pc = 0x14A294u;
            goto label_14a294;
        }
    }
    ctx->pc = 0x14A1C4u;
    // 0x14a1c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14a1c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14a1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14a1cc: 0x0  nop
    ctx->pc = 0x14a1ccu;
    // NOP
label_14a1d0:
    // 0x14a1d0: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x14A1D0u;
    SET_GPR_U32(ctx, 31, 0x14A1D8u);
    ctx->pc = 0x14A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A1D0u;
    // 0x14a1d4: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x14A1D0u, 0x14A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1D8u;
label_14a1d8:
    // 0x14a1d8: 0xc6020130  lwc1        $f2, 0x130($s0)
    ctx->pc = 0x14a1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14a1dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14a1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a1e0: 0xc6010100  lwc1        $f1, 0x100($s0)
    ctx->pc = 0x14a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14a1e4: 0xc6030104  lwc1        $f3, 0x104($s0)
    ctx->pc = 0x14a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14a1e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x14a1e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14a1ec: 0xc6040134  lwc1        $f4, 0x134($s0)
    ctx->pc = 0x14a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14a1f0: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x14a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14a1f4: 0xc6020138  lwc1        $f2, 0x138($s0)
    ctx->pc = 0x14a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14a1f8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x14a1f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x14a1fc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x14a1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14a200: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x14a200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x14a204: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x14a204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x14a208: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x14a208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14a20c: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x14A20Cu;
    SET_GPR_U32(ctx, 31, 0x14A214u);
    ctx->pc = 0x14A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A20Cu;
    // 0x14a210: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x14A20Cu, 0x14A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A214u;
label_14a214:
    // 0x14a214: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x14a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x14a218: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x14a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x14a21c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14a220: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x14A220u;
    {
        const bool branch_taken_0x14a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a220) {
            ctx->pc = 0x14A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A220u;
            // 0x14a224: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A25Cu;
            goto label_14a25c;
        }
    }
    ctx->pc = 0x14A228u;
    // 0x14a228: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x14a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x14a22c: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x14A22Cu;
    SET_GPR_U32(ctx, 31, 0x14A234u);
    ctx->pc = 0x14A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A22Cu;
    // 0x14a230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x14A22Cu, 0x14A234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A234u;
label_14a234:
    // 0x14a234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a238: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a23c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14a23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a240: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x14A240u;
    SET_GPR_U32(ctx, 31, 0x14A248u);
    ctx->pc = 0x14A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A240u;
    // 0x14a244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x14A240u, 0x14A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A248u;
label_14a248:
    // 0x14a248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a24c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14a24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a250: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x14A250u;
    SET_GPR_U32(ctx, 31, 0x14A258u);
    ctx->pc = 0x14A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A250u;
    // 0x14a254: 0x26060110  addiu       $a2, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x14A250u, 0x14A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A258u;
label_14a258:
    // 0x14a258: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x14a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_14a25c:
    // 0x14a25c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x14a25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x14a260: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14a264: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A264u;
    {
        const bool branch_taken_0x14a264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a264) {
            ctx->pc = 0x14A268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A264u;
            // 0x14a268: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A284u;
            goto label_14a284;
        }
    }
    ctx->pc = 0x14A26Cu;
    // 0x14a26c: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x14a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x14a270: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x14a270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x14a274: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14a274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a278: 0xc051d52  jal         func_147548
    ctx->pc = 0x14A278u;
    SET_GPR_U32(ctx, 31, 0x14A280u);
    ctx->pc = 0x14A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A278u;
    // 0x14a27c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x14A278u, 0x14A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A280u;
label_14a280:
    // 0x14a280: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x14a280u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_14a284:
    // 0x14a284: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x14a284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14a288: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x14a288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14a28c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x14A28Cu;
    {
        const bool branch_taken_0x14a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A28Cu;
        // 0x14a290: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a28c) {
            ctx->pc = 0x14A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a1d0;
        }
    }
    ctx->pc = 0x14A294u;
label_14a294:
    // 0x14a294: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14a294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a298: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14a298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a29c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a2a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a2a4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x14a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14a2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A2A8u;
        // 0x14a2ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2B0u;
}
