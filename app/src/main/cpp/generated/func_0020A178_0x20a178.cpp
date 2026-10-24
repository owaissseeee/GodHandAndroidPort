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

// Function: func_0020A178
// Address: 0x20a178 - 0x20cac8
void func_0020A178_0x20a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020A178_0x20a178");
#endif

    switch (ctx->pc) {
        case 0x20a1a4u: goto label_20a1a4;
        case 0x20a218u: goto label_20a218;
        case 0x20a4ccu: goto label_20a4cc;
        case 0x20a4e4u: goto label_20a4e4;
        case 0x20a500u: goto label_20a500;
        case 0x20a518u: goto label_20a518;
        case 0x20a5e4u: goto label_20a5e4;
        case 0x20a768u: goto label_20a768;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7dcu: goto label_20a7dc;
        case 0x20a820u: goto label_20a820;
        case 0x20a864u: goto label_20a864;
        case 0x20a874u: goto label_20a874;
        case 0x20a884u: goto label_20a884;
        case 0x20ab28u: goto label_20ab28;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad68u: goto label_20ad68;
        case 0x20aeccu: goto label_20aecc;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af68u: goto label_20af68;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afdcu: goto label_20afdc;
        case 0x20b010u: goto label_20b010;
        case 0x20b020u: goto label_20b020;
        case 0x20b080u: goto label_20b080;
        case 0x20b148u: goto label_20b148;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b170u: goto label_20b170;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b280u: goto label_20b280;
        case 0x20b2c8u: goto label_20b2c8;
        case 0x20b2f0u: goto label_20b2f0;
        case 0x20b324u: goto label_20b324;
        case 0x20b334u: goto label_20b334;
        case 0x20b45cu: goto label_20b45c;
        case 0x20b4dcu: goto label_20b4dc;
        case 0x20b520u: goto label_20b520;
        case 0x20b578u: goto label_20b578;
        case 0x20b604u: goto label_20b604;
        case 0x20b638u: goto label_20b638;
        case 0x20b64cu: goto label_20b64c;
        case 0x20b65cu: goto label_20b65c;
        case 0x20b670u: goto label_20b670;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b8b0u: goto label_20b8b0;
        case 0x20b9b8u: goto label_20b9b8;
        case 0x20bcf0u: goto label_20bcf0;
        case 0x20bd04u: goto label_20bd04;
        case 0x20bd14u: goto label_20bd14;
        case 0x20bd24u: goto label_20bd24;
        case 0x20bd34u: goto label_20bd34;
        case 0x20bd74u: goto label_20bd74;
        case 0x20bd84u: goto label_20bd84;
        case 0x20beb0u: goto label_20beb0;
        case 0x20bee8u: goto label_20bee8;
        case 0x20befcu: goto label_20befc;
        case 0x20c0ccu: goto label_20c0cc;
        case 0x20c0e0u: goto label_20c0e0;
        case 0x20c198u: goto label_20c198;
        case 0x20c290u: goto label_20c290;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c44cu: goto label_20c44c;
        case 0x20c470u: goto label_20c470;
        case 0x20c4a4u: goto label_20c4a4;
        case 0x20c550u: goto label_20c550;
        case 0x20c618u: goto label_20c618;
        case 0x20c668u: goto label_20c668;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c728u: goto label_20c728;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c8b0u: goto label_20c8b0;
        default: break;
    }

    ctx->pc = 0x20a178u;

    // 0x20a178: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x20a17c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x20a17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x20a180: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x20a184: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x20a184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x20a188: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x20a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x20a18c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x20a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x20a190: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x20a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x20a194: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x20a194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x20a198: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20a198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x20a19c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20A19Cu;
    SET_GPR_U32(ctx, 31, 0x20A1A4u);
    ctx->pc = 0x20A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A19Cu;
    // 0x20a1a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20A19Cu, 0x20A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1A4u;
label_20a1a4:
    // 0x20a1a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20a1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20a1a8: 0xc6200770  lwc1        $f0, 0x770($s1)
    ctx->pc = 0x20a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a1ac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20a1acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a1b0: 0x0  nop
    ctx->pc = 0x20a1b0u;
    // NOP
    // 0x20a1b4: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x20A1B4u;
    {
        const bool branch_taken_0x20a1b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1B4u;
        // 0x20a1b8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1b4) {
            ctx->pc = 0x20A26Cu;
            goto label_20a26c;
        }
    }
    ctx->pc = 0x20A1BCu;
    // 0x20a1bc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a1c0: 0x5840002b  blezl       $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20A1C0u;
    {
        const bool branch_taken_0x20a1c0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x20a1c0) {
            ctx->pc = 0x20A1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A1C0u;
            // 0x20a1c4: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A270u;
            goto label_20a270;
        }
    }
    ctx->pc = 0x20A1C8u;
    // 0x20a1c8: 0xc6201718  lwc1        $f0, 0x1718($s1)
    ctx->pc = 0x20a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a1cc: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x20a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a1d0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a1d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a1d4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x20a1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a1d8: 0x0  nop
    ctx->pc = 0x20a1d8u;
    // NOP
    // 0x20a1dc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x20A1DCu;
    {
        const bool branch_taken_0x20a1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1DCu;
        // 0x20a1e0: 0xe6201718  swc1        $f0, 0x1718($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5912), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1dc) {
            ctx->pc = 0x20A218u;
            goto label_20a218;
        }
    }
    ctx->pc = 0x20A1E4u;
    // 0x20a1e4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x20a1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x20a1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a1ec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x20a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x20a1f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20a1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x20a1f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a1f8: 0xe6201718  swc1        $f0, 0x1718($s1)
    ctx->pc = 0x20a1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5912), bits); }
    // 0x20a1fc: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x20a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x20a200: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20a200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a208: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a208u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a20c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a20cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a210: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x20A210u;
    SET_GPR_U32(ctx, 31, 0x20A218u);
    ctx->pc = 0x20A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A210u;
    // 0x20a214: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20A210u, 0x20A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A218u;
label_20a218:
    // 0x20a218: 0xc6200770  lwc1        $f0, 0x770($s1)
    ctx->pc = 0x20a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a21c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x20a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a220: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a224: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x20a224u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a228: 0x0  nop
    ctx->pc = 0x20a228u;
    // NOP
    // 0x20a22c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x20A22Cu;
    {
        const bool branch_taken_0x20a22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A22Cu;
        // 0x20a230: 0xe6200770  swc1        $f0, 0x770($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1904), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a22c) {
            ctx->pc = 0x20A26Cu;
            goto label_20a26c;
        }
    }
    ctx->pc = 0x20A234u;
    // 0x20a234: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20a238: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x20a23c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x20a240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a244: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20a24c: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x20a24cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x20a250: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x20a250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x20a254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a258: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20a25c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a260: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20a260u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x20a264: 0x10000a0d  b           . + 4 + (0xA0D << 2)
    ctx->pc = 0x20A264u;
    {
        const bool branch_taken_0x20a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A264u;
        // 0x20a268: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a264) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20A26Cu;
label_20a26c:
    // 0x20a26c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20a270:
    // 0x20a270: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x20a274: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A274u;
    {
        const bool branch_taken_0x20a274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a274) {
            ctx->pc = 0x20A278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A274u;
            // 0x20a278: 0x8e230698  lw          $v1, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2E0u;
            goto label_20a2e0;
        }
    }
    ctx->pc = 0x20A27Cu;
    // 0x20a27c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20a280: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20a280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x20a284: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a288: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20A288u;
    {
        const bool branch_taken_0x20a288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a288) {
            ctx->pc = 0x20A28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A288u;
            // 0x20a28c: 0x8e230698  lw          $v1, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2E0u;
            goto label_20a2e0;
        }
    }
    ctx->pc = 0x20A290u;
    // 0x20a290: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a294: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20A294u;
    {
        const bool branch_taken_0x20a294 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A294u;
        // 0x20a298: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a294) {
            ctx->pc = 0x20A2DCu;
            goto label_20a2dc;
        }
    }
    ctx->pc = 0x20A29Cu;
    // 0x20a29c: 0x8c426a80  lw          $v0, 0x6A80($v0)
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27264)));
    // 0x20a2a0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20A2A0u;
    {
        const bool branch_taken_0x20a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a2a0) {
            ctx->pc = 0x20A2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A2A0u;
            // 0x20a2a4: 0x8e230698  lw          $v1, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2E0u;
            goto label_20a2e0;
        }
    }
    ctx->pc = 0x20A2A8u;
    // 0x20a2a8: 0x8442054a  lh          $v0, 0x54A($v0)
    ctx->pc = 0x20a2a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x20a2ac: 0x5c40000c  bgtzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A2ACu;
    {
        const bool branch_taken_0x20a2ac = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20a2ac) {
            ctx->pc = 0x20A2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A2ACu;
            // 0x20a2b0: 0x8e230698  lw          $v1, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A2E0u;
            goto label_20a2e0;
        }
    }
    ctx->pc = 0x20A2B4u;
    // 0x20a2b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x20a2b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a2c0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20a2c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a2c8: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20a2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20a2cc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a2d0: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20a2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x20a2d4: 0x100009f1  b           . + 4 + (0x9F1 << 2)
    ctx->pc = 0x20A2D4u;
    {
        const bool branch_taken_0x20a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2D4u;
        // 0x20a2d8: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2d4) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20A2DCu;
label_20a2dc:
    // 0x20a2dc: 0x8e230698  lw          $v1, 0x698($s1)
    ctx->pc = 0x20a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20a2e0:
    // 0x20a2e0: 0x106009ef  beqz        $v1, . + 4 + (0x9EF << 2)
    ctx->pc = 0x20A2E0u;
    {
        const bool branch_taken_0x20a2e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2E0u;
        // 0x20a2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2e0) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20A2E8u;
    // 0x20a2e8: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x20a2e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x20a2ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20a2f0: 0x104009eb  beqz        $v0, . + 4 + (0x9EB << 2)
    ctx->pc = 0x20A2F0u;
    {
        const bool branch_taken_0x20a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2F0u;
        // 0x20a2f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2f0) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20A2F8u;
    // 0x20a2f8: 0xc621054c  lwc1        $f1, 0x54C($s1)
    ctx->pc = 0x20a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a2fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a300: 0x0  nop
    ctx->pc = 0x20a300u;
    // NOP
    // 0x20a304: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20a304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a308: 0x0  nop
    ctx->pc = 0x20a308u;
    // NOP
    // 0x20a30c: 0x450109e5  bc1t        . + 4 + (0x9E5 << 2)
    ctx->pc = 0x20A30Cu;
    {
        const bool branch_taken_0x20a30c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A30Cu;
        // 0x20a310: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a30c) {
            ctx->pc = 0x20CAA4u;
            goto label_20caa4;
        }
    }
    ctx->pc = 0x20A314u;
    // 0x20a314: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20a314u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20a318: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a31c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20a320: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A320u;
    {
        const bool branch_taken_0x20a320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a320) {
            ctx->pc = 0x20A324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A320u;
            // 0x20a324: 0x862217ca  lh          $v0, 0x17CA($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6090)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A340u;
            goto label_20a340;
        }
    }
    ctx->pc = 0x20A328u;
    // 0x20a328: 0x84630046  lh          $v1, 0x46($v1)
    ctx->pc = 0x20a328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x20a32c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x20a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x20a330: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A330u;
    {
        const bool branch_taken_0x20a330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a330) {
            ctx->pc = 0x20A334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A330u;
            // 0x20a334: 0x862217ca  lh          $v0, 0x17CA($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6090)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A340u;
            goto label_20a340;
        }
    }
    ctx->pc = 0x20A338u;
    // 0x20a338: 0x100009da  b           . + 4 + (0x9DA << 2)
    ctx->pc = 0x20A338u;
    {
        const bool branch_taken_0x20a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A338u;
        // 0x20a33c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a338) {
            ctx->pc = 0x20CAA4u;
            goto label_20caa4;
        }
    }
    ctx->pc = 0x20A340u;
label_20a340:
    // 0x20a340: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A340u;
    {
        const bool branch_taken_0x20a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A340u;
        // 0x20a344: 0x30a2feff  andi        $v0, $a1, 0xFEFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65279);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a340) {
            ctx->pc = 0x20A34Cu;
            goto label_20a34c;
        }
    }
    ctx->pc = 0x20A348u;
    // 0x20a348: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x20a348u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
label_20a34c:
    // 0x20a34c: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20a350: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x20a350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x20a354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a358: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20A358u;
    {
        const bool branch_taken_0x20a358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a358) {
            ctx->pc = 0x20A35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A358u;
            // 0x20a35c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A394u;
            goto label_20a394;
        }
    }
    ctx->pc = 0x20A360u;
    // 0x20a360: 0xc6201740  lwc1        $f0, 0x1740($s1)
    ctx->pc = 0x20a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a364: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20a364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a368: 0x0  nop
    ctx->pc = 0x20a368u;
    // NOP
    // 0x20a36c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a36cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a370: 0x0  nop
    ctx->pc = 0x20a370u;
    // NOP
    // 0x20a374: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x20A374u;
    {
        const bool branch_taken_0x20a374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a374) {
            ctx->pc = 0x20A378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A374u;
            // 0x20a378: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A394u;
            goto label_20a394;
        }
    }
    ctx->pc = 0x20A37Cu;
    // 0x20a37c: 0xc6201734  lwc1        $f0, 0x1734($s1)
    ctx->pc = 0x20a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a380: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a384: 0x0  nop
    ctx->pc = 0x20a384u;
    // NOP
    // 0x20a388: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x20A388u;
    {
        const bool branch_taken_0x20a388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A388u;
        // 0x20a38c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a388) {
            ctx->pc = 0x20A3ACu;
            goto label_20a3ac;
        }
    }
    ctx->pc = 0x20A390u;
    // 0x20a390: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20a390u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_20a394:
    // 0x20a394: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x20a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20a398: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x20a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x20a39c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x20a39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x20a3a0: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x20a3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x20a3a4: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x20a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    // 0x20a3a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20a3ac:
    // 0x20a3ac: 0x8e230698  lw          $v1, 0x698($s1)
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20a3b0: 0xa62217ca  sh          $v0, 0x17CA($s1)
    ctx->pc = 0x20a3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6090), (uint16_t)GPR_U32(ctx, 2));
    // 0x20a3b4: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x20a3b8: 0x84650046  lh          $a1, 0x46($v1)
    ctx->pc = 0x20a3b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x20a3bc: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A3BCu;
    {
        const bool branch_taken_0x20a3bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x20A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3BCu;
        // 0x20a3c0: 0x8c740034  lw          $s4, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3bc) {
            ctx->pc = 0x20A3D8u;
            goto label_20a3d8;
        }
    }
    ctx->pc = 0x20A3C4u;
    // 0x20a3c4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x20a3c8: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A3C8u;
    {
        const bool branch_taken_0x20a3c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x20a3c8) {
            ctx->pc = 0x20A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A3C8u;
            // 0x20a3cc: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A3E8u;
            goto label_20a3e8;
        }
    }
    ctx->pc = 0x20A3D0u;
    // 0x20a3d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20A3D0u;
    {
        const bool branch_taken_0x20a3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3D0u;
        // 0x20a3d4: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3d0) {
            ctx->pc = 0x20A3F8u;
            goto label_20a3f8;
        }
    }
    ctx->pc = 0x20A3D8u;
label_20a3d8:
    // 0x20a3d8: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a3dc: 0x184009b0  blez        $v0, . + 4 + (0x9B0 << 2)
    ctx->pc = 0x20A3DCu;
    {
        const bool branch_taken_0x20a3dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3DCu;
        // 0x20a3e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3dc) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20A3E4u;
    // 0x20a3e4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_20a3e8:
    // 0x20a3e8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x20a3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x20a3ec: 0x144009ac  bnez        $v0, . + 4 + (0x9AC << 2)
    ctx->pc = 0x20A3ECu;
    {
        const bool branch_taken_0x20a3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3ECu;
        // 0x20a3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3ec) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20A3F4u;
    // 0x20a3f4: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20a3f8:
    // 0x20a3f8: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20a3f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20a3fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20a400: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20a400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20a404: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20A404u;
    {
        const bool branch_taken_0x20a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A404u;
        // 0x20a408: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a404) {
            ctx->pc = 0x20A490u;
            goto label_20a490;
        }
    }
    ctx->pc = 0x20A40Cu;
    // 0x20a40c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a410: 0x24420890  addiu       $v0, $v0, 0x890
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
    // 0x20a414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a41c: 0x800008  jr          $a0
    ctx->pc = 0x20A41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A424u: goto label_20a424;
            case 0x20A438u: goto label_20a438;
            case 0x20A44Cu: goto label_20a44c;
            case 0x20A460u: goto label_20a460;
            case 0x20A470u: goto label_20a470;
            case 0x20A480u: goto label_20a480;
            case 0x20A490u: goto label_20a490;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A41Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20A424u;
label_20a424:
    // 0x20a424: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x20a424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x20a428: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20a42c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a430: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20A430u;
    {
        const bool branch_taken_0x20a430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A430u;
        // 0x20a434: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a430) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A438u;
label_20a438:
    // 0x20a438: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x20a43c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x20a43cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x20a440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a444: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20A444u;
    {
        const bool branch_taken_0x20a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A444u;
        // 0x20a448: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a444) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A44Cu;
label_20a44c:
    // 0x20a44c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x20a450: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20a450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20a454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a458: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20A458u;
    {
        const bool branch_taken_0x20a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a458) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A460u;
label_20a460:
    // 0x20a460: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x20a464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a468: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20A468u;
    {
        const bool branch_taken_0x20a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A468u;
        // 0x20a46c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a468) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A470u;
label_20a470:
    // 0x20a470: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20a470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20a474: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a478: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20A478u;
    {
        const bool branch_taken_0x20a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A478u;
        // 0x20a47c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a478) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A480u;
label_20a480:
    // 0x20a480: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x20a484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a488: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20A488u;
    {
        const bool branch_taken_0x20a488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A488u;
        // 0x20a48c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a488) {
            ctx->pc = 0x20A498u;
            goto label_20a498;
        }
    }
    ctx->pc = 0x20A490u;
label_20a490:
    // 0x20a490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20a490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a494: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_20a498:
    // 0x20a498: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A498u;
    {
        const bool branch_taken_0x20a498 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20a498) {
            ctx->pc = 0x20A4A4u;
            goto label_20a4a4;
        }
    }
    ctx->pc = 0x20A4A0u;
    // 0x20a4a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20a4a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20a4a4:
    // 0x20a4a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a4a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4a8: 0x0  nop
    ctx->pc = 0x20a4a8u;
    // NOP
    // 0x20a4ac: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x20a4acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a4b0: 0x0  nop
    ctx->pc = 0x20a4b0u;
    // NOP
    // 0x20a4b4: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x20A4B4u;
    {
        const bool branch_taken_0x20a4b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B4u;
        // 0x20a4b8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4b4) {
            ctx->pc = 0x20A518u;
            goto label_20a518;
        }
    }
    ctx->pc = 0x20A4BCu;
    // 0x20a4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4c0: 0x2450b000  addiu       $s0, $v0, -0x5000
    ctx->pc = 0x20a4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
    // 0x20a4c4: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x20A4C4u;
    SET_GPR_U32(ctx, 31, 0x20A4CCu);
    ctx->pc = 0x20A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4C4u;
    // 0x20a4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x20A4C4u, 0x20A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4CCu;
label_20a4cc:
    // 0x20a4cc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20a4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20a4d0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20a4d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A4D4u;
    {
        const bool branch_taken_0x20a4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4d4) {
            ctx->pc = 0x20A518u;
            goto label_20a518;
        }
    }
    ctx->pc = 0x20A4DCu;
    // 0x20a4dc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20A4DCu;
    SET_GPR_U32(ctx, 31, 0x20A4E4u);
    ctx->pc = 0x20A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4DCu;
    // 0x20a4e0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20A4DCu, 0x20A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A4E4u;
label_20a4e4:
    // 0x20a4e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20a4e8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A4E8u;
    {
        const bool branch_taken_0x20a4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4E8u;
        // 0x20a4ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4e8) {
            ctx->pc = 0x20A508u;
            goto label_20a508;
        }
    }
    ctx->pc = 0x20A4F0u;
    // 0x20a4f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a4f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a4f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a4f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a4f8: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x20A4F8u;
    SET_GPR_U32(ctx, 31, 0x20A500u);
    ctx->pc = 0x20A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A4F8u;
    // 0x20a4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x20A4F8u, 0x20A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A500u;
label_20a500:
    // 0x20a500: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A500u;
    {
        const bool branch_taken_0x20a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A500u;
        // 0x20a504: 0x8624054a  lh          $a0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a500) {
            ctx->pc = 0x20A51Cu;
            goto label_20a51c;
        }
    }
    ctx->pc = 0x20A508u;
label_20a508:
    // 0x20a508: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x20a508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x20a50c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20a50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20a510: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x20A510u;
    SET_GPR_U32(ctx, 31, 0x20A518u);
    ctx->pc = 0x20A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A510u;
    // 0x20a514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x20A510u, 0x20A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A518u;
label_20a518:
    // 0x20a518: 0x8624054a  lh          $a0, 0x54A($s1)
    ctx->pc = 0x20a518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_20a51c:
    // 0x20a51c: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x20a520: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20a520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20a524: 0xae2417ac  sw          $a0, 0x17AC($s1)
    ctx->pc = 0x20a524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6060), GPR_U32(ctx, 4));
    // 0x20a528: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20a52c: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A52Cu;
    {
        const bool branch_taken_0x20a52c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x20A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A52Cu;
        // 0x20a530: 0x8c53004c  lw          $s3, 0x4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a52c) {
            ctx->pc = 0x20A538u;
            goto label_20a538;
        }
    }
    ctx->pc = 0x20A534u;
    // 0x20a534: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20a534u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_20a538:
    // 0x20a538: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20a538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20a53c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20a540: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20A540u;
    {
        const bool branch_taken_0x20a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A540u;
        // 0x20a544: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a540) {
            ctx->pc = 0x20A590u;
            goto label_20a590;
        }
    }
    ctx->pc = 0x20A548u;
    // 0x20a548: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20a54c: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x20a550: 0x2c62003a  sltiu       $v0, $v1, 0x3A
    ctx->pc = 0x20a550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)58) ? 1 : 0);
    // 0x20a554: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A554u;
    {
        const bool branch_taken_0x20a554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A554u;
        // 0x20a558: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a554) {
            ctx->pc = 0x20A574u;
            goto label_20a574;
        }
    }
    ctx->pc = 0x20A55Cu;
    // 0x20a55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a560: 0x244209f0  addiu       $v0, $v0, 0x9F0
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2544));
    // 0x20a564: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a568: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a56c: 0x800008  jr          $a0
    ctx->pc = 0x20A56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A574u: goto label_20a574;
            case 0x20A578u: goto label_20a578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A56Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20A574u;
label_20a574:
    // 0x20a574: 0x139840  sll         $s3, $s3, 1
    ctx->pc = 0x20a574u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_20a578:
    // 0x20a578: 0x8e2316d0  lw          $v1, 0x16D0($s1)
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20a57c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x20a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x20a580: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20a580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20a584: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20a584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20a588: 0xae2316d0  sw          $v1, 0x16D0($s1)
    ctx->pc = 0x20a588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 3));
    // 0x20a58c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20a590:
    // 0x20a590: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20a590u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20a594: 0x2463ffe4  addiu       $v1, $v1, -0x1C
    ctx->pc = 0x20a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967268));
    // 0x20a598: 0x2c62003a  sltiu       $v0, $v1, 0x3A
    ctx->pc = 0x20a598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)58) ? 1 : 0);
    // 0x20a59c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A59Cu;
    {
        const bool branch_taken_0x20a59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A59Cu;
        // 0x20a5a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a59c) {
            ctx->pc = 0x20A5C4u;
            goto label_20a5c4;
        }
    }
    ctx->pc = 0x20A5A4u;
    // 0x20a5a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x20a5a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a5ac: 0x24420ae0  addiu       $v0, $v0, 0xAE0
    ctx->pc = 0x20a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2784));
    // 0x20a5b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a5b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a5b8: 0x800008  jr          $a0
    ctx->pc = 0x20A5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A5C0u: goto label_20a5c0;
            case 0x20A5C4u: goto label_20a5c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20A5C0u;
label_20a5c0:
    // 0x20a5c0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20a5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a5c4:
    // 0x20a5c4: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x20a5c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20a5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x20a5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a5d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a5d4: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x20a5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x20a5d8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x20a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x20a5dc: 0x40f809  jalr        $v0
    ctx->pc = 0x20A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A5E4u);
        ctx->pc = 0x20A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5DCu;
        // 0x20a5e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A5C0u: goto label_20a5c0;
            case 0x20A5C4u: goto label_20a5c4;
            case 0x20A738u: goto label_20a738;
            case 0x20A748u: goto label_20a748;
            case 0x20A758u: goto label_20a758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A5DCu, 0x20A5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A5E4u;
label_20a5e4:
    // 0x20a5e4: 0x8e2317a4  lw          $v1, 0x17A4($s1)
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6052)));
    // 0x20a5e8: 0x24050218  addiu       $a1, $zero, 0x218
    ctx->pc = 0x20a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    // 0x20a5ec: 0x8e2217a8  lw          $v0, 0x17A8($s1)
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6056)));
    // 0x20a5f0: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x20a5f4: 0x8e240564  lw          $a0, 0x564($s1)
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20a5f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20a5fc: 0xae2317a4  sw          $v1, 0x17A4($s1)
    ctx->pc = 0x20a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 3));
    // 0x20a600: 0xae2217a8  sw          $v0, 0x17A8($s1)
    ctx->pc = 0x20a600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6056), GPR_U32(ctx, 2));
    // 0x20a604: 0x14850009  bne         $a0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A604u;
    {
        const bool branch_taken_0x20a604 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x20A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A604u;
        // 0x20a608: 0xae3317b4  sw          $s3, 0x17B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6068), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a604) {
            ctx->pc = 0x20A62Cu;
            goto label_20a62c;
        }
    }
    ctx->pc = 0x20A60Cu;
    // 0x20a60c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x20a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x20a610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a614: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x20a614u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x20a618: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A618u;
    {
        const bool branch_taken_0x20a618 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a618) {
            ctx->pc = 0x20A61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A618u;
            // 0x20a61c: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A630u;
            goto label_20a630;
        }
    }
    ctx->pc = 0x20A620u;
    // 0x20a620: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a624: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A624u;
    {
        const bool branch_taken_0x20a624 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x20a624) {
            ctx->pc = 0x20A628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A624u;
            // 0x20a628: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A62Cu;
            goto label_20a62c;
        }
    }
    ctx->pc = 0x20A62Cu;
label_20a62c:
    // 0x20a62c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20a630:
    // 0x20a630: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x20a634: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20a634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20a638: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A638u;
    {
        const bool branch_taken_0x20a638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A638u;
        // 0x20a63c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a638) {
            ctx->pc = 0x20A648u;
            goto label_20a648;
        }
    }
    ctx->pc = 0x20A640u;
    // 0x20a640: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A640u;
    {
        const bool branch_taken_0x20a640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a640) {
            ctx->pc = 0x20A668u;
            goto label_20a668;
        }
    }
    ctx->pc = 0x20A648u;
label_20a648:
    // 0x20a648: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a64c: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A64Cu;
    {
        const bool branch_taken_0x20a64c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20a64c) {
            ctx->pc = 0x20A650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A64Cu;
            // 0x20a650: 0xae2005b4  sw          $zero, 0x5B4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A660u;
            goto label_20a660;
        }
    }
    ctx->pc = 0x20A654u;
    // 0x20a654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a658: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x20a658u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x20a65c: 0xae2005b4  sw          $zero, 0x5B4($s1)
    ctx->pc = 0x20a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
label_20a660:
    // 0x20a660: 0xae2017cc  sw          $zero, 0x17CC($s1)
    ctx->pc = 0x20a660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6092), GPR_U32(ctx, 0));
    // 0x20a664: 0xae2017a8  sw          $zero, 0x17A8($s1)
    ctx->pc = 0x20a664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6056), GPR_U32(ctx, 0));
label_20a668:
    // 0x20a668: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x20a668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x20a66c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20a66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20a670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a674: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20a678: 0x28620248  slti        $v0, $v1, 0x248
    ctx->pc = 0x20a678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)584) ? 1 : 0);
    // 0x20a67c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A67Cu;
    {
        const bool branch_taken_0x20a67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A67Cu;
        // 0x20a680: 0xe6201940  swc1        $f0, 0x1940($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a67c) {
            ctx->pc = 0x20A6B4u;
            goto label_20a6b4;
        }
    }
    ctx->pc = 0x20A684u;
    // 0x20a684: 0x28620245  slti        $v0, $v1, 0x245
    ctx->pc = 0x20a684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
    // 0x20a688: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20A688u;
    {
        const bool branch_taken_0x20a688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A688u;
        // 0x20a68c: 0x2862020a  slti        $v0, $v1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)522) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a688) {
            ctx->pc = 0x20A6ECu;
            goto label_20a6ec;
        }
    }
    ctx->pc = 0x20A690u;
    // 0x20a690: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A690u;
    {
        const bool branch_taken_0x20a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A690u;
        // 0x20a694: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a690) {
            ctx->pc = 0x20A6FCu;
            goto label_20a6fc;
        }
    }
    ctx->pc = 0x20A698u;
    // 0x20a698: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20A698u;
    {
        const bool branch_taken_0x20a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A698u;
        // 0x20a69c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a698) {
            ctx->pc = 0x20A6F0u;
            goto label_20a6f0;
        }
    }
    ctx->pc = 0x20A6A0u;
    // 0x20a6a0: 0x24020218  addiu       $v0, $zero, 0x218
    ctx->pc = 0x20a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
    // 0x20a6a4: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20A6A4u;
    {
        const bool branch_taken_0x20a6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6A4u;
        // 0x20a6a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6a4) {
            ctx->pc = 0x20A6F0u;
            goto label_20a6f0;
        }
    }
    ctx->pc = 0x20A6ACu;
    // 0x20a6ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20A6ACu;
    {
        const bool branch_taken_0x20a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6ac) {
            ctx->pc = 0x20A6FCu;
            goto label_20a6fc;
        }
    }
    ctx->pc = 0x20A6B4u;
label_20a6b4:
    // 0x20a6b4: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20a6b8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A6B8u;
    {
        const bool branch_taken_0x20a6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6B8u;
        // 0x20a6bc: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6b8) {
            ctx->pc = 0x20A6ECu;
            goto label_20a6ec;
        }
    }
    ctx->pc = 0x20A6C0u;
    // 0x20a6c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A6C0u;
    {
        const bool branch_taken_0x20a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6C0u;
        // 0x20a6c4: 0x28620252  slti        $v0, $v1, 0x252 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6c0) {
            ctx->pc = 0x20A6D8u;
            goto label_20a6d8;
        }
    }
    ctx->pc = 0x20A6C8u;
    // 0x20a6c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A6C8u;
    {
        const bool branch_taken_0x20a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6C8u;
        // 0x20a6cc: 0x2862024f  slti        $v0, $v1, 0x24F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6c8) {
            ctx->pc = 0x20A6FCu;
            goto label_20a6fc;
        }
    }
    ctx->pc = 0x20A6D0u;
    // 0x20a6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20A6D0u;
    {
        const bool branch_taken_0x20a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a6d0) {
            ctx->pc = 0x20A6E4u;
            goto label_20a6e4;
        }
    }
    ctx->pc = 0x20A6D8u;
label_20a6d8:
    // 0x20a6d8: 0x2862027a  slti        $v0, $v1, 0x27A
    ctx->pc = 0x20a6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
    // 0x20a6dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A6DCu;
    {
        const bool branch_taken_0x20a6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A6DCu;
        // 0x20a6e0: 0x28620278  slti        $v0, $v1, 0x278 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)632) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a6dc) {
            ctx->pc = 0x20A6FCu;
            goto label_20a6fc;
        }
    }
    ctx->pc = 0x20A6E4u;
label_20a6e4:
    // 0x20a6e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A6E4u;
    {
        const bool branch_taken_0x20a6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a6e4) {
            ctx->pc = 0x20A6FCu;
            goto label_20a6fc;
        }
    }
    ctx->pc = 0x20A6ECu;
label_20a6ec:
    // 0x20a6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a6f0:
    // 0x20a6f0: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x20a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x20a6f4: 0xae2217c4  sw          $v0, 0x17C4($s1)
    ctx->pc = 0x20a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    // 0x20a6f8: 0xa62317c8  sh          $v1, 0x17C8($s1)
    ctx->pc = 0x20a6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 3));
label_20a6fc:
    // 0x20a6fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x20a6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x20a700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a704: 0x8e230698  lw          $v1, 0x698($s1)
    ctx->pc = 0x20a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20a708: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20a708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20a70c: 0x84620046  lh          $v0, 0x46($v1)
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x20a710: 0x2444fff3  addiu       $a0, $v0, -0xD
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967283));
    // 0x20a714: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x20a714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
    // 0x20a718: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20A718u;
    {
        const bool branch_taken_0x20a718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A718u;
        // 0x20a71c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a718) {
            ctx->pc = 0x20A758u;
            goto label_20a758;
        }
    }
    ctx->pc = 0x20A720u;
    // 0x20a720: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20a724: 0x24420bd0  addiu       $v0, $v0, 0xBD0
    ctx->pc = 0x20a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x20a728: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a72c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a730: 0x800008  jr          $a0
    ctx->pc = 0x20A730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A738u: goto label_20a738;
            case 0x20A748u: goto label_20a748;
            case 0x20A758u: goto label_20a758;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A730u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20A738u;
label_20a738:
    // 0x20a738: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x20a73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20A740u;
    {
        const bool branch_taken_0x20a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A740u;
        // 0x20a744: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a740) {
            ctx->pc = 0x20A758u;
            goto label_20a758;
        }
    }
    ctx->pc = 0x20A748u;
label_20a748:
    // 0x20a748: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x20a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x20a74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a750: 0x0  nop
    ctx->pc = 0x20a750u;
    // NOP
    // 0x20a754: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20a754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_20a758:
    // 0x20a758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a760: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x20A760u;
    SET_GPR_U32(ctx, 31, 0x20A768u);
    ctx->pc = 0x20A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A760u;
    // 0x20a764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x20A760u, 0x20A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A768u;
label_20a768:
    // 0x20a768: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20a76c: 0x5840002d  blezl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x20A76Cu;
    {
        const bool branch_taken_0x20a76c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x20a76c) {
            ctx->pc = 0x20A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A76Cu;
            // 0x20a770: 0x8e250564  lw          $a1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A824u;
            goto label_20a824;
        }
    }
    ctx->pc = 0x20A774u;
    // 0x20a774: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20a778: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20a778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20a77c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A77Cu;
    {
        const bool branch_taken_0x20a77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A77Cu;
        // 0x20a780: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a77c) {
            ctx->pc = 0x20A78Cu;
            goto label_20a78c;
        }
    }
    ctx->pc = 0x20A784u;
    // 0x20a784: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x20A784u;
    {
        const bool branch_taken_0x20a784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a784) {
            ctx->pc = 0x20A788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A784u;
            // 0x20a788: 0x8e250564  lw          $a1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A824u;
            goto label_20a824;
        }
    }
    ctx->pc = 0x20A78Cu;
label_20a78c:
    // 0x20a78c: 0x922317bd  lbu         $v1, 0x17BD($s1)
    ctx->pc = 0x20a78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6077)));
    // 0x20a790: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x20a790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a794: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A794u;
    {
        const bool branch_taken_0x20a794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x20A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A794u;
        // 0x20a798: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a794) {
            ctx->pc = 0x20A7B8u;
            goto label_20a7b8;
        }
    }
    ctx->pc = 0x20A79Cu;
    // 0x20a79c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x20a79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a7a0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A7A0u;
    {
        const bool branch_taken_0x20a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7A0u;
        // 0x20a7a4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7a0) {
            ctx->pc = 0x20A7E4u;
            goto label_20a7e4;
        }
    }
    ctx->pc = 0x20A7A8u;
    // 0x20a7a8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A7A8u;
    {
        const bool branch_taken_0x20a7a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7A8u;
        // 0x20a7ac: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7a8) {
            ctx->pc = 0x20A7D0u;
            goto label_20a7d0;
        }
    }
    ctx->pc = 0x20A7B0u;
    // 0x20a7b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20A7B0u;
    {
        const bool branch_taken_0x20a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a7b0) {
            ctx->pc = 0x20A7E4u;
            goto label_20a7e4;
        }
    }
    ctx->pc = 0x20A7B8u;
label_20a7b8:
    // 0x20a7b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20a7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20a7bc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x20a7bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7c0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20A7C0u;
    SET_GPR_U32(ctx, 31, 0x20A7C8u);
    ctx->pc = 0x20A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7C0u;
    // 0x20a7c4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20A7C0u, 0x20A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7C8u;
label_20a7c8:
    // 0x20a7c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20A7C8u;
    {
        const bool branch_taken_0x20a7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7C8u;
        // 0x20a7cc: 0x28420003  slti        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7c8) {
            ctx->pc = 0x20A7E0u;
            goto label_20a7e0;
        }
    }
    ctx->pc = 0x20A7D0u;
label_20a7d0:
    // 0x20a7d0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x20a7d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a7d4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20A7D4u;
    SET_GPR_U32(ctx, 31, 0x20A7DCu);
    ctx->pc = 0x20A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7D4u;
    // 0x20a7d8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20A7D4u, 0x20A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A7DCu;
label_20a7dc:
    // 0x20a7dc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20a7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_20a7e0:
    // 0x20a7e0: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x20a7e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_20a7e4:
    // 0x20a7e4: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20A7E4u;
    {
        const bool branch_taken_0x20a7e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a7e4) {
            ctx->pc = 0x20A7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A7E4u;
            // 0x20a7e8: 0x8e250564  lw          $a1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A824u;
            goto label_20a824;
        }
    }
    ctx->pc = 0x20A7ECu;
    // 0x20a7ec: 0x8e2216ec  lw          $v0, 0x16EC($s1)
    ctx->pc = 0x20a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5868)));
    // 0x20a7f0: 0x1c400009  bgtz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A7F0u;
    {
        const bool branch_taken_0x20a7f0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7F0u;
        // 0x20a7f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7f0) {
            ctx->pc = 0x20A818u;
            goto label_20a818;
        }
    }
    ctx->pc = 0x20A7F8u;
    // 0x20a7f8: 0x8e2416e8  lw          $a0, 0x16E8($s1)
    ctx->pc = 0x20a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5864)));
    // 0x20a7fc: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x20a7fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20a800: 0x24820005  addiu       $v0, $a0, 0x5
    ctx->pc = 0x20a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x20a804: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A804u;
    {
        const bool branch_taken_0x20a804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A804u;
        // 0x20a808: 0xae2216e8  sw          $v0, 0x16E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a804) {
            ctx->pc = 0x20A814u;
            goto label_20a814;
        }
    }
    ctx->pc = 0x20A80Cu;
    // 0x20a80c: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x20a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x20a810: 0xae2216e8  sw          $v0, 0x16E8($s1)
    ctx->pc = 0x20a810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5864), GPR_U32(ctx, 2));
label_20a814:
    // 0x20a814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a818:
    // 0x20a818: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x20A818u;
    SET_GPR_U32(ctx, 31, 0x20A820u);
    ctx->pc = 0x20A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A818u;
    // 0x20a81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26ECD0u, 0x20A818u, 0x20A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A820u;
label_20a820:
    // 0x20a820: 0x8e250564  lw          $a1, 0x564($s1)
    ctx->pc = 0x20a820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20a824:
    // 0x20a824: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x20a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x20a828: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20A828u;
    {
        const bool branch_taken_0x20a828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A828u;
        // 0x20a82c: 0x28a2026b  slti        $v0, $a1, 0x26B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)619) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a828) {
            ctx->pc = 0x20A87Cu;
            goto label_20a87c;
        }
    }
    ctx->pc = 0x20A830u;
    // 0x20a830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A830u;
    {
        const bool branch_taken_0x20a830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A830u;
        // 0x20a834: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a830) {
            ctx->pc = 0x20A848u;
            goto label_20a848;
        }
    }
    ctx->pc = 0x20A838u;
    // 0x20a838: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A838u;
    {
        const bool branch_taken_0x20a838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x20a838) {
            ctx->pc = 0x20A86Cu;
            goto label_20a86c;
        }
    }
    ctx->pc = 0x20A840u;
    // 0x20a840: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20A840u;
    {
        const bool branch_taken_0x20a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A840u;
        // 0x20a844: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a840) {
            ctx->pc = 0x20A890u;
            goto label_20a890;
        }
    }
    ctx->pc = 0x20A848u;
label_20a848:
    // 0x20a848: 0x28a20277  slti        $v0, $a1, 0x277
    ctx->pc = 0x20a848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)631) ? 1 : 0);
    // 0x20a84c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20A84Cu;
    {
        const bool branch_taken_0x20a84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A84Cu;
        // 0x20a850: 0x28a20275  slti        $v0, $a1, 0x275 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)629) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a84c) {
            ctx->pc = 0x20A88Cu;
            goto label_20a88c;
        }
    }
    ctx->pc = 0x20A854u;
    // 0x20a854: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20A854u;
    {
        const bool branch_taken_0x20a854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a854) {
            ctx->pc = 0x20A858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A854u;
            // 0x20a858: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A890u;
            goto label_20a890;
        }
    }
    ctx->pc = 0x20A85Cu;
    // 0x20a85c: 0xc08373c  jal         func_20DCF0
    ctx->pc = 0x20A85Cu;
    SET_GPR_U32(ctx, 31, 0x20A864u);
    ctx->pc = 0x20A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A85Cu;
    // 0x20a860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DCF0u, 0x20A85Cu, 0x20A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A864u;
label_20a864:
    // 0x20a864: 0x1000088f  b           . + 4 + (0x88F << 2)
    ctx->pc = 0x20A864u;
    {
        const bool branch_taken_0x20a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A864u;
        // 0x20a868: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a864) {
            ctx->pc = 0x20CAA4u;
            goto label_20caa4;
        }
    }
    ctx->pc = 0x20A86Cu;
label_20a86c:
    // 0x20a86c: 0xc083920  jal         func_20E480
    ctx->pc = 0x20A86Cu;
    SET_GPR_U32(ctx, 31, 0x20A874u);
    ctx->pc = 0x20A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A86Cu;
    // 0x20a870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E480u, 0x20A86Cu, 0x20A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A874u;
label_20a874:
    // 0x20a874: 0x1000088b  b           . + 4 + (0x88B << 2)
    ctx->pc = 0x20A874u;
    {
        const bool branch_taken_0x20a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A874u;
        // 0x20a878: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a874) {
            ctx->pc = 0x20CAA4u;
            goto label_20caa4;
        }
    }
    ctx->pc = 0x20A87Cu;
label_20a87c:
    // 0x20a87c: 0xc083bc2  jal         func_20EF08
    ctx->pc = 0x20A87Cu;
    SET_GPR_U32(ctx, 31, 0x20A884u);
    ctx->pc = 0x20A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A87Cu;
    // 0x20a880: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF08u, 0x20A87Cu, 0x20A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A884u;
label_20a884:
    // 0x20a884: 0x10000887  b           . + 4 + (0x887 << 2)
    ctx->pc = 0x20A884u;
    {
        const bool branch_taken_0x20a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A884u;
        // 0x20a888: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a884) {
            ctx->pc = 0x20CAA4u;
            goto label_20caa4;
        }
    }
    ctx->pc = 0x20A88Cu;
label_20a88c:
    // 0x20a88c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20a890:
    // 0x20a890: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x20a890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x20a894: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20a894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20a898: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20A898u;
    {
        const bool branch_taken_0x20a898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A898u;
        // 0x20a89c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a898) {
            ctx->pc = 0x20A8DCu;
            goto label_20a8dc;
        }
    }
    ctx->pc = 0x20A8A0u;
    // 0x20a8a0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20a8a4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20a8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x20a8a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a8ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A8ACu;
    {
        const bool branch_taken_0x20a8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8ACu;
        // 0x20a8b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8ac) {
            ctx->pc = 0x20A8D4u;
            goto label_20a8d4;
        }
    }
    ctx->pc = 0x20A8B4u;
    // 0x20a8b4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a8b8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A8B8u;
    {
        const bool branch_taken_0x20a8b8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8B8u;
        // 0x20a8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8b8) {
            ctx->pc = 0x20A8D4u;
            goto label_20a8d4;
        }
    }
    ctx->pc = 0x20A8C0u;
    // 0x20a8c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a8c4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20a8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20a8c8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20a8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20a8cc: 0x10000873  b           . + 4 + (0x873 << 2)
    ctx->pc = 0x20A8CCu;
    {
        const bool branch_taken_0x20a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8CCu;
        // 0x20a8d0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8cc) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20A8D4u;
label_20a8d4:
    // 0x20a8d4: 0x1000086e  b           . + 4 + (0x86E << 2)
    ctx->pc = 0x20A8D4u;
    {
        const bool branch_taken_0x20a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D4u;
        // 0x20a8d8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8d4) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20A8DCu;
label_20a8dc:
    // 0x20a8dc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x20a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20a8e0: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A8E0u;
    {
        const bool branch_taken_0x20a8e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E0u;
        // 0x20a8e4: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8e0) {
            ctx->pc = 0x20A8F4u;
            goto label_20a8f4;
        }
    }
    ctx->pc = 0x20A8E8u;
    // 0x20a8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a8ec: 0x10000868  b           . + 4 + (0x868 << 2)
    ctx->pc = 0x20A8ECu;
    {
        const bool branch_taken_0x20a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8ECu;
        // 0x20a8f0: 0x2403000b  addiu       $v1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8ec) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20A8F4u;
label_20a8f4:
    // 0x20a8f4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A8F4u;
    {
        const bool branch_taken_0x20a8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8F4u;
        // 0x20a8f8: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8f4) {
            ctx->pc = 0x20A904u;
            goto label_20a904;
        }
    }
    ctx->pc = 0x20A8FCu;
    // 0x20a8fc: 0x1482001f  bne         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20A8FCu;
    {
        const bool branch_taken_0x20a8fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8FCu;
        // 0x20a900: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8fc) {
            ctx->pc = 0x20A97Cu;
            goto label_20a97c;
        }
    }
    ctx->pc = 0x20A904u;
label_20a904:
    // 0x20a904: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20a904u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20a908: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20a908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20a90c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20a90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a910: 0x3404b008  ori         $a0, $zero, 0xB008
    ctx->pc = 0x20a910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45064);
    // 0x20a914: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x20a914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x20a918: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a91c: 0x5444000b  bnel        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20A91Cu;
    {
        const bool branch_taken_0x20a91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20a91c) {
            ctx->pc = 0x20A920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A91Cu;
            // 0x20a920: 0x84c30046  lh          $v1, 0x46($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A94Cu;
            goto label_20a94c;
        }
    }
    ctx->pc = 0x20A924u;
    // 0x20a924: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x20a924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x20a928: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x20a928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x20a92c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A92Cu;
    {
        const bool branch_taken_0x20a92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a92c) {
            ctx->pc = 0x20A930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A92Cu;
            // 0x20a930: 0x84c30046  lh          $v1, 0x46($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A94Cu;
            goto label_20a94c;
        }
    }
    ctx->pc = 0x20A934u;
    // 0x20a934: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a938: 0x5c4002f5  bgtzl       $v0, . + 4 + (0x2F5 << 2)
    ctx->pc = 0x20A938u;
    {
        const bool branch_taken_0x20a938 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20a938) {
            ctx->pc = 0x20A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A938u;
            // 0x20a93c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B510u;
            goto label_20b510;
        }
    }
    ctx->pc = 0x20A940u;
    // 0x20a940: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a944: 0x100002f3  b           . + 4 + (0x2F3 << 2)
    ctx->pc = 0x20A944u;
    {
        const bool branch_taken_0x20a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A944u;
        // 0x20a948: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a944) {
            ctx->pc = 0x20B514u;
            goto label_20b514;
        }
    }
    ctx->pc = 0x20A94Cu;
label_20a94c:
    // 0x20a94c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x20a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x20a950: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A950u;
    {
        const bool branch_taken_0x20a950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A950u;
        // 0x20a954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a950) {
            ctx->pc = 0x20A974u;
            goto label_20a974;
        }
    }
    ctx->pc = 0x20A958u;
    // 0x20a958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a95c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20a960: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20a960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20a964: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20a964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20a968: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20a968u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x20a96c: 0x1000084b  b           . + 4 + (0x84B << 2)
    ctx->pc = 0x20A96Cu;
    {
        const bool branch_taken_0x20a96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A96Cu;
        // 0x20a970: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a96c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20A974u;
label_20a974:
    // 0x20a974: 0x10000846  b           . + 4 + (0x846 << 2)
    ctx->pc = 0x20A974u;
    {
        const bool branch_taken_0x20a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A974u;
        // 0x20a978: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a974) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20A97Cu;
label_20a97c:
    // 0x20a97c: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20A97Cu;
    {
        const bool branch_taken_0x20a97c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A97Cu;
        // 0x20a980: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a97c) {
            ctx->pc = 0x20A9E4u;
            goto label_20a9e4;
        }
    }
    ctx->pc = 0x20A984u;
    // 0x20a984: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20a984u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20a988: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20a988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20a98c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20a98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20a990: 0x3404b008  ori         $a0, $zero, 0xB008
    ctx->pc = 0x20a990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45064);
    // 0x20a994: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x20a994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x20a998: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20a99c: 0x5444000b  bnel        $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20A99Cu;
    {
        const bool branch_taken_0x20a99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20a99c) {
            ctx->pc = 0x20A9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A99Cu;
            // 0x20a9a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A9A4u;
    // 0x20a9a4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x20a9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x20a9a8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x20a9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x20a9ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A9ACu;
    {
        const bool branch_taken_0x20a9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9ac) {
            ctx->pc = 0x20A9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9ACu;
            // 0x20a9b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A9B4u;
    // 0x20a9b4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20a9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20a9b8: 0x5c4002d5  bgtzl       $v0, . + 4 + (0x2D5 << 2)
    ctx->pc = 0x20A9B8u;
    {
        const bool branch_taken_0x20a9b8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20a9b8) {
            ctx->pc = 0x20A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A9B8u;
            // 0x20a9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B510u;
            goto label_20b510;
        }
    }
    ctx->pc = 0x20A9C0u;
    // 0x20a9c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a9c4: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x20A9C4u;
    {
        const bool branch_taken_0x20a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9C4u;
        // 0x20a9c8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9c4) {
            ctx->pc = 0x20B514u;
            goto label_20b514;
        }
    }
    ctx->pc = 0x20A9CCu;
label_20a9cc:
    // 0x20a9cc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a9d0: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20a9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20a9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a9d8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20a9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20a9dc: 0x1000082f  b           . + 4 + (0x82F << 2)
    ctx->pc = 0x20A9DCu;
    {
        const bool branch_taken_0x20a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9DCu;
        // 0x20a9e0: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9dc) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20A9E4u;
label_20a9e4:
    // 0x20a9e4: 0x14820031  bne         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x20A9E4u;
    {
        const bool branch_taken_0x20a9e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9E4u;
        // 0x20a9e8: 0x24070023  addiu       $a3, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9e4) {
            ctx->pc = 0x20AAACu;
            goto label_20aaac;
        }
    }
    ctx->pc = 0x20A9ECu;
    // 0x20a9ec: 0x24a3fdeb  addiu       $v1, $a1, -0x215
    ctx->pc = 0x20a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966763));
    // 0x20a9f0: 0x2c620046  sltiu       $v0, $v1, 0x46
    ctx->pc = 0x20a9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x20a9f4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20A9F4u;
    {
        const bool branch_taken_0x20a9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9F4u;
        // 0x20a9f8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9f4) {
            ctx->pc = 0x20AA58u;
            goto label_20aa58;
        }
    }
    ctx->pc = 0x20A9FCu;
    // 0x20a9fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20aa00: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x20aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x20aa04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20aa08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20aa0c: 0x800008  jr          $a0
    ctx->pc = 0x20AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AA14u: goto label_20aa14;
            case 0x20AA58u: goto label_20aa58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AA0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20AA14u;
label_20aa14:
    // 0x20aa14: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20aa18: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20aa18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20aa1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20aa1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20aa20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AA20u;
    {
        const bool branch_taken_0x20aa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA20u;
        // 0x20aa24: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa20) {
            ctx->pc = 0x20AA30u;
            goto label_20aa30;
        }
    }
    ctx->pc = 0x20AA28u;
    // 0x20aa28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AA28u;
    {
        const bool branch_taken_0x20aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA28u;
        // 0x20aa2c: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa28) {
            ctx->pc = 0x20AA34u;
            goto label_20aa34;
        }
    }
    ctx->pc = 0x20AA30u;
label_20aa30:
    // 0x20aa30: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20aa30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20aa34:
    // 0x20aa34: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20aa34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20aa38: 0x2403007c  addiu       $v1, $zero, 0x7C
    ctx->pc = 0x20aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x20aa3c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x20aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x20aa40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20aa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aa44: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x20aa44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x20aa48: 0xa62317c8  sh          $v1, 0x17C8($s1)
    ctx->pc = 0x20aa48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 3));
    // 0x20aa4c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20aa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20aa50: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x20aa50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x20aa54: 0xae2017c4  sw          $zero, 0x17C4($s1)
    ctx->pc = 0x20aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 0));
label_20aa58:
    // 0x20aa58: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20aa58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20aa5c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20aa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20aa60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20aa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20aa64: 0x3404b008  ori         $a0, $zero, 0xB008
    ctx->pc = 0x20aa64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45064);
    // 0x20aa68: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x20aa68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x20aa6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20aa70: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x20AA70u;
    {
        const bool branch_taken_0x20aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA70u;
        // 0x20aa74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa70) {
            ctx->pc = 0x20AAA4u;
            goto label_20aaa4;
        }
    }
    ctx->pc = 0x20AA78u;
    // 0x20aa78: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x20aa78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x20aa7c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x20aa7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x20aa80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AA80u;
    {
        const bool branch_taken_0x20aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA80u;
        // 0x20aa84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa80) {
            ctx->pc = 0x20AAA4u;
            goto label_20aaa4;
        }
    }
    ctx->pc = 0x20AA88u;
    // 0x20aa88: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20aa8c: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20aa8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20aa90: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20aa90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20aa94: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x20AA94u;
    {
        const bool branch_taken_0x20aa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA94u;
        // 0x20aa98: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa94) {
            ctx->pc = 0x20AB94u;
            goto label_20ab94;
        }
    }
    ctx->pc = 0x20AA9Cu;
    // 0x20aa9c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x20AA9Cu;
    {
        const bool branch_taken_0x20aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA9Cu;
        // 0x20aaa0: 0xa623054a  sh          $v1, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa9c) {
            ctx->pc = 0x20ABA0u;
            goto label_20aba0;
        }
    }
    ctx->pc = 0x20AAA4u;
label_20aaa4:
    // 0x20aaa4: 0x100007fa  b           . + 4 + (0x7FA << 2)
    ctx->pc = 0x20AAA4u;
    {
        const bool branch_taken_0x20aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAA4u;
        // 0x20aaa8: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aaa4) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20AAACu;
label_20aaac:
    // 0x20aaac: 0x1487002a  bne         $a0, $a3, . + 4 + (0x2A << 2)
    ctx->pc = 0x20AAACu;
    {
        const bool branch_taken_0x20aaac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x20AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAACu;
        // 0x20aab0: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aaac) {
            ctx->pc = 0x20AB58u;
            goto label_20ab58;
        }
    }
    ctx->pc = 0x20AAB4u;
    // 0x20aab4: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20aab8: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20AAB8u;
    {
        const bool branch_taken_0x20aab8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAB8u;
        // 0x20aabc: 0x28a20260  slti        $v0, $a1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aab8) {
            ctx->pc = 0x20AB20u;
            goto label_20ab20;
        }
    }
    ctx->pc = 0x20AAC0u;
    // 0x20aac0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20AAC0u;
    {
        const bool branch_taken_0x20aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aac0) {
            ctx->pc = 0x20AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AAC0u;
            // 0x20aac4: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AAE0u;
            goto label_20aae0;
        }
    }
    ctx->pc = 0x20AAC8u;
    // 0x20aac8: 0x28a20266  slti        $v0, $a1, 0x266
    ctx->pc = 0x20aac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20aacc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AACCu;
    {
        const bool branch_taken_0x20aacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AACCu;
        // 0x20aad0: 0x28a20264  slti        $v0, $a1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aacc) {
            ctx->pc = 0x20AADCu;
            goto label_20aadc;
        }
    }
    ctx->pc = 0x20AAD4u;
    // 0x20aad4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20AAD4u;
    {
        const bool branch_taken_0x20aad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aad4) {
            ctx->pc = 0x20AB20u;
            goto label_20ab20;
        }
    }
    ctx->pc = 0x20AADCu;
label_20aadc:
    // 0x20aadc: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20aadcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_20aae0:
    // 0x20aae0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20aae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20aae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20aae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20aae8: 0x34048010  ori         $a0, $zero, 0x8010
    ctx->pc = 0x20aae8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x20aaec: 0x42738  dsll        $a0, $a0, 28
    ctx->pc = 0x20aaecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 28);
    // 0x20aaf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20aaf4: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AAF4u;
    {
        const bool branch_taken_0x20aaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAF4u;
        // 0x20aaf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aaf4) {
            ctx->pc = 0x20AB08u;
            goto label_20ab08;
        }
    }
    ctx->pc = 0x20AAFCu;
    // 0x20aafc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ab00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20AB00u;
    {
        const bool branch_taken_0x20ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB00u;
        // 0x20ab04: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab00) {
            ctx->pc = 0x20AB10u;
            goto label_20ab10;
        }
    }
    ctx->pc = 0x20AB08u;
label_20ab08:
    // 0x20ab08: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ab0c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x20ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20ab10:
    // 0x20ab10: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ab14: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20ab14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ab18: 0x10000281  b           . + 4 + (0x281 << 2)
    ctx->pc = 0x20AB18u;
    {
        const bool branch_taken_0x20ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB18u;
        // 0x20ab1c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab18) {
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20AB20u;
label_20ab20:
    // 0x20ab20: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20AB20u;
    SET_GPR_U32(ctx, 31, 0x20AB28u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20AB20u, 0x20AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB28u;
label_20ab28:
    // 0x20ab28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20ab2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AB2Cu;
    {
        const bool branch_taken_0x20ab2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB2Cu;
        // 0x20ab30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab2c) {
            ctx->pc = 0x20AB44u;
            goto label_20ab44;
        }
    }
    ctx->pc = 0x20AB34u;
    // 0x20ab34: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20ab34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ab38: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20ab38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ab3c: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x20AB3Cu;
    {
        const bool branch_taken_0x20ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB3Cu;
        // 0x20ab40: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab3c) {
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20AB44u;
label_20ab44:
    // 0x20ab44: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20ab44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ab48: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ab4c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ab4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ab50: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x20AB50u;
    {
        const bool branch_taken_0x20ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB50u;
        // 0x20ab54: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab50) {
            ctx->pc = 0x20AD68u;
            goto label_20ad68;
        }
    }
    ctx->pc = 0x20AB58u;
label_20ab58:
    // 0x20ab58: 0x14820053  bne         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x20AB58u;
    {
        const bool branch_taken_0x20ab58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB58u;
        // 0x20ab5c: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab58) {
            ctx->pc = 0x20ACA8u;
            goto label_20aca8;
        }
    }
    ctx->pc = 0x20AB60u;
    // 0x20ab60: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20ab60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20ab64: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20ab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20ab68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20ab68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20ab6c: 0x3404b008  ori         $a0, $zero, 0xB008
    ctx->pc = 0x20ab6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45064);
    // 0x20ab70: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x20ab70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x20ab74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ab78: 0x54440011  bnel        $v0, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20AB78u;
    {
        const bool branch_taken_0x20ab78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20ab78) {
            ctx->pc = 0x20AB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AB78u;
            // 0x20ab7c: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ABC0u;
            goto label_20abc0;
        }
    }
    ctx->pc = 0x20AB80u;
    // 0x20ab80: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20ab84: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20ab88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20ab88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ab8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AB8Cu;
    {
        const bool branch_taken_0x20ab8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB8Cu;
        // 0x20ab90: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab8c) {
            ctx->pc = 0x20AB9Cu;
            goto label_20ab9c;
        }
    }
    ctx->pc = 0x20AB94u;
label_20ab94:
    // 0x20ab94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AB94u;
    {
        const bool branch_taken_0x20ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB94u;
        // 0x20ab98: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab94) {
            ctx->pc = 0x20ABA0u;
            goto label_20aba0;
        }
    }
    ctx->pc = 0x20AB9Cu;
label_20ab9c:
    // 0x20ab9c: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20ab9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20aba0:
    // 0x20aba0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20aba4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x20aba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x20aba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20aba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20abac: 0xae2217c4  sw          $v0, 0x17C4($s1)
    ctx->pc = 0x20abacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    // 0x20abb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20abb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20abb4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20abb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20abb8: 0x100007b9  b           . + 4 + (0x7B9 << 2)
    ctx->pc = 0x20ABB8u;
    {
        const bool branch_taken_0x20abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB8u;
        // 0x20abbc: 0xa62017c8  sh          $zero, 0x17C8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abb8) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20ABC0u;
label_20abc0:
    // 0x20abc0: 0x922417c1  lbu         $a0, 0x17C1($s1)
    ctx->pc = 0x20abc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
    // 0x20abc4: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x20abc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
    // 0x20abc8: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ABC8u;
    {
        const bool branch_taken_0x20abc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABC8u;
        // 0x20abcc: 0xa62203ac  sh          $v0, 0x3AC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abc8) {
            ctx->pc = 0x20ABECu;
            goto label_20abec;
        }
    }
    ctx->pc = 0x20ABD0u;
    // 0x20abd0: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20abd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20abd4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20abd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20abd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20ABD8u;
    {
        const bool branch_taken_0x20abd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABD8u;
        // 0x20abdc: 0x96230548  lhu         $v1, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abd8) {
            ctx->pc = 0x20ABE8u;
            goto label_20abe8;
        }
    }
    ctx->pc = 0x20ABE0u;
    // 0x20abe0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20ABE0u;
    {
        const bool branch_taken_0x20abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABE0u;
        // 0x20abe4: 0xa623054a  sh          $v1, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abe0) {
            ctx->pc = 0x20ABECu;
            goto label_20abec;
        }
    }
    ctx->pc = 0x20ABE8u;
label_20abe8:
    // 0x20abe8: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20abe8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_20abec:
    // 0x20abec: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20abecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20abf0: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20ABF0u;
    {
        const bool branch_taken_0x20abf0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABF0u;
        // 0x20abf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abf0) {
            ctx->pc = 0x20AC10u;
            goto label_20ac10;
        }
    }
    ctx->pc = 0x20ABF8u;
    // 0x20abf8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20abfc: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20abfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20ac00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ac04: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ac04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ac08: 0x100007a4  b           . + 4 + (0x7A4 << 2)
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20AC10u;
label_20ac10:
    // 0x20ac10: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20ac14: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x20ac18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ac1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20AC1Cu;
    {
        const bool branch_taken_0x20ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC1Cu;
        // 0x20ac20: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac1c) {
            ctx->pc = 0x20AC38u;
            goto label_20ac38;
        }
    }
    ctx->pc = 0x20AC24u;
    // 0x20ac24: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ac24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ac28: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ac28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ac2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ac30: 0x1000079a  b           . + 4 + (0x79A << 2)
    ctx->pc = 0x20AC30u;
    {
        const bool branch_taken_0x20ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC30u;
        // 0x20ac34: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac30) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20AC38u;
label_20ac38:
    // 0x20ac38: 0x922317c1  lbu         $v1, 0x17C1($s1)
    ctx->pc = 0x20ac38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
    // 0x20ac3c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AC3Cu;
    {
        const bool branch_taken_0x20ac3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ac3c) {
            ctx->pc = 0x20AC60u;
            goto label_20ac60;
        }
    }
    ctx->pc = 0x20AC44u;
    // 0x20ac44: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20ac48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20ac48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20ac4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AC4Cu;
    {
        const bool branch_taken_0x20ac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC4Cu;
        // 0x20ac50: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac4c) {
            ctx->pc = 0x20AC5Cu;
            goto label_20ac5c;
        }
    }
    ctx->pc = 0x20AC54u;
    // 0x20ac54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AC54u;
    {
        const bool branch_taken_0x20ac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC54u;
        // 0x20ac58: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac54) {
            ctx->pc = 0x20AC60u;
            goto label_20ac60;
        }
    }
    ctx->pc = 0x20AC5Cu;
label_20ac5c:
    // 0x20ac5c: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20ac5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_20ac60:
    // 0x20ac60: 0xc09c9a2  jal         func_272688
    ctx->pc = 0x20AC60u;
    SET_GPR_U32(ctx, 31, 0x20AC68u);
    ctx->pc = 0x20AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC60u;
    // 0x20ac64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272688u, 0x20AC60u, 0x20AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC68u;
label_20ac68:
    // 0x20ac68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20AC68u;
    {
        const bool branch_taken_0x20ac68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC68u;
        // 0x20ac6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac68) {
            ctx->pc = 0x20ACA0u;
            goto label_20aca0;
        }
    }
    ctx->pc = 0x20AC70u;
    // 0x20ac70: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20ac74: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20AC74u;
    {
        const bool branch_taken_0x20ac74 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC74u;
        // 0x20ac78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac74) {
            ctx->pc = 0x20ACA0u;
            goto label_20aca0;
        }
    }
    ctx->pc = 0x20AC7Cu;
    // 0x20ac7c: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20ac80: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AC80u;
    {
        const bool branch_taken_0x20ac80 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC80u;
        // 0x20ac84: 0x96230548  lhu         $v1, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac80) {
            ctx->pc = 0x20AC90u;
            goto label_20ac90;
        }
    }
    ctx->pc = 0x20AC88u;
    // 0x20ac88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AC88u;
    {
        const bool branch_taken_0x20ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC88u;
        // 0x20ac8c: 0xa623054a  sh          $v1, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac88) {
            ctx->pc = 0x20AC94u;
            goto label_20ac94;
        }
    }
    ctx->pc = 0x20AC90u;
label_20ac90:
    // 0x20ac90: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20ac90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_20ac94:
    // 0x20ac94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ac98: 0x1000077d  b           . + 4 + (0x77D << 2)
    ctx->pc = 0x20AC98u;
    {
        const bool branch_taken_0x20ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC98u;
        // 0x20ac9c: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac98) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20ACA0u;
label_20aca0:
    // 0x20aca0: 0x1000077b  b           . + 4 + (0x77B << 2)
    ctx->pc = 0x20ACA0u;
    {
        const bool branch_taken_0x20aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA0u;
        // 0x20aca4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca0) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20ACA8u;
label_20aca8:
    // 0x20aca8: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ACA8u;
    {
        const bool branch_taken_0x20aca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA8u;
        // 0x20acac: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aca8) {
            ctx->pc = 0x20ACCCu;
            goto label_20accc;
        }
    }
    ctx->pc = 0x20ACB0u;
    // 0x20acb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20acb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20acb8: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20acb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20acbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20acc0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20acc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20acc4: 0x10000775  b           . + 4 + (0x775 << 2)
    ctx->pc = 0x20ACC4u;
    {
        const bool branch_taken_0x20acc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACC4u;
        // 0x20acc8: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acc4) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20ACCCu;
label_20accc:
    // 0x20accc: 0x54820035  bnel        $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x20ACCCu;
    {
        const bool branch_taken_0x20accc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20accc) {
            ctx->pc = 0x20ACD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ACCCu;
            // 0x20acd0: 0x84c30046  lh          $v1, 0x46($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ADA4u;
            goto label_20ada4;
        }
    }
    ctx->pc = 0x20ACD4u;
    // 0x20acd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20acd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20acd8: 0xc0a3b4a  jal         func_28ED28
    ctx->pc = 0x20ACD8u;
    SET_GPR_U32(ctx, 31, 0x20ACE0u);
    ctx->pc = 0x20ACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACD8u;
    // 0x20acdc: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED28u, 0x20ACD8u, 0x20ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACE0u;
label_20ace0:
    // 0x20ace0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20ace0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20ace4: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20ACE4u;
    {
        const bool branch_taken_0x20ace4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20ace4) {
            ctx->pc = 0x20ACE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ACE4u;
            // 0x20ace8: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AD10u;
            goto label_20ad10;
        }
    }
    ctx->pc = 0x20ACECu;
    // 0x20acec: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20acecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20acf0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20acf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20acf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20ACF4u;
    {
        const bool branch_taken_0x20acf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF4u;
        // 0x20acf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf4) {
            ctx->pc = 0x20AD04u;
            goto label_20ad04;
        }
    }
    ctx->pc = 0x20ACFCu;
    // 0x20acfc: 0x10000764  b           . + 4 + (0x764 << 2)
    ctx->pc = 0x20ACFCu;
    {
        const bool branch_taken_0x20acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACFCu;
        // 0x20ad00: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acfc) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20AD04u;
label_20ad04:
    // 0x20ad04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ad08: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x20ad08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x20ad0c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20ad10:
    // 0x20ad10: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20ad14: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20AD14u;
    {
        const bool branch_taken_0x20ad14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD14u;
        // 0x20ad18: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad14) {
            ctx->pc = 0x20AD48u;
            goto label_20ad48;
        }
    }
    ctx->pc = 0x20AD1Cu;
    // 0x20ad1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AD1Cu;
    {
        const bool branch_taken_0x20ad1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD1Cu;
        // 0x20ad20: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad1c) {
            ctx->pc = 0x20AD34u;
            goto label_20ad34;
        }
    }
    ctx->pc = 0x20AD24u;
    // 0x20ad24: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20AD24u;
    {
        const bool branch_taken_0x20ad24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD24u;
        // 0x20ad28: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad24) {
            ctx->pc = 0x20AD88u;
            goto label_20ad88;
        }
    }
    ctx->pc = 0x20AD2Cu;
    // 0x20ad2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AD2Cu;
    {
        const bool branch_taken_0x20ad2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad2c) {
            ctx->pc = 0x20AD40u;
            goto label_20ad40;
        }
    }
    ctx->pc = 0x20AD34u;
label_20ad34:
    // 0x20ad34: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20ad34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20ad38: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20AD38u;
    {
        const bool branch_taken_0x20ad38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD38u;
        // 0x20ad3c: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad38) {
            ctx->pc = 0x20AD88u;
            goto label_20ad88;
        }
    }
    ctx->pc = 0x20AD40u;
label_20ad40:
    // 0x20ad40: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20AD40u;
    {
        const bool branch_taken_0x20ad40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD40u;
        // 0x20ad44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad40) {
            ctx->pc = 0x20AD8Cu;
            goto label_20ad8c;
        }
    }
    ctx->pc = 0x20AD48u;
label_20ad48:
    // 0x20ad48: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x20AD48u;
    SET_GPR_U32(ctx, 31, 0x20AD50u);
    ctx->pc = 0x20AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD48u;
    // 0x20ad4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x20AD48u, 0x20AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD50u;
label_20ad50:
    // 0x20ad50: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20AD50u;
    SET_GPR_U32(ctx, 31, 0x20AD58u);
    ctx->pc = 0x20AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD50u;
    // 0x20ad54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20AD50u, 0x20AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD58u;
label_20ad58:
    // 0x20ad58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AD58u;
    {
        const bool branch_taken_0x20ad58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD58u;
        // 0x20ad5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad58) {
            ctx->pc = 0x20AD70u;
            goto label_20ad70;
        }
    }
    ctx->pc = 0x20AD60u;
    // 0x20ad60: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x20AD60u;
    SET_GPR_U32(ctx, 31, 0x20AD68u);
    ctx->pc = 0x20AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD60u;
    // 0x20ad64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x20AD60u, 0x20AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD68u;
label_20ad68:
    // 0x20ad68: 0x1000074d  b           . + 4 + (0x74D << 2)
    ctx->pc = 0x20AD68u;
    {
        const bool branch_taken_0x20ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD68u;
        // 0x20ad6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad68) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20AD70u;
label_20ad70:
    // 0x20ad70: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ad74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20ad78: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ad78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ad7c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ad80: 0x10000746  b           . + 4 + (0x746 << 2)
    ctx->pc = 0x20AD80u;
    {
        const bool branch_taken_0x20ad80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad80) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20AD88u;
label_20ad88:
    // 0x20ad88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ad8c:
    // 0x20ad8c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20ad8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ad90: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ad94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ad98: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x20ad98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ad9c: 0x10000740  b           . + 4 + (0x740 << 2)
    ctx->pc = 0x20AD9Cu;
    {
        const bool branch_taken_0x20ad9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD9Cu;
        // 0x20ada0: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad9c) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20ADA4u;
label_20ada4:
    // 0x20ada4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x20ada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x20ada8: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20ADA8u;
    {
        const bool branch_taken_0x20ada8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADA8u;
        // 0x20adac: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ada8) {
            ctx->pc = 0x20AE30u;
            goto label_20ae30;
        }
    }
    ctx->pc = 0x20ADB0u;
    // 0x20adb0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x20adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x20adb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20adb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20adb8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x20adbc: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20adc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20adc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20ADC4u;
    {
        const bool branch_taken_0x20adc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADC4u;
        // 0x20adc8: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adc4) {
            ctx->pc = 0x20ADF0u;
            goto label_20adf0;
        }
    }
    ctx->pc = 0x20ADCCu;
    // 0x20adcc: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20add0: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20ADD0u;
    {
        const bool branch_taken_0x20add0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20add0) {
            ctx->pc = 0x20ADD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20ADD0u;
            // 0x20add4: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20ADF4u;
            goto label_20adf4;
        }
    }
    ctx->pc = 0x20ADD8u;
    // 0x20add8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20addc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20addcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ade0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ade0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ade4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ade8: 0x1000072c  b           . + 4 + (0x72C << 2)
    ctx->pc = 0x20ADE8u;
    {
        const bool branch_taken_0x20ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADE8u;
        // 0x20adec: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ade8) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20ADF0u;
label_20adf0:
    // 0x20adf0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20adf4:
    // 0x20adf4: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x20adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x20adf8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20ADF8u;
    {
        const bool branch_taken_0x20adf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADF8u;
        // 0x20adfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adf8) {
            ctx->pc = 0x20AE18u;
            goto label_20ae18;
        }
    }
    ctx->pc = 0x20AE00u;
    // 0x20ae00: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x20ae00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x20ae04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ae04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ae0c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ae0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ae10: 0x10000720  b           . + 4 + (0x720 << 2)
    ctx->pc = 0x20AE10u;
    {
        const bool branch_taken_0x20ae10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE10u;
        // 0x20ae14: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae10) {
            ctx->pc = 0x20CA94u;
            goto label_20ca94;
        }
    }
    ctx->pc = 0x20AE18u;
label_20ae18:
    // 0x20ae18: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ae1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ae20: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ae20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20ae24: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20ae24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ae28: 0x1000071c  b           . + 4 + (0x71C << 2)
    ctx->pc = 0x20AE28u;
    {
        const bool branch_taken_0x20ae28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE28u;
        // 0x20ae2c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae28) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20AE30u;
label_20ae30:
    // 0x20ae30: 0x10620715  beq         $v1, $v0, . + 4 + (0x715 << 2)
    ctx->pc = 0x20AE30u;
    {
        const bool branch_taken_0x20ae30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE30u;
        // 0x20ae34: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae30) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20AE38u;
    // 0x20ae38: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AE38u;
    {
        const bool branch_taken_0x20ae38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE38u;
        // 0x20ae3c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae38) {
            ctx->pc = 0x20AE4Cu;
            goto label_20ae4c;
        }
    }
    ctx->pc = 0x20AE40u;
    // 0x20ae40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ae44: 0x10000712  b           . + 4 + (0x712 << 2)
    ctx->pc = 0x20AE44u;
    {
        const bool branch_taken_0x20ae44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE44u;
        // 0x20ae48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae44) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20AE4Cu;
label_20ae4c:
    // 0x20ae4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20AE4Cu;
    {
        const bool branch_taken_0x20ae4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE4Cu;
        // 0x20ae50: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae4c) {
            ctx->pc = 0x20AE5Cu;
            goto label_20ae5c;
        }
    }
    ctx->pc = 0x20AE54u;
    // 0x20ae54: 0x54620029  bnel        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x20AE54u;
    {
        const bool branch_taken_0x20ae54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ae54) {
            ctx->pc = 0x20AE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AE54u;
            // 0x20ae58: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20AEFCu;
            goto label_20aefc;
        }
    }
    ctx->pc = 0x20AE5Cu;
label_20ae5c:
    // 0x20ae5c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x20ae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x20ae60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20ae60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ae64: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20ae68: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20ae6c: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20ae6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20ae70: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20AE70u;
    {
        const bool branch_taken_0x20ae70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE70u;
        // 0x20ae74: 0xae2017a4  sw          $zero, 0x17A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae70) {
            ctx->pc = 0x20AEA8u;
            goto label_20aea8;
        }
    }
    ctx->pc = 0x20AE78u;
    // 0x20ae78: 0x28620227  slti        $v0, $v1, 0x227
    ctx->pc = 0x20ae78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
    // 0x20ae7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AE7Cu;
    {
        const bool branch_taken_0x20ae7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE7Cu;
        // 0x20ae80: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae7c) {
            ctx->pc = 0x20AE94u;
            goto label_20ae94;
        }
    }
    ctx->pc = 0x20AE84u;
    // 0x20ae84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20AE84u;
    {
        const bool branch_taken_0x20ae84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE84u;
        // 0x20ae88: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae84) {
            ctx->pc = 0x20AEC4u;
            goto label_20aec4;
        }
    }
    ctx->pc = 0x20AE8Cu;
    // 0x20ae8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AE8Cu;
    {
        const bool branch_taken_0x20ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae8c) {
            ctx->pc = 0x20AEA0u;
            goto label_20aea0;
        }
    }
    ctx->pc = 0x20AE94u;
label_20ae94:
    // 0x20ae94: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20ae94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20ae98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20AE98u;
    {
        const bool branch_taken_0x20ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE98u;
        // 0x20ae9c: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae98) {
            ctx->pc = 0x20AEC4u;
            goto label_20aec4;
        }
    }
    ctx->pc = 0x20AEA0u;
label_20aea0:
    // 0x20aea0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20AEA0u;
    {
        const bool branch_taken_0x20aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aea0) {
            ctx->pc = 0x20AEC4u;
            goto label_20aec4;
        }
    }
    ctx->pc = 0x20AEA8u;
label_20aea8:
    // 0x20aea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aeac: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20aeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20aeb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20aeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20aeb4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20aeb8: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20aeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20aebc: 0x100006f7  b           . + 4 + (0x6F7 << 2)
    ctx->pc = 0x20AEBCu;
    {
        const bool branch_taken_0x20aebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEBCu;
        // 0x20aec0: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aebc) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20AEC4u;
label_20aec4:
    // 0x20aec4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20AEC4u;
    SET_GPR_U32(ctx, 31, 0x20AECCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20AEC4u, 0x20AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AECCu;
label_20aecc:
    // 0x20aecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20aed0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AED0u;
    {
        const bool branch_taken_0x20aed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AED0u;
        // 0x20aed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aed0) {
            ctx->pc = 0x20AEE8u;
            goto label_20aee8;
        }
    }
    ctx->pc = 0x20AED8u;
    // 0x20aed8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20aed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20aedc: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20aedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20aee0: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x20AEE0u;
    {
        const bool branch_taken_0x20aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEE0u;
        // 0x20aee4: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aee0) {
            ctx->pc = 0x20B520u;
            goto label_20b520;
        }
    }
    ctx->pc = 0x20AEE8u;
label_20aee8:
    // 0x20aee8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20aeec: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20aeecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20aef0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20aef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20aef4: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x20AEF4u;
    {
        const bool branch_taken_0x20aef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEF4u;
        // 0x20aef8: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aef4) {
            ctx->pc = 0x20AD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ad68;
        }
    }
    ctx->pc = 0x20AEFCu;
label_20aefc:
    // 0x20aefc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x20af00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20af04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AF04u;
    {
        const bool branch_taken_0x20af04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF04u;
        // 0x20af08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af04) {
            ctx->pc = 0x20AF18u;
            goto label_20af18;
        }
    }
    ctx->pc = 0x20AF0Cu;
    // 0x20af0c: 0xa22702f5  sb          $a3, 0x2F5($s1)
    ctx->pc = 0x20af0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 7));
    // 0x20af10: 0x100006e1  b           . + 4 + (0x6E1 << 2)
    ctx->pc = 0x20AF10u;
    {
        const bool branch_taken_0x20af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF10u;
        // 0x20af14: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af10) {
            ctx->pc = 0x20CA98u;
            goto label_20ca98;
        }
    }
    ctx->pc = 0x20AF18u;
label_20af18:
    // 0x20af18: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20af1c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x20af1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x20af20: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x20AF20u;
    {
        const bool branch_taken_0x20af20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF20u;
        // 0x20af24: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af20) {
            ctx->pc = 0x20B390u;
            goto label_20b390;
        }
    }
    ctx->pc = 0x20AF28u;
    // 0x20af28: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20af28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20af2c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AF2Cu;
    {
        const bool branch_taken_0x20af2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af2c) {
            ctx->pc = 0x20AF44u;
            goto label_20af44;
        }
    }
    ctx->pc = 0x20AF34u;
    // 0x20af34: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20AF34u;
    SET_GPR_U32(ctx, 31, 0x20AF3Cu);
    ctx->pc = 0x20AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF34u;
    // 0x20af38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20AF34u, 0x20AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF3Cu;
label_20af3c:
    // 0x20af3c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20AF3Cu;
    {
        const bool branch_taken_0x20af3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF3Cu;
        // 0x20af40: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af3c) {
            ctx->pc = 0x20B02Cu;
            goto label_20b02c;
        }
    }
    ctx->pc = 0x20AF44u;
label_20af44:
    // 0x20af44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af48: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20af48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x20af4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20af4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20af50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20af50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20af54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20af58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20af5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20af60: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x20AF60u;
    SET_GPR_U32(ctx, 31, 0x20AF68u);
    ctx->pc = 0x20AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF60u;
    // 0x20af64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20AF60u, 0x20AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF68u;
label_20af68:
    // 0x20af68: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x20af68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x20af6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20af70: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x20af74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20af74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20af78: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20af78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20af7c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20af7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20af80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20AF80u;
    {
        const bool branch_taken_0x20af80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF80u;
        // 0x20af84: 0xe6201740  swc1        $f0, 0x1740($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af80) {
            ctx->pc = 0x20AF94u;
            goto label_20af94;
        }
    }
    ctx->pc = 0x20AF88u;
    // 0x20af88: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x20af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x20af8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20AF8Cu;
    {
        const bool branch_taken_0x20af8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF8Cu;
        // 0x20af90: 0x8c520010  lw          $s2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af8c) {
            ctx->pc = 0x20AF98u;
            goto label_20af98;
        }
    }
    ctx->pc = 0x20AF94u;
label_20af94:
    // 0x20af94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20af94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20af98:
    // 0x20af98: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x20AF98u;
    {
        const bool branch_taken_0x20af98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF98u;
        // 0x20af9c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af98) {
            ctx->pc = 0x20B014u;
            goto label_20b014;
        }
    }
    ctx->pc = 0x20AFA0u;
    // 0x20afa0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x20afa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20afa4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20afa8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x20afa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20afac: 0xc051e62  jal         func_147988
    ctx->pc = 0x20AFACu;
    SET_GPR_U32(ctx, 31, 0x20AFB4u);
    ctx->pc = 0x20AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AFACu;
    // 0x20afb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x20AFACu, 0x20AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFB4u;
label_20afb4:
    // 0x20afb4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20afb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20afb8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20afb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20afbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20afbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20afc0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20afc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20afc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20afc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20afc8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x20afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x20afcc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x20afccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20afd0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20afd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20afd4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x20AFD4u;
    SET_GPR_U32(ctx, 31, 0x20AFDCu);
    ctx->pc = 0x20AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AFD4u;
    // 0x20afd8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x20AFD4u, 0x20AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AFDCu;
label_20afdc:
    // 0x20afdc: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x20afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x20afe0: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x20afe0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20afe4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20afe4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20afe8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20afe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20afec: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x20afecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20aff0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20aff4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20aff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20aff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20aff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20affc: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20b000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20b000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b004: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x20b004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20b008: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x20B008u;
    SET_GPR_U32(ctx, 31, 0x20B010u);
    ctx->pc = 0x20B00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B008u;
    // 0x20b00c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x20B008u, 0x20B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B010u;
label_20b010:
    // 0x20b010: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20b010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20b014:
    // 0x20b014: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x20b014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20b018: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x20B018u;
    SET_GPR_U32(ctx, 31, 0x20B020u);
    ctx->pc = 0x20B01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B018u;
    // 0x20b01c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x20B018u, 0x20B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B020u;
label_20b020:
    // 0x20b020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b024: 0x1000069a  b           . + 4 + (0x69A << 2)
    ctx->pc = 0x20B024u;
    {
        const bool branch_taken_0x20b024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B024u;
        // 0x20b028: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b024) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B02Cu;
label_20b02c:
    // 0x20b02c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20b030: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20b030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b034: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x20b034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x20b038: 0x2c620053  sltiu       $v0, $v1, 0x53
    ctx->pc = 0x20b038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)83) ? 1 : 0);
    // 0x20b03c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B03Cu;
    {
        const bool branch_taken_0x20b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B03Cu;
        // 0x20b040: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b03c) {
            ctx->pc = 0x20B05Cu;
            goto label_20b05c;
        }
    }
    ctx->pc = 0x20B044u;
    // 0x20b044: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b048: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x20b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
    // 0x20b04c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b050: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b054: 0x800008  jr          $a0
    ctx->pc = 0x20B054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B05Cu: goto label_20b05c;
            case 0x20B220u: goto label_20b220;
            case 0x20B23Cu: goto label_20b23c;
            case 0x20B258u: goto label_20b258;
            case 0x20B340u: goto label_20b340;
            case 0x20CA88u: goto label_20ca88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B054u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B05Cu;
label_20b05c:
    // 0x20b05c: 0x52800019  beql        $s4, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x20B05Cu;
    {
        const bool branch_taken_0x20b05c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b05c) {
            ctx->pc = 0x20B060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B05Cu;
            // 0x20b060: 0xc6210760  lwc1        $f1, 0x760($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B0C4u;
            goto label_20b0c4;
        }
    }
    ctx->pc = 0x20B064u;
    // 0x20b064: 0x8e8500f0  lw          $a1, 0xF0($s4)
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x20b068: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x20b06c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x20b06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x20b070: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20b070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20b074: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20b074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b078: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x20B078u;
    SET_GPR_U32(ctx, 31, 0x20B080u);
    ctx->pc = 0x20B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B078u;
    // 0x20b07c: 0xc62c0104  lwc1        $f12, 0x104($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x20B078u, 0x20B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B080u;
label_20b080:
    // 0x20b080: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x20b080u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x20b084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b088: 0x0  nop
    ctx->pc = 0x20b088u;
    // NOP
    // 0x20b08c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b08cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b090: 0x0  nop
    ctx->pc = 0x20b090u;
    // NOP
    // 0x20b094: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20B094u;
    {
        const bool branch_taken_0x20b094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B094u;
        // 0x20b098: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b094) {
            ctx->pc = 0x20B0A0u;
            goto label_20b0a0;
        }
    }
    ctx->pc = 0x20B09Cu;
    // 0x20b09c: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x20b09cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_20b0a0:
    // 0x20b0a0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20b0a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20b0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20b0a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b0ac: 0x0  nop
    ctx->pc = 0x20b0acu;
    // NOP
    // 0x20b0b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20b0b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b0b4: 0x0  nop
    ctx->pc = 0x20b0b4u;
    // NOP
    // 0x20b0b8: 0x450300b6  bc1tl       . + 4 + (0xB6 << 2)
    ctx->pc = 0x20B0B8u;
    {
        const bool branch_taken_0x20b0b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b0b8) {
            ctx->pc = 0x20B0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0B8u;
            // 0x20b0bc: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B394u;
            goto label_20b394;
        }
    }
    ctx->pc = 0x20B0C0u;
    // 0x20b0c0: 0xc6210760  lwc1        $f1, 0x760($s1)
    ctx->pc = 0x20b0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20b0c4:
    // 0x20b0c4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20b0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20b0c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20b0c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20b0cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b0d0: 0x0  nop
    ctx->pc = 0x20b0d0u;
    // NOP
    // 0x20b0d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20b0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b0d8: 0x0  nop
    ctx->pc = 0x20b0d8u;
    // NOP
    // 0x20b0dc: 0x450200ad  bc1fl       . + 4 + (0xAD << 2)
    ctx->pc = 0x20B0DCu;
    {
        const bool branch_taken_0x20b0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b0dc) {
            ctx->pc = 0x20B0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0DCu;
            // 0x20b0e0: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B394u;
            goto label_20b394;
        }
    }
    ctx->pc = 0x20B0E4u;
    // 0x20b0e4: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x20b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20b0e8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x20b0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x20b0ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x20B0ECu;
    {
        const bool branch_taken_0x20b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b0ec) {
            ctx->pc = 0x20B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B0ECu;
            // 0x20b0f0: 0xc620173c  lwc1        $f0, 0x173C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B128u;
            goto label_20b128;
        }
    }
    ctx->pc = 0x20B0F4u;
    // 0x20b0f4: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20b0f8: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20b0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20b0fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20b0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b100: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B100u;
    {
        const bool branch_taken_0x20b100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B100u;
        // 0x20b104: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b100) {
            ctx->pc = 0x20B110u;
            goto label_20b110;
        }
    }
    ctx->pc = 0x20B108u;
    // 0x20b108: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B108u;
    {
        const bool branch_taken_0x20b108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B108u;
        // 0x20b10c: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b108) {
            ctx->pc = 0x20B114u;
            goto label_20b114;
        }
    }
    ctx->pc = 0x20B110u;
label_20b110:
    // 0x20b110: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20b110u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20b114:
    // 0x20b114: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x20b118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b11c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x20b11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x20b120: 0x1000065f  b           . + 4 + (0x65F << 2)
    ctx->pc = 0x20B120u;
    {
        const bool branch_taken_0x20b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B120u;
        // 0x20b124: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b120) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B128u;
label_20b128:
    // 0x20b128: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20b128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20b12c: 0x0  nop
    ctx->pc = 0x20b12cu;
    // NOP
    // 0x20b130: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x20b130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b134: 0x0  nop
    ctx->pc = 0x20b134u;
    // NOP
    // 0x20b138: 0x4500002b  bc1f        . + 4 + (0x2B << 2)
    ctx->pc = 0x20B138u;
    {
        const bool branch_taken_0x20b138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B138u;
        // 0x20b13c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b138) {
            ctx->pc = 0x20B1E8u;
            goto label_20b1e8;
        }
    }
    ctx->pc = 0x20B140u;
    // 0x20b140: 0xc0832b2  jal         func_20CAC8
    ctx->pc = 0x20B140u;
    SET_GPR_U32(ctx, 31, 0x20B148u);
    ctx->pc = 0x20B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B140u;
    // 0x20b144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC8u, 0x20B140u, 0x20B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B148u;
label_20b148:
    // 0x20b148: 0x14400655  bnez        $v0, . + 4 + (0x655 << 2)
    ctx->pc = 0x20B148u;
    {
        const bool branch_taken_0x20b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B148u;
        // 0x20b14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b148) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B150u;
    // 0x20b150: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20b154: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20B154u;
    SET_GPR_U32(ctx, 31, 0x20B15Cu);
    ctx->pc = 0x20B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B154u;
    // 0x20b158: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20B154u, 0x20B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B15Cu;
label_20b15c:
    // 0x20b15c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20b15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20b160: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20B160u;
    {
        const bool branch_taken_0x20b160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b160) {
            ctx->pc = 0x20B164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B160u;
            // 0x20b164: 0x8e2317ac  lw          $v1, 0x17AC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B190u;
            goto label_20b190;
        }
    }
    ctx->pc = 0x20B168u;
    // 0x20b168: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x20B168u;
    SET_GPR_U32(ctx, 31, 0x20B170u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x20B168u, 0x20B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B170u;
label_20b170:
    // 0x20b170: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20b174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b178: 0x0  nop
    ctx->pc = 0x20b178u;
    // NOP
    // 0x20b17c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20b17cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b180: 0x0  nop
    ctx->pc = 0x20b180u;
    // NOP
    // 0x20b184: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B184u;
    {
        const bool branch_taken_0x20b184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b184) {
            ctx->pc = 0x20B188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B184u;
            // 0x20b188: 0xe634173c  swc1        $f20, 0x173C($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5948), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B18Cu;
            goto label_20b18c;
        }
    }
    ctx->pc = 0x20B18Cu;
label_20b18c:
    // 0x20b18c: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
label_20b190:
    // 0x20b190: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20b190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20b194: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20b194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B198u;
    {
        const bool branch_taken_0x20b198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B198u;
        // 0x20b19c: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b198) {
            ctx->pc = 0x20B1A8u;
            goto label_20b1a8;
        }
    }
    ctx->pc = 0x20B1A0u;
    // 0x20b1a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B1A0u;
    {
        const bool branch_taken_0x20b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1A0u;
        // 0x20b1a4: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1a0) {
            ctx->pc = 0x20B1ACu;
            goto label_20b1ac;
        }
    }
    ctx->pc = 0x20B1A8u;
label_20b1a8:
    // 0x20b1a8: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20b1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20b1ac:
    // 0x20b1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1b0: 0xc09d08e  jal         func_274238
    ctx->pc = 0x20B1B0u;
    SET_GPR_U32(ctx, 31, 0x20B1B8u);
    ctx->pc = 0x20B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1B0u;
    // 0x20b1b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x20B1B0u, 0x20B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1B8u;
label_20b1b8:
    // 0x20b1b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b1bc: 0xa62017c8  sh          $zero, 0x17C8($s1)
    ctx->pc = 0x20b1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 0));
    // 0x20b1c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20B1C0u;
    SET_GPR_U32(ctx, 31, 0x20B1C8u);
    ctx->pc = 0x20B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1C0u;
    // 0x20b1c4: 0xae2217c4  sw          $v0, 0x17C4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20B1C0u, 0x20B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1C8u;
label_20b1c8:
    // 0x20b1c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b1cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20b1ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20b1d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B1D0u;
    {
        const bool branch_taken_0x20b1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1d0) {
            ctx->pc = 0x20B1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B1D0u;
            // 0x20b1d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B1D8u;
            goto label_20b1d8;
        }
    }
    ctx->pc = 0x20B1D8u;
label_20b1d8:
    // 0x20b1d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20b1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1dc: 0x2010  mfhi        $a0
    ctx->pc = 0x20b1dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20b1e0: 0x1000062f  b           . + 4 + (0x62F << 2)
    ctx->pc = 0x20B1E0u;
    {
        const bool branch_taken_0x20b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1E0u;
        // 0x20b1e4: 0xa22417bf  sb          $a0, 0x17BF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6079), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1e0) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B1E8u;
label_20b1e8:
    // 0x20b1e8: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20b1ec: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20b1f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20b1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b1f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B1F4u;
    {
        const bool branch_taken_0x20b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1F4u;
        // 0x20b1f8: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1f4) {
            ctx->pc = 0x20B204u;
            goto label_20b204;
        }
    }
    ctx->pc = 0x20B1FCu;
    // 0x20b1fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B1FCu;
    {
        const bool branch_taken_0x20b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1FCu;
        // 0x20b200: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1fc) {
            ctx->pc = 0x20B208u;
            goto label_20b208;
        }
    }
    ctx->pc = 0x20B204u;
label_20b204:
    // 0x20b204: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20b204u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20b208:
    // 0x20b208: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x20b20c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20b20cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b210: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x20b210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b218: 0x10000620  b           . + 4 + (0x620 << 2)
    ctx->pc = 0x20B218u;
    {
        const bool branch_taken_0x20b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B218u;
        // 0x20b21c: 0xa22002f4  sb          $zero, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b218) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B220u;
label_20b220:
    // 0x20b220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b224: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20b228: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b22c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20b22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b230: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20b230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b234: 0x10000619  b           . + 4 + (0x619 << 2)
    ctx->pc = 0x20B234u;
    {
        const bool branch_taken_0x20b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B234u;
        // 0x20b238: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b234) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B23Cu;
label_20b23c:
    // 0x20b23c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b240: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20b240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b244: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b248: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20b248u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b24c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20b24cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b250: 0x10000612  b           . + 4 + (0x612 << 2)
    ctx->pc = 0x20B250u;
    {
        const bool branch_taken_0x20b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B250u;
        // 0x20b254: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b250) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B258u;
label_20b258:
    // 0x20b258: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x20b25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b260: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x20b264: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20b264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b268: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20b268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b26c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20b270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b274: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20b274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b278: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x20B278u;
    SET_GPR_U32(ctx, 31, 0x20B280u);
    ctx->pc = 0x20B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B278u;
    // 0x20b27c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x20B278u, 0x20B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B280u;
label_20b280:
    // 0x20b280: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x20b280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x20b284: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b288: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x20b288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x20b28c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b290: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x20b290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x20b294: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x20b294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20b298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B298u;
    {
        const bool branch_taken_0x20b298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B298u;
        // 0x20b29c: 0xe6201740  swc1        $f0, 0x1740($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5952), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b298) {
            ctx->pc = 0x20B2ACu;
            goto label_20b2ac;
        }
    }
    ctx->pc = 0x20B2A0u;
    // 0x20b2a0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x20b2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B2A4u;
    {
        const bool branch_taken_0x20b2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2A4u;
        // 0x20b2a8: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2a4) {
            ctx->pc = 0x20B2B0u;
            goto label_20b2b0;
        }
    }
    ctx->pc = 0x20B2ACu;
label_20b2ac:
    // 0x20b2ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b2b0:
    // 0x20b2b0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20B2B0u;
    {
        const bool branch_taken_0x20b2b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2B0u;
        // 0x20b2b4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2b0) {
            ctx->pc = 0x20B328u;
            goto label_20b328;
        }
    }
    ctx->pc = 0x20B2B8u;
    // 0x20b2b8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x20b2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x20b2bc: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x20b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b2c0: 0xc051e62  jal         func_147988
    ctx->pc = 0x20B2C0u;
    SET_GPR_U32(ctx, 31, 0x20B2C8u);
    ctx->pc = 0x20B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2C0u;
    // 0x20b2c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x20B2C0u, 0x20B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2C8u;
label_20b2c8:
    // 0x20b2c8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x20b2cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20b2ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20b2d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b2d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b2d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20b2d8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x20b2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x20b2dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x20b2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20b2e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x20b2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2e8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x20B2E8u;
    SET_GPR_U32(ctx, 31, 0x20B2F0u);
    ctx->pc = 0x20B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B2E8u;
    // 0x20b2ec: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x20B2E8u, 0x20B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2F0u;
label_20b2f0:
    // 0x20b2f0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x20b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x20b2f4: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x20b2f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b2f8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x20b2f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b2fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x20b2fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x20b300: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x20b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x20b304: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b308: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20b308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b30c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b310: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x20b310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x20b314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20b314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b318: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x20b318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20b31c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x20B31Cu;
    SET_GPR_U32(ctx, 31, 0x20B324u);
    ctx->pc = 0x20B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B31Cu;
    // 0x20b320: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x20B31Cu, 0x20B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B324u;
label_20b324:
    // 0x20b324: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20b324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20b328:
    // 0x20b328: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x20b328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20b32c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x20B32Cu;
    SET_GPR_U32(ctx, 31, 0x20B334u);
    ctx->pc = 0x20B330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B32Cu;
    // 0x20b330: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x20B32Cu, 0x20B334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B334u;
label_20b334:
    // 0x20b334: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b338: 0x100005d5  b           . + 4 + (0x5D5 << 2)
    ctx->pc = 0x20B338u;
    {
        const bool branch_taken_0x20b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B338u;
        // 0x20b33c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b338) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B340u;
label_20b340:
    // 0x20b340: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20b340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20b344: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20b348: 0x106205cf  beq         $v1, $v0, . + 4 + (0x5CF << 2)
    ctx->pc = 0x20B348u;
    {
        const bool branch_taken_0x20b348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B348u;
        // 0x20b34c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b348) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20B350u;
    // 0x20b350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B350u;
    {
        const bool branch_taken_0x20b350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B350u;
        // 0x20b354: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b350) {
            ctx->pc = 0x20B370u;
            goto label_20b370;
        }
    }
    ctx->pc = 0x20B358u;
    // 0x20b358: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B358u;
    {
        const bool branch_taken_0x20b358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B358u;
        // 0x20b35c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b358) {
            ctx->pc = 0x20B384u;
            goto label_20b384;
        }
    }
    ctx->pc = 0x20B360u;
    // 0x20b360: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B360u;
    {
        const bool branch_taken_0x20b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B360u;
        // 0x20b364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b360) {
            ctx->pc = 0x20B388u;
            goto label_20b388;
        }
    }
    ctx->pc = 0x20B368u;
    // 0x20b368: 0x100005c9  b           . + 4 + (0x5C9 << 2)
    ctx->pc = 0x20B368u;
    {
        const bool branch_taken_0x20b368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B368u;
        // 0x20b36c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b368) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B370u;
label_20b370:
    // 0x20b370: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20b370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20b374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B374u;
    {
        const bool branch_taken_0x20b374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B374u;
        // 0x20b378: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b374) {
            ctx->pc = 0x20B384u;
            goto label_20b384;
        }
    }
    ctx->pc = 0x20B37Cu;
    // 0x20b37c: 0x104005c3  beqz        $v0, . + 4 + (0x5C3 << 2)
    ctx->pc = 0x20B37Cu;
    {
        const bool branch_taken_0x20b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B37Cu;
        // 0x20b380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b37c) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20B384u;
label_20b384:
    // 0x20b384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b388:
    // 0x20b388: 0x100005c1  b           . + 4 + (0x5C1 << 2)
    ctx->pc = 0x20B388u;
    {
        const bool branch_taken_0x20b388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B388u;
        // 0x20b38c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b388) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B390u;
label_20b390:
    // 0x20b390: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
label_20b394:
    // 0x20b394: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x20b394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x20b398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20b39c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B39Cu;
    {
        const bool branch_taken_0x20b39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b39c) {
            ctx->pc = 0x20B3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B39Cu;
            // 0x20b3a0: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B3C0u;
            goto label_20b3c0;
        }
    }
    ctx->pc = 0x20B3A4u;
    // 0x20b3a4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20b3a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20b3a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B3A8u;
    {
        const bool branch_taken_0x20b3a8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3A8u;
        // 0x20b3ac: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3a8) {
            ctx->pc = 0x20B3BCu;
            goto label_20b3bc;
        }
    }
    ctx->pc = 0x20B3B0u;
    // 0x20b3b0: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20b3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20b3b4: 0x1060013c  beqz        $v1, . + 4 + (0x13C << 2)
    ctx->pc = 0x20B3B4u;
    {
        const bool branch_taken_0x20b3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3b4) {
            ctx->pc = 0x20B8A8u;
            goto label_20b8a8;
        }
    }
    ctx->pc = 0x20B3BCu;
label_20b3bc:
    // 0x20b3bc: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20b3bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
label_20b3c0:
    // 0x20b3c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20b3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20b3c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20b3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20b3c8: 0x3404b008  ori         $a0, $zero, 0xB008
    ctx->pc = 0x20b3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45064);
    // 0x20b3cc: 0x42778  dsll        $a0, $a0, 29
    ctx->pc = 0x20b3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 29);
    // 0x20b3d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20b3d4: 0x54440055  bnel        $v0, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x20B3D4u;
    {
        const bool branch_taken_0x20b3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x20b3d4) {
            ctx->pc = 0x20B3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3D4u;
            // 0x20b3d8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B52Cu;
            goto label_20b52c;
        }
    }
    ctx->pc = 0x20B3DCu;
    // 0x20b3dc: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x20b3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x20b3e0: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x20b3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x20b3e4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x20B3E4u;
    {
        const bool branch_taken_0x20b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3E4u;
        // 0x20b3e8: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3e4) {
            ctx->pc = 0x20B528u;
            goto label_20b528;
        }
    }
    ctx->pc = 0x20B3ECu;
    // 0x20b3ec: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20b3f0: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20b3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b3f4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x20B3F4u;
    {
        const bool branch_taken_0x20b3f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3F4u;
        // 0x20b3f8: 0x2882001d  slti        $v0, $a0, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3f4) {
            ctx->pc = 0x20B430u;
            goto label_20b430;
        }
    }
    ctx->pc = 0x20B3FCu;
    // 0x20b3fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3FCu;
        // 0x20b400: 0x2882000c  slti        $v0, $a0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B41Cu;
            goto label_20b41c;
        }
    }
    ctx->pc = 0x20B404u;
    // 0x20b404: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20B404u;
    {
        const bool branch_taken_0x20b404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B404u;
        // 0x20b408: 0x28820008  slti        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b404) {
            ctx->pc = 0x20B43Cu;
            goto label_20b43c;
        }
    }
    ctx->pc = 0x20B40Cu;
    // 0x20b40c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20B40Cu;
    {
        const bool branch_taken_0x20b40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b40c) {
            ctx->pc = 0x20B410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B40Cu;
            // 0x20b410: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B440u;
            goto label_20b440;
        }
    }
    ctx->pc = 0x20B414u;
    // 0x20b414: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20B414u;
    {
        const bool branch_taken_0x20b414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B414u;
        // 0x20b418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b414) {
            ctx->pc = 0x20B434u;
            goto label_20b434;
        }
    }
    ctx->pc = 0x20B41Cu;
label_20b41c:
    // 0x20b41c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20b420: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B420u;
    {
        const bool branch_taken_0x20b420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B420u;
        // 0x20b424: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b420) {
            ctx->pc = 0x20B430u;
            goto label_20b430;
        }
    }
    ctx->pc = 0x20B428u;
    // 0x20b428: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B428u;
    {
        const bool branch_taken_0x20b428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b428) {
            ctx->pc = 0x20B42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B428u;
            // 0x20b42c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B440u;
            goto label_20b440;
        }
    }
    ctx->pc = 0x20B430u;
label_20b430:
    // 0x20b430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b434:
    // 0x20b434: 0x10000596  b           . + 4 + (0x596 << 2)
    ctx->pc = 0x20B434u;
    {
        const bool branch_taken_0x20b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B434u;
        // 0x20b438: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b434) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B43Cu;
label_20b43c:
    // 0x20b43c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_20b440:
    // 0x20b440: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B440u;
    {
        const bool branch_taken_0x20b440 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B440u;
        // 0x20b444: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b440) {
            ctx->pc = 0x20B454u;
            goto label_20b454;
        }
    }
    ctx->pc = 0x20B448u;
    // 0x20b448: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b44c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x20B44Cu;
    {
        const bool branch_taken_0x20b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B44Cu;
        // 0x20b450: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b44c) {
            ctx->pc = 0x20B514u;
            goto label_20b514;
        }
    }
    ctx->pc = 0x20B454u;
label_20b454:
    // 0x20b454: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20B454u;
    SET_GPR_U32(ctx, 31, 0x20B45Cu);
    ctx->pc = 0x20B458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B454u;
    // 0x20b458: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20B454u, 0x20B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B45Cu;
label_20b45c:
    // 0x20b45c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20b460: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20b460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20b464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B464u;
    {
        const bool branch_taken_0x20b464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B464u;
        // 0x20b468: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b464) {
            ctx->pc = 0x20B484u;
            goto label_20b484;
        }
    }
    ctx->pc = 0x20B46Cu;
    // 0x20b46c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b470: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x20b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
    // 0x20b474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b47c: 0x800008  jr          $a0
    ctx->pc = 0x20B47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B484u: goto label_20b484;
            case 0x20B48Cu: goto label_20b48c;
            case 0x20B494u: goto label_20b494;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B47Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B484u;
label_20b484:
    // 0x20b484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B484u;
    {
        const bool branch_taken_0x20b484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B484u;
        // 0x20b488: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b484) {
            ctx->pc = 0x20B498u;
            goto label_20b498;
        }
    }
    ctx->pc = 0x20B48Cu;
label_20b48c:
    // 0x20b48c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B48Cu;
    {
        const bool branch_taken_0x20b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B48Cu;
        // 0x20b490: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b48c) {
            ctx->pc = 0x20B498u;
            goto label_20b498;
        }
    }
    ctx->pc = 0x20B494u;
label_20b494:
    // 0x20b494: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20b494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b498:
    // 0x20b498: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20b49c: 0x24020211  addiu       $v0, $zero, 0x211
    ctx->pc = 0x20b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    // 0x20b4a0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B4A0u;
    {
        const bool branch_taken_0x20b4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4A0u;
        // 0x20b4a4: 0x28620211  slti        $v0, $v1, 0x211 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)529) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4a0) {
            ctx->pc = 0x20B4C4u;
            goto label_20b4c4;
        }
    }
    ctx->pc = 0x20B4A8u;
    // 0x20b4a8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20B4A8u;
    {
        const bool branch_taken_0x20b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4A8u;
        // 0x20b4ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4a8) {
            ctx->pc = 0x20B510u;
            goto label_20b510;
        }
    }
    ctx->pc = 0x20B4B0u;
    // 0x20b4b0: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20b4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20b4b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20B4B4u;
    {
        const bool branch_taken_0x20b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4B4u;
        // 0x20b4b8: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4b4) {
            ctx->pc = 0x20B50Cu;
            goto label_20b50c;
        }
    }
    ctx->pc = 0x20B4BCu;
    // 0x20b4bc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20B4BCu;
    {
        const bool branch_taken_0x20b4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4BCu;
        // 0x20b4c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4bc) {
            ctx->pc = 0x20B510u;
            goto label_20b510;
        }
    }
    ctx->pc = 0x20B4C4u;
label_20b4c4:
    // 0x20b4c4: 0x92221866  lbu         $v0, 0x1866($s1)
    ctx->pc = 0x20b4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6246)));
    // 0x20b4c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x20b4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20b4cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20B4CCu;
    {
        const bool branch_taken_0x20b4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4CCu;
        // 0x20b4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4cc) {
            ctx->pc = 0x20B510u;
            goto label_20b510;
        }
    }
    ctx->pc = 0x20B4D4u;
    // 0x20b4d4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20B4D4u;
    SET_GPR_U32(ctx, 31, 0x20B4DCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20B4D4u, 0x20B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B4DCu;
label_20b4dc:
    // 0x20b4dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b4e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B4E0u;
    {
        const bool branch_taken_0x20b4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B4E0u;
        // 0x20b4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b4e0) {
            ctx->pc = 0x20B50Cu;
            goto label_20b50c;
        }
    }
    ctx->pc = 0x20B4E8u;
    // 0x20b4e8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x20b4ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b4f0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20b4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b4f4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b4f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20b4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4fc: 0xa22402f6  sb          $a0, 0x2F6($s1)
    ctx->pc = 0x20b4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b500: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20b500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b504: 0x10000566  b           . + 4 + (0x566 << 2)
    ctx->pc = 0x20B504u;
    {
        const bool branch_taken_0x20b504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B504u;
        // 0x20b508: 0xa2201866  sb          $zero, 0x1866($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b504) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B50Cu;
label_20b50c:
    // 0x20b50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b510:
    // 0x20b510: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x20b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_20b514:
    // 0x20b514: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20b514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b518: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b51c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20b51cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_20b520:
    // 0x20b520: 0x1000fe11  b           . + 4 + (-0x1EF << 2)
    ctx->pc = 0x20B520u;
    {
        const bool branch_taken_0x20b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B520u;
        // 0x20b524: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b520) {
            ctx->pc = 0x20AD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ad68;
        }
    }
    ctx->pc = 0x20B528u;
label_20b528:
    // 0x20b528: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20b528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_20b52c:
    // 0x20b52c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x20b52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x20b530: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20B530u;
    {
        const bool branch_taken_0x20b530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B530u;
        // 0x20b534: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b530) {
            ctx->pc = 0x20B568u;
            goto label_20b568;
        }
    }
    ctx->pc = 0x20B538u;
    // 0x20b538: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20b53c: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x20b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x20b540: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20b540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b544: 0x146400de  bne         $v1, $a0, . + 4 + (0xDE << 2)
    ctx->pc = 0x20B544u;
    {
        const bool branch_taken_0x20b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B544u;
        // 0x20b548: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b544) {
            ctx->pc = 0x20B8C0u;
            goto label_20b8c0;
        }
    }
    ctx->pc = 0x20B54Cu;
    // 0x20b54c: 0xc6211754  lwc1        $f1, 0x1754($s1)
    ctx->pc = 0x20b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b550: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b554: 0x0  nop
    ctx->pc = 0x20b554u;
    // NOP
    // 0x20b558: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20b558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b55c: 0x0  nop
    ctx->pc = 0x20b55cu;
    // NOP
    // 0x20b560: 0x450000d7  bc1f        . + 4 + (0xD7 << 2)
    ctx->pc = 0x20B560u;
    {
        const bool branch_taken_0x20b560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B560u;
        // 0x20b564: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b560) {
            ctx->pc = 0x20B8C0u;
            goto label_20b8c0;
        }
    }
    ctx->pc = 0x20B568u;
label_20b568:
    // 0x20b568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b56c: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x20b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x20b570: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20B570u;
    SET_GPR_U32(ctx, 31, 0x20B578u);
    ctx->pc = 0x20B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B570u;
    // 0x20b574: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20B570u, 0x20B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B578u;
label_20b578:
    // 0x20b578: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20b57c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20b57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20b580: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B580u;
    {
        const bool branch_taken_0x20b580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B580u;
        // 0x20b584: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b580) {
            ctx->pc = 0x20B5A0u;
            goto label_20b5a0;
        }
    }
    ctx->pc = 0x20B588u;
    // 0x20b588: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b58c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x20b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x20b590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b594: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b598: 0x800008  jr          $a0
    ctx->pc = 0x20B598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B5A0u: goto label_20b5a0;
            case 0x20B5A8u: goto label_20b5a8;
            case 0x20B5B0u: goto label_20b5b0;
            case 0x20B5B8u: goto label_20b5b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B598u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B5A0u;
label_20b5a0:
    // 0x20b5a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20B5A0u;
    {
        const bool branch_taken_0x20b5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5A0u;
        // 0x20b5a4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5a0) {
            ctx->pc = 0x20B5BCu;
            goto label_20b5bc;
        }
    }
    ctx->pc = 0x20B5A8u;
label_20b5a8:
    // 0x20b5a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20B5A8u;
    {
        const bool branch_taken_0x20b5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5A8u;
        // 0x20b5ac: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5a8) {
            ctx->pc = 0x20B5BCu;
            goto label_20b5bc;
        }
    }
    ctx->pc = 0x20B5B0u;
label_20b5b0:
    // 0x20b5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B5B0u;
    {
        const bool branch_taken_0x20b5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5B0u;
        // 0x20b5b4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5b0) {
            ctx->pc = 0x20B5BCu;
            goto label_20b5bc;
        }
    }
    ctx->pc = 0x20B5B8u;
label_20b5b8:
    // 0x20b5b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20b5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b5bc:
    // 0x20b5bc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x20b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20b5c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b5c4: 0x28420224  slti        $v0, $v0, 0x224
    ctx->pc = 0x20b5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)548) ? 1 : 0);
    // 0x20b5c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B5C8u;
    {
        const bool branch_taken_0x20b5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5C8u;
        // 0x20b5cc: 0x28a30220  slti        $v1, $a1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5c8) {
            ctx->pc = 0x20B5D8u;
            goto label_20b5d8;
        }
    }
    ctx->pc = 0x20B5D0u;
    // 0x20b5d0: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x20b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x20b5d4: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x20b5d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_20b5d8:
    // 0x20b5d8: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20b5dc: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x20b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x20b5e0: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20b5e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b5e4: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20B5E4u;
    {
        const bool branch_taken_0x20b5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5E4u;
        // 0x20b5e8: 0x24a3fdfc  addiu       $v1, $a1, -0x204 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5e4) {
            ctx->pc = 0x20B60Cu;
            goto label_20b60c;
        }
    }
    ctx->pc = 0x20B5ECu;
    // 0x20b5ec: 0x92221866  lbu         $v0, 0x1866($s1)
    ctx->pc = 0x20b5ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6246)));
    // 0x20b5f0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x20b5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20b5f4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B5F4u;
    {
        const bool branch_taken_0x20b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B5F4u;
        // 0x20b5f8: 0xae2005b4  sw          $zero, 0x5B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b5f4) {
            ctx->pc = 0x20B654u;
            goto label_20b654;
        }
    }
    ctx->pc = 0x20B5FCu;
    // 0x20b5fc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20B5FCu;
    SET_GPR_U32(ctx, 31, 0x20B604u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20B5FCu, 0x20B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B604u;
label_20b604:
    // 0x20b604: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20B604u;
    {
        const bool branch_taken_0x20b604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B604u;
        // 0x20b608: 0x30500001  andi        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b604) {
            ctx->pc = 0x20B654u;
            goto label_20b654;
        }
    }
    ctx->pc = 0x20B60Cu;
label_20b60c:
    // 0x20b60c: 0x2c62007b  sltiu       $v0, $v1, 0x7B
    ctx->pc = 0x20b60cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
    // 0x20b610: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B610u;
    {
        const bool branch_taken_0x20b610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B610u;
        // 0x20b614: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b610) {
            ctx->pc = 0x20B630u;
            goto label_20b630;
        }
    }
    ctx->pc = 0x20B618u;
    // 0x20b618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b61c: 0x24420fb0  addiu       $v0, $v0, 0xFB0
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4016));
    // 0x20b620: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b624: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b628: 0x800008  jr          $a0
    ctx->pc = 0x20B628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B630u: goto label_20b630;
            case 0x20B644u: goto label_20b644;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B628u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B630u;
label_20b630:
    // 0x20b630: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20B630u;
    SET_GPR_U32(ctx, 31, 0x20B638u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20B630u, 0x20B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B638u;
label_20b638:
    // 0x20b638: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x20b638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20b63c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B63Cu;
    {
        const bool branch_taken_0x20b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B63Cu;
        // 0x20b640: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b63c) {
            ctx->pc = 0x20B654u;
            goto label_20b654;
        }
    }
    ctx->pc = 0x20B644u;
label_20b644:
    // 0x20b644: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20B644u;
    SET_GPR_U32(ctx, 31, 0x20B64Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20B644u, 0x20B64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B64Cu;
label_20b64c:
    // 0x20b64c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b650: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x20b650u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_20b654:
    // 0x20b654: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20B654u;
    SET_GPR_U32(ctx, 31, 0x20B65Cu);
    ctx->pc = 0x20B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B654u;
    // 0x20b658: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20B654u, 0x20B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B65Cu;
label_20b65c:
    // 0x20b65c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x20b65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20b660: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20B660u;
    {
        const bool branch_taken_0x20b660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B660u;
        // 0x20b664: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b660) {
            ctx->pc = 0x20B690u;
            goto label_20b690;
        }
    }
    ctx->pc = 0x20B668u;
    // 0x20b668: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20B668u;
    SET_GPR_U32(ctx, 31, 0x20B670u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20B668u, 0x20B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B670u;
label_20b670:
    // 0x20b670: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20b674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b678: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20b678u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20b67c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20B67Cu;
    {
        const bool branch_taken_0x20b67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b67c) {
            ctx->pc = 0x20B680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B67Cu;
            // 0x20b680: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B684u;
            goto label_20b684;
        }
    }
    ctx->pc = 0x20B684u;
label_20b684:
    // 0x20b684: 0x2010  mfhi        $a0
    ctx->pc = 0x20b684u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20b688: 0xa4800a  movz        $s0, $a1, $a0
    ctx->pc = 0x20b688u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x20b68c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20b68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_20b690:
    // 0x20b690: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20b690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x20b694: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x20b694u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x20b698: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x20B698u;
    {
        const bool branch_taken_0x20b698 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b698) {
            ctx->pc = 0x20B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B698u;
            // 0x20b69c: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B714u;
            goto label_20b714;
        }
    }
    ctx->pc = 0x20B6A0u;
    // 0x20b6a0: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20b6a4: 0x5840001b  blezl       $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20B6A4u;
    {
        const bool branch_taken_0x20b6a4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x20b6a4) {
            ctx->pc = 0x20B6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B6A4u;
            // 0x20b6a8: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B714u;
            goto label_20b714;
        }
    }
    ctx->pc = 0x20B6ACu;
    // 0x20b6ac: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20B6ACu;
    SET_GPR_U32(ctx, 31, 0x20B6B4u);
    ctx->pc = 0x20B6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6ACu;
    // 0x20b6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20B6ACu, 0x20B6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6B4u;
label_20b6b4:
    // 0x20b6b4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20B6B4u;
    {
        const bool branch_taken_0x20b6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b6b4) {
            ctx->pc = 0x20B6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B6B4u;
            // 0x20b6b8: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B714u;
            goto label_20b714;
        }
    }
    ctx->pc = 0x20B6BCu;
    // 0x20b6bc: 0x8e2417ac  lw          $a0, 0x17AC($s1)
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20b6c0: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20b6c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20b6c4: 0xa2201866  sb          $zero, 0x1866($s1)
    ctx->pc = 0x20b6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6246), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b6c8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x20b6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b6cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B6CCu;
    {
        const bool branch_taken_0x20b6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6CCu;
        // 0x20b6d0: 0x96230548  lhu         $v1, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6cc) {
            ctx->pc = 0x20B6DCu;
            goto label_20b6dc;
        }
    }
    ctx->pc = 0x20B6D4u;
    // 0x20b6d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B6D4u;
    {
        const bool branch_taken_0x20b6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6D4u;
        // 0x20b6d8: 0xa623054a  sh          $v1, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6d4) {
            ctx->pc = 0x20B6E0u;
            goto label_20b6e0;
        }
    }
    ctx->pc = 0x20B6DCu;
label_20b6dc:
    // 0x20b6dc: 0xa624054a  sh          $a0, 0x54A($s1)
    ctx->pc = 0x20b6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
label_20b6e0:
    // 0x20b6e0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x20b6e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b6e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20b6ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b6f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20b6f4: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x20b6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x20b6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20b6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b6fc: 0xae2317c4  sw          $v1, 0x17C4($s1)
    ctx->pc = 0x20b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6084), GPR_U32(ctx, 3));
    // 0x20b700: 0xa22402f4  sb          $a0, 0x2F4($s1)
    ctx->pc = 0x20b700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b704: 0xa22502f5  sb          $a1, 0x2F5($s1)
    ctx->pc = 0x20b704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x20b708: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20b708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b70c: 0x100004e3  b           . + 4 + (0x4E3 << 2)
    ctx->pc = 0x20B70Cu;
    {
        const bool branch_taken_0x20b70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B70Cu;
        // 0x20b710: 0xa62017c8  sh          $zero, 0x17C8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 6088), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b70c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B714u;
label_20b714:
    // 0x20b714: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x20b714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x20b718: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20b71c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20B71Cu;
    {
        const bool branch_taken_0x20b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b71c) {
            ctx->pc = 0x20B720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B71Cu;
            // 0x20b720: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B748u;
            goto label_20b748;
        }
    }
    ctx->pc = 0x20B724u;
    // 0x20b724: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20b724u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20b728: 0x5c400007  bgtzl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B728u;
    {
        const bool branch_taken_0x20b728 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20b728) {
            ctx->pc = 0x20B72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B728u;
            // 0x20b72c: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B748u;
            goto label_20b748;
        }
    }
    ctx->pc = 0x20B730u;
    // 0x20b730: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b734: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20b734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b738: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b740: 0x100004d6  b           . + 4 + (0x4D6 << 2)
    ctx->pc = 0x20B740u;
    {
        const bool branch_taken_0x20b740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B740u;
        // 0x20b744: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b740) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B748u;
label_20b748:
    // 0x20b748: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20b748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b74c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20b74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b750: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20b750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20b754: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20b754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20b758: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x20B758u;
    {
        const bool branch_taken_0x20b758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B758u;
        // 0x20b75c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b758) {
            ctx->pc = 0x20B8C0u;
            goto label_20b8c0;
        }
    }
    ctx->pc = 0x20B760u;
    // 0x20b760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b764: 0x244211a0  addiu       $v0, $v0, 0x11A0
    ctx->pc = 0x20b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4512));
    // 0x20b768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b76c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b770: 0x800008  jr          $a0
    ctx->pc = 0x20B770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B778u: goto label_20b778;
            case 0x20B78Cu: goto label_20b78c;
            case 0x20B798u: goto label_20b798;
            case 0x20B7D0u: goto label_20b7d0;
            case 0x20B81Cu: goto label_20b81c;
            case 0x20B828u: goto label_20b828;
            case 0x20B848u: goto label_20b848;
            case 0x20B864u: goto label_20b864;
            case 0x20B870u: goto label_20b870;
            case 0x20B8C0u: goto label_20b8c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B770u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B778u;
label_20b778:
    // 0x20b778: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20b778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20b77c: 0x1c40004a  bgtz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x20B77Cu;
    {
        const bool branch_taken_0x20b77c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B77Cu;
        // 0x20b780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b77c) {
            ctx->pc = 0x20B8A8u;
            goto label_20b8a8;
        }
    }
    ctx->pc = 0x20B784u;
    // 0x20b784: 0x100004c2  b           . + 4 + (0x4C2 << 2)
    ctx->pc = 0x20B784u;
    {
        const bool branch_taken_0x20b784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B784u;
        // 0x20b788: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b784) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B78Cu;
label_20b78c:
    // 0x20b78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b790: 0x100004bf  b           . + 4 + (0x4BF << 2)
    ctx->pc = 0x20B790u;
    {
        const bool branch_taken_0x20b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B790u;
        // 0x20b794: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b790) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B798u;
label_20b798:
    // 0x20b798: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20b798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20b79c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20b79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20b7a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20b7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20b7a4: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20b7a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20b7a8: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20b7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20b7ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20b7b0: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B7B0u;
    {
        const bool branch_taken_0x20b7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7B0u;
        // 0x20b7b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7b0) {
            ctx->pc = 0x20B7C8u;
            goto label_20b7c8;
        }
    }
    ctx->pc = 0x20B7B8u;
    // 0x20b7b8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20b7b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20b7bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20b7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20b7c0: 0x144004b7  bnez        $v0, . + 4 + (0x4B7 << 2)
    ctx->pc = 0x20B7C0u;
    {
        const bool branch_taken_0x20b7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7C0u;
        // 0x20b7c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7c0) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B7C8u;
label_20b7c8:
    // 0x20b7c8: 0x100004b1  b           . + 4 + (0x4B1 << 2)
    ctx->pc = 0x20B7C8u;
    {
        const bool branch_taken_0x20b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7C8u;
        // 0x20b7cc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7c8) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B7D0u;
label_20b7d0:
    // 0x20b7d0: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20b7d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20b7d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20b7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20b7d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20b7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20b7dc: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20b7dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20b7e0: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20b7e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20b7e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20b7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20b7e8: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B7E8u;
    {
        const bool branch_taken_0x20b7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7E8u;
        // 0x20b7ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7e8) {
            ctx->pc = 0x20B804u;
            goto label_20b804;
        }
    }
    ctx->pc = 0x20B7F0u;
    // 0x20b7f0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20b7f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20b7f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20b7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20b7f8: 0x144004a9  bnez        $v0, . + 4 + (0x4A9 << 2)
    ctx->pc = 0x20B7F8u;
    {
        const bool branch_taken_0x20b7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7F8u;
        // 0x20b7fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7f8) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B800u;
    // 0x20b800: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b804:
    // 0x20b804: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20b804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20b808: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20b808u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b810: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b814: 0x100004a1  b           . + 4 + (0x4A1 << 2)
    ctx->pc = 0x20B814u;
    {
        const bool branch_taken_0x20b814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B814u;
        // 0x20b818: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b814) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B81Cu;
label_20b81c:
    // 0x20b81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b820: 0x1000049b  b           . + 4 + (0x49B << 2)
    ctx->pc = 0x20B820u;
    {
        const bool branch_taken_0x20b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B820u;
        // 0x20b824: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b820) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B828u;
label_20b828:
    // 0x20b828: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b82c: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20b830: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20b830u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b838: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b838u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b83c: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x20b83cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x20b840: 0x10000496  b           . + 4 + (0x496 << 2)
    ctx->pc = 0x20B840u;
    {
        const bool branch_taken_0x20b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B840u;
        // 0x20b844: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b840) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B848u;
label_20b848:
    // 0x20b848: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b84c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20b850: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20b850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b858: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b858u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b85c: 0x1000048f  b           . + 4 + (0x48F << 2)
    ctx->pc = 0x20B85Cu;
    {
        const bool branch_taken_0x20b85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B85Cu;
        // 0x20b860: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b85c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B864u;
label_20b864:
    // 0x20b864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b868: 0x10000489  b           . + 4 + (0x489 << 2)
    ctx->pc = 0x20B868u;
    {
        const bool branch_taken_0x20b868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B868u;
        // 0x20b86c: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b868) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B870u;
label_20b870:
    // 0x20b870: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x20b870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20b874: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x20b874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x20b878: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x20b878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x20b87c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20B87Cu;
    {
        const bool branch_taken_0x20b87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B87Cu;
        // 0x20b880: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b87c) {
            ctx->pc = 0x20B8C0u;
            goto label_20b8c0;
        }
    }
    ctx->pc = 0x20B884u;
    // 0x20b884: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b888: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x20b888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x20b88c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b890: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b894: 0x800008  jr          $a0
    ctx->pc = 0x20B894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B89Cu: goto label_20b89c;
            case 0x20B8C0u: goto label_20b8c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B894u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B89Cu;
label_20b89c:
    // 0x20b89c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x20b89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20b8a0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20B8A0u;
    {
        const bool branch_taken_0x20b8a0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8A0u;
        // 0x20b8a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8a0) {
            ctx->pc = 0x20B8B8u;
            goto label_20b8b8;
        }
    }
    ctx->pc = 0x20B8A8u;
label_20b8a8:
    // 0x20b8a8: 0xc09a8ce  jal         func_26A338
    ctx->pc = 0x20B8A8u;
    SET_GPR_U32(ctx, 31, 0x20B8B0u);
    ctx->pc = 0x20B8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B8A8u;
    // 0x20b8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A338u, 0x20B8A8u, 0x20B8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B8B0u;
label_20b8b0:
    // 0x20b8b0: 0x1000047b  b           . + 4 + (0x47B << 2)
    ctx->pc = 0x20B8B0u;
    {
        const bool branch_taken_0x20b8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8B0u;
        // 0x20b8b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8b0) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B8B8u;
label_20b8b8:
    // 0x20b8b8: 0x10000475  b           . + 4 + (0x475 << 2)
    ctx->pc = 0x20B8B8u;
    {
        const bool branch_taken_0x20b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8B8u;
        // 0x20b8bc: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8b8) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B8C0u;
label_20b8c0:
    // 0x20b8c0: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20b8c4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x20b8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x20b8c8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x20B8C8u;
    {
        const bool branch_taken_0x20b8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b8c8) {
            ctx->pc = 0x20B8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B8C8u;
            // 0x20b8cc: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B91Cu;
            goto label_20b91c;
        }
    }
    ctx->pc = 0x20B8D0u;
    // 0x20b8d0: 0x8e2317ac  lw          $v1, 0x17AC($s1)
    ctx->pc = 0x20b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20b8d4: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x20b8d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x20b8d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20b8d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20b8dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B8DCu;
    {
        const bool branch_taken_0x20b8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8DCu;
        // 0x20b8e0: 0x96240548  lhu         $a0, 0x548($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8dc) {
            ctx->pc = 0x20B8ECu;
            goto label_20b8ec;
        }
    }
    ctx->pc = 0x20B8E4u;
    // 0x20b8e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B8E4u;
    {
        const bool branch_taken_0x20b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8E4u;
        // 0x20b8e8: 0xa624054a  sh          $a0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8e4) {
            ctx->pc = 0x20B8F0u;
            goto label_20b8f0;
        }
    }
    ctx->pc = 0x20B8ECu;
label_20b8ec:
    // 0x20b8ec: 0xa623054a  sh          $v1, 0x54A($s1)
    ctx->pc = 0x20b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20b8f0:
    // 0x20b8f0: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20b8f4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x20b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20b8f8: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20b8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b8fc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B8FCu;
    {
        const bool branch_taken_0x20b8fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B8FCu;
        // 0x20b900: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b8fc) {
            ctx->pc = 0x20B910u;
            goto label_20b910;
        }
    }
    ctx->pc = 0x20B904u;
    // 0x20b904: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x20b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x20b908: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B908u;
    {
        const bool branch_taken_0x20b908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b908) {
            ctx->pc = 0x20B90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B908u;
            // 0x20b90c: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B91Cu;
            goto label_20b91c;
        }
    }
    ctx->pc = 0x20B910u;
label_20b910:
    // 0x20b910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b914: 0x1000045e  b           . + 4 + (0x45E << 2)
    ctx->pc = 0x20B914u;
    {
        const bool branch_taken_0x20b914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B914u;
        // 0x20b918: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b914) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B91Cu;
label_20b91c:
    // 0x20b91c: 0x9624054a  lhu         $a0, 0x54A($s1)
    ctx->pc = 0x20b91cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x20b920: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20B920u;
    {
        const bool branch_taken_0x20b920 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B920u;
        // 0x20b924: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b920) {
            ctx->pc = 0x20B94Cu;
            goto label_20b94c;
        }
    }
    ctx->pc = 0x20B928u;
    // 0x20b928: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x20b928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x20b92c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x20b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20b930: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B930u;
    {
        const bool branch_taken_0x20b930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B930u;
        // 0x20b934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b930) {
            ctx->pc = 0x20B94Cu;
            goto label_20b94c;
        }
    }
    ctx->pc = 0x20B938u;
    // 0x20b938: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20b938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20b93c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20b93cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b940: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20b940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b944: 0x10000455  b           . + 4 + (0x455 << 2)
    ctx->pc = 0x20B944u;
    {
        const bool branch_taken_0x20b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B944u;
        // 0x20b948: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b944) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20B94Cu;
label_20b94c:
    // 0x20b94c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x20b94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x20b950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B950u;
    {
        const bool branch_taken_0x20b950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B950u;
        // 0x20b954: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b950) {
            ctx->pc = 0x20B960u;
            goto label_20b960;
        }
    }
    ctx->pc = 0x20B958u;
    // 0x20b958: 0x1000044d  b           . + 4 + (0x44D << 2)
    ctx->pc = 0x20B958u;
    {
        const bool branch_taken_0x20b958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B958u;
        // 0x20b95c: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b958) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20B960u;
label_20b960:
    // 0x20b960: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20b960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20b964: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b968: 0x30420024  andi        $v0, $v0, 0x24
    ctx->pc = 0x20b968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)36);
    // 0x20b96c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B96Cu;
    {
        const bool branch_taken_0x20b96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b96c) {
            ctx->pc = 0x20B970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B96Cu;
            // 0x20b970: 0x84c30046  lh          $v1, 0x46($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B988u;
            goto label_20b988;
        }
    }
    ctx->pc = 0x20B974u;
    // 0x20b974: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x20b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x20b978: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x20b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x20b97c: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x20B97Cu;
    {
        const bool branch_taken_0x20b97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B97Cu;
        // 0x20b980: 0x41400  sll         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b97c) {
            ctx->pc = 0x20BB40u;
            goto label_20bb40;
        }
    }
    ctx->pc = 0x20B984u;
    // 0x20b984: 0x84c30046  lh          $v1, 0x46($a2)
    ctx->pc = 0x20b984u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
label_20b988:
    // 0x20b988: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x20b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x20b98c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20B98Cu;
    {
        const bool branch_taken_0x20b98c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B98Cu;
        // 0x20b990: 0x28620031  slti        $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b98c) {
            ctx->pc = 0x20B9C0u;
            goto label_20b9c0;
        }
    }
    ctx->pc = 0x20B994u;
    // 0x20b994: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B994u;
    {
        const bool branch_taken_0x20b994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B994u;
        // 0x20b998: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b994) {
            ctx->pc = 0x20B9A8u;
            goto label_20b9a8;
        }
    }
    ctx->pc = 0x20B99Cu;
    // 0x20b99c: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x20b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x20b9a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B9A0u;
    {
        const bool branch_taken_0x20b9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9A0u;
        // 0x20b9a4: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9a0) {
            ctx->pc = 0x20B9C0u;
            goto label_20b9c0;
        }
    }
    ctx->pc = 0x20B9A8u;
label_20b9a8:
    // 0x20b9a8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20B9A8u;
    {
        const bool branch_taken_0x20b9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b9a8) {
            ctx->pc = 0x20B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B9A8u;
            // 0x20b9ac: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B9C4u;
            goto label_20b9c4;
        }
    }
    ctx->pc = 0x20B9B0u;
    // 0x20b9b0: 0xc083686  jal         func_20DA18
    ctx->pc = 0x20B9B0u;
    SET_GPR_U32(ctx, 31, 0x20B9B8u);
    ctx->pc = 0x20B9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B9B0u;
    // 0x20b9b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA18u, 0x20B9B0u, 0x20B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B9B8u;
label_20b9b8:
    // 0x20b9b8: 0x14400439  bnez        $v0, . + 4 + (0x439 << 2)
    ctx->pc = 0x20B9B8u;
    {
        const bool branch_taken_0x20b9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9B8u;
        // 0x20b9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9b8) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20B9C0u;
label_20b9c0:
    // 0x20b9c0: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20b9c4:
    // 0x20b9c4: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20b9c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20b9c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20b9cc: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20b9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20b9d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20B9D0u;
    {
        const bool branch_taken_0x20b9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B9D0u;
        // 0x20b9d4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b9d0) {
            ctx->pc = 0x20B9F0u;
            goto label_20b9f0;
        }
    }
    ctx->pc = 0x20B9D8u;
    // 0x20b9d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b9dc: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x20b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x20b9e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b9e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b9e8: 0x800008  jr          $a0
    ctx->pc = 0x20B9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B9F0u: goto label_20b9f0;
            case 0x20BA0Cu: goto label_20ba0c;
            case 0x20BA44u: goto label_20ba44;
            case 0x20BA90u: goto label_20ba90;
            case 0x20BA9Cu: goto label_20ba9c;
            case 0x20BAB8u: goto label_20bab8;
            case 0x20BAD4u: goto label_20bad4;
            case 0x20BAE0u: goto label_20bae0;
            case 0x20BAECu: goto label_20baec;
            case 0x20BB08u: goto label_20bb08;
            case 0x20BB24u: goto label_20bb24;
            case 0x20CA88u: goto label_20ca88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B9E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20B9F0u;
label_20b9f0:
    // 0x20b9f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b9f4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20b9f8: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20b9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b9fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba00: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ba00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ba04: 0x10000425  b           . + 4 + (0x425 << 2)
    ctx->pc = 0x20BA04u;
    {
        const bool branch_taken_0x20ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA04u;
        // 0x20ba08: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba04) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BA0Cu;
label_20ba0c:
    // 0x20ba0c: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20ba0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20ba10: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20ba10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20ba14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20ba14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20ba18: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20ba18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20ba1c: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20ba1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20ba20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ba20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ba24: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BA24u;
    {
        const bool branch_taken_0x20ba24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20BA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA24u;
        // 0x20ba28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba24) {
            ctx->pc = 0x20BA3Cu;
            goto label_20ba3c;
        }
    }
    ctx->pc = 0x20BA2Cu;
    // 0x20ba2c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20ba2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20ba30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20ba30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20ba34: 0x1440041a  bnez        $v0, . + 4 + (0x41A << 2)
    ctx->pc = 0x20BA34u;
    {
        const bool branch_taken_0x20ba34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA34u;
        // 0x20ba38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba34) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BA3Cu;
label_20ba3c:
    // 0x20ba3c: 0x10000414  b           . + 4 + (0x414 << 2)
    ctx->pc = 0x20BA3Cu;
    {
        const bool branch_taken_0x20ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA3Cu;
        // 0x20ba40: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba3c) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BA44u;
label_20ba44:
    // 0x20ba44: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20ba44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20ba48: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20ba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20ba4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20ba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20ba50: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20ba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20ba54: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20ba54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20ba58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20ba58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20ba5c: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BA5Cu;
    {
        const bool branch_taken_0x20ba5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA5Cu;
        // 0x20ba60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba5c) {
            ctx->pc = 0x20BA78u;
            goto label_20ba78;
        }
    }
    ctx->pc = 0x20BA64u;
    // 0x20ba64: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20ba64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20ba68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20ba6c: 0x1440040c  bnez        $v0, . + 4 + (0x40C << 2)
    ctx->pc = 0x20BA6Cu;
    {
        const bool branch_taken_0x20ba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA6Cu;
        // 0x20ba70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba6c) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BA74u;
    // 0x20ba74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ba78:
    // 0x20ba78: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20ba7c: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20ba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20ba80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba84: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ba84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ba88: 0x10000404  b           . + 4 + (0x404 << 2)
    ctx->pc = 0x20BA88u;
    {
        const bool branch_taken_0x20ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA88u;
        // 0x20ba8c: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba88) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BA90u;
label_20ba90:
    // 0x20ba90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ba94: 0x100003fe  b           . + 4 + (0x3FE << 2)
    ctx->pc = 0x20BA94u;
    {
        const bool branch_taken_0x20ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BA94u;
        // 0x20ba98: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ba94) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BA9Cu;
label_20ba9c:
    // 0x20ba9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20baa0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20baa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20baa8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20baac: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20baacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bab0: 0x100003fa  b           . + 4 + (0x3FA << 2)
    ctx->pc = 0x20BAB0u;
    {
        const bool branch_taken_0x20bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAB0u;
        // 0x20bab4: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bab0) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BAB8u;
label_20bab8:
    // 0x20bab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20babc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20bac0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bac4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bac8: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20bac8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bacc: 0x100003f3  b           . + 4 + (0x3F3 << 2)
    ctx->pc = 0x20BACCu;
    {
        const bool branch_taken_0x20bacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BACCu;
        // 0x20bad0: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bacc) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BAD4u;
label_20bad4:
    // 0x20bad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bad8: 0x100003ed  b           . + 4 + (0x3ED << 2)
    ctx->pc = 0x20BAD8u;
    {
        const bool branch_taken_0x20bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAD8u;
        // 0x20badc: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bad8) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BAE0u;
label_20bae0:
    // 0x20bae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bae4: 0x100003ea  b           . + 4 + (0x3EA << 2)
    ctx->pc = 0x20BAE4u;
    {
        const bool branch_taken_0x20bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BAE4u;
        // 0x20bae8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bae4) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BAECu;
label_20baec:
    // 0x20baec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20baf0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20baf4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20baf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20baf8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20baf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bafc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20bafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bb00: 0x100003e6  b           . + 4 + (0x3E6 << 2)
    ctx->pc = 0x20BB00u;
    {
        const bool branch_taken_0x20bb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB00u;
        // 0x20bb04: 0xa620054a  sh          $zero, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb00) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BB08u;
label_20bb08:
    // 0x20bb08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb0c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20bb10: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20bb10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20bb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb18: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20bb18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bb1c: 0x100003df  b           . + 4 + (0x3DF << 2)
    ctx->pc = 0x20BB1Cu;
    {
        const bool branch_taken_0x20bb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB1Cu;
        // 0x20bb20: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb1c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BB24u;
label_20bb24:
    // 0x20bb24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20bb2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bb30: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bb30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bb34: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bb38: 0x100003d8  b           . + 4 + (0x3D8 << 2)
    ctx->pc = 0x20BB38u;
    {
        const bool branch_taken_0x20bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB38u;
        // 0x20bb3c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb38) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BB40u;
label_20bb40:
    // 0x20bb40: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BB40u;
    {
        const bool branch_taken_0x20bb40 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x20bb40) {
            ctx->pc = 0x20BB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BB40u;
            // 0x20bb44: 0x84c20046  lh          $v0, 0x46($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BB58u;
            goto label_20bb58;
        }
    }
    ctx->pc = 0x20BB48u;
    // 0x20bb48: 0x8e2217ac  lw          $v0, 0x17AC($s1)
    ctx->pc = 0x20bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6060)));
    // 0x20bb4c: 0x1c400066  bgtz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x20BB4Cu;
    {
        const bool branch_taken_0x20bb4c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x20bb4c) {
            ctx->pc = 0x20BCE8u;
            goto label_20bce8;
        }
    }
    ctx->pc = 0x20BB54u;
    // 0x20bb54: 0x84c20046  lh          $v0, 0x46($a2)
    ctx->pc = 0x20bb54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 70)));
label_20bb58:
    // 0x20bb58: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x20bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20bb5c: 0x2c830055  sltiu       $v1, $a0, 0x55
    ctx->pc = 0x20bb5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20bb60: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x20BB60u;
    {
        const bool branch_taken_0x20bb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB60u;
        // 0x20bb64: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb60) {
            ctx->pc = 0x20BC2Cu;
            goto label_20bc2c;
        }
    }
    ctx->pc = 0x20BB68u;
    // 0x20bb68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bb6c: 0x24421620  addiu       $v0, $v0, 0x1620
    ctx->pc = 0x20bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5664));
    // 0x20bb70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bb74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20bb78: 0x800008  jr          $a0
    ctx->pc = 0x20BB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BB80u: goto label_20bb80;
            case 0x20BBB0u: goto label_20bbb0;
            case 0x20BBE4u: goto label_20bbe4;
            case 0x20BC2Cu: goto label_20bc2c;
            case 0x20BC38u: goto label_20bc38;
            case 0x20BC44u: goto label_20bc44;
            case 0x20BC60u: goto label_20bc60;
            case 0x20BC7Cu: goto label_20bc7c;
            case 0x20BC88u: goto label_20bc88;
            case 0x20BC94u: goto label_20bc94;
            case 0x20BCB0u: goto label_20bcb0;
            case 0x20BCCCu: goto label_20bccc;
            case 0x20CA88u: goto label_20ca88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BB78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20BB80u;
label_20bb80:
    // 0x20bb80: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x20bb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x20bb84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BB84u;
    {
        const bool branch_taken_0x20bb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB84u;
        // 0x20bb88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb84) {
            ctx->pc = 0x20BB9Cu;
            goto label_20bb9c;
        }
    }
    ctx->pc = 0x20BB8Cu;
    // 0x20bb8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb90: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bb90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bb94: 0x100003bf  b           . + 4 + (0x3BF << 2)
    ctx->pc = 0x20BB94u;
    {
        const bool branch_taken_0x20bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB94u;
        // 0x20bb98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb94) {
            ctx->pc = 0x20CA94u;
            goto label_20ca94;
        }
    }
    ctx->pc = 0x20BB9Cu;
label_20bb9c:
    // 0x20bb9c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20bb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bba0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bba0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bba8: 0x100003bc  b           . + 4 + (0x3BC << 2)
    ctx->pc = 0x20BBA8u;
    {
        const bool branch_taken_0x20bba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBA8u;
        // 0x20bbac: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bba8) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BBB0u;
label_20bbb0:
    // 0x20bbb0: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20bbb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20bbb4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20bbb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20bbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20bbbc: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20bbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20bbc0: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20bbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20bbc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20bbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20bbc8: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BBC8u;
    {
        const bool branch_taken_0x20bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBC8u;
        // 0x20bbcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbc8) {
            ctx->pc = 0x20BBDCu;
            goto label_20bbdc;
        }
    }
    ctx->pc = 0x20BBD0u;
    // 0x20bbd0: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x20bbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x20bbd4: 0x144003b2  bnez        $v0, . + 4 + (0x3B2 << 2)
    ctx->pc = 0x20BBD4u;
    {
        const bool branch_taken_0x20bbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBD4u;
        // 0x20bbd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbd4) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BBDCu;
label_20bbdc:
    // 0x20bbdc: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x20BBDCu;
    {
        const bool branch_taken_0x20bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBDCu;
        // 0x20bbe0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbdc) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BBE4u;
label_20bbe4:
    // 0x20bbe4: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20bbe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20bbe8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20bbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20bbec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20bbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20bbf0: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20bbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20bbf4: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20bbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20bbf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20bbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20bbfc: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BBFCu;
    {
        const bool branch_taken_0x20bbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBFCu;
        // 0x20bc00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bbfc) {
            ctx->pc = 0x20BC14u;
            goto label_20bc14;
        }
    }
    ctx->pc = 0x20BC04u;
    // 0x20bc04: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x20bc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x20bc08: 0x144003a5  bnez        $v0, . + 4 + (0x3A5 << 2)
    ctx->pc = 0x20BC08u;
    {
        const bool branch_taken_0x20bc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC08u;
        // 0x20bc0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc08) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BC10u;
    // 0x20bc10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bc14:
    // 0x20bc14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20bc18: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20bc18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20bc1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc20: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20bc20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bc24: 0x1000039d  b           . + 4 + (0x39D << 2)
    ctx->pc = 0x20BC24u;
    {
        const bool branch_taken_0x20bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC24u;
        // 0x20bc28: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc24) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BC2Cu;
label_20bc2c:
    // 0x20bc2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc30: 0x10000397  b           . + 4 + (0x397 << 2)
    ctx->pc = 0x20BC30u;
    {
        const bool branch_taken_0x20bc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC30u;
        // 0x20bc34: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc30) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BC38u;
label_20bc38:
    // 0x20bc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc3c: 0x10000394  b           . + 4 + (0x394 << 2)
    ctx->pc = 0x20BC3Cu;
    {
        const bool branch_taken_0x20bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC3Cu;
        // 0x20bc40: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc3c) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BC44u;
label_20bc44:
    // 0x20bc44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc48: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20bc4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bc50: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bc50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bc54: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20bc54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bc58: 0x10000390  b           . + 4 + (0x390 << 2)
    ctx->pc = 0x20BC58u;
    {
        const bool branch_taken_0x20bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC58u;
        // 0x20bc5c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc58) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BC60u;
label_20bc60:
    // 0x20bc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc64: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20bc68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20bc6c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bc70: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20bc70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bc74: 0x10000389  b           . + 4 + (0x389 << 2)
    ctx->pc = 0x20BC74u;
    {
        const bool branch_taken_0x20bc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC74u;
        // 0x20bc78: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc74) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BC7Cu;
label_20bc7c:
    // 0x20bc7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc80: 0x10000383  b           . + 4 + (0x383 << 2)
    ctx->pc = 0x20BC80u;
    {
        const bool branch_taken_0x20bc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC80u;
        // 0x20bc84: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc80) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BC88u;
label_20bc88:
    // 0x20bc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc8c: 0x10000380  b           . + 4 + (0x380 << 2)
    ctx->pc = 0x20BC8Cu;
    {
        const bool branch_taken_0x20bc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC8Cu;
        // 0x20bc90: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bc8c) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20BC94u;
label_20bc94:
    // 0x20bc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc98: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20bc9c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bca0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20bca0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bca4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20bca4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bca8: 0x1000037c  b           . + 4 + (0x37C << 2)
    ctx->pc = 0x20BCA8u;
    {
        const bool branch_taken_0x20bca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCA8u;
        // 0x20bcac: 0xa620054a  sh          $zero, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bca8) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BCB0u;
label_20bcb0:
    // 0x20bcb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bcb4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20bcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20bcb8: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20bcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20bcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bcc0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20bcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bcc4: 0x10000375  b           . + 4 + (0x375 << 2)
    ctx->pc = 0x20BCC4u;
    {
        const bool branch_taken_0x20bcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCC4u;
        // 0x20bcc8: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcc4) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BCCCu;
label_20bccc:
    // 0x20bccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bcd0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20bcd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bcd8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bcdc: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20bcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bce0: 0x1000036e  b           . + 4 + (0x36E << 2)
    ctx->pc = 0x20BCE0u;
    {
        const bool branch_taken_0x20bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCE0u;
        // 0x20bce4: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bce0) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BCE8u;
label_20bce8:
    // 0x20bce8: 0xc08344e  jal         func_20D138
    ctx->pc = 0x20BCE8u;
    SET_GPR_U32(ctx, 31, 0x20BCF0u);
    ctx->pc = 0x20BCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCE8u;
    // 0x20bcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D138u, 0x20BCE8u, 0x20BCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCF0u;
label_20bcf0:
    // 0x20bcf0: 0x1440036b  bnez        $v0, . + 4 + (0x36B << 2)
    ctx->pc = 0x20BCF0u;
    {
        const bool branch_taken_0x20bcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCF0u;
        // 0x20bcf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bcf0) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BCF8u;
    // 0x20bcf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20bcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcfc: 0xc0832b2  jal         func_20CAC8
    ctx->pc = 0x20BCFCu;
    SET_GPR_U32(ctx, 31, 0x20BD04u);
    ctx->pc = 0x20BD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCFCu;
    // 0x20bd00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CAC8u, 0x20BCFCu, 0x20BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD04u;
label_20bd04:
    // 0x20bd04: 0x14400366  bnez        $v0, . + 4 + (0x366 << 2)
    ctx->pc = 0x20BD04u;
    {
        const bool branch_taken_0x20bd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD04u;
        // 0x20bd08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd04) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BD0Cu;
    // 0x20bd0c: 0xc0834e6  jal         func_20D398
    ctx->pc = 0x20BD0Cu;
    SET_GPR_U32(ctx, 31, 0x20BD14u);
    ctx->pc = 0x20BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD0Cu;
    // 0x20bd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D398u, 0x20BD0Cu, 0x20BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD14u;
label_20bd14:
    // 0x20bd14: 0x14400362  bnez        $v0, . + 4 + (0x362 << 2)
    ctx->pc = 0x20BD14u;
    {
        const bool branch_taken_0x20bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD14u;
        // 0x20bd18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd14) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BD1Cu;
    // 0x20bd1c: 0xc083340  jal         func_20CD00
    ctx->pc = 0x20BD1Cu;
    SET_GPR_U32(ctx, 31, 0x20BD24u);
    ctx->pc = 0x20BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD1Cu;
    // 0x20bd20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CD00u, 0x20BD1Cu, 0x20BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD24u;
label_20bd24:
    // 0x20bd24: 0x1440035e  bnez        $v0, . + 4 + (0x35E << 2)
    ctx->pc = 0x20BD24u;
    {
        const bool branch_taken_0x20bd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD24u;
        // 0x20bd28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd24) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BD2Cu;
    // 0x20bd2c: 0xc083450  jal         func_20D140
    ctx->pc = 0x20BD2Cu;
    SET_GPR_U32(ctx, 31, 0x20BD34u);
    ctx->pc = 0x20BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD2Cu;
    // 0x20bd30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D140u, 0x20BD2Cu, 0x20BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD34u;
label_20bd34:
    // 0x20bd34: 0x1440035a  bnez        $v0, . + 4 + (0x35A << 2)
    ctx->pc = 0x20BD34u;
    {
        const bool branch_taken_0x20bd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD34u;
        // 0x20bd38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd34) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BD3Cu;
    // 0x20bd3c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20bd40: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20bd44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20bd48: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20bd48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20bd4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20BD4Cu;
    {
        const bool branch_taken_0x20bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD4Cu;
        // 0x20bd50: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd4c) {
            ctx->pc = 0x20BD6Cu;
            goto label_20bd6c;
        }
    }
    ctx->pc = 0x20BD54u;
    // 0x20bd54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20bd58: 0x24421780  addiu       $v0, $v0, 0x1780
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6016));
    // 0x20bd5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20bd60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20bd64: 0x800008  jr          $a0
    ctx->pc = 0x20BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BD6Cu: goto label_20bd6c;
            case 0x20BEA8u: goto label_20bea8;
            case 0x20BEE0u: goto label_20bee0;
            case 0x20C0C4u: goto label_20c0c4;
            case 0x20C288u: goto label_20c288;
            case 0x20C49Cu: goto label_20c49c;
            case 0x20C548u: goto label_20c548;
            case 0x20C5E8u: goto label_20c5e8;
            case 0x20C6C0u: goto label_20c6c0;
            case 0x20C74Cu: goto label_20c74c;
            case 0x20C768u: goto label_20c768;
            case 0x20C784u: goto label_20c784;
            case 0x20C790u: goto label_20c790;
            case 0x20C7D4u: goto label_20c7d4;
            case 0x20C8D8u: goto label_20c8d8;
            case 0x20C940u: goto label_20c940;
            case 0x20C9A8u: goto label_20c9a8;
            case 0x20C9B4u: goto label_20c9b4;
            case 0x20C9D0u: goto label_20c9d0;
            case 0x20CA38u: goto label_20ca38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20BD6Cu;
label_20bd6c:
    // 0x20bd6c: 0xc092fc8  jal         func_24BF20
    ctx->pc = 0x20BD6Cu;
    SET_GPR_U32(ctx, 31, 0x20BD74u);
    ctx->pc = 0x20BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD6Cu;
    // 0x20bd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF20u, 0x20BD6Cu, 0x20BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD74u;
label_20bd74:
    // 0x20bd74: 0x1440034a  bnez        $v0, . + 4 + (0x34A << 2)
    ctx->pc = 0x20BD74u;
    {
        const bool branch_taken_0x20bd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD74u;
        // 0x20bd78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd74) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BD7Cu;
    // 0x20bd7c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20BD7Cu;
    SET_GPR_U32(ctx, 31, 0x20BD84u);
    ctx->pc = 0x20BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD7Cu;
    // 0x20bd80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20BD7Cu, 0x20BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD84u;
label_20bd84:
    // 0x20bd84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BD84u;
    {
        const bool branch_taken_0x20bd84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD84u;
        // 0x20bd88: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd84) {
            ctx->pc = 0x20BD9Cu;
            goto label_20bd9c;
        }
    }
    ctx->pc = 0x20BD8Cu;
    // 0x20bd8c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20bd8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20bd90: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20bd94: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20BD94u;
    {
        const bool branch_taken_0x20bd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bd94) {
            ctx->pc = 0x20BE10u;
            goto label_20be10;
        }
    }
    ctx->pc = 0x20BD9Cu;
label_20bd9c:
    // 0x20bd9c: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20bda0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20BDA0u;
    {
        const bool branch_taken_0x20bda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDA0u;
        // 0x20bda4: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bda0) {
            ctx->pc = 0x20BDF4u;
            goto label_20bdf4;
        }
    }
    ctx->pc = 0x20BDA8u;
    // 0x20bda8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20BDA8u;
    {
        const bool branch_taken_0x20bda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDA8u;
        // 0x20bdac: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bda8) {
            ctx->pc = 0x20BDC8u;
            goto label_20bdc8;
        }
    }
    ctx->pc = 0x20BDB0u;
    // 0x20bdb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20BDB0u;
    {
        const bool branch_taken_0x20bdb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDB0u;
        // 0x20bdb4: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdb0) {
            ctx->pc = 0x20BDDCu;
            goto label_20bddc;
        }
    }
    ctx->pc = 0x20BDB8u;
    // 0x20bdb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20BDB8u;
    {
        const bool branch_taken_0x20bdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDB8u;
        // 0x20bdbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdb8) {
            ctx->pc = 0x20BDE0u;
            goto label_20bde0;
        }
    }
    ctx->pc = 0x20BDC0u;
    // 0x20bdc0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20BDC0u;
    {
        const bool branch_taken_0x20bdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDC0u;
        // 0x20bdc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdc0) {
            ctx->pc = 0x20BDF8u;
            goto label_20bdf8;
        }
    }
    ctx->pc = 0x20BDC8u;
label_20bdc8:
    // 0x20bdc8: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20bdc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20bdcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BDCCu;
    {
        const bool branch_taken_0x20bdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDCCu;
        // 0x20bdd0: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdcc) {
            ctx->pc = 0x20BDDCu;
            goto label_20bddc;
        }
    }
    ctx->pc = 0x20BDD4u;
    // 0x20bdd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BDD4u;
    {
        const bool branch_taken_0x20bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDD4u;
        // 0x20bdd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdd4) {
            ctx->pc = 0x20BDF8u;
            goto label_20bdf8;
        }
    }
    ctx->pc = 0x20BDDCu;
label_20bddc:
    // 0x20bddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bde0:
    // 0x20bde0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20bde0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bde4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20bde4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20bde8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bdec: 0x1000032b  b           . + 4 + (0x32B << 2)
    ctx->pc = 0x20BDECu;
    {
        const bool branch_taken_0x20bdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BDECu;
        // 0x20bdf0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdec) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BDF4u;
label_20bdf4:
    // 0x20bdf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bdf8:
    // 0x20bdf8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20bdfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20be00: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20be00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20be04: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20be04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20be08: 0x10000324  b           . + 4 + (0x324 << 2)
    ctx->pc = 0x20BE08u;
    {
        const bool branch_taken_0x20be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE08u;
        // 0x20be0c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be08) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BE10u;
label_20be10:
    // 0x20be10: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20be14: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20BE14u;
    {
        const bool branch_taken_0x20be14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE14u;
        // 0x20be18: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be14) {
            ctx->pc = 0x20BE48u;
            goto label_20be48;
        }
    }
    ctx->pc = 0x20BE1Cu;
    // 0x20be1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BE1Cu;
    {
        const bool branch_taken_0x20be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE1Cu;
        // 0x20be20: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be1c) {
            ctx->pc = 0x20BE34u;
            goto label_20be34;
        }
    }
    ctx->pc = 0x20BE24u;
    // 0x20be24: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20BE24u;
    {
        const bool branch_taken_0x20be24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE24u;
        // 0x20be28: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be24) {
            ctx->pc = 0x20BE64u;
            goto label_20be64;
        }
    }
    ctx->pc = 0x20BE2Cu;
    // 0x20be2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20BE2Cu;
    {
        const bool branch_taken_0x20be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20be2c) {
            ctx->pc = 0x20BE40u;
            goto label_20be40;
        }
    }
    ctx->pc = 0x20BE34u;
label_20be34:
    // 0x20be34: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20be34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20be38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20BE38u;
    {
        const bool branch_taken_0x20be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE38u;
        // 0x20be3c: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be38) {
            ctx->pc = 0x20BE64u;
            goto label_20be64;
        }
    }
    ctx->pc = 0x20BE40u;
label_20be40:
    // 0x20be40: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20BE40u;
    {
        const bool branch_taken_0x20be40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20be40) {
            ctx->pc = 0x20BE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BE40u;
            // 0x20be44: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BE68u;
            goto label_20be68;
        }
    }
    ctx->pc = 0x20BE48u;
label_20be48:
    // 0x20be48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20be4c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20be50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20be54: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20be54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20be58: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20be58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20be5c: 0x1000030f  b           . + 4 + (0x30F << 2)
    ctx->pc = 0x20BE5Cu;
    {
        const bool branch_taken_0x20be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE5Cu;
        // 0x20be60: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be5c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BE64u;
label_20be64:
    // 0x20be64: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20be64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20be68:
    // 0x20be68: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x20be68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20be6c: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x20be6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x20be70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BE70u;
    {
        const bool branch_taken_0x20be70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE70u;
        // 0x20be74: 0x28420002  slti        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be70) {
            ctx->pc = 0x20BE94u;
            goto label_20be94;
        }
    }
    ctx->pc = 0x20BE78u;
    // 0x20be78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20BE78u;
    {
        const bool branch_taken_0x20be78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE78u;
        // 0x20be7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be78) {
            ctx->pc = 0x20BE98u;
            goto label_20be98;
        }
    }
    ctx->pc = 0x20BE80u;
    // 0x20be80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20be84: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20be84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20be88: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20be88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20be8c: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x20BE8Cu;
    {
        const bool branch_taken_0x20be8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE8Cu;
        // 0x20be90: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be8c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BE94u;
label_20be94:
    // 0x20be94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20be94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20be98:
    // 0x20be98: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20be98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20be9c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20be9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bea0: 0x100002fe  b           . + 4 + (0x2FE << 2)
    ctx->pc = 0x20BEA0u;
    {
        const bool branch_taken_0x20bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEA0u;
        // 0x20bea4: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bea0) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BEA8u;
label_20bea8:
    // 0x20bea8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20BEA8u;
    SET_GPR_U32(ctx, 31, 0x20BEB0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20BEA8u, 0x20BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEB0u;
label_20beb0:
    // 0x20beb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20beb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BEB4u;
    {
        const bool branch_taken_0x20beb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB4u;
        // 0x20beb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb4) {
            ctx->pc = 0x20BECCu;
            goto label_20becc;
        }
    }
    ctx->pc = 0x20BEBCu;
    // 0x20bebc: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x20bebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bec0: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20bec0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bec4: 0x1000fd96  b           . + 4 + (-0x26A << 2)
    ctx->pc = 0x20BEC4u;
    {
        const bool branch_taken_0x20bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEC4u;
        // 0x20bec8: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bec4) {
            ctx->pc = 0x20B520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b520;
        }
    }
    ctx->pc = 0x20BECCu;
label_20becc:
    // 0x20becc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20beccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bed0: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x20bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bed4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bed8: 0x1000fba3  b           . + 4 + (-0x45D << 2)
    ctx->pc = 0x20BED8u;
    {
        const bool branch_taken_0x20bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BED8u;
        // 0x20bedc: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bed8) {
            ctx->pc = 0x20AD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ad68;
        }
    }
    ctx->pc = 0x20BEE0u;
label_20bee0:
    // 0x20bee0: 0xc092fc8  jal         func_24BF20
    ctx->pc = 0x20BEE0u;
    SET_GPR_U32(ctx, 31, 0x20BEE8u);
    ctx->pc = 0x20BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEE0u;
    // 0x20bee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF20u, 0x20BEE0u, 0x20BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEE8u;
label_20bee8:
    // 0x20bee8: 0x144002ed  bnez        $v0, . + 4 + (0x2ED << 2)
    ctx->pc = 0x20BEE8u;
    {
        const bool branch_taken_0x20bee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEE8u;
        // 0x20beec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bee8) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BEF0u;
    // 0x20bef0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20bef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bef4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20BEF4u;
    SET_GPR_U32(ctx, 31, 0x20BEFCu);
    ctx->pc = 0x20BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEF4u;
    // 0x20bef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20BEF4u, 0x20BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEFCu;
label_20befc:
    // 0x20befc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BEFCu;
    {
        const bool branch_taken_0x20befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20befc) {
            ctx->pc = 0x20BF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BEFCu;
            // 0x20bf00: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BF18u;
            goto label_20bf18;
        }
    }
    ctx->pc = 0x20BF04u;
    // 0x20bf04: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20bf04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20bf08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20bf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20bf0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BF0Cu;
    {
        const bool branch_taken_0x20bf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf0c) {
            ctx->pc = 0x20BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BF0Cu;
            // 0x20bf10: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BF1Cu;
            goto label_20bf1c;
        }
    }
    ctx->pc = 0x20BF14u;
    // 0x20bf14: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20bf14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bf18:
    // 0x20bf18: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20bf1c:
    // 0x20bf1c: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20bf20: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20BF20u;
    {
        const bool branch_taken_0x20bf20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF20u;
        // 0x20bf24: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf20) {
            ctx->pc = 0x20BF84u;
            goto label_20bf84;
        }
    }
    ctx->pc = 0x20BF28u;
    // 0x20bf28: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20BF28u;
    {
        const bool branch_taken_0x20bf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF28u;
        // 0x20bf2c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf28) {
            ctx->pc = 0x20BF54u;
            goto label_20bf54;
        }
    }
    ctx->pc = 0x20BF30u;
    // 0x20bf30: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20BF30u;
    {
        const bool branch_taken_0x20bf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF30u;
        // 0x20bf34: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf30) {
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF38u;
    // 0x20bf38: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x20BF38u;
    {
        const bool branch_taken_0x20bf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bf38) {
            ctx->pc = 0x20BF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BF38u;
            // 0x20bf3c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF40u;
    // 0x20bf40: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20bf44: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20BF44u;
    {
        const bool branch_taken_0x20bf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20bf44) {
            ctx->pc = 0x20BF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BF44u;
            // 0x20bf48: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF4Cu;
    // 0x20bf4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20BF4Cu;
    {
        const bool branch_taken_0x20bf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf4c) {
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF54u;
label_20bf54:
    // 0x20bf54: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x20bf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x20bf58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20BF58u;
    {
        const bool branch_taken_0x20bf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF58u;
        // 0x20bf5c: 0x28620266  slti        $v0, $v1, 0x266 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf58) {
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF60u;
    // 0x20bf60: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20BF60u;
    {
        const bool branch_taken_0x20bf60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF60u;
        // 0x20bf64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf60) {
            ctx->pc = 0x20BF88u;
            goto label_20bf88;
        }
    }
    ctx->pc = 0x20BF68u;
    // 0x20bf68: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20bf68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20bf6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20BF6Cu;
    {
        const bool branch_taken_0x20bf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF6Cu;
        // 0x20bf70: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf6c) {
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF74u;
    // 0x20bf74: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BF74u;
    {
        const bool branch_taken_0x20bf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bf74) {
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF7Cu;
    // 0x20bf7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20BF7Cu;
    {
        const bool branch_taken_0x20bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF7Cu;
        // 0x20bf80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf7c) {
            ctx->pc = 0x20BF98u;
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BF84u;
label_20bf84:
    // 0x20bf84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20bf88:
    // 0x20bf88: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20bf88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20bf8c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20bf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20bf90: 0x100002c2  b           . + 4 + (0x2C2 << 2)
    ctx->pc = 0x20BF90u;
    {
        const bool branch_taken_0x20bf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF90u;
        // 0x20bf94: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf90) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20BF98u;
label_20bf98:
    // 0x20bf98: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x20BF98u;
    {
        const bool branch_taken_0x20bf98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF98u;
        // 0x20bf9c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf98) {
            ctx->pc = 0x20C04Cu;
            goto label_20c04c;
        }
    }
    ctx->pc = 0x20BFA0u;
    // 0x20bfa0: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20bfa4: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20bfa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20bfa8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20BFA8u;
    {
        const bool branch_taken_0x20bfa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFA8u;
        // 0x20bfac: 0x28820013  slti        $v0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfa8) {
            ctx->pc = 0x20BFCCu;
            goto label_20bfcc;
        }
    }
    ctx->pc = 0x20BFB0u;
    // 0x20bfb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20BFB0u;
    {
        const bool branch_taken_0x20bfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFB0u;
        // 0x20bfb4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfb0) {
            ctx->pc = 0x20BFC4u;
            goto label_20bfc4;
        }
    }
    ctx->pc = 0x20BFB8u;
    // 0x20bfb8: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x20bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x20bfbc: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BFBCu;
    {
        const bool branch_taken_0x20bfbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFBCu;
        // 0x20bfc0: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfbc) {
            ctx->pc = 0x20BFCCu;
            goto label_20bfcc;
        }
    }
    ctx->pc = 0x20BFC4u;
label_20bfc4:
    // 0x20bfc4: 0x5082000f  beql        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20BFC4u;
    {
        const bool branch_taken_0x20bfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20bfc4) {
            ctx->pc = 0x20BFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BFC4u;
            // 0x20bfc8: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C004u;
            goto label_20c004;
        }
    }
    ctx->pc = 0x20BFCCu;
label_20bfcc:
    // 0x20bfcc: 0xde2202f0  ld          $v0, 0x2F0($s1)
    ctx->pc = 0x20bfccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x20bfd0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20bfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20bfd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20bfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20bfd8: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20bfd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20bfdc: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20bfdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20bfe0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20bfe4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BFE4u;
    {
        const bool branch_taken_0x20bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFE4u;
        // 0x20bfe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfe4) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BFECu;
    // 0x20bfec: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20bfecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20bff0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20bff4: 0x144002aa  bnez        $v0, . + 4 + (0x2AA << 2)
    ctx->pc = 0x20BFF4u;
    {
        const bool branch_taken_0x20bff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFF4u;
        // 0x20bff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bff4) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20BFFCu;
label_20bffc:
    // 0x20bffc: 0x100002a4  b           . + 4 + (0x2A4 << 2)
    ctx->pc = 0x20BFFCu;
    {
        const bool branch_taken_0x20bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFFCu;
        // 0x20c000: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bffc) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C004u;
label_20c004:
    // 0x20c004: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20c004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20c008: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20c008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20c00c: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20c00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20c010: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20c010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20c014: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20c014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20c018: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C018u;
    {
        const bool branch_taken_0x20c018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C018u;
        // 0x20c01c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c018) {
            ctx->pc = 0x20C034u;
            goto label_20c034;
        }
    }
    ctx->pc = 0x20C020u;
    // 0x20c020: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c024: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20c028: 0x1440029d  bnez        $v0, . + 4 + (0x29D << 2)
    ctx->pc = 0x20C028u;
    {
        const bool branch_taken_0x20c028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C028u;
        // 0x20c02c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c028) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20C030u;
    // 0x20c030: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c034:
    // 0x20c034: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20c038: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20c038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c040: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c044: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x20C044u;
    {
        const bool branch_taken_0x20c044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C044u;
        // 0x20c048: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c044) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C04Cu;
label_20c04c:
    // 0x20c04c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20c050: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x20c050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x20c054: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20c058: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20C058u;
    {
        const bool branch_taken_0x20c058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C058u;
        // 0x20c05c: 0x28820016  slti        $v0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c058) {
            ctx->pc = 0x20C08Cu;
            goto label_20c08c;
        }
    }
    ctx->pc = 0x20C060u;
    // 0x20c060: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C060u;
    {
        const bool branch_taken_0x20c060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C060u;
        // 0x20c064: 0x28820013  slti        $v0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c060) {
            ctx->pc = 0x20C080u;
            goto label_20c080;
        }
    }
    ctx->pc = 0x20C068u;
    // 0x20c068: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C068u;
    {
        const bool branch_taken_0x20c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C068u;
        // 0x20c06c: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c068) {
            ctx->pc = 0x20C08Cu;
            goto label_20c08c;
        }
    }
    ctx->pc = 0x20C070u;
    // 0x20c070: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C070u;
    {
        const bool branch_taken_0x20c070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C070u;
        // 0x20c074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c070) {
            ctx->pc = 0x20C090u;
            goto label_20c090;
        }
    }
    ctx->pc = 0x20C078u;
    // 0x20c078: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20C078u;
    {
        const bool branch_taken_0x20c078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C078u;
        // 0x20c07c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c078) {
            ctx->pc = 0x20C0B0u;
            goto label_20c0b0;
        }
    }
    ctx->pc = 0x20C080u;
label_20c080:
    // 0x20c080: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x20c080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x20c084: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C084u;
    {
        const bool branch_taken_0x20c084 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C084u;
        // 0x20c088: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c084) {
            ctx->pc = 0x20C098u;
            goto label_20c098;
        }
    }
    ctx->pc = 0x20C08Cu;
label_20c08c:
    // 0x20c08c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c090:
    // 0x20c090: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x20C090u;
    {
        const bool branch_taken_0x20c090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C090u;
        // 0x20c094: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c090) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C098u;
label_20c098:
    // 0x20c098: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c09c: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20c09cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c0a4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c0a8: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x20C0A8u;
    {
        const bool branch_taken_0x20c0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0A8u;
        // 0x20c0ac: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0a8) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C0B0u;
label_20c0b0:
    // 0x20c0b0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c0b4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c0bc: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x20C0BCu;
    {
        const bool branch_taken_0x20c0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0BCu;
        // 0x20c0c0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0bc) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C0C4u;
label_20c0c4:
    // 0x20c0c4: 0xc092fc8  jal         func_24BF20
    ctx->pc = 0x20C0C4u;
    SET_GPR_U32(ctx, 31, 0x20C0CCu);
    ctx->pc = 0x20C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0C4u;
    // 0x20c0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BF20u, 0x20C0C4u, 0x20C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0CCu;
label_20c0cc:
    // 0x20c0cc: 0x14400274  bnez        $v0, . + 4 + (0x274 << 2)
    ctx->pc = 0x20C0CCu;
    {
        const bool branch_taken_0x20c0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C0CCu;
        // 0x20c0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0cc) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20C0D4u;
    // 0x20c0d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20c0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c0d8: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C0D8u;
    SET_GPR_U32(ctx, 31, 0x20C0E0u);
    ctx->pc = 0x20C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C0D8u;
    // 0x20c0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C0D8u, 0x20C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0E0u;
label_20c0e0:
    // 0x20c0e0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C0E0u;
    {
        const bool branch_taken_0x20c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c0e0) {
            ctx->pc = 0x20C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0E0u;
            // 0x20c0e4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C0FCu;
            goto label_20c0fc;
        }
    }
    ctx->pc = 0x20C0E8u;
    // 0x20c0e8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c0e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c0ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c0f0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C0F0u;
    {
        const bool branch_taken_0x20c0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0f0) {
            ctx->pc = 0x20C0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C0F0u;
            // 0x20c0f4: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C100u;
            goto label_20c100;
        }
    }
    ctx->pc = 0x20C0F8u;
    // 0x20c0f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20c0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c0fc:
    // 0x20c0fc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20c100:
    // 0x20c100: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c104: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20C104u;
    {
        const bool branch_taken_0x20c104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C104u;
        // 0x20c108: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c104) {
            ctx->pc = 0x20C170u;
            goto label_20c170;
        }
    }
    ctx->pc = 0x20C10Cu;
    // 0x20c10c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C10Cu;
    {
        const bool branch_taken_0x20c10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C10Cu;
        // 0x20c110: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c10c) {
            ctx->pc = 0x20C13Cu;
            goto label_20c13c;
        }
    }
    ctx->pc = 0x20C114u;
    // 0x20c114: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x20C114u;
    {
        const bool branch_taken_0x20c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c114) {
            ctx->pc = 0x20C118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C114u;
            // 0x20c118: 0x922217c1  lbu         $v0, 0x17C1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20C11Cu;
    // 0x20c11c: 0x28620212  slti        $v0, $v1, 0x212
    ctx->pc = 0x20c11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
    // 0x20c120: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C120u;
    {
        const bool branch_taken_0x20c120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c120) {
            ctx->pc = 0x20C124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C120u;
            // 0x20c124: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C184u;
            goto label_20c184;
        }
    }
    ctx->pc = 0x20C128u;
    // 0x20c128: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20c12c: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C12Cu;
    {
        const bool branch_taken_0x20c12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20c12c) {
            ctx->pc = 0x20C130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C12Cu;
            // 0x20c130: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C184u;
            goto label_20c184;
        }
    }
    ctx->pc = 0x20C134u;
    // 0x20c134: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20C134u;
    {
        const bool branch_taken_0x20c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C134u;
        // 0x20c138: 0x922217c1  lbu         $v0, 0x17C1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c134) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20C13Cu;
label_20c13c:
    // 0x20c13c: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x20c13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x20c140: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x20C140u;
    {
        const bool branch_taken_0x20c140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c140) {
            ctx->pc = 0x20C144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C140u;
            // 0x20c144: 0x922217c1  lbu         $v0, 0x17C1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20C148u;
    // 0x20c148: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c14c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C14Cu;
    {
        const bool branch_taken_0x20c14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C14Cu;
        // 0x20c150: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c14c) {
            ctx->pc = 0x20C174u;
            goto label_20c174;
        }
    }
    ctx->pc = 0x20C154u;
    // 0x20c154: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20c154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20c158: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C158u;
    {
        const bool branch_taken_0x20c158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C158u;
        // 0x20c15c: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c158) {
            ctx->pc = 0x20C184u;
            goto label_20c184;
        }
    }
    ctx->pc = 0x20C160u;
    // 0x20c160: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C160u;
    {
        const bool branch_taken_0x20c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c160) {
            ctx->pc = 0x20C164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C160u;
            // 0x20c164: 0x922217c1  lbu         $v0, 0x17C1($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20C168u;
    // 0x20c168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20C168u;
    {
        const bool branch_taken_0x20c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C168u;
        // 0x20c16c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c168) {
            ctx->pc = 0x20C184u;
            goto label_20c184;
        }
    }
    ctx->pc = 0x20C170u;
label_20c170:
    // 0x20c170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c174:
    // 0x20c174: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c178: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c17c: 0x10000247  b           . + 4 + (0x247 << 2)
    ctx->pc = 0x20C17Cu;
    {
        const bool branch_taken_0x20c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C17Cu;
        // 0x20c180: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c17c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C184u;
label_20c184:
    // 0x20c184: 0x922217c1  lbu         $v0, 0x17C1($s1)
    ctx->pc = 0x20c184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
label_20c188:
    // 0x20c188: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C188u;
    {
        const bool branch_taken_0x20c188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C188u;
        // 0x20c18c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c188) {
            ctx->pc = 0x20C1A8u;
            goto label_20c1a8;
        }
    }
    ctx->pc = 0x20C190u;
    // 0x20c190: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20C190u;
    SET_GPR_U32(ctx, 31, 0x20C198u);
    ctx->pc = 0x20C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C190u;
    // 0x20c194: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20C190u, 0x20C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C198u;
label_20c198:
    // 0x20c198: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20c198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c19c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c1a0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x20c1a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20c1a4: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x20c1a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_20c1a8:
    // 0x20c1a8: 0x12400024  beqz        $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x20C1A8u;
    {
        const bool branch_taken_0x20c1a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1A8u;
        // 0x20c1ac: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1a8) {
            ctx->pc = 0x20C23Cu;
            goto label_20c23c;
        }
    }
    ctx->pc = 0x20C1B0u;
    // 0x20c1b0: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20c1b4: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20c1b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20c1b8: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x20C1B8u;
    {
        const bool branch_taken_0x20c1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x20C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1B8u;
        // 0x20c1bc: 0xde2202f0  ld          $v0, 0x2F0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1b8) {
            ctx->pc = 0x20C1F4u;
            goto label_20c1f4;
        }
    }
    ctx->pc = 0x20C1C0u;
    // 0x20c1c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20c1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20c1c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20c1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20c1c8: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20c1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20c1cc: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20c1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20c1d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20c1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20c1d4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C1D4u;
    {
        const bool branch_taken_0x20c1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1D4u;
        // 0x20c1d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1d4) {
            ctx->pc = 0x20C1ECu;
            goto label_20c1ec;
        }
    }
    ctx->pc = 0x20C1DCu;
    // 0x20c1dc: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c1e0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20c1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20c1e4: 0x1440022e  bnez        $v0, . + 4 + (0x22E << 2)
    ctx->pc = 0x20C1E4u;
    {
        const bool branch_taken_0x20c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1E4u;
        // 0x20c1e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1e4) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20C1ECu;
label_20c1ec:
    // 0x20c1ec: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x20C1ECu;
    {
        const bool branch_taken_0x20c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C1ECu;
        // 0x20c1f0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c1ec) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C1F4u;
label_20c1f4:
    // 0x20c1f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20c1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20c1f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x20c1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20c1fc: 0x3404e020  ori         $a0, $zero, 0xE020
    ctx->pc = 0x20c1fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57376);
    // 0x20c200: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x20c200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x20c204: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20c204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20c208: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C208u;
    {
        const bool branch_taken_0x20c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C208u;
        // 0x20c20c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c208) {
            ctx->pc = 0x20C224u;
            goto label_20c224;
        }
    }
    ctx->pc = 0x20C210u;
    // 0x20c210: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c214: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x20c218: 0x14400221  bnez        $v0, . + 4 + (0x221 << 2)
    ctx->pc = 0x20C218u;
    {
        const bool branch_taken_0x20c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C218u;
        // 0x20c21c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c218) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20C220u;
    // 0x20c220: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c224:
    // 0x20c224: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20c224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20c228: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20c228u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c230: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c234: 0x10000219  b           . + 4 + (0x219 << 2)
    ctx->pc = 0x20C234u;
    {
        const bool branch_taken_0x20c234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C234u;
        // 0x20c238: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c234) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C23Cu;
label_20c23c:
    // 0x20c23c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20c240: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x20c240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x20c244: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20c244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20c248: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C248u;
    {
        const bool branch_taken_0x20c248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C248u;
        // 0x20c24c: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c248) {
            ctx->pc = 0x20C264u;
            goto label_20c264;
        }
    }
    ctx->pc = 0x20C250u;
    // 0x20c250: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C250u;
    {
        const bool branch_taken_0x20c250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C250u;
        // 0x20c254: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c250) {
            ctx->pc = 0x20C25Cu;
            goto label_20c25c;
        }
    }
    ctx->pc = 0x20C258u;
    // 0x20c258: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x20c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_20c25c:
    // 0x20c25c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C25Cu;
    {
        const bool branch_taken_0x20c25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C25Cu;
        // 0x20c260: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c25c) {
            ctx->pc = 0x20C280u;
            goto label_20c280;
        }
    }
    ctx->pc = 0x20C264u;
label_20c264:
    // 0x20c264: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c26c: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20c26cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c274: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c274u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c278: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x20C278u;
    {
        const bool branch_taken_0x20c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C278u;
        // 0x20c27c: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c278) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C280u;
label_20c280:
    // 0x20c280: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C280u;
        // 0x20c284: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C288u;
label_20c288:
    // 0x20c288: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C288u;
    SET_GPR_U32(ctx, 31, 0x20C290u);
    ctx->pc = 0x20C28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C288u;
    // 0x20c28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C288u, 0x20C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C290u;
label_20c290:
    // 0x20c290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C290u;
        // 0x20c294: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C2A8u;
            goto label_20c2a8;
        }
    }
    ctx->pc = 0x20C298u;
    // 0x20c298: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c29c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c2a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C2A0u;
    {
        const bool branch_taken_0x20c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2a0) {
            ctx->pc = 0x20C2F4u;
            goto label_20c2f4;
        }
    }
    ctx->pc = 0x20C2A8u;
label_20c2a8:
    // 0x20c2a8: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c2ac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C2ACu;
    {
        const bool branch_taken_0x20c2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2ACu;
        // 0x20c2b0: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2ac) {
            ctx->pc = 0x20C2DCu;
            goto label_20c2dc;
        }
    }
    ctx->pc = 0x20C2B4u;
    // 0x20c2b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C2B4u;
    {
        const bool branch_taken_0x20c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2B4u;
        // 0x20c2b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2b4) {
            ctx->pc = 0x20C2D4u;
            goto label_20c2d4;
        }
    }
    ctx->pc = 0x20C2BCu;
    // 0x20c2bc: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c2c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C2C0u;
    {
        const bool branch_taken_0x20c2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C0u;
        // 0x20c2c4: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c0) {
            ctx->pc = 0x20C2D0u;
            goto label_20c2d0;
        }
    }
    ctx->pc = 0x20C2C8u;
    // 0x20c2c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C2C8u;
    {
        const bool branch_taken_0x20c2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2C8u;
        // 0x20c2cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2c8) {
            ctx->pc = 0x20C2E0u;
            goto label_20c2e0;
        }
    }
    ctx->pc = 0x20C2D0u;
label_20c2d0:
    // 0x20c2d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2d4:
    // 0x20c2d4: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x20C2D4u;
    {
        const bool branch_taken_0x20c2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2D4u;
        // 0x20c2d8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2d4) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C2DCu;
label_20c2dc:
    // 0x20c2dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2e0:
    // 0x20c2e0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c2e4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c2ec: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x20C2ECu;
    {
        const bool branch_taken_0x20c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2ECu;
        // 0x20c2f0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2ec) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C2F4u;
label_20c2f4:
    // 0x20c2f4: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c2f8: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20C2F8u;
    {
        const bool branch_taken_0x20c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2F8u;
        // 0x20c2fc: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2f8) {
            ctx->pc = 0x20C368u;
            goto label_20c368;
        }
    }
    ctx->pc = 0x20C300u;
    // 0x20c300: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C300u;
    {
        const bool branch_taken_0x20c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C300u;
        // 0x20c304: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c300) {
            ctx->pc = 0x20C330u;
            goto label_20c330;
        }
    }
    ctx->pc = 0x20C308u;
    // 0x20c308: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20C308u;
    {
        const bool branch_taken_0x20c308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C308u;
        // 0x20c30c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c308) {
            ctx->pc = 0x20C3C8u;
            goto label_20c3c8;
        }
    }
    ctx->pc = 0x20C310u;
    // 0x20c310: 0x28620212  slti        $v0, $v1, 0x212
    ctx->pc = 0x20c310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
    // 0x20c314: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20C314u;
    {
        const bool branch_taken_0x20c314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C314u;
        // 0x20c318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c314) {
            ctx->pc = 0x20C360u;
            goto label_20c360;
        }
    }
    ctx->pc = 0x20C31Cu;
    // 0x20c31c: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20c320: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20C320u;
    {
        const bool branch_taken_0x20c320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C320u;
        // 0x20c324: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c320) {
            ctx->pc = 0x20C35Cu;
            goto label_20c35c;
        }
    }
    ctx->pc = 0x20C328u;
    // 0x20c328: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x20C328u;
    {
        const bool branch_taken_0x20c328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C328u;
        // 0x20c32c: 0x24449b70  addiu       $a0, $v0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c328) {
            ctx->pc = 0x20C3CCu;
            goto label_20c3cc;
        }
    }
    ctx->pc = 0x20C330u;
label_20c330:
    // 0x20c330: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x20c330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x20c334: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20C334u;
    {
        const bool branch_taken_0x20c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C334u;
        // 0x20c338: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c334) {
            ctx->pc = 0x20C3C8u;
            goto label_20c3c8;
        }
    }
    ctx->pc = 0x20C33Cu;
    // 0x20c33c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c340: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20C340u;
    {
        const bool branch_taken_0x20c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c340) {
            ctx->pc = 0x20C344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C340u;
            // 0x20c344: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C36Cu;
            goto label_20c36c;
        }
    }
    ctx->pc = 0x20C348u;
    // 0x20c348: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20c348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20c34c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C34Cu;
    {
        const bool branch_taken_0x20c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C34Cu;
        // 0x20c350: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c34c) {
            ctx->pc = 0x20C3C4u;
            goto label_20c3c4;
        }
    }
    ctx->pc = 0x20C354u;
    // 0x20c354: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20C354u;
    {
        const bool branch_taken_0x20c354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C354u;
        // 0x20c358: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c354) {
            ctx->pc = 0x20C3C8u;
            goto label_20c3c8;
        }
    }
    ctx->pc = 0x20C35Cu;
label_20c35c:
    // 0x20c35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c360:
    // 0x20c360: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x20C360u;
    {
        const bool branch_taken_0x20c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C360u;
        // 0x20c364: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c360) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C368u;
label_20c368:
    // 0x20c368: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20c368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20c36c:
    // 0x20c36c: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20c36cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20c370: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20c374: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x20c374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x20c378: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C378u;
    {
        const bool branch_taken_0x20c378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C378u;
        // 0x20c37c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c378) {
            ctx->pc = 0x20C398u;
            goto label_20c398;
        }
    }
    ctx->pc = 0x20C380u;
    // 0x20c380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20c384: 0x244218e0  addiu       $v0, $v0, 0x18E0
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6368));
    // 0x20c388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c38c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c390: 0x800008  jr          $a0
    ctx->pc = 0x20C390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C398u: goto label_20c398;
            case 0x20C3ACu: goto label_20c3ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C390u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20C398u;
label_20c398:
    // 0x20c398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c39c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c39cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c3a0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c3a4: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x20C3A4u;
    {
        const bool branch_taken_0x20c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3A4u;
        // 0x20c3a8: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3a4) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C3ACu;
label_20c3ac:
    // 0x20c3ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c3b0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c3b4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c3bc: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x20C3BCu;
    {
        const bool branch_taken_0x20c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3BCu;
        // 0x20c3c0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3bc) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C3C4u;
label_20c3c4:
    // 0x20c3c4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x20c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_20c3c8:
    // 0x20c3c8: 0x24449b70  addiu       $a0, $v0, -0x6490
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_20c3cc:
    // 0x20c3cc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20C3CCu;
    SET_GPR_U32(ctx, 31, 0x20C3D4u);
    ctx->pc = 0x20C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3CCu;
    // 0x20c3d0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20C3CCu, 0x20C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3D4u;
label_20c3d4:
    // 0x20c3d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20c3d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c3d8: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C3D8u;
    {
        const bool branch_taken_0x20c3d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x20C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3D8u;
        // 0x20c3dc: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3d8) {
            ctx->pc = 0x20C3F4u;
            goto label_20c3f4;
        }
    }
    ctx->pc = 0x20C3E0u;
    // 0x20c3e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C3E0u;
    {
        const bool branch_taken_0x20c3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c3e0) {
            ctx->pc = 0x20C3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C3E0u;
            // 0x20c3e4: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C3F8u;
            goto label_20c3f8;
        }
    }
    ctx->pc = 0x20C3E8u;
    // 0x20c3e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c3ec: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x20C3ECu;
    {
        const bool branch_taken_0x20c3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3ECu;
        // 0x20c3f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3ec) {
            ctx->pc = 0x20C488u;
            goto label_20c488;
        }
    }
    ctx->pc = 0x20C3F4u;
label_20c3f4:
    // 0x20c3f4: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x20c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_20c3f8:
    // 0x20c3f8: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x20c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x20c3fc: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x20c3fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x20c400: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C400u;
    {
        const bool branch_taken_0x20c400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C400u;
        // 0x20c404: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c400) {
            ctx->pc = 0x20C420u;
            goto label_20c420;
        }
    }
    ctx->pc = 0x20C408u;
    // 0x20c408: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c40c: 0x24421950  addiu       $v0, $v0, 0x1950
    ctx->pc = 0x20c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6480));
    // 0x20c410: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c414: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c418: 0x800008  jr          $a0
    ctx->pc = 0x20C418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C420u: goto label_20c420;
            case 0x20C484u: goto label_20c484;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C418u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20C420u;
label_20c420:
    // 0x20c420: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x20c424: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x20c424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x20c428: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x20c428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20c42c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C42Cu;
    {
        const bool branch_taken_0x20c42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C42Cu;
        // 0x20c430: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c42c) {
            ctx->pc = 0x20C484u;
            goto label_20c484;
        }
    }
    ctx->pc = 0x20C434u;
    // 0x20c434: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C434u;
    {
        const bool branch_taken_0x20c434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C434u;
        // 0x20c438: 0x922217c1  lbu         $v0, 0x17C1($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c434) {
            ctx->pc = 0x20C460u;
            goto label_20c460;
        }
    }
    ctx->pc = 0x20C43Cu;
    // 0x20c43c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x20C43Cu;
    {
        const bool branch_taken_0x20c43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C43Cu;
        // 0x20c440: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c43c) {
            ctx->pc = 0x20C488u;
            goto label_20c488;
        }
    }
    ctx->pc = 0x20C444u;
    // 0x20c444: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20C444u;
    SET_GPR_U32(ctx, 31, 0x20C44Cu);
    ctx->pc = 0x20C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C444u;
    // 0x20c448: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20C444u, 0x20C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C44Cu;
label_20c44c:
    // 0x20c44c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x20c44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20c450: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20C450u;
    {
        const bool branch_taken_0x20c450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C450u;
        // 0x20c454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c450) {
            ctx->pc = 0x20C484u;
            goto label_20c484;
        }
    }
    ctx->pc = 0x20C458u;
    // 0x20c458: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x20C458u;
    {
        const bool branch_taken_0x20c458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C458u;
        // 0x20c45c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c458) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C460u;
label_20c460:
    // 0x20c460: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C460u;
    {
        const bool branch_taken_0x20c460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C460u;
        // 0x20c464: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c460) {
            ctx->pc = 0x20C488u;
            goto label_20c488;
        }
    }
    ctx->pc = 0x20C468u;
    // 0x20c468: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20C468u;
    SET_GPR_U32(ctx, 31, 0x20C470u);
    ctx->pc = 0x20C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C468u;
    // 0x20c46c: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20C468u, 0x20C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C470u;
label_20c470:
    // 0x20c470: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x20c470u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20c474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C474u;
    {
        const bool branch_taken_0x20c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C474u;
        // 0x20c478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c474) {
            ctx->pc = 0x20C484u;
            goto label_20c484;
        }
    }
    ctx->pc = 0x20C47Cu;
    // 0x20c47c: 0x10000184  b           . + 4 + (0x184 << 2)
    ctx->pc = 0x20C47Cu;
    {
        const bool branch_taken_0x20c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C47Cu;
        // 0x20c480: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c47c) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C484u;
label_20c484:
    // 0x20c484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c488:
    // 0x20c488: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c48c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c48cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c494: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x20C494u;
    {
        const bool branch_taken_0x20c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C494u;
        // 0x20c498: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c494) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C49Cu;
label_20c49c:
    // 0x20c49c: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C49Cu;
    SET_GPR_U32(ctx, 31, 0x20C4A4u);
    ctx->pc = 0x20C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C49Cu;
    // 0x20c4a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C49Cu, 0x20C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4A4u;
label_20c4a4:
    // 0x20c4a4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C4A4u;
    {
        const bool branch_taken_0x20c4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4A4u;
        // 0x20c4a8: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4a4) {
            ctx->pc = 0x20C4BCu;
            goto label_20c4bc;
        }
    }
    ctx->pc = 0x20C4ACu;
    // 0x20c4ac: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c4acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c4b0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c4b4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20C4B4u;
    {
        const bool branch_taken_0x20c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4b4) {
            ctx->pc = 0x20C4FCu;
            goto label_20c4fc;
        }
    }
    ctx->pc = 0x20C4BCu;
label_20c4bc:
    // 0x20c4bc: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c4c0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C4C0u;
    {
        const bool branch_taken_0x20c4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4C0u;
        // 0x20c4c4: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4c0) {
            ctx->pc = 0x20C4E4u;
            goto label_20c4e4;
        }
    }
    ctx->pc = 0x20C4C8u;
    // 0x20c4c8: 0x14400170  bnez        $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x20C4C8u;
    {
        const bool branch_taken_0x20c4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4C8u;
        // 0x20c4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4c8) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20C4D0u;
    // 0x20c4d0: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c4d4: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x20C4D4u;
    {
        const bool branch_taken_0x20c4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4D4u;
        // 0x20c4d8: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4d4) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20C4DCu;
    // 0x20c4dc: 0x1440016b  bnez        $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x20C4DCu;
    {
        const bool branch_taken_0x20c4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4DCu;
        // 0x20c4e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4dc) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20C4E4u;
label_20c4e4:
    // 0x20c4e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c4e8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c4ec: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c4f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c4f4: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x20C4F4u;
    {
        const bool branch_taken_0x20c4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4F4u;
        // 0x20c4f8: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4f4) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C4FCu;
label_20c4fc:
    // 0x20c4fc: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c500: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C500u;
    {
        const bool branch_taken_0x20c500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C500u;
        // 0x20c504: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c500) {
            ctx->pc = 0x20C524u;
            goto label_20c524;
        }
    }
    ctx->pc = 0x20C508u;
    // 0x20c508: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20C508u;
    {
        const bool branch_taken_0x20c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C508u;
        // 0x20c50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c508) {
            ctx->pc = 0x20C540u;
            goto label_20c540;
        }
    }
    ctx->pc = 0x20C510u;
    // 0x20c510: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c514: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C514u;
    {
        const bool branch_taken_0x20c514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C514u;
        // 0x20c518: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c514) {
            ctx->pc = 0x20C53Cu;
            goto label_20c53c;
        }
    }
    ctx->pc = 0x20C51Cu;
    // 0x20c51c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C51Cu;
    {
        const bool branch_taken_0x20c51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C51Cu;
        // 0x20c520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c51c) {
            ctx->pc = 0x20C540u;
            goto label_20c540;
        }
    }
    ctx->pc = 0x20C524u;
label_20c524:
    // 0x20c524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c528: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c52c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c52cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c534: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x20C534u;
    {
        const bool branch_taken_0x20c534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C534u;
        // 0x20c538: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c534) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c540:
    // 0x20c540: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x20C540u;
    {
        const bool branch_taken_0x20c540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C540u;
        // 0x20c544: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c540) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C548u;
label_20c548:
    // 0x20c548: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C548u;
    SET_GPR_U32(ctx, 31, 0x20C550u);
    ctx->pc = 0x20C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C548u;
    // 0x20c54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C548u, 0x20C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C550u;
label_20c550:
    // 0x20c550: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C550u;
    {
        const bool branch_taken_0x20c550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C550u;
        // 0x20c554: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c550) {
            ctx->pc = 0x20C568u;
            goto label_20c568;
        }
    }
    ctx->pc = 0x20C558u;
    // 0x20c558: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c55c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c560: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20C560u;
    {
        const bool branch_taken_0x20c560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c560) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C568u;
label_20c568:
    // 0x20c568: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c56c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C56Cu;
        // 0x20c570: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C590u;
            goto label_20c590;
        }
    }
    ctx->pc = 0x20C574u;
    // 0x20c574: 0x14400145  bnez        $v0, . + 4 + (0x145 << 2)
    ctx->pc = 0x20C574u;
    {
        const bool branch_taken_0x20c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C574u;
        // 0x20c578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c574) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20C57Cu;
    // 0x20c57c: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c580: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x20C580u;
    {
        const bool branch_taken_0x20c580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C580u;
        // 0x20c584: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c580) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20C588u;
    // 0x20c588: 0x14400140  bnez        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x20C588u;
    {
        const bool branch_taken_0x20c588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C588u;
        // 0x20c58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c588) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c594: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c598: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c5a0: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x20C5A0u;
    {
        const bool branch_taken_0x20c5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5A0u;
        // 0x20c5a4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5a0) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C5A8u;
label_20c5a8:
    // 0x20c5a8: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c5ac: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C5ACu;
    {
        const bool branch_taken_0x20c5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5ACu;
        // 0x20c5b0: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5ac) {
            ctx->pc = 0x20C5D0u;
            goto label_20c5d0;
        }
    }
    ctx->pc = 0x20C5B4u;
    // 0x20c5b4: 0x14400135  bnez        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x20C5B4u;
    {
        const bool branch_taken_0x20c5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5B4u;
        // 0x20c5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5b4) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20C5BCu;
    // 0x20c5bc: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c5c0: 0x10400131  beqz        $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C0u;
        // 0x20c5c4: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20C5C8u;
    // 0x20c5c8: 0x14400130  bnez        $v0, . + 4 + (0x130 << 2)
    ctx->pc = 0x20C5C8u;
    {
        const bool branch_taken_0x20c5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C8u;
        // 0x20c5cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c8) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20C5D0u;
label_20c5d0:
    // 0x20c5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c5d4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c5d8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c5e0: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x20C5E0u;
    {
        const bool branch_taken_0x20c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5E0u;
        // 0x20c5e4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5e0) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C5E8u;
label_20c5e8:
    // 0x20c5e8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c5ec: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c5f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C5F0u;
    {
        const bool branch_taken_0x20c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F0u;
        // 0x20c5f4: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f0) {
            ctx->pc = 0x20C610u;
            goto label_20c610;
        }
    }
    ctx->pc = 0x20C5F8u;
    // 0x20c5f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C5F8u;
    {
        const bool branch_taken_0x20c5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F8u;
        // 0x20c5fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f8) {
            ctx->pc = 0x20C610u;
            goto label_20c610;
        }
    }
    ctx->pc = 0x20C600u;
    // 0x20c600: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c600u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c604: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c608: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x20C608u;
    {
        const bool branch_taken_0x20c608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C608u;
        // 0x20c60c: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c608) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C610u;
label_20c610:
    // 0x20c610: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C610u;
    SET_GPR_U32(ctx, 31, 0x20C618u);
    ctx->pc = 0x20C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C610u;
    // 0x20c614: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C610u, 0x20C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C618u;
label_20c618:
    // 0x20c618: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C618u;
    {
        const bool branch_taken_0x20c618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C618u;
        // 0x20c61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c618) {
            ctx->pc = 0x20C630u;
            goto label_20c630;
        }
    }
    ctx->pc = 0x20C620u;
    // 0x20c620: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c620u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c624: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c628: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C628u;
    {
        const bool branch_taken_0x20c628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C628u;
        // 0x20c62c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c628) {
            ctx->pc = 0x20C648u;
            goto label_20c648;
        }
    }
    ctx->pc = 0x20C630u;
label_20c630:
    // 0x20c630: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20c630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c638: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c63c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20c63cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c640: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x20C640u;
    {
        const bool branch_taken_0x20c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C640u;
        // 0x20c644: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c640) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C648u;
label_20c648:
    // 0x20c648: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20c648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20c64c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20c64cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20c650: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C650u;
    {
        const bool branch_taken_0x20c650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C650u;
        // 0x20c654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c650) {
            ctx->pc = 0x20C660u;
            goto label_20c660;
        }
    }
    ctx->pc = 0x20C658u;
    // 0x20c658: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x20C658u;
    {
        const bool branch_taken_0x20c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C658u;
        // 0x20c65c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c658) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C660u;
label_20c660:
    // 0x20c660: 0xc083686  jal         func_20DA18
    ctx->pc = 0x20C660u;
    SET_GPR_U32(ctx, 31, 0x20C668u);
    ctx->pc = 0x20C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C660u;
    // 0x20c664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA18u, 0x20C660u, 0x20C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C668u;
label_20c668:
    // 0x20c668: 0x1440010d  bnez        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x20C668u;
    {
        const bool branch_taken_0x20c668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C668u;
        // 0x20c66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c668) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20C670u;
    // 0x20c670: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c674: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x20c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x20c678: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x20c678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x20c67c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x20C67Cu;
    {
        const bool branch_taken_0x20c67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C67Cu;
        // 0x20c680: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c67c) {
            ctx->pc = 0x20C6B4u;
            goto label_20c6b4;
        }
    }
    ctx->pc = 0x20C684u;
    // 0x20c684: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c688: 0x24421b10  addiu       $v0, $v0, 0x1B10
    ctx->pc = 0x20c688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6928));
    // 0x20c68c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c690: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20c690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c694: 0x800008  jr          $a0
    ctx->pc = 0x20C694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C69Cu: goto label_20c69c;
            case 0x20C6B4u: goto label_20c6b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C694u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20C69Cu;
label_20c69c:
    // 0x20c69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c6a0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c6a4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c6a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c6ac: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x20C6ACu;
    {
        const bool branch_taken_0x20c6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6ACu;
        // 0x20c6b0: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6ac) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C6B4u;
label_20c6b4:
    // 0x20c6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c6b8: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x20C6B8u;
    {
        const bool branch_taken_0x20c6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6B8u;
        // 0x20c6bc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6b8) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C6C0u;
label_20c6c0:
    // 0x20c6c0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c6c4: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x20c6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x20c6c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C6C8u;
    {
        const bool branch_taken_0x20c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6C8u;
        // 0x20c6cc: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6c8) {
            ctx->pc = 0x20C6E8u;
            goto label_20c6e8;
        }
    }
    ctx->pc = 0x20C6D0u;
    // 0x20c6d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C6D0u;
    {
        const bool branch_taken_0x20c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6D0u;
        // 0x20c6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6d0) {
            ctx->pc = 0x20C6E8u;
            goto label_20c6e8;
        }
    }
    ctx->pc = 0x20C6D8u;
    // 0x20c6d8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c6dc: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c6e0: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x20C6E0u;
    {
        const bool branch_taken_0x20c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6E0u;
        // 0x20c6e4: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6e0) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C6E8u;
label_20c6e8:
    // 0x20c6e8: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C6E8u;
    SET_GPR_U32(ctx, 31, 0x20C6F0u);
    ctx->pc = 0x20C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6E8u;
    // 0x20c6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C6E8u, 0x20C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6F0u;
label_20c6f0:
    // 0x20c6f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C6F0u;
    {
        const bool branch_taken_0x20c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6F0u;
        // 0x20c6f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6f0) {
            ctx->pc = 0x20C708u;
            goto label_20c708;
        }
    }
    ctx->pc = 0x20C6F8u;
    // 0x20c6f8: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c6f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c6fc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c700: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C700u;
    {
        const bool branch_taken_0x20c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C700u;
        // 0x20c704: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c700) {
            ctx->pc = 0x20C720u;
            goto label_20c720;
        }
    }
    ctx->pc = 0x20C708u;
label_20c708:
    // 0x20c708: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c70c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20c710: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c714: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20c714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c718: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x20C718u;
    {
        const bool branch_taken_0x20c718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C718u;
        // 0x20c71c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c718) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C720u;
label_20c720:
    // 0x20c720: 0xc083686  jal         func_20DA18
    ctx->pc = 0x20C720u;
    SET_GPR_U32(ctx, 31, 0x20C728u);
    ctx->pc = 0x20C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C720u;
    // 0x20c724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA18u, 0x20C720u, 0x20C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C728u;
label_20c728:
    // 0x20c728: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x20C728u;
    {
        const bool branch_taken_0x20c728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C728u;
        // 0x20c72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c728) {
            ctx->pc = 0x20CAA0u;
            goto label_20caa0;
        }
    }
    ctx->pc = 0x20C730u;
    // 0x20c730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c734: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c738: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20c738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20c73c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c73cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c740: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20c740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c744: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x20C744u;
    {
        const bool branch_taken_0x20c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C744u;
        // 0x20c748: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c744) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C74Cu;
label_20c74c:
    // 0x20c74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c750: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c754: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c758: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c75c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20c75cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c760: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x20C760u;
    {
        const bool branch_taken_0x20c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C760u;
        // 0x20c764: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c760) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C768u;
label_20c768:
    // 0x20c768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c76c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20c770: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c774: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c778: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x20c778u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c77c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x20C77Cu;
    {
        const bool branch_taken_0x20c77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C77Cu;
        // 0x20c780: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c77c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C784u;
label_20c784:
    // 0x20c784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c788: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x20C788u;
    {
        const bool branch_taken_0x20c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C788u;
        // 0x20c78c: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c788) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C790u;
label_20c790:
    // 0x20c790: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x20c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c794: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x20c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x20c798: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x20c798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x20c79c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x20C79Cu;
    {
        const bool branch_taken_0x20c79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C79Cu;
        // 0x20c7a0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c79c) {
            ctx->pc = 0x20C7C8u;
            goto label_20c7c8;
        }
    }
    ctx->pc = 0x20C7A4u;
    // 0x20c7a4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20c7a8: 0x24421cd0  addiu       $v0, $v0, 0x1CD0
    ctx->pc = 0x20c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7376));
    // 0x20c7ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20c7b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20c7b4: 0x800008  jr          $a0
    ctx->pc = 0x20C7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C7BCu: goto label_20c7bc;
            case 0x20C7C8u: goto label_20c7c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20C7BCu;
label_20c7bc:
    // 0x20c7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c7c0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x20C7C0u;
    {
        const bool branch_taken_0x20c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7C0u;
        // 0x20c7c4: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7c0) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C7C8u;
label_20c7c8:
    // 0x20c7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c7cc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x20C7CCu;
    {
        const bool branch_taken_0x20c7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7CCu;
        // 0x20c7d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7cc) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C7D4u;
label_20c7d4:
    // 0x20c7d4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c7d8: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x20c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x20c7dc: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20C7DCu;
    {
        const bool branch_taken_0x20c7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7DCu;
        // 0x20c7e0: 0x28620261  slti        $v0, $v1, 0x261 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)609) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7dc) {
            ctx->pc = 0x20C840u;
            goto label_20c840;
        }
    }
    ctx->pc = 0x20C7E4u;
    // 0x20c7e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C7E4u;
    {
        const bool branch_taken_0x20c7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7E4u;
        // 0x20c7e8: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7e4) {
            ctx->pc = 0x20C810u;
            goto label_20c810;
        }
    }
    ctx->pc = 0x20C7ECu;
    // 0x20c7ec: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20C7ECu;
    {
        const bool branch_taken_0x20c7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7ECu;
        // 0x20c7f0: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7ec) {
            ctx->pc = 0x20C854u;
            goto label_20c854;
        }
    }
    ctx->pc = 0x20C7F4u;
    // 0x20c7f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x20C7F4u;
    {
        const bool branch_taken_0x20c7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7F4u;
        // 0x20c7f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7f4) {
            ctx->pc = 0x20C838u;
            goto label_20c838;
        }
    }
    ctx->pc = 0x20C7FCu;
    // 0x20c7fc: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20c800: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20C800u;
    {
        const bool branch_taken_0x20c800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C800u;
        // 0x20c804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c800) {
            ctx->pc = 0x20C838u;
            goto label_20c838;
        }
    }
    ctx->pc = 0x20C808u;
    // 0x20c808: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20C808u;
    {
        const bool branch_taken_0x20c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c808) {
            ctx->pc = 0x20C854u;
            goto label_20c854;
        }
    }
    ctx->pc = 0x20C810u;
label_20c810:
    // 0x20c810: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x20c810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x20c814: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20C814u;
    {
        const bool branch_taken_0x20c814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C814u;
        // 0x20c818: 0x28620266  slti        $v0, $v1, 0x266 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c814) {
            ctx->pc = 0x20C854u;
            goto label_20c854;
        }
    }
    ctx->pc = 0x20C81Cu;
    // 0x20c81c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C81Cu;
        // 0x20c820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C844u;
            goto label_20c844;
        }
    }
    ctx->pc = 0x20C824u;
    // 0x20c824: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20c824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20c828: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C828u;
    {
        const bool branch_taken_0x20c828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C828u;
        // 0x20c82c: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c828) {
            ctx->pc = 0x20C854u;
            goto label_20c854;
        }
    }
    ctx->pc = 0x20C830u;
    // 0x20c830: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C830u;
    {
        const bool branch_taken_0x20c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C830u;
        // 0x20c834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c830) {
            ctx->pc = 0x20C854u;
            goto label_20c854;
        }
    }
    ctx->pc = 0x20C838u;
label_20c838:
    // 0x20c838: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x20C838u;
    {
        const bool branch_taken_0x20c838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C838u;
        // 0x20c83c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c838) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C840u;
label_20c840:
    // 0x20c840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c844:
    // 0x20c844: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c848: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c84c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x20C84Cu;
    {
        const bool branch_taken_0x20c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C84Cu;
        // 0x20c850: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c84c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C854u;
label_20c854:
    // 0x20c854: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20C854u;
    SET_GPR_U32(ctx, 31, 0x20C85Cu);
    ctx->pc = 0x20C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C854u;
    // 0x20c858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20C854u, 0x20C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C85Cu;
label_20c85c:
    // 0x20c85c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C85Cu;
    {
        const bool branch_taken_0x20c85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c85c) {
            ctx->pc = 0x20C860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C85Cu;
            // 0x20c860: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C878u;
            goto label_20c878;
        }
    }
    ctx->pc = 0x20C864u;
    // 0x20c864: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x20c864u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x20c868: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20c86c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20C86Cu;
    {
        const bool branch_taken_0x20c86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C86Cu;
        // 0x20c870: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c86c) {
            ctx->pc = 0x20C8A8u;
            goto label_20c8a8;
        }
    }
    ctx->pc = 0x20C874u;
    // 0x20c874: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x20c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_20c878:
    // 0x20c878: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x20c878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20c87c: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20c87cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20c880: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C880u;
    {
        const bool branch_taken_0x20c880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C880u;
        // 0x20c884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c880) {
            ctx->pc = 0x20C8A0u;
            goto label_20c8a0;
        }
    }
    ctx->pc = 0x20C888u;
    // 0x20c888: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c88c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x20c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20c890: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x20c890u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x20c894: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c894u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c898: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x20C898u;
    {
        const bool branch_taken_0x20c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C898u;
        // 0x20c89c: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c898) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C8A0u;
label_20c8a0:
    // 0x20c8a0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x20C8A0u;
    {
        const bool branch_taken_0x20c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8a0) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C8A8u;
label_20c8a8:
    // 0x20c8a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20C8A8u;
    SET_GPR_U32(ctx, 31, 0x20C8B0u);
    ctx->pc = 0x20C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8A8u;
    // 0x20c8ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20C8A8u, 0x20C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8B0u;
label_20c8b0:
    // 0x20c8b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x20c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c8b4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C8B4u;
    {
        const bool branch_taken_0x20c8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8B4u;
        // 0x20c8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8b4) {
            ctx->pc = 0x20C8D0u;
            goto label_20c8d0;
        }
    }
    ctx->pc = 0x20C8BCu;
    // 0x20c8bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c8c0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c8c4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c8c8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x20C8C8u;
    {
        const bool branch_taken_0x20c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8C8u;
        // 0x20c8cc: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8c8) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C8D0u;
label_20c8d0:
    // 0x20c8d0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x20C8D0u;
    {
        const bool branch_taken_0x20c8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8D0u;
        // 0x20c8d4: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8d0) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C8D8u;
label_20c8d8:
    // 0x20c8d8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c8dc: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20c8e0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C8E0u;
    {
        const bool branch_taken_0x20c8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8E0u;
        // 0x20c8e4: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8e0) {
            ctx->pc = 0x20C934u;
            goto label_20c934;
        }
    }
    ctx->pc = 0x20C8E8u;
    // 0x20c8e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C8E8u;
    {
        const bool branch_taken_0x20c8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8E8u;
        // 0x20c8ec: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8e8) {
            ctx->pc = 0x20C908u;
            goto label_20c908;
        }
    }
    ctx->pc = 0x20C8F0u;
    // 0x20c8f0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C8F0u;
    {
        const bool branch_taken_0x20c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8F0u;
        // 0x20c8f4: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8f0) {
            ctx->pc = 0x20C91Cu;
            goto label_20c91c;
        }
    }
    ctx->pc = 0x20C8F8u;
    // 0x20c8f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C8F8u;
    {
        const bool branch_taken_0x20c8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8F8u;
        // 0x20c8fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8f8) {
            ctx->pc = 0x20C920u;
            goto label_20c920;
        }
    }
    ctx->pc = 0x20C900u;
    // 0x20c900: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20C900u;
    {
        const bool branch_taken_0x20c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C900u;
        // 0x20c904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c900) {
            ctx->pc = 0x20C938u;
            goto label_20c938;
        }
    }
    ctx->pc = 0x20C908u;
label_20c908:
    // 0x20c908: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20c908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20c90c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C90Cu;
    {
        const bool branch_taken_0x20c90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C90Cu;
        // 0x20c910: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c90c) {
            ctx->pc = 0x20C91Cu;
            goto label_20c91c;
        }
    }
    ctx->pc = 0x20C914u;
    // 0x20c914: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C914u;
    {
        const bool branch_taken_0x20c914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C914u;
        // 0x20c918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c914) {
            ctx->pc = 0x20C938u;
            goto label_20c938;
        }
    }
    ctx->pc = 0x20C91Cu;
label_20c91c:
    // 0x20c91c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c920:
    // 0x20c920: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c920u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c924: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c92c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x20C92Cu;
    {
        const bool branch_taken_0x20c92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C92Cu;
        // 0x20c930: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c92c) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C934u;
label_20c934:
    // 0x20c934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c938:
    // 0x20c938: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x20C938u;
    {
        const bool branch_taken_0x20c938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C938u;
        // 0x20c93c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c938) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C940u;
label_20c940:
    // 0x20c940: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c944: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20c948: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C948u;
    {
        const bool branch_taken_0x20c948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C948u;
        // 0x20c94c: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c948) {
            ctx->pc = 0x20C99Cu;
            goto label_20c99c;
        }
    }
    ctx->pc = 0x20C950u;
    // 0x20c950: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C950u;
    {
        const bool branch_taken_0x20c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C950u;
        // 0x20c954: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c950) {
            ctx->pc = 0x20C970u;
            goto label_20c970;
        }
    }
    ctx->pc = 0x20C958u;
    // 0x20c958: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C958u;
    {
        const bool branch_taken_0x20c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C958u;
        // 0x20c95c: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c958) {
            ctx->pc = 0x20C984u;
            goto label_20c984;
        }
    }
    ctx->pc = 0x20C960u;
    // 0x20c960: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C960u;
    {
        const bool branch_taken_0x20c960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C960u;
        // 0x20c964: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c960) {
            ctx->pc = 0x20C988u;
            goto label_20c988;
        }
    }
    ctx->pc = 0x20C968u;
    // 0x20c968: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20C968u;
    {
        const bool branch_taken_0x20c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C968u;
        // 0x20c96c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c968) {
            ctx->pc = 0x20C9A0u;
            goto label_20c9a0;
        }
    }
    ctx->pc = 0x20C970u;
label_20c970:
    // 0x20c970: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20c970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20c974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C974u;
    {
        const bool branch_taken_0x20c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C974u;
        // 0x20c978: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c974) {
            ctx->pc = 0x20C984u;
            goto label_20c984;
        }
    }
    ctx->pc = 0x20C97Cu;
    // 0x20c97c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C97Cu;
    {
        const bool branch_taken_0x20c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C97Cu;
        // 0x20c980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c97c) {
            ctx->pc = 0x20C9A0u;
            goto label_20c9a0;
        }
    }
    ctx->pc = 0x20C984u;
label_20c984:
    // 0x20c984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c988:
    // 0x20c988: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c98c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c98cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c994: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x20C994u;
    {
        const bool branch_taken_0x20c994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C994u;
        // 0x20c998: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c994) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C99Cu;
label_20c99c:
    // 0x20c99c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c9a0:
    // 0x20c9a0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x20C9A0u;
    {
        const bool branch_taken_0x20c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9a0) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C9A8u;
label_20c9a8:
    // 0x20c9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c9ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x20C9ACu;
    {
        const bool branch_taken_0x20c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9ACu;
        // 0x20c9b0: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9ac) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20C9B4u;
label_20c9b4:
    // 0x20c9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c9b8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x20c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c9bc: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20c9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x20c9c0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20c9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20c9c4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20c9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20c9c8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x20C9C8u;
    {
        const bool branch_taken_0x20c9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9C8u;
        // 0x20c9cc: 0xa620054a  sh          $zero, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9c8) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20C9D0u;
label_20c9d0:
    // 0x20c9d0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20c9d4: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20c9d8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x20C9D8u;
    {
        const bool branch_taken_0x20c9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9D8u;
        // 0x20c9dc: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9d8) {
            ctx->pc = 0x20CA2Cu;
            goto label_20ca2c;
        }
    }
    ctx->pc = 0x20C9E0u;
    // 0x20c9e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C9E0u;
    {
        const bool branch_taken_0x20c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9E0u;
        // 0x20c9e4: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9e0) {
            ctx->pc = 0x20CA00u;
            goto label_20ca00;
        }
    }
    ctx->pc = 0x20C9E8u;
    // 0x20c9e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C9E8u;
    {
        const bool branch_taken_0x20c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9E8u;
        // 0x20c9ec: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9e8) {
            ctx->pc = 0x20CA14u;
            goto label_20ca14;
        }
    }
    ctx->pc = 0x20C9F0u;
    // 0x20c9f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C9F0u;
    {
        const bool branch_taken_0x20c9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9F0u;
        // 0x20c9f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9f0) {
            ctx->pc = 0x20CA18u;
            goto label_20ca18;
        }
    }
    ctx->pc = 0x20C9F8u;
    // 0x20c9f8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20C9F8u;
    {
        const bool branch_taken_0x20c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9F8u;
        // 0x20c9fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9f8) {
            ctx->pc = 0x20CA30u;
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20CA00u;
label_20ca00:
    // 0x20ca00: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20ca00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20ca04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CA04u;
    {
        const bool branch_taken_0x20ca04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA04u;
        // 0x20ca08: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca04) {
            ctx->pc = 0x20CA14u;
            goto label_20ca14;
        }
    }
    ctx->pc = 0x20CA0Cu;
    // 0x20ca0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20CA0Cu;
    {
        const bool branch_taken_0x20ca0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA0Cu;
        // 0x20ca10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca0c) {
            ctx->pc = 0x20CA30u;
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20CA14u;
label_20ca14:
    // 0x20ca14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ca18:
    // 0x20ca18: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ca18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x20ca1c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ca1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ca20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ca24: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20CA24u;
    {
        const bool branch_taken_0x20ca24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA24u;
        // 0x20ca28: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca24) {
            ctx->pc = 0x20CA9Cu;
            goto label_20ca9c;
        }
    }
    ctx->pc = 0x20CA2Cu;
label_20ca2c:
    // 0x20ca2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ca30:
    // 0x20ca30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20CA30u;
    {
        const bool branch_taken_0x20ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA30u;
        // 0x20ca34: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca30) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20CA38u;
label_20ca38:
    // 0x20ca38: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x20ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x20ca3c: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x20ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x20ca40: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20CA40u;
    {
        const bool branch_taken_0x20ca40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA40u;
        // 0x20ca44: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca40) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA48u;
    // 0x20ca48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CA48u;
    {
        const bool branch_taken_0x20ca48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA48u;
        // 0x20ca4c: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca48) {
            ctx->pc = 0x20CA68u;
            goto label_20ca68;
        }
    }
    ctx->pc = 0x20CA50u;
    // 0x20ca50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20CA50u;
    {
        const bool branch_taken_0x20ca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA50u;
        // 0x20ca54: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca50) {
            ctx->pc = 0x20CA7Cu;
            goto label_20ca7c;
        }
    }
    ctx->pc = 0x20CA58u;
    // 0x20ca58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20CA58u;
    {
        const bool branch_taken_0x20ca58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA58u;
        // 0x20ca5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca58) {
            ctx->pc = 0x20CA80u;
            goto label_20ca80;
        }
    }
    ctx->pc = 0x20CA60u;
    // 0x20ca60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20CA60u;
    {
        const bool branch_taken_0x20ca60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA60u;
        // 0x20ca64: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca60) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20CA68u;
label_20ca68:
    // 0x20ca68: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x20ca68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x20ca6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20CA6Cu;
    {
        const bool branch_taken_0x20ca6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA6Cu;
        // 0x20ca70: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca6c) {
            ctx->pc = 0x20CA7Cu;
            goto label_20ca7c;
        }
    }
    ctx->pc = 0x20CA74u;
    // 0x20ca74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CA74u;
    {
        const bool branch_taken_0x20ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA74u;
        // 0x20ca78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca74) {
            ctx->pc = 0x20CA8Cu;
            goto label_20ca8c;
        }
    }
    ctx->pc = 0x20CA7Cu;
label_20ca7c:
    // 0x20ca7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ca80:
    // 0x20ca80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20CA80u;
    {
        const bool branch_taken_0x20ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA80u;
        // 0x20ca84: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca80) {
            ctx->pc = 0x20CA90u;
            goto label_20ca90;
        }
    }
    ctx->pc = 0x20CA88u;
label_20ca88:
    // 0x20ca88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ca8c:
    // 0x20ca8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20ca90:
    // 0x20ca90: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x20ca90u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_20ca94:
    // 0x20ca94: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x20ca94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_20ca98:
    // 0x20ca98: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x20ca98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_20ca9c:
    // 0x20ca9c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x20ca9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_20caa0:
    // 0x20caa0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x20caa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_20caa4:
    // 0x20caa4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x20caa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20caa8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x20caa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20caac: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x20caacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20cab0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x20cab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20cab4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20cab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20cab8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20cabc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x20cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20cac0: 0x3e00008  jr          $ra
    ctx->pc = 0x20CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAC0u;
        // 0x20cac4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CAC8u;
}
