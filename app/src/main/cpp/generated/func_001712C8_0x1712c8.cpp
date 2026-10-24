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

// Function: func_001712C8
// Address: 0x1712c8 - 0x1717a0
void func_001712C8_0x1712c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001712C8_0x1712c8");
#endif

    switch (ctx->pc) {
        case 0x171310u: goto label_171310;
        case 0x171348u: goto label_171348;
        case 0x17139cu: goto label_17139c;
        case 0x1713a8u: goto label_1713a8;
        case 0x17140cu: goto label_17140c;
        case 0x17142cu: goto label_17142c;
        case 0x171448u: goto label_171448;
        case 0x171468u: goto label_171468;
        case 0x171508u: goto label_171508;
        case 0x171524u: goto label_171524;
        case 0x171590u: goto label_171590;
        case 0x1716acu: goto label_1716ac;
        case 0x1716bcu: goto label_1716bc;
        case 0x1716c8u: goto label_1716c8;
        case 0x1716f8u: goto label_1716f8;
        case 0x17174cu: goto label_17174c;
        case 0x171758u: goto label_171758;
        default: break;
    }

    ctx->pc = 0x1712c8u;

    // 0x1712c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1712c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1712cc: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1712ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1712d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1712d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712d4: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1712d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1712d8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1712d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1712dc: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1712dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1712e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1712e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712e4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1712e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1712e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1712e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712ec: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1712ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1712f0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1712f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1712f4: 0x26361ae0  addiu       $s6, $s1, 0x1AE0
    ctx->pc = 0x1712f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
    // 0x1712f8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1712f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1712fc: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1712fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x171300: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x171300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x171304: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x171304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x171308: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x171308u;
    SET_GPR_U32(ctx, 31, 0x171310u);
    ctx->pc = 0x17130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171308u;
    // 0x17130c: 0xe7b50138  swc1        $f21, 0x138($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x171308u, 0x171310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171310u;
label_171310:
    // 0x171310: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x171310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x171314: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171318: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17131c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x171320: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x171320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x171324: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x171324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x171328: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x171328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x17132c: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x17132cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x171330: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x171330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
    // 0x171334: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x171338: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x171338u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17133c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x171340: 0x245709e8  addiu       $s7, $v0, 0x9E8
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
    // 0x171344: 0x0  nop
    ctx->pc = 0x171344u;
    // NOP
label_171348:
    // 0x171348: 0x2571021  addu        $v0, $s2, $s7
    ctx->pc = 0x171348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
    // 0x17134c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x17134cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x171350: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x171350u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171358: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x171358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17135c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17135Cu;
    {
        const bool branch_taken_0x17135c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17135Cu;
        // 0x171360: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17135c) {
            ctx->pc = 0x17136Cu;
            goto label_17136c;
        }
    }
    ctx->pc = 0x171364u;
    // 0x171364: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x171364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x171368: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x171368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17136c:
    // 0x17136c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17136cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x171370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171370u;
    {
        const bool branch_taken_0x171370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171370u;
        // 0x171374: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171370) {
            ctx->pc = 0x171388u;
            goto label_171388;
        }
    }
    ctx->pc = 0x171378u;
    // 0x171378: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x171378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17137c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17137cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171380u;
    {
        const bool branch_taken_0x171380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171380u;
        // 0x171384: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171380) {
            ctx->pc = 0x17138Cu;
            goto label_17138c;
        }
    }
    ctx->pc = 0x171388u;
label_171388:
    // 0x171388: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17138c:
    // 0x17138c: 0x26261ae0  addiu       $a2, $s1, 0x1AE0
    ctx->pc = 0x17138cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 6880));
    // 0x171390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171394: 0xc05404e  jal         func_150138
    ctx->pc = 0x171394u;
    SET_GPR_U32(ctx, 31, 0x17139Cu);
    ctx->pc = 0x171398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171394u;
    // 0x171398: 0xafa60080  sw          $a2, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150138u, 0x171394u, 0x17139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17139Cu;
label_17139c:
    // 0x17139c: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x17139cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1713a0: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1713A0u;
    SET_GPR_U32(ctx, 31, 0x1713A8u);
    ctx->pc = 0x1713A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713A0u;
    // 0x1713a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1713A0u, 0x1713A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713A8u;
label_1713a8:
    // 0x1713a8: 0xc60200b8  lwc1        $f2, 0xB8($s0)
    ctx->pc = 0x1713a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1713ac: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x1713acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713b0: 0xc60100b4  lwc1        $f1, 0xB4($s0)
    ctx->pc = 0x1713b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1713b4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x1713b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1713b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1713b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1713bc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1713bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1713c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1713c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1713c4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1713c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1713c8: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1713C8u;
    {
        const bool branch_taken_0x1713c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1713CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713C8u;
        // 0x1713cc: 0xe674000c  swc1        $f20, 0xC($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713c8) {
            ctx->pc = 0x1713E8u;
            goto label_1713e8;
        }
    }
    ctx->pc = 0x1713D0u;
    // 0x1713d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1713d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1713d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1713d8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1713d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1713dc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1713dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1713e0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1713e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1713e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1713e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1713e8:
    // 0x1713e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1713e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1713ec: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1713ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1713f0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1713F0u;
    {
        const bool branch_taken_0x1713f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713F0u;
        // 0x1713f4: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713f0) {
            ctx->pc = 0x171348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171348;
        }
    }
    ctx->pc = 0x1713F8u;
    // 0x1713f8: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x1713f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x1713fc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1713fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x171400: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x171400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x171404: 0xc0ab564  jal         func_2AD590
    ctx->pc = 0x171404u;
    SET_GPR_U32(ctx, 31, 0x17140Cu);
    ctx->pc = 0x171408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171404u;
    // 0x171408: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD590u, 0x171404u, 0x17140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17140Cu;
label_17140c:
    // 0x17140c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x17140cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x171410: 0x9062da00  lbu         $v0, -0x2600($v1)
    ctx->pc = 0x171410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3BDA00u));
    // 0x171414: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171414u;
    {
        const bool branch_taken_0x171414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171414u;
        // 0x171418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171414) {
            ctx->pc = 0x17142Cu;
            goto label_17142c;
        }
    }
    ctx->pc = 0x17141Cu;
    // 0x17141c: 0xa060da00  sb          $zero, -0x2600($v1)
    ctx->pc = 0x17141cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957568), (uint8_t)GPR_U32(ctx, 0));
    // 0x171420: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x171420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x171424: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171424u;
    SET_GPR_U32(ctx, 31, 0x17142Cu);
    ctx->pc = 0x171428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171424u;
    // 0x171428: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x171424u, 0x17142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17142Cu;
label_17142c:
    // 0x17142c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17142cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x171430: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x171430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x171434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171438: 0x8fb40074  lw          $s4, 0x74($sp)
    ctx->pc = 0x171438u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x17143c: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x17143cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171440: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x171440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x171444: 0x0  nop
    ctx->pc = 0x171444u;
    // NOP
label_171448:
    // 0x171448: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x171448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17144c: 0x24a509e8  addiu       $a1, $a1, 0x9E8
    ctx->pc = 0x17144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2536));
    // 0x171450: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x171450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x171454: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x171454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x171458: 0x90570000  lbu         $s7, 0x0($v0)
    ctx->pc = 0x171458u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17145c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17145cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171460: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x171460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x171464: 0x0  nop
    ctx->pc = 0x171464u;
    // NOP
label_171468:
    // 0x171468: 0x2e52021  addu        $a0, $s7, $a1
    ctx->pc = 0x171468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x17146c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17146cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171470: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x171470u;
    {
        const bool branch_taken_0x171470 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x171474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171470u;
        // 0x171474: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171470) {
            ctx->pc = 0x17147Cu;
            goto label_17147c;
        }
    }
    ctx->pc = 0x171478u;
    // 0x171478: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x171478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17147c:
    // 0x17147c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171480: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171480u;
    {
        const bool branch_taken_0x171480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171480u;
        // 0x171484: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171480) {
            ctx->pc = 0x171498u;
            goto label_171498;
        }
    }
    ctx->pc = 0x171488u;
    // 0x171488: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x171488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x17148c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x171490u;
    {
        const bool branch_taken_0x171490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171490u;
        // 0x171494: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171490) {
            ctx->pc = 0x17149Cu;
            goto label_17149c;
        }
    }
    ctx->pc = 0x171498u;
label_171498:
    // 0x171498: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17149c:
    // 0x17149c: 0x8e221ae0  lw          $v0, 0x1AE0($s1)
    ctx->pc = 0x17149cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6880)));
    // 0x1714a0: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x1714a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1714a4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1714a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1714a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1714a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1714ac: 0x2423018  mult        $a2, $s2, $v0
    ctx->pc = 0x1714acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1714b0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1714b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1714b4: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x1714b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1714b8: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x1714b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1714bc: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1714c0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1714c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1714c4: 0xd31021  addu        $v0, $a2, $s3
    ctx->pc = 0x1714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1714c8: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x1714c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1714cc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1714ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1714d0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1714d4: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1714d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1714d8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1714d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1714dc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1714dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1714e0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1714e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1714e4: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1714e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1714e8: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x1714e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1714ec: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1714ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1714f0: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1714f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1714f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1714f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1714fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1714fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171500: 0xc056864  jal         func_15A190
    ctx->pc = 0x171500u;
    SET_GPR_U32(ctx, 31, 0x171508u);
    ctx->pc = 0x171504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171500u;
    // 0x171504: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A190u, 0x171500u, 0x171508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171508u;
label_171508:
    // 0x171508: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x171508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x17150c: 0xe6950004  swc1        $f21, 0x4($s4)
    ctx->pc = 0x17150cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x171510: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x171510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x171514: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x171514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x171518: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x171518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x17151c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x17151Cu;
    SET_GPR_U32(ctx, 31, 0x171524u);
    ctx->pc = 0x171520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17151Cu;
    // 0x171520: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x17151Cu, 0x171524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171524u;
label_171524:
    // 0x171524: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x171524u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x171528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17152c: 0x0  nop
    ctx->pc = 0x17152cu;
    // NOP
    // 0x171530: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x171530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x171534: 0x0  nop
    ctx->pc = 0x171534u;
    // NOP
    // 0x171538: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x171538u;
    {
        const bool branch_taken_0x171538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171538u;
        // 0x17153c: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171538) {
            ctx->pc = 0x171574u;
            goto label_171574;
        }
    }
    ctx->pc = 0x171540u;
    // 0x171540: 0x0  nop
    ctx->pc = 0x171540u;
    // NOP
    // 0x171544: 0x0  nop
    ctx->pc = 0x171544u;
    // NOP
    // 0x171548: 0x4601a083  div.s       $f2, $f20, $f1
    ctx->pc = 0x171548u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x17154c: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x17154cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x171550: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x171550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171554: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x171554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171558: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x171558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x17155c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17155cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x171560: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x171560u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x171564: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x171564u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x171568: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x171568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x17156c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x17156cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x171570: 0xe7a40064  swc1        $f4, 0x64($sp)
    ctx->pc = 0x171570u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_171574:
    // 0x171574: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x171574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x171578: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x171578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17157c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x17157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x171580: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x171584: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x171584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171588: 0xc056a1e  jal         func_15A878
    ctx->pc = 0x171588u;
    SET_GPR_U32(ctx, 31, 0x171590u);
    ctx->pc = 0x17158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171588u;
    // 0x17158c: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A878u, 0x171588u, 0x171590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171590u;
label_171590:
    // 0x171590: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x171590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171598: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x171598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17159c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x17159cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1715a0: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x1715a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1715a4: 0x46031942  mul.s       $f5, $f3, $f3
    ctx->pc = 0x1715a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1715a8: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1715a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1715ac: 0x46042182  mul.s       $f6, $f4, $f4
    ctx->pc = 0x1715acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1715b0: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1715b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1715b4: 0x460211c2  mul.s       $f7, $f2, $f2
    ctx->pc = 0x1715b4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1715b8: 0xc7ab0030  lwc1        $f11, 0x30($sp)
    ctx->pc = 0x1715b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1715bc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1715bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1715c0: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1715c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1715c4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1715c4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1715c8: 0xc7aa003c  lwc1        $f10, 0x3C($sp)
    ctx->pc = 0x1715c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1715cc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x1715ccu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x1715d0: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1715d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1715d4: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x1715d4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x1715d8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1715d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x1715dc: 0x0  nop
    ctx->pc = 0x1715dcu;
    // NOP
    // 0x1715e0: 0x0  nop
    ctx->pc = 0x1715e0u;
    // NOP
    // 0x1715e4: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1715e4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x1715e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1715e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1715ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1715ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1715f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1715f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1715f4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1715f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1715f8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1715f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1715fc: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1715fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x171600: 0x460c0a02  mul.s       $f8, $f1, $f12
    ctx->pc = 0x171600u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x171604: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x171604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x171608: 0x460b0bc2  mul.s       $f15, $f1, $f11
    ctx->pc = 0x171608u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x17160c: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x17160cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x171610: 0x460d0b82  mul.s       $f14, $f1, $f13
    ctx->pc = 0x171610u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x171614: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x171614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x171618: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x171618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17161c: 0xc6a70008  lwc1        $f7, 0x8($s5)
    ctx->pc = 0x17161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x171620: 0x460b00c2  mul.s       $f3, $f0, $f11
    ctx->pc = 0x171620u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x171624: 0xc6a6000c  lwc1        $f6, 0xC($s5)
    ctx->pc = 0x171624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x171628: 0x460c3a42  mul.s       $f9, $f7, $f12
    ctx->pc = 0x171628u;
    ctx->f[9] = FPU_MUL_S(ctx->f[7], ctx->f[12]);
    // 0x17162c: 0x460d0102  mul.s       $f4, $f0, $f13
    ctx->pc = 0x17162cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x171630: 0x460a3142  mul.s       $f5, $f6, $f10
    ctx->pc = 0x171630u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x171634: 0x460b3882  mul.s       $f2, $f7, $f11
    ctx->pc = 0x171634u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x171638: 0x46034201  sub.s       $f8, $f8, $f3
    ctx->pc = 0x171638u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[3]);
    // 0x17163c: 0x460c00c2  mul.s       $f3, $f0, $f12
    ctx->pc = 0x17163cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x171640: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x171640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x171644: 0x460a3a82  mul.s       $f10, $f7, $f10
    ctx->pc = 0x171644u;
    ctx->f[10] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x171648: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x171648u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x17164c: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x17164cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x171650: 0x460f2941  sub.s       $f5, $f5, $f15
    ctx->pc = 0x171650u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[15]);
    // 0x171654: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x171654u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x171658: 0x460c3302  mul.s       $f12, $f6, $f12
    ctx->pc = 0x171658u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x17165c: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x17165cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x171660: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x171660u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x171664: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x171664u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x171668: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x171668u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x17166c: 0x460d39c2  mul.s       $f7, $f7, $f13
    ctx->pc = 0x17166cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[13]);
    // 0x171670: 0x460d3182  mul.s       $f6, $f6, $f13
    ctx->pc = 0x171670u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x171674: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x171674u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x171678: 0x460c1080  add.s       $f2, $f2, $f12
    ctx->pc = 0x171678u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x17167c: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x17167cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x171680: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x171680u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x171684: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x171684u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x171688: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x171688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17168c: 0xe7a80038  swc1        $f8, 0x38($sp)
    ctx->pc = 0x17168cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x171690: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x171690u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x171694: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x171694u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x171698: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x171698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x17169c: 0xe7a80048  swc1        $f8, 0x48($sp)
    ctx->pc = 0x17169cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1716a0: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x1716a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1716a4: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x1716A4u;
    SET_GPR_U32(ctx, 31, 0x1716ACu);
    ctx->pc = 0x1716A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716A4u;
    // 0x1716a8: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x1716A4u, 0x1716ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716ACu;
label_1716ac:
    // 0x1716ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1716acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1716b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716b4: 0xc051eec  jal         func_147BB0
    ctx->pc = 0x1716B4u;
    SET_GPR_U32(ctx, 31, 0x1716BCu);
    ctx->pc = 0x1716B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716B4u;
    // 0x1716b8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BB0u, 0x1716B4u, 0x1716BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716BCu;
label_1716bc:
    // 0x1716bc: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x1716bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x1716c0: 0xc054074  jal         func_1501D0
    ctx->pc = 0x1716C0u;
    SET_GPR_U32(ctx, 31, 0x1716C8u);
    ctx->pc = 0x1716C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1716C0u;
    // 0x1716c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x1716C0u, 0x1716C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1716C8u;
label_1716c8:
    // 0x1716c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1716c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716cc: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1716ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1716d0: 0x5440ff65  bnel        $v0, $zero, . + 4 + (-0x9B << 2)
    ctx->pc = 0x1716D0u;
    {
        const bool branch_taken_0x1716d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1716d0) {
            ctx->pc = 0x1716D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1716D0u;
            // 0x1716d4: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171468;
        }
    }
    ctx->pc = 0x1716D8u;
    // 0x1716d8: 0x8fb30070  lw          $s3, 0x70($sp)
    ctx->pc = 0x1716d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1716dc: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1716dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1716e0: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1716E0u;
    {
        const bool branch_taken_0x1716e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1716E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716E0u;
        // 0x1716e4: 0x3c050042  lui         $a1, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716e0) {
            ctx->pc = 0x171448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171448;
        }
    }
    ctx->pc = 0x1716E8u;
    // 0x1716e8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1716e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1716ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1716ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1716f0: 0x245309e8  addiu       $s3, $v0, 0x9E8
    ctx->pc = 0x1716f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2536));
    // 0x1716f4: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1716f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1716f8:
    // 0x1716f8: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1716f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1716fc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1716fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171700: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x171700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x171704: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x171704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x171708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x171708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17170c: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x17170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x171710: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x171710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171714: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x171714u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x171718: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x171718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17171c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17171Cu;
    {
        const bool branch_taken_0x17171c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17171Cu;
        // 0x171720: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17171c) {
            ctx->pc = 0x171728u;
            goto label_171728;
        }
    }
    ctx->pc = 0x171724u;
    // 0x171724: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x171724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171728:
    // 0x171728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x171728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17172c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17172Cu;
    {
        const bool branch_taken_0x17172c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17172c) {
            ctx->pc = 0x171730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17172Cu;
            // 0x171730: 0x8e0500d0  lw          $a1, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171744u;
            goto label_171744;
        }
    }
    ctx->pc = 0x171734u;
    // 0x171734: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x171734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x171738: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x171738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x17173c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17173cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171740: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x171740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_171744:
    // 0x171744: 0xc051db4  jal         func_1476D0
    ctx->pc = 0x171744u;
    SET_GPR_U32(ctx, 31, 0x17174Cu);
    ctx->pc = 0x171748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171744u;
    // 0x171748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1476D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1476D0u, 0x171744u, 0x17174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17174Cu;
label_17174c:
    // 0x17174c: 0x8e250250  lw          $a1, 0x250($s1)
    ctx->pc = 0x17174cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x171750: 0xc054074  jal         func_1501D0
    ctx->pc = 0x171750u;
    SET_GPR_U32(ctx, 31, 0x171758u);
    ctx->pc = 0x171754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171750u;
    // 0x171754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1501D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1501D0u, 0x171750u, 0x171758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171758u;
label_171758:
    // 0x171758: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x171758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x17175c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17175Cu;
    {
        const bool branch_taken_0x17175c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17175c) {
            ctx->pc = 0x171760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17175Cu;
            // 0x171760: 0x2531021  addu        $v0, $s2, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1716F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1716f8;
        }
    }
    ctx->pc = 0x171764u;
    // 0x171764: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x171764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x171768: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x171768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17176c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x17176cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x171770: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x171770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x171774: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x171774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x171778: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x171778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17177c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x17177cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x171780: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x171780u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x171784: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x171784u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x171788: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x171788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17178c: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x17178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x171790: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x171790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171794: 0x3e00008  jr          $ra
    ctx->pc = 0x171794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171794u;
        // 0x171798: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17179Cu;
    // 0x17179c: 0x0  nop
    ctx->pc = 0x17179cu;
    // NOP
    ctx->pc = 0x1717a0u;
}
