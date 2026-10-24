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

// Function: func_001501D0
// Address: 0x1501d0 - 0x1503b8
void func_001501D0_0x1501d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001501D0_0x1501d0");
#endif

    switch (ctx->pc) {
        case 0x15021cu: goto label_15021c;
        case 0x150268u: goto label_150268;
        case 0x1502f4u: goto label_1502f4;
        case 0x150304u: goto label_150304;
        case 0x150318u: goto label_150318;
        case 0x150328u: goto label_150328;
        case 0x150348u: goto label_150348;
        case 0x15036cu: goto label_15036c;
        case 0x15037cu: goto label_15037c;
        case 0x15038cu: goto label_15038c;
        case 0x150398u: goto label_150398;
        default: break;
    }

    ctx->pc = 0x1501d0u;

    // 0x1501d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1501d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1501d4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1501d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1501d8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1501d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1501dc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1501dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1501e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1501e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1501e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1501e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1501e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1501ec: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1501ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1501f0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1501f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1501f4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1501f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1501f8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1501f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1501fc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1501fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x150200: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x150200u;
    {
        const bool branch_taken_0x150200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x150204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150200u;
        // 0x150204: 0x8e510148  lw          $s1, 0x148($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150200) {
            ctx->pc = 0x150224u;
            goto label_150224;
        }
    }
    ctx->pc = 0x150208u;
    // 0x150208: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x150208u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x15020c: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x15020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x150210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150214: 0xc051d52  jal         func_147548
    ctx->pc = 0x150214u;
    SET_GPR_U32(ctx, 31, 0x15021Cu);
    ctx->pc = 0x150218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150214u;
    // 0x150218: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x150214u, 0x15021Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15021Cu;
label_15021c:
    // 0x15021c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x15021Cu;
    {
        const bool branch_taken_0x15021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15021Cu;
        // 0x150220: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15021c) {
            ctx->pc = 0x150328u;
            goto label_150328;
        }
    }
    ctx->pc = 0x150224u;
label_150224:
    // 0x150224: 0xc6430130  lwc1        $f3, 0x130($s2)
    ctx->pc = 0x150224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x150228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15022c: 0xc6420100  lwc1        $f2, 0x100($s2)
    ctx->pc = 0x15022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150230: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x150230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150234: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x150234u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x150238: 0xc6440134  lwc1        $f4, 0x134($s2)
    ctx->pc = 0x150238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15023c: 0xc6400108  lwc1        $f0, 0x108($s2)
    ctx->pc = 0x15023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150240: 0xc6430138  lwc1        $f3, 0x138($s2)
    ctx->pc = 0x150240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150244: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x150244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x150248: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15024c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15024cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x150250: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x150250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x150254: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x150254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x150258: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x150258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15025c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x15025cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x150260: 0xc07df68  jal         func_1F7DA0
    ctx->pc = 0x150260u;
    SET_GPR_U32(ctx, 31, 0x150268u);
    ctx->pc = 0x150264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150260u;
    // 0x150264: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x150260u, 0x150268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150268u;
label_150268:
    // 0x150268: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x150268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15026c: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x15026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150270: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x150270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x150274: 0xc6420110  lwc1        $f2, 0x110($s2)
    ctx->pc = 0x150274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150278: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x150278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x15027c: 0x0  nop
    ctx->pc = 0x15027cu;
    // NOP
    // 0x150280: 0x0  nop
    ctx->pc = 0x150280u;
    // NOP
    // 0x150284: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x150284u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x150288: 0xc6430114  lwc1        $f3, 0x114($s2)
    ctx->pc = 0x150288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15028c: 0xc6440118  lwc1        $f4, 0x118($s2)
    ctx->pc = 0x15028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x150290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150294: 0x8e4600d0  lw          $a2, 0xD0($s2)
    ctx->pc = 0x150294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x150298: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x150298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15029c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x15029cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1502a0: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x1502a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502a4: 0x0  nop
    ctx->pc = 0x1502a4u;
    // NOP
    // 0x1502a8: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1502a8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x1502ac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1502acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1502b0: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x1502b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1502b4: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1502b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1502b8: 0x0  nop
    ctx->pc = 0x1502b8u;
    // NOP
    // 0x1502bc: 0x0  nop
    ctx->pc = 0x1502bcu;
    // NOP
    // 0x1502c0: 0x4601a043  div.s       $f1, $f20, $f1
    ctx->pc = 0x1502c0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x1502c4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1502c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1502c8: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x1502c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1502ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1502d0: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x1502d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x1502d4: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x1502d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1502d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1502d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1502dc: 0xe6410124  swc1        $f1, 0x124($s2)
    ctx->pc = 0x1502dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x1502e0: 0xc6200128  lwc1        $f0, 0x128($s1)
    ctx->pc = 0x1502e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502e4: 0xe654012c  swc1        $f20, 0x12C($s2)
    ctx->pc = 0x1502e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x1502e8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1502e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1502ec: 0xc051ec6  jal         func_147B18
    ctx->pc = 0x1502ECu;
    SET_GPR_U32(ctx, 31, 0x1502F4u);
    ctx->pc = 0x1502F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502ECu;
    // 0x1502f0: 0xe6400128  swc1        $f0, 0x128($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 296), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B18u, 0x1502ECu, 0x1502F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1502F4u;
label_1502f4:
    // 0x1502f4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1502f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1502f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1502f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502fc: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x1502FCu;
    SET_GPR_U32(ctx, 31, 0x150304u);
    ctx->pc = 0x150300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502FCu;
    // 0x150300: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1502FCu, 0x150304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150304u;
label_150304:
    // 0x150304: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x150304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15030c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15030cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150310: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x150310u;
    SET_GPR_U32(ctx, 31, 0x150318u);
    ctx->pc = 0x150314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150310u;
    // 0x150314: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x150310u, 0x150318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150318u;
label_150318:
    // 0x150318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15031c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150320: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x150320u;
    SET_GPR_U32(ctx, 31, 0x150328u);
    ctx->pc = 0x150324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150320u;
    // 0x150324: 0x26460120  addiu       $a2, $s2, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x150320u, 0x150328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150328u;
label_150328:
    // 0x150328: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x150328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x15032c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x15032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x150330: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x150330u;
    {
        const bool branch_taken_0x150330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150330u;
        // 0x150334: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150330) {
            ctx->pc = 0x15039Cu;
            goto label_15039c;
        }
    }
    ctx->pc = 0x150338u;
    // 0x150338: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x150338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x15033c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15033cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150340: 0xc051f18  jal         func_147C60
    ctx->pc = 0x150340u;
    SET_GPR_U32(ctx, 31, 0x150348u);
    ctx->pc = 0x150344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150340u;
    // 0x150344: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x150340u, 0x150348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150348u;
label_150348:
    // 0x150348: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x150348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x15034c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x15034cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150350: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x150354: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x150354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x150358: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x150358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x3BD8B0u));
    // 0x15035c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15035cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x150360: 0xc64c0150  lwc1        $f12, 0x150($s2)
    ctx->pc = 0x150360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150364: 0xc0567f2  jal         func_159FC8
    ctx->pc = 0x150364u;
    SET_GPR_U32(ctx, 31, 0x15036Cu);
    ctx->pc = 0x150368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150364u;
    // 0x150368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FC8u, 0x150364u, 0x15036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15036Cu;
label_15036c:
    // 0x15036c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x150370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150374: 0xc051e2a  jal         func_1478A8
    ctx->pc = 0x150374u;
    SET_GPR_U32(ctx, 31, 0x15037Cu);
    ctx->pc = 0x150378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150374u;
    // 0x150378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1478A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1478A8u, 0x150374u, 0x15037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15037Cu;
label_15037c:
    // 0x15037c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15037cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150380: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x150380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150384: 0xc051d52  jal         func_147548
    ctx->pc = 0x150384u;
    SET_GPR_U32(ctx, 31, 0x15038Cu);
    ctx->pc = 0x150388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150384u;
    // 0x150388: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x150384u, 0x15038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15038Cu;
label_15038c:
    // 0x15038c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15038cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150390: 0xc051f10  jal         func_147C40
    ctx->pc = 0x150390u;
    SET_GPR_U32(ctx, 31, 0x150398u);
    ctx->pc = 0x150394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150390u;
    // 0x150394: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x150390u, 0x150398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150398u;
label_150398:
    // 0x150398: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x150398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15039c:
    // 0x15039c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x15039cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1503a0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1503a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1503a4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1503a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1503a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1503a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1503ac: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1503acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1503b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1503B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1503B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503B0u;
        // 0x1503b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1503B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1503B8u;
}
