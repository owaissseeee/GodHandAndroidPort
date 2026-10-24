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

// Function: func_00217980
// Address: 0x217980 - 0x218c48
void func_00217980_0x217980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00217980_0x217980");
#endif

    switch (ctx->pc) {
        case 0x2179d0u: goto label_2179d0;
        case 0x217a88u: goto label_217a88;
        case 0x217a90u: goto label_217a90;
        case 0x217a9cu: goto label_217a9c;
        case 0x217b18u: goto label_217b18;
        case 0x217b78u: goto label_217b78;
        case 0x217ba8u: goto label_217ba8;
        case 0x217c00u: goto label_217c00;
        case 0x217c34u: goto label_217c34;
        case 0x217c8cu: goto label_217c8c;
        case 0x217cc4u: goto label_217cc4;
        case 0x217d40u: goto label_217d40;
        case 0x217d98u: goto label_217d98;
        case 0x217dacu: goto label_217dac;
        case 0x217de8u: goto label_217de8;
        case 0x217e0cu: goto label_217e0c;
        case 0x217e58u: goto label_217e58;
        case 0x217e78u: goto label_217e78;
        case 0x217eb4u: goto label_217eb4;
        case 0x217f14u: goto label_217f14;
        case 0x217f50u: goto label_217f50;
        case 0x217f74u: goto label_217f74;
        case 0x217f84u: goto label_217f84;
        case 0x218090u: goto label_218090;
        case 0x218098u: goto label_218098;
        case 0x2180e0u: goto label_2180e0;
        case 0x2180f8u: goto label_2180f8;
        case 0x218180u: goto label_218180;
        case 0x218224u: goto label_218224;
        case 0x218234u: goto label_218234;
        case 0x218260u: goto label_218260;
        case 0x218274u: goto label_218274;
        case 0x218294u: goto label_218294;
        case 0x21829cu: goto label_21829c;
        case 0x2182d0u: goto label_2182d0;
        case 0x2182fcu: goto label_2182fc;
        case 0x218350u: goto label_218350;
        case 0x218378u: goto label_218378;
        case 0x2183dcu: goto label_2183dc;
        case 0x2184f8u: goto label_2184f8;
        case 0x218510u: goto label_218510;
        case 0x218518u: goto label_218518;
        case 0x218554u: goto label_218554;
        case 0x218598u: goto label_218598;
        case 0x2185c8u: goto label_2185c8;
        case 0x2185f8u: goto label_2185f8;
        case 0x218610u: goto label_218610;
        case 0x218684u: goto label_218684;
        case 0x2186c8u: goto label_2186c8;
        case 0x2186e8u: goto label_2186e8;
        case 0x21870cu: goto label_21870c;
        case 0x218768u: goto label_218768;
        case 0x218778u: goto label_218778;
        case 0x218788u: goto label_218788;
        case 0x218798u: goto label_218798;
        case 0x2187a0u: goto label_2187a0;
        case 0x2187bcu: goto label_2187bc;
        case 0x21881cu: goto label_21881c;
        case 0x218860u: goto label_218860;
        case 0x21886cu: goto label_21886c;
        case 0x21888cu: goto label_21888c;
        case 0x21889cu: goto label_21889c;
        case 0x2188b0u: goto label_2188b0;
        case 0x2188e0u: goto label_2188e0;
        case 0x2188e8u: goto label_2188e8;
        case 0x21893cu: goto label_21893c;
        case 0x218974u: goto label_218974;
        case 0x218a0cu: goto label_218a0c;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a50u: goto label_218a50;
        case 0x218a60u: goto label_218a60;
        case 0x218a6cu: goto label_218a6c;
        case 0x218a78u: goto label_218a78;
        case 0x218a80u: goto label_218a80;
        case 0x218a90u: goto label_218a90;
        case 0x218b00u: goto label_218b00;
        case 0x218b74u: goto label_218b74;
        case 0x218be0u: goto label_218be0;
        case 0x218c08u: goto label_218c08;
        default: break;
    }

    ctx->pc = 0x217980u;

    // 0x217980: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x217980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x217984: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x217984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x217988: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x217988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21798c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x21798cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x217990: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x217990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x217994: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x217994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x217998: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x217998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x21799c: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x21799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x2179a0: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x2179a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x2179a4: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x2179a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x2179a8: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x2179a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x2179ac: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2179acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2179b0: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x2179b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2179b4: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x2179b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2179b8: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2179b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2179bc: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2179bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2179c0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2179c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2179c4: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2179c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2179c8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2179C8u;
    SET_GPR_U32(ctx, 31, 0x2179D0u);
    ctx->pc = 0x2179CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2179C8u;
    // 0x2179cc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2179C8u, 0x2179D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2179D0u;
label_2179d0:
    // 0x2179d0: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2179d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2179d4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x2179d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2179d8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2179d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2179dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2179dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2179e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2179e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2179e4: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x2179e4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2179e8: 0x4617a834  c.lt.s      $f21, $f23
    ctx->pc = 0x2179e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2179ec: 0x0  nop
    ctx->pc = 0x2179ecu;
    // NOP
    // 0x2179f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2179F0u;
    {
        const bool branch_taken_0x2179f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2179f0) {
            ctx->pc = 0x2179F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2179F0u;
            // 0x2179f4: 0x4600ad47  neg.s       $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_NEG_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2179F8u;
            goto label_2179f8;
        }
    }
    ctx->pc = 0x2179F8u;
label_2179f8:
    // 0x2179f8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2179f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2179fc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2179fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x217a00: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x217a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x217a04: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x217a04u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x217a08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x217a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x217a0c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x217a0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x217a10: 0x1060047d  beqz        $v1, . + 4 + (0x47D << 2)
    ctx->pc = 0x217A10u;
    {
        const bool branch_taken_0x217a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A10u;
        // 0x217a14: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a10) {
            ctx->pc = 0x218C08u;
            goto label_218c08;
        }
    }
    ctx->pc = 0x217A18u;
    // 0x217a18: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x217a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x217a1c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x217a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x217a20: 0x24426600  addiu       $v0, $v0, 0x6600
    ctx->pc = 0x217a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26112));
    // 0x217a24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217a28: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217a2c: 0x800008  jr          $a0
    ctx->pc = 0x217A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217A34u: goto label_217a34;
            case 0x21826Cu: goto label_21826c;
            case 0x2182B0u: goto label_2182b0;
            case 0x2184A8u: goto label_2184a8;
            case 0x218548u: goto label_218548;
            case 0x218690u: goto label_218690;
            case 0x2188A4u: goto label_2188a4;
            case 0x2189D4u: goto label_2189d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217A2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x217A34u;
label_217a34:
    // 0x217a34: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x217a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x217a38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x217a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x217a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x217a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x217a40: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x217A40u;
    {
        const bool branch_taken_0x217a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A40u;
        // 0x217a44: 0x262216a0  addiu       $v0, $s1, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a40) {
            ctx->pc = 0x217FD8u;
            goto label_217fd8;
        }
    }
    ctx->pc = 0x217A48u;
    // 0x217a48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217a4c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x217a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x217a50: 0x0  nop
    ctx->pc = 0x217a50u;
    // NOP
    // 0x217a54: 0x4616a834  c.lt.s      $f21, $f22
    ctx->pc = 0x217a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217a58: 0x0  nop
    ctx->pc = 0x217a58u;
    // NOP
    // 0x217a5c: 0x4500015e  bc1f        . + 4 + (0x15E << 2)
    ctx->pc = 0x217A5Cu;
    {
        const bool branch_taken_0x217a5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A5Cu;
        // 0x217a60: 0x26251690  addiu       $a1, $s1, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a5c) {
            ctx->pc = 0x217FD8u;
            goto label_217fd8;
        }
    }
    ctx->pc = 0x217A64u;
    // 0x217a64: 0xc6340104  lwc1        $f20, 0x104($s1)
    ctx->pc = 0x217a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217a68: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x217a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x217a6c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x217a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x217a70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x217a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x217a74: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x217a74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a78: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x217a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217a7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x217a7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x217a80: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x217A80u;
    SET_GPR_U32(ctx, 31, 0x217A88u);
    ctx->pc = 0x217A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A80u;
    // 0x217a84: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x217A80u, 0x217A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A88u;
label_217a88:
    // 0x217a88: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x217A88u;
    SET_GPR_U32(ctx, 31, 0x217A90u);
    ctx->pc = 0x217A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A88u;
    // 0x217a8c: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x217A88u, 0x217A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A90u;
label_217a90:
    // 0x217a90: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x217a90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x217a94: 0xc051e62  jal         func_147988
    ctx->pc = 0x217A94u;
    SET_GPR_U32(ctx, 31, 0x217A9Cu);
    ctx->pc = 0x217A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A94u;
    // 0x217a98: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x217A94u, 0x217A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A9Cu;
label_217a9c:
    // 0x217a9c: 0x923202f7  lbu         $s2, 0x2F7($s1)
    ctx->pc = 0x217a9cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x217aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217aa4: 0x164200ba  bne         $s2, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x217AA4u;
    {
        const bool branch_taken_0x217aa4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x217aa4) {
            ctx->pc = 0x217D90u;
            goto label_217d90;
        }
    }
    ctx->pc = 0x217AACu;
    // 0x217aac: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x217aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217ab0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x217ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217ab4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x217ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217ab8: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x217ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x217abc: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217ABCu;
    {
        const bool branch_taken_0x217abc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x217AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217ABCu;
        // 0x217ac0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217abc) {
            ctx->pc = 0x217ADCu;
            goto label_217adc;
        }
    }
    ctx->pc = 0x217AC4u;
    // 0x217ac4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x217ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217ac8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x217ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x217acc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x217accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217ad0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x217ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x217ad4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x217ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217ad8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x217ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_217adc:
    // 0x217adc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x217adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217ae0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x217ae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x217ae4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x217ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x217ae8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x217ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x217aec: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x217aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x217af0: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x217af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
    // 0x217af4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x217af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x217af8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217afc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x217afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x217b00: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x217b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x217b04: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x217b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x217b08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x217b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b0c: 0xe7b600a8  swc1        $f22, 0xA8($sp)
    ctx->pc = 0x217b0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x217b10: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x217B10u;
    SET_GPR_U32(ctx, 31, 0x217B18u);
    ctx->pc = 0x217B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B10u;
    // 0x217b14: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x217B10u, 0x217B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B18u;
label_217b18:
    // 0x217b18: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x217b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217b1c: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x217b1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x217b20: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x217b20u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217b24: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x217b24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217b28: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x217b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217b2c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x217b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217b30: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x217b30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b34: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x217b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x217b38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217b3c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x217b3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x217b40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x217b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x217b44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x217b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x217b48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b4c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x217b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x217b50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x217b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b54: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x217b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x217b58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b5c: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x217b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x217b60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b64: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x217b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x217b68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x217b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x217b6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b70: 0xc04c784  jal         func_131E10
    ctx->pc = 0x217B70u;
    SET_GPR_U32(ctx, 31, 0x217B78u);
    ctx->pc = 0x217B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B70u;
    // 0x217b74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x217B70u, 0x217B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B78u;
label_217b78:
    // 0x217b78: 0x14520047  bne         $v0, $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x217B78u;
    {
        const bool branch_taken_0x217b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x217B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217B78u;
        // 0x217b7c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b78) {
            ctx->pc = 0x217C98u;
            goto label_217c98;
        }
    }
    ctx->pc = 0x217B80u;
    // 0x217b80: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x217b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x217b84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x217b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x217b88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x217b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b8c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x217b8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x217b90: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x217b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b94: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x217b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x217b98: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x217b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b9c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x217b9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x217ba0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x217BA0u;
    SET_GPR_U32(ctx, 31, 0x217BA8u);
    ctx->pc = 0x217BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BA0u;
    // 0x217ba4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x217BA0u, 0x217BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217BA8u;
label_217ba8:
    // 0x217ba8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x217ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217bac: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x217bacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x217bb0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x217bb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217bb4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x217bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217bb8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x217bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217bbc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x217bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217bc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bc4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217bc8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x217bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bcc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x217bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x217bd0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x217bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x217bd4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x217bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x217bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bdc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x217bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x217be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217be4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x217be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x217be8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x217be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x217bec: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x217becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x217bf0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x217bf0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bf4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x217bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217bf8: 0xc04c784  jal         func_131E10
    ctx->pc = 0x217BF8u;
    SET_GPR_U32(ctx, 31, 0x217C00u);
    ctx->pc = 0x217BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217BF8u;
    // 0x217bfc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x217BF8u, 0x217C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C00u;
label_217c00:
    // 0x217c00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x217c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c04: 0x16540025  bne         $s2, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x217C04u;
    {
        const bool branch_taken_0x217c04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x217C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217C04u;
        // 0x217c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c04) {
            ctx->pc = 0x217C9Cu;
            goto label_217c9c;
        }
    }
    ctx->pc = 0x217C0Cu;
    // 0x217c0c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x217c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x217c10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217c14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x217c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c18: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x217c18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x217c1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x217c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x217c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x217c24: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x217c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c28: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x217c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x217c2c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x217C2Cu;
    SET_GPR_U32(ctx, 31, 0x217C34u);
    ctx->pc = 0x217C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C2Cu;
    // 0x217c30: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x217C2Cu, 0x217C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C34u;
label_217c34:
    // 0x217c34: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x217c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217c38: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x217c38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x217c3c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x217c3cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217c40: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x217c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217c44: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x217c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217c48: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x217c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x217c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c50: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x217c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x217c54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x217c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c58: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x217c58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x217c5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217c60: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x217c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x217c64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c68: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x217c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x217c6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c70: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x217c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x217c74: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x217c74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x217c78: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x217c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x217c7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x217c7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x217c80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c84: 0xc04c784  jal         func_131E10
    ctx->pc = 0x217C84u;
    SET_GPR_U32(ctx, 31, 0x217C8Cu);
    ctx->pc = 0x217C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217C84u;
    // 0x217c88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x217C84u, 0x217C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C8Cu;
label_217c8c:
    // 0x217c8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x217c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x217c90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x217c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217c94: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x217c94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_217c98:
    // 0x217c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217c9c:
    // 0x217c9c: 0x12820010  beq         $s4, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x217C9Cu;
    {
        const bool branch_taken_0x217c9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x217c9c) {
            ctx->pc = 0x217CE0u;
            goto label_217ce0;
        }
    }
    ctx->pc = 0x217CA4u;
    // 0x217ca4: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x217CA4u;
    {
        const bool branch_taken_0x217ca4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CA4u;
        // 0x217ca8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ca4) {
            ctx->pc = 0x217CBCu;
            goto label_217cbc;
        }
    }
    ctx->pc = 0x217CACu;
    // 0x217cac: 0x12820010  beq         $s4, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x217CACu;
    {
        const bool branch_taken_0x217cac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x217CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CACu;
        // 0x217cb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cac) {
            ctx->pc = 0x217CF0u;
            goto label_217cf0;
        }
    }
    ctx->pc = 0x217CB4u;
    // 0x217cb4: 0x52820018  beql        $s4, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x217CB4u;
    {
        const bool branch_taken_0x217cb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x217cb4) {
            ctx->pc = 0x217CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217CB4u;
            // 0x217cb8: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217D18u;
            goto label_217d18;
        }
    }
    ctx->pc = 0x217CBCu;
label_217cbc:
    // 0x217cbc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x217CBCu;
    SET_GPR_U32(ctx, 31, 0x217CC4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x217CBCu, 0x217CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CC4u;
label_217cc4:
    // 0x217cc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x217cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x217cc8: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x217cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
    // 0x217ccc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217cccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217cd0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x217cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x217cd4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x217cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x217cd8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x217CD8u;
    {
        const bool branch_taken_0x217cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CD8u;
        // 0x217cdc: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217cd8) {
            ctx->pc = 0x217D30u;
            goto label_217d30;
        }
    }
    ctx->pc = 0x217CE0u;
label_217ce0:
    // 0x217ce0: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x217ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x217ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217ce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x217CE8u;
    {
        const bool branch_taken_0x217ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217CE8u;
        // 0x217cec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ce8) {
            ctx->pc = 0x217CFCu;
            goto label_217cfc;
        }
    }
    ctx->pc = 0x217CF0u;
label_217cf0:
    // 0x217cf0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x217cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x217cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217cf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x217cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217cfc:
    // 0x217cfc: 0x3c01c0e0  lui         $at, 0xC0E0
    ctx->pc = 0x217cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49376 << 16));
    // 0x217d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217d04: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x217d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x217d08: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x217d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x217d0c: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x217d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x217d10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x217D10u;
    {
        const bool branch_taken_0x217d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D10u;
        // 0x217d14: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d10) {
            ctx->pc = 0x217D30u;
            goto label_217d30;
        }
    }
    ctx->pc = 0x217D18u;
label_217d18:
    // 0x217d18: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x217d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x217d1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217d20: 0x0  nop
    ctx->pc = 0x217d20u;
    // NOP
    // 0x217d24: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x217d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x217d28: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x217d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x217d2c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x217d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_217d30:
    // 0x217d30: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x217d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217d34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x217d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217d38: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x217D38u;
    SET_GPR_U32(ctx, 31, 0x217D40u);
    ctx->pc = 0x217D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217D38u;
    // 0x217d3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x217D38u, 0x217D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D40u;
label_217d40:
    // 0x217d40: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217d44: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x217d44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x217d48: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x217d48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217d4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x217d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217d50: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x217d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217d54: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x217d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217d58: 0x263005d0  addiu       $s0, $s1, 0x5D0
    ctx->pc = 0x217d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x217d5c: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x217D5Cu;
    {
        const bool branch_taken_0x217d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x217D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D5Cu;
        // 0x217d60: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d5c) {
            ctx->pc = 0x217D78u;
            goto label_217d78;
        }
    }
    ctx->pc = 0x217D64u;
    // 0x217d64: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x217d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217d68: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x217d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x217d6c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x217d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217d70: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x217d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217d74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x217d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_217d78:
    // 0x217d78: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x217d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x217d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217d80: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x217d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x217d84: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x217d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x217d88: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x217D88u;
    {
        const bool branch_taken_0x217d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217D88u;
        // 0x217d8c: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d88) {
            ctx->pc = 0x217FB0u;
            goto label_217fb0;
        }
    }
    ctx->pc = 0x217D90u;
label_217d90:
    // 0x217d90: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x217D90u;
    SET_GPR_U32(ctx, 31, 0x217D98u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x217D90u, 0x217D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217D98u;
label_217d98:
    // 0x217d98: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x217d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217d9c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x217d9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x217da0: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x217da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217da4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x217DA4u;
    SET_GPR_U32(ctx, 31, 0x217DACu);
    ctx->pc = 0x217DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217DA4u;
    // 0x217da8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x217DA4u, 0x217DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DACu;
label_217dac:
    // 0x217dac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x217dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217db0: 0x0  nop
    ctx->pc = 0x217db0u;
    // NOP
    // 0x217db4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x217db4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217db8: 0x0  nop
    ctx->pc = 0x217db8u;
    // NOP
    // 0x217dbc: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x217DBCu;
    {
        const bool branch_taken_0x217dbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DBCu;
        // 0x217dc0: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dbc) {
            ctx->pc = 0x217E34u;
            goto label_217e34;
        }
    }
    ctx->pc = 0x217DC4u;
    // 0x217dc4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x217dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x217dc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217dcc: 0x0  nop
    ctx->pc = 0x217dccu;
    // NOP
    // 0x217dd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x217dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217dd4: 0x0  nop
    ctx->pc = 0x217dd4u;
    // NOP
    // 0x217dd8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x217DD8u;
    {
        const bool branch_taken_0x217dd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217dd8) {
            ctx->pc = 0x217E04u;
            goto label_217e04;
        }
    }
    ctx->pc = 0x217DE0u;
    // 0x217de0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x217DE0u;
    SET_GPR_U32(ctx, 31, 0x217DE8u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x217DE0u, 0x217DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217DE8u;
label_217de8:
    // 0x217de8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x217de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x217dec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217df0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x217df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x217df4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x217df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x217df8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x217df8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x217dfc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217DFCu;
    {
        const bool branch_taken_0x217dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217DFCu;
        // 0x217e00: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dfc) {
            ctx->pc = 0x217E20u;
            goto label_217e20;
        }
    }
    ctx->pc = 0x217E04u;
label_217e04:
    // 0x217e04: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x217E04u;
    SET_GPR_U32(ctx, 31, 0x217E0Cu);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x217E04u, 0x217E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E0Cu;
label_217e0c:
    // 0x217e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x217e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x217e10: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x217e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x217e14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217e18: 0x0  nop
    ctx->pc = 0x217e18u;
    // NOP
    // 0x217e1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_217e20:
    // 0x217e20: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x217e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x217e24: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x217e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x217e28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217e2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x217E2Cu;
    {
        const bool branch_taken_0x217e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E2Cu;
        // 0x217e30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e2c) {
            ctx->pc = 0x217E98u;
            goto label_217e98;
        }
    }
    ctx->pc = 0x217E34u;
label_217e34:
    // 0x217e34: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x217e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x217e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217e3c: 0x0  nop
    ctx->pc = 0x217e3cu;
    // NOP
    // 0x217e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x217e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217e44: 0x0  nop
    ctx->pc = 0x217e44u;
    // NOP
    // 0x217e48: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x217E48u;
    {
        const bool branch_taken_0x217e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217e48) {
            ctx->pc = 0x217E70u;
            goto label_217e70;
        }
    }
    ctx->pc = 0x217E50u;
    // 0x217e50: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x217E50u;
    SET_GPR_U32(ctx, 31, 0x217E58u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x217E50u, 0x217E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E58u;
label_217e58:
    // 0x217e58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x217e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x217e5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217e60: 0x0  nop
    ctx->pc = 0x217e60u;
    // NOP
    // 0x217e64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x217e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x217e68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x217E68u;
    {
        const bool branch_taken_0x217e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217E68u;
        // 0x217e6c: 0x46160000  add.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e68) {
            ctx->pc = 0x217E88u;
            goto label_217e88;
        }
    }
    ctx->pc = 0x217E70u;
label_217e70:
    // 0x217e70: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x217E70u;
    SET_GPR_U32(ctx, 31, 0x217E78u);
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x217E70u, 0x217E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217E78u;
label_217e78:
    // 0x217e78: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x217e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x217e7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217e80: 0x0  nop
    ctx->pc = 0x217e80u;
    // NOP
    // 0x217e84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_217e88:
    // 0x217e88: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x217e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x217e8c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x217e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217e94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x217e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_217e98:
    // 0x217e98: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x217e98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x217e9c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x217e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x217ea0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x217ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x217ea4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x217ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217ea8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x217ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x217eac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x217EACu;
    SET_GPR_U32(ctx, 31, 0x217EB4u);
    ctx->pc = 0x217EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217EACu;
    // 0x217eb0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x217EACu, 0x217EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217EB4u;
label_217eb4:
    // 0x217eb4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x217eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x217eb8: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x217eb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x217ebc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x217ebcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217ec0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x217ec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217ec4: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x217ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217ec8: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x217ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217ecc: 0x263005d0  addiu       $s0, $s1, 0x5D0
    ctx->pc = 0x217eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x217ed0: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x217ED0u;
    {
        const bool branch_taken_0x217ed0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x217ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217ED0u;
        // 0x217ed4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ed0) {
            ctx->pc = 0x217EECu;
            goto label_217eec;
        }
    }
    ctx->pc = 0x217ED8u;
    // 0x217ed8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x217ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217edc: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x217edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x217ee0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x217ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217ee4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x217ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217ee8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x217ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_217eec:
    // 0x217eec: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x217eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217ef0: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x217ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x217ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217ef8: 0x0  nop
    ctx->pc = 0x217ef8u;
    // NOP
    // 0x217efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x217efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217f00: 0x0  nop
    ctx->pc = 0x217f00u;
    // NOP
    // 0x217f04: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x217F04u;
    {
        const bool branch_taken_0x217f04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x217F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F04u;
        // 0x217f08: 0x262216a0  addiu       $v0, $s1, 0x16A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f04) {
            ctx->pc = 0x217F28u;
            goto label_217f28;
        }
    }
    ctx->pc = 0x217F0Cu;
    // 0x217f0c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x217F0Cu;
    SET_GPR_U32(ctx, 31, 0x217F14u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x217F0Cu, 0x217F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F14u;
label_217f14:
    // 0x217f14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x217f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x217f18: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x217f18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x217f1c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x217F1Cu;
    {
        const bool branch_taken_0x217f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F1Cu;
        // 0x217f20: 0x27b500a0  addiu       $s5, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f1c) {
            ctx->pc = 0x217FB0u;
            goto label_217fb0;
        }
    }
    ctx->pc = 0x217F24u;
    // 0x217f24: 0x262216a0  addiu       $v0, $s1, 0x16A0
    ctx->pc = 0x217f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
label_217f28:
    // 0x217f28: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217F28u;
    {
        const bool branch_taken_0x217f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x217f28) {
            ctx->pc = 0x217F48u;
            goto label_217f48;
        }
    }
    ctx->pc = 0x217F30u;
    // 0x217f30: 0xc62016a0  lwc1        $f0, 0x16A0($s1)
    ctx->pc = 0x217f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f34: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x217f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x217f38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x217f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217f3c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x217f3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217f40: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x217f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f44: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x217f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_217f48:
    // 0x217f48: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x217F48u;
    SET_GPR_U32(ctx, 31, 0x217F50u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x217F48u, 0x217F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F50u;
label_217f50:
    // 0x217f50: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x217f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x217f54: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x217F54u;
    {
        const bool branch_taken_0x217f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217f54) {
            ctx->pc = 0x217F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217F54u;
            // 0x217f58: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217FA8u;
            goto label_217fa8;
        }
    }
    ctx->pc = 0x217F5Cu;
    // 0x217f5c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x217f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x217f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217f64: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x217f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x217f68: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x217f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x217f6c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x217F6Cu;
    SET_GPR_U32(ctx, 31, 0x217F74u);
    ctx->pc = 0x217F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F6Cu;
    // 0x217f70: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x217F6Cu, 0x217F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F74u;
label_217f74:
    // 0x217f74: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x217f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x217f78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f7c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x217F7Cu;
    SET_GPR_U32(ctx, 31, 0x217F84u);
    ctx->pc = 0x217F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217F7Cu;
    // 0x217f80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x217F7Cu, 0x217F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217F84u;
label_217f84:
    // 0x217f84: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x217F84u;
    {
        const bool branch_taken_0x217f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x217F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217F84u;
        // 0x217f88: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f84) {
            ctx->pc = 0x217FA0u;
            goto label_217fa0;
        }
    }
    ctx->pc = 0x217F8Cu;
    // 0x217f8c: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x217f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217f90: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x217f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x217f94: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x217f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217f98: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x217f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f9c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x217f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_217fa0:
    // 0x217fa0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x217fa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217fa4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x217fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_217fa8:
    // 0x217fa8: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x217fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x217fac: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x217facu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_217fb0:
    // 0x217fb0: 0x262205e0  addiu       $v0, $s1, 0x5E0
    ctx->pc = 0x217fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1504));
    // 0x217fb4: 0x5056001b  beql        $v0, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x217FB4u;
    {
        const bool branch_taken_0x217fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x217fb4) {
            ctx->pc = 0x217FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217FB4u;
            // 0x217fb8: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218024u;
            goto label_218024;
        }
    }
    ctx->pc = 0x217FBCu;
    // 0x217fbc: 0xc6201690  lwc1        $f0, 0x1690($s1)
    ctx->pc = 0x217fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fc0: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x217fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x217fc4: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x217fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217fc8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x217fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x217fcc: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x217fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fd0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x217FD0u;
    {
        const bool branch_taken_0x217fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FD0u;
        // 0x217fd4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fd0) {
            ctx->pc = 0x218020u;
            goto label_218020;
        }
    }
    ctx->pc = 0x217FD8u;
label_217fd8:
    // 0x217fd8: 0x263005d0  addiu       $s0, $s1, 0x5D0
    ctx->pc = 0x217fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x217fdc: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217FDCu;
    {
        const bool branch_taken_0x217fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x217FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217FDCu;
        // 0x217fe0: 0x262305e0  addiu       $v1, $s1, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217fdc) {
            ctx->pc = 0x217FFCu;
            goto label_217ffc;
        }
    }
    ctx->pc = 0x217FE4u;
    // 0x217fe4: 0xc62016a0  lwc1        $f0, 0x16A0($s1)
    ctx->pc = 0x217fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217fe8: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x217fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x217fec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x217fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217ff0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x217ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x217ff4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x217ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217ff8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x217ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_217ffc:
    // 0x217ffc: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x217ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x218000: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x218000u;
    {
        const bool branch_taken_0x218000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218000u;
        // 0x218004: 0x27b500a0  addiu       $s5, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218000) {
            ctx->pc = 0x218020u;
            goto label_218020;
        }
    }
    ctx->pc = 0x218008u;
    // 0x218008: 0xc62016a0  lwc1        $f0, 0x16A0($s1)
    ctx->pc = 0x218008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21800c: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x21800cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x218010: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x218010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218014: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x218014u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x218018: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x218018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21801c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21801cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_218020:
    // 0x218020: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x218020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_218024:
    // 0x218024: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x218024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x218028: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x218028u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21802c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x21802cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218030: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x218030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218034: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x218034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218038: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x218038u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21803c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x21803cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218040: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x218040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x218044: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x218044u;
    {
        const bool branch_taken_0x218044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x218048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218044u;
        // 0x218048: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218044) {
            ctx->pc = 0x218060u;
            goto label_218060;
        }
    }
    ctx->pc = 0x21804Cu;
    // 0x21804c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x21804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218050: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x218050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x218054: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x218054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x218058: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x218058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21805c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x21805cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_218060:
    // 0x218060: 0x8e230250  lw          $v1, 0x250($s1)
    ctx->pc = 0x218060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x218064: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x218064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x218068: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x218068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x21806c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21806cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218070: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218074: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x218074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218078: 0xc62c05c0  lwc1        $f12, 0x5C0($s1)
    ctx->pc = 0x218078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21807c: 0xc62d05c8  lwc1        $f13, 0x5C8($s1)
    ctx->pc = 0x21807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x218080: 0xa63e0568  sh          $fp, 0x568($s1)
    ctx->pc = 0x218080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 30));
    // 0x218084: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x218084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x218088: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x218088u;
    SET_GPR_U32(ctx, 31, 0x218090u);
    ctx->pc = 0x21808Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218088u;
    // 0x21808c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x218088u, 0x218090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218090u;
label_218090:
    // 0x218090: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x218090u;
    SET_GPR_U32(ctx, 31, 0x218098u);
    ctx->pc = 0x218094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218090u;
    // 0x218094: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x218090u, 0x218098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218098u;
label_218098:
    // 0x218098: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x218098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21809c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x21809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2180a0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2180a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2180a4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2180a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2180a8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2180a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2180ac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2180acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2180b0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2180b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2180b4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2180b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2180b8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2180b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2180bc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2180bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2180c0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2180c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2180c4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2180c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2180c8: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x2180c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x2180cc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2180ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2180d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2180d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2180d4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2180d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2180d8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2180D8u;
    SET_GPR_U32(ctx, 31, 0x2180E0u);
    ctx->pc = 0x2180DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180D8u;
    // 0x2180dc: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2180D8u, 0x2180E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E0u;
label_2180e0:
    // 0x2180e0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2180e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2180e4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2180e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2180e8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2180e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2180ec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2180ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2180f0: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x2180F0u;
    SET_GPR_U32(ctx, 31, 0x2180F8u);
    ctx->pc = 0x2180F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180F0u;
    // 0x2180f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x2180F0u, 0x2180F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180F8u;
label_2180f8:
    // 0x2180f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2180f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2180fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2180fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218100: 0x0  nop
    ctx->pc = 0x218100u;
    // NOP
    // 0x218104: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x218104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218108: 0x0  nop
    ctx->pc = 0x218108u;
    // NOP
    // 0x21810c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21810Cu;
    {
        const bool branch_taken_0x21810c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21810Cu;
        // 0x218110: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21810c) {
            ctx->pc = 0x218118u;
            goto label_218118;
        }
    }
    ctx->pc = 0x218114u;
    // 0x218114: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x218114u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_218118:
    // 0x218118: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x218118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x21811c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x21811cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x218120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218124: 0x0  nop
    ctx->pc = 0x218124u;
    // NOP
    // 0x218128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x218128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21812c: 0x0  nop
    ctx->pc = 0x21812cu;
    // NOP
    // 0x218130: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x218130u;
    {
        const bool branch_taken_0x218130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218130) {
            ctx->pc = 0x218140u;
            goto label_218140;
        }
    }
    ctx->pc = 0x218138u;
    // 0x218138: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x218138u;
    {
        const bool branch_taken_0x218138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218138u;
        // 0x21813c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218138) {
            ctx->pc = 0x218178u;
            goto label_218178;
        }
    }
    ctx->pc = 0x218140u;
label_218140:
    // 0x218140: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x218144: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x218144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x218148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21814c: 0x0  nop
    ctx->pc = 0x21814cu;
    // NOP
    // 0x218150: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x218150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218154: 0x0  nop
    ctx->pc = 0x218154u;
    // NOP
    // 0x218158: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x218158u;
    {
        const bool branch_taken_0x218158 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218158u;
        // 0x21815c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218158) {
            ctx->pc = 0x218174u;
            goto label_218174;
        }
    }
    ctx->pc = 0x218160u;
    // 0x218160: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x218160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218164: 0x0  nop
    ctx->pc = 0x218164u;
    // NOP
    // 0x218168: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x218168u;
    {
        const bool branch_taken_0x218168 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218168u;
        // 0x21816c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218168) {
            ctx->pc = 0x218174u;
            goto label_218174;
        }
    }
    ctx->pc = 0x218170u;
    // 0x218170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x218170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_218174:
    // 0x218174: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x218174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_218178:
    // 0x218178: 0xc09d91a  jal         func_276468
    ctx->pc = 0x218178u;
    SET_GPR_U32(ctx, 31, 0x218180u);
    ctx->pc = 0x21817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218178u;
    // 0x21817c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x218178u, 0x218180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218180u;
label_218180:
    // 0x218180: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x218180u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x218184: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x218184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x218188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21818c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21818Cu;
    {
        const bool branch_taken_0x21818c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21818Cu;
        // 0x218190: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21818c) {
            ctx->pc = 0x2181C0u;
            goto label_2181c0;
        }
    }
    ctx->pc = 0x218194u;
    // 0x218194: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x218194u;
    {
        const bool branch_taken_0x218194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218194) {
            ctx->pc = 0x218198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218194u;
            // 0x218198: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2181B4u;
            goto label_2181b4;
        }
    }
    ctx->pc = 0x21819Cu;
    // 0x21819c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2181a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2181A0u;
    {
        const bool branch_taken_0x2181a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2181A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181A0u;
        // 0x2181a4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181a0) {
            ctx->pc = 0x2181D0u;
            goto label_2181d0;
        }
    }
    ctx->pc = 0x2181A8u;
    // 0x2181a8: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2181A8u;
    {
        const bool branch_taken_0x2181a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2181a8) {
            ctx->pc = 0x2181ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2181A8u;
            // 0x2181ac: 0x922217c3  lbu         $v0, 0x17C3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2181E8u;
            goto label_2181e8;
        }
    }
    ctx->pc = 0x2181B0u;
    // 0x2181b0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2181b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_2181b4:
    // 0x2181b4: 0x8c431be8  lw          $v1, 0x1BE8($v0)
    ctx->pc = 0x2181b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7144)));
    // 0x2181b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2181B8u;
    {
        const bool branch_taken_0x2181b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181B8u;
        // 0x2181bc: 0x8c441bec  lw          $a0, 0x1BEC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181b8) {
            ctx->pc = 0x218204u;
            goto label_218204;
        }
    }
    ctx->pc = 0x2181C0u;
label_2181c0:
    // 0x2181c0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2181c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2181c4: 0x8c431bf8  lw          $v1, 0x1BF8($v0)
    ctx->pc = 0x2181c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7160)));
    // 0x2181c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2181C8u;
    {
        const bool branch_taken_0x2181c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181C8u;
        // 0x2181cc: 0x8c441bfc  lw          $a0, 0x1BFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181c8) {
            ctx->pc = 0x218204u;
            goto label_218204;
        }
    }
    ctx->pc = 0x2181D0u;
label_2181d0:
    // 0x2181d0: 0x922217c3  lbu         $v0, 0x17C3($s1)
    ctx->pc = 0x2181d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
    // 0x2181d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2181D4u;
    {
        const bool branch_taken_0x2181d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2181D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181D4u;
        // 0x2181d8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181d4) {
            ctx->pc = 0x2181FCu;
            goto label_2181fc;
        }
    }
    ctx->pc = 0x2181DCu;
    // 0x2181dc: 0x8c431c08  lw          $v1, 0x1C08($v0)
    ctx->pc = 0x2181dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7176)));
    // 0x2181e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2181E0u;
    {
        const bool branch_taken_0x2181e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181E0u;
        // 0x2181e4: 0x8c441c0c  lw          $a0, 0x1C0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181e0) {
            ctx->pc = 0x218204u;
            goto label_218204;
        }
    }
    ctx->pc = 0x2181E8u;
label_2181e8:
    // 0x2181e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2181E8u;
    {
        const bool branch_taken_0x2181e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181E8u;
        // 0x2181ec: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181e8) {
            ctx->pc = 0x2181FCu;
            goto label_2181fc;
        }
    }
    ctx->pc = 0x2181F0u;
    // 0x2181f0: 0x8c431c08  lw          $v1, 0x1C08($v0)
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7176)));
    // 0x2181f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2181F4u;
    {
        const bool branch_taken_0x2181f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181F4u;
        // 0x2181f8: 0x8c441c0c  lw          $a0, 0x1C0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181f4) {
            ctx->pc = 0x218204u;
            goto label_218204;
        }
    }
    ctx->pc = 0x2181FCu;
label_2181fc:
    // 0x2181fc: 0x8c431c18  lw          $v1, 0x1C18($v0)
    ctx->pc = 0x2181fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7192)));
    // 0x218200: 0x8c441c1c  lw          $a0, 0x1C1C($v0)
    ctx->pc = 0x218200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7196)));
label_218204:
    // 0x218204: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x218204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218208: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x218208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21820c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x21820cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x218210: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x218210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218214: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x218214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218218: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x218218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21821c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x21821Cu;
    SET_GPR_U32(ctx, 31, 0x218224u);
    ctx->pc = 0x218220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21821Cu;
    // 0x218220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x21821Cu, 0x218224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218224u;
label_218224:
    // 0x218224: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x218224u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x218228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21822c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x21822Cu;
    SET_GPR_U32(ctx, 31, 0x218234u);
    ctx->pc = 0x218230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21822Cu;
    // 0x218230: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x21822Cu, 0x218234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218234u;
label_218234:
    // 0x218234: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x218234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x218238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21823c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x21823cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x218240: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x218240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218244: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x218244u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x218248: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x218248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21824c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21824cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218250: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x218250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218254: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x218254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218258: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x218258u;
    SET_GPR_U32(ctx, 31, 0x218260u);
    ctx->pc = 0x21825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218258u;
    // 0x21825c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x218258u, 0x218260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218260u;
label_218260:
    // 0x218260: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x218260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x218264: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x218264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x218268: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x218268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_21826c:
    // 0x21826c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x21826Cu;
    SET_GPR_U32(ctx, 31, 0x218274u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x21826Cu, 0x218274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218274u;
label_218274:
    // 0x218274: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x218274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21827c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x21827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x218280: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x218280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x218284: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218288: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x218288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x21828c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x21828Cu;
    SET_GPR_U32(ctx, 31, 0x218294u);
    ctx->pc = 0x218290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21828Cu;
    // 0x218290: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x21828Cu, 0x218294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218294u;
label_218294:
    // 0x218294: 0xc055f06  jal         func_157C18
    ctx->pc = 0x218294u;
    SET_GPR_U32(ctx, 31, 0x21829Cu);
    ctx->pc = 0x218298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218294u;
    // 0x218298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x218294u, 0x21829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21829Cu;
label_21829c:
    // 0x21829c: 0x10400177  beqz        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x21829Cu;
    {
        const bool branch_taken_0x21829c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21829c) {
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x2182A4u;
    // 0x2182a4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2182a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2182a8: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x2182A8u;
    {
        const bool branch_taken_0x2182a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2182ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2182A8u;
        // 0x2182ac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182a8) {
            ctx->pc = 0x218878u;
            goto label_218878;
        }
    }
    ctx->pc = 0x2182B0u;
label_2182b0:
    // 0x2182b0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x2182b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x2182b4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2182b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x2182b8: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x2182b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x2182bc: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2182c0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2182c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2182c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2182c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182c8: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2182C8u;
    SET_GPR_U32(ctx, 31, 0x2182D0u);
    ctx->pc = 0x2182CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182C8u;
    // 0x2182cc: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2182C8u, 0x2182D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182D0u;
label_2182d0:
    // 0x2182d0: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x2182d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x2182d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2182d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2182dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2182e0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2182e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2182e4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2182e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2182e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2182ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2182f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2182f4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2182F4u;
    SET_GPR_U32(ctx, 31, 0x2182FCu);
    ctx->pc = 0x2182F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2182F4u;
    // 0x2182f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2182F4u, 0x2182FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2182FCu;
label_2182fc:
    // 0x2182fc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x2182fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x218300: 0x262305d0  addiu       $v1, $s1, 0x5D0
    ctx->pc = 0x218300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x218304: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x218304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x218308: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x218308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x21830c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x21830cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218310: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x218310u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x218314: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x218314u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218318: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x218318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21831c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x21831cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x218320: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x218320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218324: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x218324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218328: 0x262405c0  addiu       $a0, $s1, 0x5C0
    ctx->pc = 0x218328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x21832c: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21832Cu;
    {
        const bool branch_taken_0x21832c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x218330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21832Cu;
        // 0x218330: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21832c) {
            ctx->pc = 0x218348u;
            goto label_218348;
        }
    }
    ctx->pc = 0x218334u;
    // 0x218334: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x218334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218338: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x218338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x21833c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x21833cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x218340: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x218340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218344: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x218344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_218348:
    // 0x218348: 0xc07df8a  jal         func_1F7E28
    ctx->pc = 0x218348u;
    SET_GPR_U32(ctx, 31, 0x218350u);
    ctx->pc = 0x21834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218348u;
    // 0x21834c: 0xae2005c4  sw          $zero, 0x5C4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x218348u, 0x218350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218350u;
label_218350:
    // 0x218350: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x218350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x218354: 0x0  nop
    ctx->pc = 0x218354u;
    // NOP
    // 0x218358: 0x0  nop
    ctx->pc = 0x218358u;
    // NOP
    // 0x21835c: 0x460c0004  c1          0xC0004
    ctx->pc = 0x21835cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x218360: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x218360u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218364: 0x0  nop
    ctx->pc = 0x218364u;
    // NOP
    // 0x218368: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x218368u;
    {
        const bool branch_taken_0x218368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218368) {
            ctx->pc = 0x21836Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218368u;
            // 0x21836c: 0x86220568  lh          $v0, 0x568($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21837Cu;
            goto label_21837c;
        }
    }
    ctx->pc = 0x218370u;
    // 0x218370: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x218370u;
    SET_GPR_U32(ctx, 31, 0x218378u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x218370u, 0x218378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218378u;
label_218378:
    // 0x218378: 0x86220568  lh          $v0, 0x568($s1)
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
label_21837c:
    // 0x21837c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21837Cu;
    {
        const bool branch_taken_0x21837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21837Cu;
        // 0x218380: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21837c) {
            ctx->pc = 0x2183A8u;
            goto label_2183a8;
        }
    }
    ctx->pc = 0x218384u;
    // 0x218384: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x218384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x218388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21838c: 0x0  nop
    ctx->pc = 0x21838cu;
    // NOP
    // 0x218390: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x218390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218394: 0x0  nop
    ctx->pc = 0x218394u;
    // NOP
    // 0x218398: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x218398u;
    {
        const bool branch_taken_0x218398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218398) {
            ctx->pc = 0x21839Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218398u;
            // 0x21839c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2183C8u;
            goto label_2183c8;
        }
    }
    ctx->pc = 0x2183A0u;
    // 0x2183a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2183A0u;
    {
        const bool branch_taken_0x2183a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2183A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183A0u;
        // 0x2183a4: 0x263005c0  addiu       $s0, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183a0) {
            ctx->pc = 0x2183CCu;
            goto label_2183cc;
        }
    }
    ctx->pc = 0x2183A8u;
label_2183a8:
    // 0x2183a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2183a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2183ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2183acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2183b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2183b4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2183b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2183b8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2183b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2183bc: 0x0  nop
    ctx->pc = 0x2183bcu;
    // NOP
    // 0x2183c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2183C0u;
    {
        const bool branch_taken_0x2183c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2183c0) {
            ctx->pc = 0x2183C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2183C0u;
            // 0x2183c4: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2183C8u;
            goto label_2183c8;
        }
    }
    ctx->pc = 0x2183C8u;
label_2183c8:
    // 0x2183c8: 0x263005c0  addiu       $s0, $s1, 0x5C0
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
label_2183cc:
    // 0x2183cc: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x2183ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2183d0: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x2183d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2183d4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2183D4u;
    SET_GPR_U32(ctx, 31, 0x2183DCu);
    ctx->pc = 0x2183D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183D4u;
    // 0x2183d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2183D4u, 0x2183DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183DCu;
label_2183dc:
    // 0x2183dc: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2183dcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2183e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2183e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2183e4: 0x0  nop
    ctx->pc = 0x2183e4u;
    // NOP
    // 0x2183e8: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2183e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2183ec: 0x0  nop
    ctx->pc = 0x2183ecu;
    // NOP
    // 0x2183f0: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x2183F0u;
    {
        const bool branch_taken_0x2183f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2183F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2183F0u;
        // 0x2183f4: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2183f0) {
            ctx->pc = 0x218438u;
            goto label_218438;
        }
    }
    ctx->pc = 0x2183F8u;
    // 0x2183f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2183f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2183fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2183fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218400: 0xc62105c0  lwc1        $f1, 0x5C0($s1)
    ctx->pc = 0x218400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218404: 0x0  nop
    ctx->pc = 0x218404u;
    // NOP
    // 0x218408: 0x0  nop
    ctx->pc = 0x218408u;
    // NOP
    // 0x21840c: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x21840cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x218410: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x218410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x218414: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x218414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x218418: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x218418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21841c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21841cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x218420: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x218420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x218424: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x218424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218428: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x218428u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21842c: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x21842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x218430: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x218430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218434: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x218434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_218438:
    // 0x218438: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x218438u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21843c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x21843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218440: 0x12120006  beq         $s0, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x218440u;
    {
        const bool branch_taken_0x218440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x218444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218440u;
        // 0x218444: 0xc7a00090  lwc1        $f0, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218440) {
            ctx->pc = 0x21845Cu;
            goto label_21845c;
        }
    }
    ctx->pc = 0x218448u;
    // 0x218448: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x218448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21844c: 0xe62005c0  swc1        $f0, 0x5C0($s1)
    ctx->pc = 0x21844cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1472), bits); }
    // 0x218450: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x218450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x218454: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x218454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218458: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x218458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_21845c:
    // 0x21845c: 0xda2405c0  lqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x21845cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x218460: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x218460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218464: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x218464u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218468: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x218468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21846c: 0xfa2405c0  sqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x21846cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1472), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218470: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x218470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x218474: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218478: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x218478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x21847c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x21847cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x218480: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218484: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x218484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x218488: 0xda2405c0  lqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x218488u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 1472)));
    // 0x21848c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x21848cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218490: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x218490u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218494: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x218494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218498: 0xfa2405c0  sqc2        $vf4, 0x5C0($s1)
    ctx->pc = 0x218498u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1472), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21849c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x21849cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2184a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2184a4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2184a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2184a8:
    // 0x2184a8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2184a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2184ac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2184acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2184b0: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x2184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x2184b4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2184b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2184b8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2184b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2184bc: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2184bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2184c0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2184c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2184c4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2184c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2184c8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2184c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2184cc: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2184ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2184d0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2184d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2184d4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2184d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2184d8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2184d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2184dc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x2184dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2184e0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2184e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2184e4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2184e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2184e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2184e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2184ec: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2184ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2184f0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2184F0u;
    SET_GPR_U32(ctx, 31, 0x2184F8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2184F0u, 0x2184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2184F8u;
label_2184f8:
    // 0x2184f8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2184f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2184fc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2184fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x218500: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x218500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x218504: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218508: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x218508u;
    SET_GPR_U32(ctx, 31, 0x218510u);
    ctx->pc = 0x21850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218508u;
    // 0x21850c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x218508u, 0x218510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218510u;
label_218510:
    // 0x218510: 0xc055f06  jal         func_157C18
    ctx->pc = 0x218510u;
    SET_GPR_U32(ctx, 31, 0x218518u);
    ctx->pc = 0x218514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218510u;
    // 0x218514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x218510u, 0x218518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218518u;
label_218518:
    // 0x218518: 0xc6200600  lwc1        $f0, 0x600($s1)
    ctx->pc = 0x218518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21851c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x21851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218520: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x218520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218524: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x218524u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x218528: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x218528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21852c: 0x0  nop
    ctx->pc = 0x21852cu;
    // NOP
    // 0x218530: 0x450001b5  bc1f        . + 4 + (0x1B5 << 2)
    ctx->pc = 0x218530u;
    {
        const bool branch_taken_0x218530 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218530u;
        // 0x218534: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218530) {
            ctx->pc = 0x218C08u;
            goto label_218c08;
        }
    }
    ctx->pc = 0x218538u;
    // 0x218538: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x218538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x21853c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21853cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x218540: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x218540u;
    {
        const bool branch_taken_0x218540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218540u;
        // 0x218544: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218540) {
            ctx->pc = 0x218C08u;
            goto label_218c08;
        }
    }
    ctx->pc = 0x218548u;
label_218548:
    // 0x218548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21854c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x21854Cu;
    SET_GPR_U32(ctx, 31, 0x218554u);
    ctx->pc = 0x218550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21854Cu;
    // 0x218550: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x21854Cu, 0x218554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218554u;
label_218554:
    // 0x218554: 0x923002f7  lbu         $s0, 0x2F7($s1)
    ctx->pc = 0x218554u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x218558: 0x12130021  beq         $s0, $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x218558u;
    {
        const bool branch_taken_0x218558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x21855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218558u;
        // 0x21855c: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218558) {
            ctx->pc = 0x2185E0u;
            goto label_2185e0;
        }
    }
    ctx->pc = 0x218560u;
    // 0x218560: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x218560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x218564: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x218564u;
    {
        const bool branch_taken_0x218564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218564) {
            ctx->pc = 0x218568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218564u;
            // 0x218568: 0x8e220564  lw          $v0, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218584u;
            goto label_218584;
        }
    }
    ctx->pc = 0x21856Cu;
    // 0x21856c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x218570: 0x1202002f  beq         $s0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x218570u;
    {
        const bool branch_taken_0x218570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x218574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218570u;
        // 0x218574: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218570) {
            ctx->pc = 0x218630u;
            goto label_218630;
        }
    }
    ctx->pc = 0x218578u;
    // 0x218578: 0x52020033  beql        $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x218578u;
    {
        const bool branch_taken_0x218578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x218578) {
            ctx->pc = 0x21857Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218578u;
            // 0x21857c: 0x922217c3  lbu         $v0, 0x17C3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218648u;
            goto label_218648;
        }
    }
    ctx->pc = 0x218580u;
    // 0x218580: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x218580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_218584:
    // 0x218584: 0x38420221  xori        $v0, $v0, 0x221
    ctx->pc = 0x218584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)545);
    // 0x218588: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x218588u;
    {
        const bool branch_taken_0x218588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218588) {
            ctx->pc = 0x21858Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218588u;
            // 0x21858c: 0x8e2216d0  lw          $v0, 0x16D0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2185ACu;
            goto label_2185ac;
        }
    }
    ctx->pc = 0x218590u;
    // 0x218590: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x218590u;
    SET_GPR_U32(ctx, 31, 0x218598u);
    ctx->pc = 0x218594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218590u;
    // 0x218594: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x218590u, 0x218598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218598u;
label_218598:
    // 0x218598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21859c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21859Cu;
    {
        const bool branch_taken_0x21859c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21859c) {
            ctx->pc = 0x2185A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21859Cu;
            // 0x2185a0: 0xa22017c3  sb          $zero, 0x17C3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2185C0u;
            goto label_2185c0;
        }
    }
    ctx->pc = 0x2185A4u;
    // 0x2185a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2185A4u;
    {
        const bool branch_taken_0x2185a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2185A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185A4u;
        // 0x2185a8: 0xa23317c3  sb          $s3, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185a4) {
            ctx->pc = 0x2185C0u;
            goto label_2185c0;
        }
    }
    ctx->pc = 0x2185ACu;
label_2185ac:
    // 0x2185ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2185acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2185b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2185b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2185b4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2185B4u;
    {
        const bool branch_taken_0x2185b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185b4) {
            ctx->pc = 0x2185B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2185B4u;
            // 0x2185b8: 0xa22017c3  sb          $zero, 0x17C3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2185C0u;
            goto label_2185c0;
        }
    }
    ctx->pc = 0x2185BCu;
    // 0x2185bc: 0xa23317c3  sb          $s3, 0x17C3($s1)
    ctx->pc = 0x2185bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 19));
label_2185c0:
    // 0x2185c0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2185C0u;
    SET_GPR_U32(ctx, 31, 0x2185C8u);
    ctx->pc = 0x2185C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185C0u;
    // 0x2185c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2185C0u, 0x2185C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185C8u;
label_2185c8:
    // 0x2185c8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2185c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2185cc: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2185ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2185d0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x2185d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2185d4: 0x8c621bf0  lw          $v0, 0x1BF0($v1)
    ctx->pc = 0x2185d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7152)));
    // 0x2185d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2185D8u;
    {
        const bool branch_taken_0x2185d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2185DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2185D8u;
        // 0x2185dc: 0x8c641bf4  lw          $a0, 0x1BF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185d8) {
            ctx->pc = 0x218624u;
            goto label_218624;
        }
    }
    ctx->pc = 0x2185E0u;
label_2185e0:
    // 0x2185e0: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x2185e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2185e4: 0x38420221  xori        $v0, $v0, 0x221
    ctx->pc = 0x2185e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)545);
    // 0x2185e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2185E8u;
    {
        const bool branch_taken_0x2185e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185e8) {
            ctx->pc = 0x218608u;
            goto label_218608;
        }
    }
    ctx->pc = 0x2185F0u;
    // 0x2185f0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2185F0u;
    SET_GPR_U32(ctx, 31, 0x2185F8u);
    ctx->pc = 0x2185F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2185F0u;
    // 0x2185f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2185F0u, 0x2185F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185F8u;
label_2185f8:
    // 0x2185f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2185f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2185fc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2185FCu;
    {
        const bool branch_taken_0x2185fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185fc) {
            ctx->pc = 0x218600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2185FCu;
            // 0x218600: 0xa23017c3  sb          $s0, 0x17C3($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218608u;
            goto label_218608;
        }
    }
    ctx->pc = 0x218604u;
    // 0x218604: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x218604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_218608:
    // 0x218608: 0xc09d91a  jal         func_276468
    ctx->pc = 0x218608u;
    SET_GPR_U32(ctx, 31, 0x218610u);
    ctx->pc = 0x21860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218608u;
    // 0x21860c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x218608u, 0x218610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218610u;
label_218610:
    // 0x218610: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x218610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x218614: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x218614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x218618: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x218618u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21861c: 0x8c621c00  lw          $v0, 0x1C00($v1)
    ctx->pc = 0x21861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7168)));
    // 0x218620: 0x8c641c04  lw          $a0, 0x1C04($v1)
    ctx->pc = 0x218620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7172)));
label_218624:
    // 0x218624: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x218624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218628: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x218628u;
    {
        const bool branch_taken_0x218628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218628u;
        // 0x21862c: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218628) {
            ctx->pc = 0x21866Cu;
            goto label_21866c;
        }
    }
    ctx->pc = 0x218630u;
label_218630:
    // 0x218630: 0x922217c3  lbu         $v0, 0x17C3($s1)
    ctx->pc = 0x218630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
    // 0x218634: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x218634u;
    {
        const bool branch_taken_0x218634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218634u;
        // 0x218638: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218634) {
            ctx->pc = 0x21865Cu;
            goto label_21865c;
        }
    }
    ctx->pc = 0x21863Cu;
    // 0x21863c: 0x8c431c10  lw          $v1, 0x1C10($v0)
    ctx->pc = 0x21863cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7184)));
    // 0x218640: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218640u;
    {
        const bool branch_taken_0x218640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218640u;
        // 0x218644: 0x8c441c14  lw          $a0, 0x1C14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218640) {
            ctx->pc = 0x218664u;
            goto label_218664;
        }
    }
    ctx->pc = 0x218648u;
label_218648:
    // 0x218648: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218648u;
    {
        const bool branch_taken_0x218648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218648u;
        // 0x21864c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218648) {
            ctx->pc = 0x21865Cu;
            goto label_21865c;
        }
    }
    ctx->pc = 0x218650u;
    // 0x218650: 0x8c431c10  lw          $v1, 0x1C10($v0)
    ctx->pc = 0x218650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7184)));
    // 0x218654: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x218654u;
    {
        const bool branch_taken_0x218654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218654u;
        // 0x218658: 0x8c441c14  lw          $a0, 0x1C14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218654) {
            ctx->pc = 0x218664u;
            goto label_218664;
        }
    }
    ctx->pc = 0x21865Cu;
label_21865c:
    // 0x21865c: 0x8c431c20  lw          $v1, 0x1C20($v0)
    ctx->pc = 0x21865cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7200)));
    // 0x218660: 0x8c441c24  lw          $a0, 0x1C24($v0)
    ctx->pc = 0x218660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7204)));
label_218664:
    // 0x218664: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x218664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218668: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x218668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21866c:
    // 0x21866c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21866cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218670: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x218670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218678: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x218678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21867c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x21867Cu;
    SET_GPR_U32(ctx, 31, 0x218684u);
    ctx->pc = 0x218680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21867Cu;
    // 0x218680: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x21867Cu, 0x218684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218684u;
label_218684:
    // 0x218684: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x218684u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x218688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x218688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21868c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x21868cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_218690:
    // 0x218690: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x218690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x218694: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x218694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x218698: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x218698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21869c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x21869Cu;
    {
        const bool branch_taken_0x21869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21869c) {
            ctx->pc = 0x2186A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21869Cu;
            // 0x2186a0: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186F0u;
            goto label_2186f0;
        }
    }
    ctx->pc = 0x2186A4u;
    // 0x2186a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2186a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2186a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2186a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2186ac: 0x0  nop
    ctx->pc = 0x2186acu;
    // NOP
    // 0x2186b0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2186b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2186b4: 0x0  nop
    ctx->pc = 0x2186b4u;
    // NOP
    // 0x2186b8: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2186B8u;
    {
        const bool branch_taken_0x2186b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2186b8) {
            ctx->pc = 0x2186BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2186B8u;
            // 0x2186bc: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2186F0u;
            goto label_2186f0;
        }
    }
    ctx->pc = 0x2186C0u;
    // 0x2186c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2186C0u;
    SET_GPR_U32(ctx, 31, 0x2186C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2186C0u, 0x2186C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186C8u;
label_2186c8:
    // 0x2186c8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2186c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2186cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2186ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186d0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2186d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2186d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2186d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2186d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2186d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2186dc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2186dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2186e0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2186E0u;
    SET_GPR_U32(ctx, 31, 0x2186E8u);
    ctx->pc = 0x2186E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2186E0u;
    // 0x2186e4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2186E0u, 0x2186E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2186E8u;
label_2186e8:
    // 0x2186e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2186E8u;
    {
        const bool branch_taken_0x2186e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2186ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2186E8u;
        // 0x2186ec: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2186e8) {
            ctx->pc = 0x218710u;
            goto label_218710;
        }
    }
    ctx->pc = 0x2186F0u;
label_2186f0:
    // 0x2186f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2186f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2186f4: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2186f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2186f8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2186f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2186fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2186fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218700: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x218704: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x218704u;
    SET_GPR_U32(ctx, 31, 0x21870Cu);
    ctx->pc = 0x218708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218704u;
    // 0x218708: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x218704u, 0x21870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21870Cu;
label_21870c:
    // 0x21870c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x21870cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218710:
    // 0x218710: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x218710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x218714: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x218714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x218718: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x218718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21871c: 0xc621024c  lwc1        $f1, 0x24C($s1)
    ctx->pc = 0x21871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218720: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x218720u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x218724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218728: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x218728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x21872c: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x21872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x218730: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x218730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218734: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x218734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x218738: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x218738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x21873c: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x21873cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218740: 0x0  nop
    ctx->pc = 0x218740u;
    // NOP
    // 0x218744: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x218744u;
    {
        const bool branch_taken_0x218744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218744u;
        // 0x218748: 0xe621024c  swc1        $f1, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218744) {
            ctx->pc = 0x218760u;
            goto label_218760;
        }
    }
    ctx->pc = 0x21874Cu;
    // 0x21874c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x21874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x218750: 0xe636024c  swc1        $f22, 0x24C($s1)
    ctx->pc = 0x218750u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x218754: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x218754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x218758: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x218758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21875c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x21875cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_218760:
    // 0x218760: 0xc055f06  jal         func_157C18
    ctx->pc = 0x218760u;
    SET_GPR_U32(ctx, 31, 0x218768u);
    ctx->pc = 0x218764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218760u;
    // 0x218764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x218760u, 0x218768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218768u;
label_218768:
    // 0x218768: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x218768u;
    {
        const bool branch_taken_0x218768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218768) {
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x218770u;
    // 0x218770: 0xc092eda  jal         func_24BB68
    ctx->pc = 0x218770u;
    SET_GPR_U32(ctx, 31, 0x218778u);
    ctx->pc = 0x218774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218770u;
    // 0x218774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x218770u, 0x218778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218778u;
label_218778:
    // 0x218778: 0x14400124  bnez        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x218778u;
    {
        const bool branch_taken_0x218778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218778u;
        // 0x21877c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218778) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218780u;
    // 0x218780: 0xc092f68  jal         func_24BDA0
    ctx->pc = 0x218780u;
    SET_GPR_U32(ctx, 31, 0x218788u);
    ctx->pc = 0x218784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218780u;
    // 0x218784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDA0u, 0x218780u, 0x218788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218788u;
label_218788:
    // 0x218788: 0x14400120  bnez        $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x218788u;
    {
        const bool branch_taken_0x218788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218788u;
        // 0x21878c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218788) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218790u;
    // 0x218790: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x218790u;
    SET_GPR_U32(ctx, 31, 0x218798u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x218790u, 0x218798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218798u;
label_218798:
    // 0x218798: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x218798u;
    SET_GPR_U32(ctx, 31, 0x2187A0u);
    ctx->pc = 0x21879Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218798u;
    // 0x21879c: 0x8c5000f0  lw          $s0, 0xF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x218798u, 0x2187A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187A0u;
label_2187a0:
    // 0x2187a0: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x2187a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2187a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2187a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2187a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2187a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2187ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2187acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2187b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2187b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2187b4: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2187B4u;
    SET_GPR_U32(ctx, 31, 0x2187BCu);
    ctx->pc = 0x2187B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2187B4u;
    // 0x2187b8: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2187B4u, 0x2187BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2187BCu;
label_2187bc:
    // 0x2187bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2187bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2187c0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2187c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2187c4: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2187c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2187c8: 0x0  nop
    ctx->pc = 0x2187c8u;
    // NOP
    // 0x2187cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2187CCu;
    {
        const bool branch_taken_0x2187cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2187cc) {
            ctx->pc = 0x2187D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2187CCu;
            // 0x2187d0: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2187D4u;
            goto label_2187d4;
        }
    }
    ctx->pc = 0x2187D4u;
label_2187d4:
    // 0x2187d4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2187d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2187d8: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x2187d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x2187dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2187dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2187e0: 0x0  nop
    ctx->pc = 0x2187e0u;
    // NOP
    // 0x2187e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2187e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2187e8: 0x0  nop
    ctx->pc = 0x2187e8u;
    // NOP
    // 0x2187ec: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2187ECu;
    {
        const bool branch_taken_0x2187ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2187F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2187ECu;
        // 0x2187f0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2187ec) {
            ctx->pc = 0x218878u;
            goto label_218878;
        }
    }
    ctx->pc = 0x2187F4u;
    // 0x2187f4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2187f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2187f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2187f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2187fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2187fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218800: 0x0  nop
    ctx->pc = 0x218800u;
    // NOP
    // 0x218804: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x218804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218808: 0x0  nop
    ctx->pc = 0x218808u;
    // NOP
    // 0x21880c: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x21880Cu;
    {
        const bool branch_taken_0x21880c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21880c) {
            ctx->pc = 0x218810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21880Cu;
            // 0x218810: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21887Cu;
            goto label_21887c;
        }
    }
    ctx->pc = 0x218814u;
    // 0x218814: 0xc09c340  jal         func_270D00
    ctx->pc = 0x218814u;
    SET_GPR_U32(ctx, 31, 0x21881Cu);
    ctx->pc = 0x218818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218814u;
    // 0x218818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270D00u, 0x218814u, 0x21881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21881Cu;
label_21881c:
    // 0x21881c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21881Cu;
    {
        const bool branch_taken_0x21881c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21881Cu;
        // 0x218820: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21881c) {
            ctx->pc = 0x218878u;
            goto label_218878;
        }
    }
    ctx->pc = 0x218824u;
    // 0x218824: 0x3c014016  lui         $at, 0x4016
    ctx->pc = 0x218824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16406 << 16));
    // 0x218828: 0x3421cbe4  ori         $at, $at, 0xCBE4
    ctx->pc = 0x218828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52196);
    // 0x21882c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21882cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218830: 0x0  nop
    ctx->pc = 0x218830u;
    // NOP
    // 0x218834: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x218834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218838: 0x0  nop
    ctx->pc = 0x218838u;
    // NOP
    // 0x21883c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x21883Cu;
    {
        const bool branch_taken_0x21883c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21883Cu;
        // 0x218840: 0x2402004b  addiu       $v0, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21883c) {
            ctx->pc = 0x218874u;
            goto label_218874;
        }
    }
    ctx->pc = 0x218844u;
    // 0x218844: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x218844u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x218848: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x218848u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x21884c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218850: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x218850u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x218854: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x218854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x218858: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x218858u;
    SET_GPR_U32(ctx, 31, 0x218860u);
    ctx->pc = 0x21885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218858u;
    // 0x21885c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x218858u, 0x218860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218860u;
label_218860:
    // 0x218860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218864: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x218864u;
    SET_GPR_U32(ctx, 31, 0x21886Cu);
    ctx->pc = 0x218868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218864u;
    // 0x218868: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x218864u, 0x21886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21886Cu;
label_21886c:
    // 0x21886c: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x21886Cu;
    {
        const bool branch_taken_0x21886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21886Cu;
        // 0x218870: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21886c) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218874u;
label_218874:
    // 0x218874: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x218874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_218878:
    // 0x218878: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x218878u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_21887c:
    // 0x21887c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218880: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218884: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x218884u;
    SET_GPR_U32(ctx, 31, 0x21888Cu);
    ctx->pc = 0x218888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218884u;
    // 0x218888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x218884u, 0x21888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21888Cu;
label_21888c:
    // 0x21888c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x21888cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x218890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218894: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x218894u;
    SET_GPR_U32(ctx, 31, 0x21889Cu);
    ctx->pc = 0x218898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218894u;
    // 0x218898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x218894u, 0x21889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21889Cu;
label_21889c:
    // 0x21889c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x21889Cu;
    {
        const bool branch_taken_0x21889c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21889Cu;
        // 0x2188a0: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21889c) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x2188A4u;
label_2188a4:
    // 0x2188a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2188a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188a8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2188A8u;
    SET_GPR_U32(ctx, 31, 0x2188B0u);
    ctx->pc = 0x2188ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188A8u;
    // 0x2188ac: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2188A8u, 0x2188B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188B0u;
label_2188b0:
    // 0x2188b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2188b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188b4: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2188b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2188b8: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2188b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2188bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2188bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2188c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2188c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188c4: 0x8c651bc0  lw          $a1, 0x1BC0($v1)
    ctx->pc = 0x2188c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7104)));
    // 0x2188c8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2188c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2188cc: 0x8c661bc4  lw          $a2, 0x1BC4($v1)
    ctx->pc = 0x2188ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7108)));
    // 0x2188d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2188d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2188d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2188d8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2188D8u;
    SET_GPR_U32(ctx, 31, 0x2188E0u);
    ctx->pc = 0x2188DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188D8u;
    // 0x2188dc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2188D8u, 0x2188E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E0u;
label_2188e0:
    // 0x2188e0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2188E0u;
    SET_GPR_U32(ctx, 31, 0x2188E8u);
    ctx->pc = 0x2188E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2188E0u;
    // 0x2188e4: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2188E0u, 0x2188E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2188E8u;
label_2188e8:
    // 0x2188e8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2188e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2188ec: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2188ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2188f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2188F0u;
    {
        const bool branch_taken_0x2188f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2188F0u;
        // 0x2188f4: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188f0) {
            ctx->pc = 0x218910u;
            goto label_218910;
        }
    }
    ctx->pc = 0x2188F8u;
    // 0x2188f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2188f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2188fc: 0x24426620  addiu       $v0, $v0, 0x6620
    ctx->pc = 0x2188fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26144));
    // 0x218900: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218904: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218908: 0x800008  jr          $a0
    ctx->pc = 0x218908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218910u: goto label_218910;
            case 0x218918u: goto label_218918;
            case 0x218920u: goto label_218920;
            case 0x218928u: goto label_218928;
            case 0x218930u: goto label_218930;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218908u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x218910u;
label_218910:
    // 0x218910: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218910u;
    {
        const bool branch_taken_0x218910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218910u;
        // 0x218914: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218910) {
            ctx->pc = 0x218934u;
            goto label_218934;
        }
    }
    ctx->pc = 0x218918u;
label_218918:
    // 0x218918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x218918u;
    {
        const bool branch_taken_0x218918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218918u;
        // 0x21891c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218918) {
            ctx->pc = 0x218934u;
            goto label_218934;
        }
    }
    ctx->pc = 0x218920u;
label_218920:
    // 0x218920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x218920u;
    {
        const bool branch_taken_0x218920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218920u;
        // 0x218924: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218920) {
            ctx->pc = 0x218934u;
            goto label_218934;
        }
    }
    ctx->pc = 0x218928u;
label_218928:
    // 0x218928: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x218928u;
    {
        const bool branch_taken_0x218928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218928u;
        // 0x21892c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218928) {
            ctx->pc = 0x218934u;
            goto label_218934;
        }
    }
    ctx->pc = 0x218930u;
label_218930:
    // 0x218930: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x218930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_218934:
    // 0x218934: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x218934u;
    SET_GPR_U32(ctx, 31, 0x21893Cu);
    ctx->pc = 0x218938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218934u;
    // 0x218938: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x218934u, 0x21893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21893Cu;
label_21893c:
    // 0x21893c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218940: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x218940u;
    {
        const bool branch_taken_0x218940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218940u;
        // 0x218944: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218940) {
            ctx->pc = 0x21894Cu;
            goto label_21894c;
        }
    }
    ctx->pc = 0x218948u;
    // 0x218948: 0xa6220568  sh          $v0, 0x568($s1)
    ctx->pc = 0x218948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
label_21894c:
    // 0x21894c: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x21894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218950: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x218950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x218954: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218958: 0x0  nop
    ctx->pc = 0x218958u;
    // NOP
    // 0x21895c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21895cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218960: 0x0  nop
    ctx->pc = 0x218960u;
    // NOP
    // 0x218964: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x218964u;
    {
        const bool branch_taken_0x218964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218964) {
            ctx->pc = 0x218968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218964u;
            // 0x218968: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2189C8u;
            goto label_2189c8;
        }
    }
    ctx->pc = 0x21896Cu;
    // 0x21896c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x21896Cu;
    SET_GPR_U32(ctx, 31, 0x218974u);
    ctx->pc = 0x218970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21896Cu;
    // 0x218970: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x21896Cu, 0x218974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218974u;
label_218974:
    // 0x218974: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x218974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218978: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x218978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21897c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21897Cu;
    {
        const bool branch_taken_0x21897c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21897Cu;
        // 0x218980: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21897c) {
            ctx->pc = 0x21899Cu;
            goto label_21899c;
        }
    }
    ctx->pc = 0x218984u;
    // 0x218984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x218984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x218988: 0x24426640  addiu       $v0, $v0, 0x6640
    ctx->pc = 0x218988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26176));
    // 0x21898c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218990: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x218990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218994: 0x800008  jr          $a0
    ctx->pc = 0x218994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21899Cu: goto label_21899c;
            case 0x2189A8u: goto label_2189a8;
            case 0x2189B4u: goto label_2189b4;
            case 0x2189C0u: goto label_2189c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218994u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21899Cu;
label_21899c:
    // 0x21899c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x21899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2189a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2189A0u;
    {
        const bool branch_taken_0x2189a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189A0u;
        // 0x2189a4: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189a0) {
            ctx->pc = 0x2189C4u;
            goto label_2189c4;
        }
    }
    ctx->pc = 0x2189A8u;
label_2189a8:
    // 0x2189a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2189a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2189ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2189ACu;
    {
        const bool branch_taken_0x2189ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189ACu;
        // 0x2189b0: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189ac) {
            ctx->pc = 0x2189C4u;
            goto label_2189c4;
        }
    }
    ctx->pc = 0x2189B4u;
label_2189b4:
    // 0x2189b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2189b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2189b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2189B8u;
    {
        const bool branch_taken_0x2189b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2189B8u;
        // 0x2189bc: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189b8) {
            ctx->pc = 0x2189C4u;
            goto label_2189c4;
        }
    }
    ctx->pc = 0x2189C0u;
label_2189c0:
    // 0x2189c0: 0xa6200568  sh          $zero, 0x568($s1)
    ctx->pc = 0x2189c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 0));
label_2189c4:
    // 0x2189c4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2189c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2189c8:
    // 0x2189c8: 0xa620056a  sh          $zero, 0x56A($s1)
    ctx->pc = 0x2189c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 0));
    // 0x2189cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2189ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2189d0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2189d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2189d4:
    // 0x2189d4: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2189d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2189d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2189dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2189dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2189e0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2189E0u;
    {
        const bool branch_taken_0x2189e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2189e0) {
            ctx->pc = 0x2189E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2189E0u;
            // 0x2189e4: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x218A34u;
            goto label_218a34;
        }
    }
    ctx->pc = 0x2189E8u;
    // 0x2189e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2189e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2189ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2189ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2189f0: 0x0  nop
    ctx->pc = 0x2189f0u;
    // NOP
    // 0x2189f4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2189f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2189f8: 0x0  nop
    ctx->pc = 0x2189f8u;
    // NOP
    // 0x2189fc: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x2189FCu;
    {
        const bool branch_taken_0x2189fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2189fc) {
            ctx->pc = 0x218A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2189FCu;
            // 0x218a00: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x218A34u;
            goto label_218a34;
        }
    }
    ctx->pc = 0x218A04u;
    // 0x218a04: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x218A04u;
    SET_GPR_U32(ctx, 31, 0x218A0Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x218A04u, 0x218A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A0Cu;
label_218a0c:
    // 0x218a0c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x218a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a14: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x218a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x218a18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x218a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x218a1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218a20: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x218a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x218a24: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x218A24u;
    SET_GPR_U32(ctx, 31, 0x218A2Cu);
    ctx->pc = 0x218A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A24u;
    // 0x218a28: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x218A24u, 0x218A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A2Cu;
label_218a2c:
    // 0x218a2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218A2Cu;
    {
        const bool branch_taken_0x218a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218a2c) {
            ctx->pc = 0x218A50u;
            goto label_218a50;
        }
    }
    ctx->pc = 0x218A34u;
label_218a34:
    // 0x218a34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a38: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x218a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x218a3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x218a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x218a40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x218a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x218a44: 0x262516a0  addiu       $a1, $s1, 0x16A0
    ctx->pc = 0x218a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5792));
    // 0x218a48: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x218A48u;
    SET_GPR_U32(ctx, 31, 0x218A50u);
    ctx->pc = 0x218A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A48u;
    // 0x218a4c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x218A48u, 0x218A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A50u;
label_218a50:
    // 0x218a50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218a54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x218a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x218a58: 0xc055f06  jal         func_157C18
    ctx->pc = 0x218A58u;
    SET_GPR_U32(ctx, 31, 0x218A60u);
    ctx->pc = 0x218A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A58u;
    // 0x218a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x218A58u, 0x218A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A60u;
label_218a60:
    // 0x218a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a64: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x218A64u;
    SET_GPR_U32(ctx, 31, 0x218A6Cu);
    ctx->pc = 0x218A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A64u;
    // 0x218a68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x218A64u, 0x218A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A6Cu;
label_218a6c:
    // 0x218a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218a70: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x218A70u;
    SET_GPR_U32(ctx, 31, 0x218A78u);
    ctx->pc = 0x218A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A70u;
    // 0x218a74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x218A70u, 0x218A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A78u;
label_218a78:
    // 0x218a78: 0xc092eda  jal         func_24BB68
    ctx->pc = 0x218A78u;
    SET_GPR_U32(ctx, 31, 0x218A80u);
    ctx->pc = 0x218A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A78u;
    // 0x218a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BB68u, 0x218A78u, 0x218A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A80u;
label_218a80:
    // 0x218a80: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x218A80u;
    {
        const bool branch_taken_0x218a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A80u;
        // 0x218a84: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a80) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218A88u;
    // 0x218a88: 0xc092f68  jal         func_24BDA0
    ctx->pc = 0x218A88u;
    SET_GPR_U32(ctx, 31, 0x218A90u);
    ctx->pc = 0x218A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218A88u;
    // 0x218a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BDA0u, 0x218A88u, 0x218A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218A90u;
label_218a90:
    // 0x218a90: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x218A90u;
    {
        const bool branch_taken_0x218a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218A90u;
        // 0x218a94: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a90) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218A98u;
    // 0x218a98: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x218a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218a9c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x218a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x218aa0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x218aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x218aa4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x218aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218aa8: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x218aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218aac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x218aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x218ab0: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x218ab4: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x218ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x218ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218abc: 0xae230250  sw          $v1, 0x250($s1)
    ctx->pc = 0x218abcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 3));
    // 0x218ac0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x218ac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218ac4: 0x0  nop
    ctx->pc = 0x218ac4u;
    // NOP
    // 0x218ac8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x218AC8u;
    {
        const bool branch_taken_0x218ac8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AC8u;
        // 0x218acc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ac8) {
            ctx->pc = 0x218AE4u;
            goto label_218ae4;
        }
    }
    ctx->pc = 0x218AD0u;
    // 0x218ad0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x218ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x218ad4: 0xe634024c  swc1        $f20, 0x24C($s1)
    ctx->pc = 0x218ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
    // 0x218ad8: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x218ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x218adc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x218adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218ae0: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x218ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
label_218ae4:
    // 0x218ae4: 0x96220568  lhu         $v0, 0x568($s1)
    ctx->pc = 0x218ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x218ae8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x218ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218aec: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x218aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x218af0: 0x1c600045  bgtz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x218AF0u;
    {
        const bool branch_taken_0x218af0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x218AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218AF0u;
        // 0x218af4: 0xa6220568  sh          $v0, 0x568($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218af0) {
            ctx->pc = 0x218C08u;
            goto label_218c08;
        }
    }
    ctx->pc = 0x218AF8u;
    // 0x218af8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x218AF8u;
    SET_GPR_U32(ctx, 31, 0x218B00u);
    ctx->pc = 0x218AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218AF8u;
    // 0x218afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x218AF8u, 0x218B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B00u;
label_218b00:
    // 0x218b00: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x218B00u;
    {
        const bool branch_taken_0x218b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x218B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B00u;
        // 0x218b04: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b00) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218B08u;
    // 0x218b08: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x218b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218b0c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x218b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x218b10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218b14: 0x0  nop
    ctx->pc = 0x218b14u;
    // NOP
    // 0x218b18: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x218b18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218b1c: 0x0  nop
    ctx->pc = 0x218b1cu;
    // NOP
    // 0x218b20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x218B20u;
    {
        const bool branch_taken_0x218b20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x218B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B20u;
        // 0x218b24: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b20) {
            ctx->pc = 0x218B40u;
            goto label_218b40;
        }
    }
    ctx->pc = 0x218B28u;
    // 0x218b28: 0x8622056a  lh          $v0, 0x56A($s1)
    ctx->pc = 0x218b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
    // 0x218b2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x218B2Cu;
    {
        const bool branch_taken_0x218b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B2Cu;
        // 0x218b30: 0x9623056a  lhu         $v1, 0x56A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b2c) {
            ctx->pc = 0x218B40u;
            goto label_218b40;
        }
    }
    ctx->pc = 0x218B34u;
    // 0x218b34: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x218b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x218b38: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x218B38u;
    {
        const bool branch_taken_0x218b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B38u;
        // 0x218b3c: 0xa622056a  sh          $v0, 0x56A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b38) {
            ctx->pc = 0x218C0Cu;
            goto label_218c0c;
        }
    }
    ctx->pc = 0x218B40u;
label_218b40:
    // 0x218b40: 0x923002f7  lbu         $s0, 0x2F7($s1)
    ctx->pc = 0x218b40u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x218b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218b48: 0x1602002d  bne         $s0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x218B48u;
    {
        const bool branch_taken_0x218b48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x218b48) {
            ctx->pc = 0x218C00u;
            goto label_218c00;
        }
    }
    ctx->pc = 0x218B50u;
    // 0x218b50: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x218b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x218b54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b58: 0x0  nop
    ctx->pc = 0x218b58u;
    // NOP
    // 0x218b5c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x218b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218b60: 0x0  nop
    ctx->pc = 0x218b60u;
    // NOP
    // 0x218b64: 0x45020015  bc1fl       . + 4 + (0x15 << 2)
    ctx->pc = 0x218B64u;
    {
        const bool branch_taken_0x218b64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218b64) {
            ctx->pc = 0x218B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218B64u;
            // 0x218b68: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x218BBCu;
            goto label_218bbc;
        }
    }
    ctx->pc = 0x218B6Cu;
    // 0x218b6c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x218B6Cu;
    SET_GPR_U32(ctx, 31, 0x218B74u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x218B6Cu, 0x218B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218B74u;
label_218b74:
    // 0x218b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218b78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x218B78u;
    {
        const bool branch_taken_0x218b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218B78u;
        // 0x218b7c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b78) {
            ctx->pc = 0x218BB8u;
            goto label_218bb8;
        }
    }
    ctx->pc = 0x218B80u;
    // 0x218b80: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x218b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x218b84: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x218B84u;
    {
        const bool branch_taken_0x218b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x218b84) {
            ctx->pc = 0x218B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218B84u;
            // 0x218b88: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x218BBCu;
            goto label_218bbc;
        }
    }
    ctx->pc = 0x218B8Cu;
    // 0x218b8c: 0xc62105a8  lwc1        $f1, 0x5A8($s1)
    ctx->pc = 0x218b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218b90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218b98: 0x0  nop
    ctx->pc = 0x218b98u;
    // NOP
    // 0x218b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x218b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218ba0: 0x0  nop
    ctx->pc = 0x218ba0u;
    // NOP
    // 0x218ba4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x218BA4u;
    {
        const bool branch_taken_0x218ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x218ba4) {
            ctx->pc = 0x218BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x218BA4u;
            // 0x218ba8: 0xc6210618  lwc1        $f1, 0x618($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x218BBCu;
            goto label_218bbc;
        }
    }
    ctx->pc = 0x218BACu;
    // 0x218bac: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x218bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x218bb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x218BB0u;
    {
        const bool branch_taken_0x218bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BB0u;
        // 0x218bb4: 0xa23002f7  sb          $s0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bb0) {
            ctx->pc = 0x218BF0u;
            goto label_218bf0;
        }
    }
    ctx->pc = 0x218BB8u;
label_218bb8:
    // 0x218bb8: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x218bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_218bbc:
    // 0x218bbc: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x218bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x218bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218bc4: 0x0  nop
    ctx->pc = 0x218bc4u;
    // NOP
    // 0x218bc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x218bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218bcc: 0x0  nop
    ctx->pc = 0x218bccu;
    // NOP
    // 0x218bd0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x218BD0u;
    {
        const bool branch_taken_0x218bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218bd0) {
            ctx->pc = 0x218C00u;
            goto label_218c00;
        }
    }
    ctx->pc = 0x218BD8u;
    // 0x218bd8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x218BD8u;
    SET_GPR_U32(ctx, 31, 0x218BE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x218BD8u, 0x218BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218BE0u;
label_218be0:
    // 0x218be0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x218be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x218be4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x218BE4u;
    {
        const bool branch_taken_0x218be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BE4u;
        // 0x218be8: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218be4) {
            ctx->pc = 0x218C00u;
            goto label_218c00;
        }
    }
    ctx->pc = 0x218BECu;
    // 0x218bec: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x218becu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_218bf0:
    // 0x218bf0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x218bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x218bf4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x218bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x218bf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x218BF8u;
    {
        const bool branch_taken_0x218bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218BF8u;
        // 0x218bfc: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218bf8) {
            ctx->pc = 0x218C08u;
            goto label_218c08;
        }
    }
    ctx->pc = 0x218C00u;
label_218c00:
    // 0x218c00: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x218C00u;
    SET_GPR_U32(ctx, 31, 0x218C08u);
    ctx->pc = 0x218C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218C00u;
    // 0x218c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x218C00u, 0x218C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218C08u;
label_218c08:
    // 0x218c08: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x218c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_218c0c:
    // 0x218c0c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x218c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x218c10: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x218c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x218c14: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x218c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x218c18: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x218c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x218c1c: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x218c1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x218c20: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x218c20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x218c24: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x218c24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x218c28: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x218c28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x218c2c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x218c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x218c30: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x218c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x218c34: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x218c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x218c38: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x218c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x218c3c: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x218c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x218c40: 0x3e00008  jr          $ra
    ctx->pc = 0x218C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218C40u;
        // 0x218c44: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218C48u;
}
