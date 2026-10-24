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

// Function: func_002E9D48
// Address: 0x2e9d48 - 0x2ea798
void func_002E9D48_0x2e9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E9D48_0x2e9d48");
#endif

    switch (ctx->pc) {
        case 0x2e9df0u: goto label_2e9df0;
        case 0x2e9df8u: goto label_2e9df8;
        case 0x2e9ee0u: goto label_2e9ee0;
        case 0x2ea3e4u: goto label_2ea3e4;
        case 0x2ea514u: goto label_2ea514;
        case 0x2ea640u: goto label_2ea640;
        case 0x2ea73cu: goto label_2ea73c;
        default: break;
    }

    ctx->pc = 0x2e9d48u;

    // 0x2e9d48: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2e9d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2e9d4c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2e9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2e9d50: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2e9d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x2e9d54: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2e9d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x2e9d58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e9d58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9d5c: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2e9d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x2e9d60: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2e9d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x2e9d64: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2e9d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x2e9d68: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x2e9d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x2e9d6c: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x2e9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x2e9d70: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2e9d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x2e9d74: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2e9d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x2e9d78: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2e9d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x2e9d7c: 0xe7bb01a8  swc1        $f27, 0x1A8($sp)
    ctx->pc = 0x2e9d7cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2e9d80: 0xe7ba01a0  swc1        $f26, 0x1A0($sp)
    ctx->pc = 0x2e9d80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2e9d84: 0xe7b90198  swc1        $f25, 0x198($sp)
    ctx->pc = 0x2e9d84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2e9d88: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x2e9d88u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2e9d8c: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x2e9d8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x2e9d90: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x2e9d90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2e9d94: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2e9d94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2e9d98: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2e9d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e9d9c: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2e9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2e9da0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e9da4: 0x14400268  bnez        $v0, . + 4 + (0x268 << 2)
    ctx->pc = 0x2E9DA4u;
    {
        const bool branch_taken_0x2e9da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DA4u;
        // 0x2e9da8: 0x7bb00160  lq          $s0, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9da4) {
            ctx->pc = 0x2EA748u;
            goto label_2ea748;
        }
    }
    ctx->pc = 0x2E9DACu;
    // 0x2e9dac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e9db0: 0x9043b644  lbu         $v1, -0x49BC($v0)
    ctx->pc = 0x2e9db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x61B644u));
    // 0x2e9db4: 0x10600265  beqz        $v1, . + 4 + (0x265 << 2)
    ctx->pc = 0x2E9DB4u;
    {
        const bool branch_taken_0x2e9db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DB4u;
        // 0x2e9db8: 0x7bb10150  lq          $s1, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9db4) {
            ctx->pc = 0x2EA74Cu;
            goto label_2ea74c;
        }
    }
    ctx->pc = 0x2E9DBCu;
    // 0x2e9dbc: 0x828202ce  lb          $v0, 0x2CE($s4)
    ctx->pc = 0x2e9dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 718)));
    // 0x2e9dc0: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x2e9dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e9dc4: 0x6e00261  bltz        $s7, . + 4 + (0x261 << 2)
    ctx->pc = 0x2E9DC4u;
    {
        const bool branch_taken_0x2e9dc4 = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x2E9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DC4u;
        // 0x2e9dc8: 0xc69402b4  lwc1        $f20, 0x2B4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9dc4) {
            ctx->pc = 0x2EA74Cu;
            goto label_2ea74c;
        }
    }
    ctx->pc = 0x2E9DCCu;
    // 0x2e9dcc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2e9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e9dd0: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x2e9dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2e9dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9dd8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2e9dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2e9ddc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2e9ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2e9de0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x2e9de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x2e9de4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2e9de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2e9de8: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2e9de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2e9dec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e9decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e9df0:
    // 0x2e9df0: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2E9DF0u;
    SET_GPR_U32(ctx, 31, 0x2E9DF8u);
    ctx->pc = 0x2E9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9DF0u;
    // 0x2e9df4: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2E9DF0u, 0x2E9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DF8u;
label_2e9df8:
    // 0x2e9df8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e9df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9dfc: 0x12400251  beqz        $s2, . + 4 + (0x251 << 2)
    ctx->pc = 0x2E9DFCu;
    {
        const bool branch_taken_0x2e9dfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9DFCu;
        // 0x2e9e00: 0x3c19003c  lui         $t9, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9dfc) {
            ctx->pc = 0x2EA744u;
            goto label_2ea744;
        }
    }
    ctx->pc = 0x2E9E04u;
    // 0x2e9e04: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e9e08: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2e9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9e0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2e9e0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e10: 0xc4401184  lwc1        $f0, 0x1184($v0)
    ctx->pc = 0x2e9e10u;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9e14: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2e9e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2e9e18: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2e9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2e9e1c: 0xc4811190  lwc1        $f1, 0x1190($a0)
    ctx->pc = 0x2e9e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9e20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9e24: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2e9e24u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9e28: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2e9e28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2e9e2c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x2e9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e9e30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9e34: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x2e9e34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x2e9e38: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x2e9e38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e9e3c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2e9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e9e40: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2e9e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e9e44: 0x8ea46b80  lw          $a0, 0x6B80($s5)
    ctx->pc = 0x2e9e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2e9e48: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2e9e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e9e4c: 0x26eeffff  addiu       $t6, $s7, -0x1
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x2e9e50: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2e9e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2e9e54: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x2e9e54u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x2e9e58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e9e5c: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x2e9e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x2e9e60: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x2e9e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x2e9e64: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2e9e68: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x2e9e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x2e9e6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2e9e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9e70: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e9e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e9e74: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x2e9e78: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x2e9e78u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e9e7c: 0x3c180062  lui         $t8, 0x62
    ctx->pc = 0x2e9e7cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)98 << 16));
    // 0x2e9e80: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x2e9e80u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e9e84: 0x3c0c003c  lui         $t4, 0x3C
    ctx->pc = 0x2e9e84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)60 << 16));
    // 0x2e9e88: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e9e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e9e8c: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x2e9e90: 0xe7b80054  swc1        $f24, 0x54($sp)
    ctx->pc = 0x2e9e90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e9e94: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x2e9e94u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x2e9e98: 0xe7b80044  swc1        $f24, 0x44($sp)
    ctx->pc = 0x2e9e98u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2e9e9c: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x2e9e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e9ea0: 0xe7b80078  swc1        $f24, 0x78($sp)
    ctx->pc = 0x2e9ea0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e9ea4: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x2e9ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
    // 0x2e9ea8: 0xe7b80068  swc1        $f24, 0x68($sp)
    ctx->pc = 0x2e9ea8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e9eac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e9eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9eb0: 0xe7b80058  swc1        $f24, 0x58($sp)
    ctx->pc = 0x2e9eb0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e9eb4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x2e9eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2e9eb8: 0xe7b80048  swc1        $f24, 0x48($sp)
    ctx->pc = 0x2e9eb8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e9ebc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2e9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e9ec0: 0xe7b9007c  swc1        $f25, 0x7C($sp)
    ctx->pc = 0x2e9ec0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2e9ec4: 0xe7b9006c  swc1        $f25, 0x6C($sp)
    ctx->pc = 0x2e9ec4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2e9ec8: 0xafae00bc  sw          $t6, 0xBC($sp)
    ctx->pc = 0x2e9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 14));
    // 0x2e9ecc: 0xe7b9005c  swc1        $f25, 0x5C($sp)
    ctx->pc = 0x2e9eccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2e9ed0: 0xe7b9004c  swc1        $f25, 0x4C($sp)
    ctx->pc = 0x2e9ed0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e9ed4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2e9ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2e9ed8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e9ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9edc: 0x0  nop
    ctx->pc = 0x2e9edcu;
    // NOP
label_2e9ee0:
    // 0x2e9ee0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e9ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9ee4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2e9ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2e9ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e9ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e9eec: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e9ef0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e9ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e9ef4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2e9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2e9ef8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e9efc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2e9efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9f00: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x2e9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x2e9f04: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x2e9f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2e9f08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e9f08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e9f0c: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x2e9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x2e9f10: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9f10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e9f14: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e9f14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e9f18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9f1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e9f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2e9f20: 0x4e1ffef  bgez        $a3, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E9F20u;
    {
        const bool branch_taken_0x2e9f20 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x2E9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F20u;
        // 0x2e9f24: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f20) {
            ctx->pc = 0x2E9EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9ee0;
        }
    }
    ctx->pc = 0x2E9F28u;
    // 0x2e9f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e9f2c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2e9f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2e9f30: 0xc5681198  lwc1        $f8, 0x1198($t3)
    ctx->pc = 0x2e9f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2e9f34: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x2e9f34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x2e9f38: 0xc5ab1190  lwc1        $f11, 0x1190($t5)
    ctx->pc = 0x2e9f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2e9f3c: 0x2542b7a8  addiu       $v0, $t2, -0x4858
    ctx->pc = 0x2e9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294948776));
    // 0x2e9f40: 0xe557b7a8  swc1        $f23, -0x4858($t2)
    ctx->pc = 0x2e9f40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294948776), bits); }
    // 0x2e9f44: 0x240d0800  addiu       $t5, $zero, 0x800
    ctx->pc = 0x2e9f44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2e9f48: 0xe457000c  swc1        $f23, 0xC($v0)
    ctx->pc = 0x2e9f48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e9f4c: 0x0  nop
    ctx->pc = 0x2e9f4cu;
    // NOP
    // 0x2e9f50: 0x0  nop
    ctx->pc = 0x2e9f50u;
    // NOP
    // 0x2e9f54: 0x46085a03  div.s       $f8, $f11, $f8
    ctx->pc = 0x2e9f54u;
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[11], ctx->f[8]);
    // 0x2e9f58: 0xe4570004  swc1        $f23, 0x4($v0)
    ctx->pc = 0x2e9f58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2e9f5c: 0x3c0f000f  lui         $t7, 0xF
    ctx->pc = 0x2e9f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15 << 16));
    // 0x2e9f60: 0xe4570008  swc1        $f23, 0x8($v0)
    ctx->pc = 0x2e9f60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2e9f64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2e9f64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9f68: 0x3c013b00  lui         $at, 0x3B00
    ctx->pc = 0x2e9f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
    // 0x2e9f6c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2e9f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2e9f70: 0x35efff00  ori         $t7, $t7, 0xFF00
    ctx->pc = 0x2e9f70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65280);
    // 0x2e9f74: 0xc68002c0  lwc1        $f0, 0x2C0($s4)
    ctx->pc = 0x2e9f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9f78: 0x263174a0  addiu       $s1, $s1, 0x74A0
    ctx->pc = 0x2e9f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x2e9f7c: 0x8f2b1180  lw          $t3, 0x1180($t9)
    ctx->pc = 0x2e9f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2e9f80: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e9f84: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x2e9f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x2e9f88: 0x8faa0030  lw          $t2, 0x30($sp)
    ctx->pc = 0x2e9f88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9f8c: 0xb17c2  srl         $v0, $t3, 31
    ctx->pc = 0x2e9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x2e9f90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e9f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9f94: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2e9f94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2e9f98: 0x8d8c118c  lw          $t4, 0x118C($t4)
    ctx->pc = 0x2e9f98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4492)));
    // 0x2e9f9c: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x2e9f9cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
    // 0x2e9fa0: 0xa5103  sra         $t2, $t2, 4
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 4));
    // 0x2e9fa4: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x2e9fa4u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x2e9fa8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e9fa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e9fac: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x2e9facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x2e9fb0: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x2e9fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9fb4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2e9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2e9fb8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e9fb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e9fbc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2e9fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2e9fc0: 0x2508f800  addiu       $t0, $t0, -0x800
    ctx->pc = 0x2e9fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965248));
    // 0x2e9fc4: 0x254af800  addiu       $t2, $t2, -0x800
    ctx->pc = 0x2e9fc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294965248));
    // 0x2e9fc8: 0xc68502c4  lwc1        $f5, 0x2C4($s4)
    ctx->pc = 0x2e9fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e9fcc: 0xc17c2  srl         $v0, $t4, 31
    ctx->pc = 0x2e9fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x2e9fd0: 0x1ab6823  subu        $t5, $t5, $t3
    ctx->pc = 0x2e9fd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2e9fd4: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x2e9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x2e9fd8: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x2e9fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x2e9fdc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2e9fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2e9fe0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2e9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2e9fe4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2e9fe4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9fe8: 0x0  nop
    ctx->pc = 0x2e9fe8u;
    // NOP
    // 0x2e9fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9ff0: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x2e9ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2e9ff4: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x2e9ff4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e9ff8: 0x0  nop
    ctx->pc = 0x2e9ff8u;
    // NOP
    // 0x2e9ffc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e9ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ea000: 0x94903  sra         $t1, $t1, 4
    ctx->pc = 0x2ea000u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 4));
    // 0x2ea004: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x2ea004u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x2ea008: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2ea008u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2ea00c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2ea00cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2ea010: 0xc6c11184  lwc1        $f1, 0x1184($s6)
    ctx->pc = 0x2ea010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea014: 0xc6043  sra         $t4, $t4, 1
    ctx->pc = 0x2ea014u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 1));
    // 0x2ea018: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ea018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ea01c: 0x0  nop
    ctx->pc = 0x2ea01cu;
    // NOP
    // 0x2ea020: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2ea020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2ea024: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2ea024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2ea028: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x2ea02c: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x2ea02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2ea030: 0x461b2942  mul.s       $f5, $f5, $f27
    ctx->pc = 0x2ea030u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[27]);
    // 0x2ea034: 0x2529f800  addiu       $t1, $t1, -0x800
    ctx->pc = 0x2ea034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294965248));
    // 0x2ea038: 0x2484f800  addiu       $a0, $a0, -0x800
    ctx->pc = 0x2ea038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965248));
    // 0x2ea03c: 0x24a5f800  addiu       $a1, $a1, -0x800
    ctx->pc = 0x2ea03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965248));
    // 0x2ea040: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2ea040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2ea044: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2ea044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2ea048: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x2ea048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x2ea04c: 0xe1903  sra         $v1, $t6, 4
    ctx->pc = 0x2ea04cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), 4));
    // 0x2ea050: 0x0  nop
    ctx->pc = 0x2ea050u;
    // NOP
    // 0x2ea054: 0x0  nop
    ctx->pc = 0x2ea054u;
    // NOP
    // 0x2ea058: 0x460b4203  div.s       $f8, $f8, $f11
    ctx->pc = 0x2ea058u;
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[8], ctx->f[11]);
    // 0x2ea05c: 0x0  nop
    ctx->pc = 0x2ea05cu;
    // NOP
    // 0x2ea060: 0x0  nop
    ctx->pc = 0x2ea060u;
    // NOP
    // 0x2ea064: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2ea064u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ea068: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x2ea068u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x2ea06c: 0x0  nop
    ctx->pc = 0x2ea06cu;
    // NOP
    // 0x2ea070: 0x0  nop
    ctx->pc = 0x2ea070u;
    // NOP
    // 0x2ea074: 0x46011583  div.s       $f22, $f2, $f1
    ctx->pc = 0x2ea074u;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x2ea078: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x2ea078u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2ea07c: 0x44892000  mtc1        $t1, $f4
    ctx->pc = 0x2ea07cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ea080: 0x0  nop
    ctx->pc = 0x2ea080u;
    // NOP
    // 0x2ea084: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2ea084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2ea088: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x2ea088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x2ea08c: 0x44848000  mtc1        $a0, $f16
    ctx->pc = 0x2ea08cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2ea090: 0x0  nop
    ctx->pc = 0x2ea090u;
    // NOP
    // 0x2ea094: 0x46808420  cvt.s.w     $f16, $f16
    ctx->pc = 0x2ea094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[16], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x2ea098: 0x24c6f800  addiu       $a2, $a2, -0x800
    ctx->pc = 0x2ea098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965248));
    // 0x2ea09c: 0x44858800  mtc1        $a1, $f17
    ctx->pc = 0x2ea09cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2ea0a0: 0x0  nop
    ctx->pc = 0x2ea0a0u;
    // NOP
    // 0x2ea0a4: 0x46808c60  cvt.s.w     $f17, $f17
    ctx->pc = 0x2ea0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[17], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x2ea0a8: 0x24e7f800  addiu       $a3, $a3, -0x800
    ctx->pc = 0x2ea0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965248));
    // 0x2ea0ac: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea0acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea0b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ea0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ea0b4: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2ea0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2ea0b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ea0b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea0bc: 0x0  nop
    ctx->pc = 0x2ea0bcu;
    // NOP
    // 0x2ea0c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea0c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea0c4: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x2ea0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x2ea0c8: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x2ea0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x2ea0cc: 0x0  nop
    ctx->pc = 0x2ea0ccu;
    // NOP
    // 0x2ea0d0: 0x0  nop
    ctx->pc = 0x2ea0d0u;
    // NOP
    // 0x2ea0d4: 0x46012483  div.s       $f18, $f4, $f1
    ctx->pc = 0x2ea0d4u;
    ctx->f[18] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[1]);
    // 0x2ea0d8: 0x0  nop
    ctx->pc = 0x2ea0d8u;
    // NOP
    // 0x2ea0dc: 0x0  nop
    ctx->pc = 0x2ea0dcu;
    // NOP
    // 0x2ea0e0: 0x46011cc3  div.s       $f19, $f3, $f1
    ctx->pc = 0x2ea0e0u;
    ctx->f[19] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[1]);
    // 0x2ea0e4: 0x8ea26b80  lw          $v0, 0x6B80($s5)
    ctx->pc = 0x2ea0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2ea0e8: 0x44867800  mtc1        $a2, $f15
    ctx->pc = 0x2ea0e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea0ec: 0x0  nop
    ctx->pc = 0x2ea0ecu;
    // NOP
    // 0x2ea0f0: 0x46807be0  cvt.s.w     $f15, $f15
    ctx->pc = 0x2ea0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[15], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x2ea0f4: 0xafaf0048  sw          $t7, 0x48($sp)
    ctx->pc = 0x2ea0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 15));
    // 0x2ea0f8: 0x44874800  mtc1        $a3, $f9
    ctx->pc = 0x2ea0f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2ea0fc: 0x0  nop
    ctx->pc = 0x2ea0fcu;
    // NOP
    // 0x2ea100: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x2ea100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x2ea104: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ea104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ea108: 0x0  nop
    ctx->pc = 0x2ea108u;
    // NOP
    // 0x2ea10c: 0x0  nop
    ctx->pc = 0x2ea10cu;
    // NOP
    // 0x2ea110: 0x46010383  div.s       $f14, $f0, $f1
    ctx->pc = 0x2ea110u;
    ctx->f[14] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ea114: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ea114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ea118: 0x46088102  mul.s       $f4, $f16, $f8
    ctx->pc = 0x2ea118u;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
    // 0x2ea11c: 0x41103  sra         $v0, $a0, 4
    ctx->pc = 0x2ea11cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2ea120: 0x46088942  mul.s       $f5, $f17, $f8
    ctx->pc = 0x2ea120u;
    ctx->f[5] = FPU_MUL_S(ctx->f[17], ctx->f[8]);
    // 0x2ea124: 0x2442f800  addiu       $v0, $v0, -0x800
    ctx->pc = 0x2ea124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965248));
    // 0x2ea128: 0x46087982  mul.s       $f6, $f15, $f8
    ctx->pc = 0x2ea128u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[8]);
    // 0x2ea12c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x2ea12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2ea130: 0x460849c2  mul.s       $f7, $f9, $f8
    ctx->pc = 0x2ea130u;
    ctx->f[7] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2ea134: 0xafb0004c  sw          $s0, 0x4C($sp)
    ctx->pc = 0x2ea134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 16));
    // 0x2ea138: 0x4616a000  add.s       $f0, $f20, $f22
    ctx->pc = 0x2ea138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2ea13c: 0xe719b640  swc1        $f25, -0x49C0($t8)
    ctx->pc = 0x2ea13cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294948416), bits); }
    // 0x2ea140: 0x4604a100  add.s       $f4, $f20, $f4
    ctx->pc = 0x2ea140u;
    ctx->f[4] = FPU_ADD_S(ctx->f[20], ctx->f[4]);
    // 0x2ea144: 0xafae0040  sw          $t6, 0x40($sp)
    ctx->pc = 0x2ea144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 14));
    // 0x2ea148: 0x4605a140  add.s       $f5, $f20, $f5
    ctx->pc = 0x2ea148u;
    ctx->f[5] = FPU_ADD_S(ctx->f[20], ctx->f[5]);
    // 0x2ea14c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x2ea14cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x2ea150: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2ea150u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2ea154: 0x46066180  add.s       $f6, $f12, $f6
    ctx->pc = 0x2ea154u;
    ctx->f[6] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x2ea158: 0x460761c0  add.s       $f7, $f12, $f7
    ctx->pc = 0x2ea158u;
    ctx->f[7] = FPU_ADD_S(ctx->f[12], ctx->f[7]);
    // 0x2ea15c: 0x46136040  add.s       $f1, $f12, $f19
    ctx->pc = 0x2ea15cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[19]);
    // 0x2ea160: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ea160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ea164: 0x4612a080  add.s       $f2, $f20, $f18
    ctx->pc = 0x2ea164u;
    ctx->f[2] = FPU_ADD_S(ctx->f[20], ctx->f[18]);
    // 0x2ea168: 0x461560c0  add.s       $f3, $f12, $f21
    ctx->pc = 0x2ea168u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    // 0x2ea16c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea170: 0x0  nop
    ctx->pc = 0x2ea170u;
    // NOP
    // 0x2ea174: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2ea174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2ea178: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2ea178u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2ea17c: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x2ea17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2ea180: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x2ea180u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x2ea184: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x2ea184u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x2ea188: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x2ea188u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ea18c: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x2ea18cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2ea190: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2ea190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ea194: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x2ea194u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2ea198: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x2ea198u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ea19c: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2ea19cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2ea1a0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x2ea1a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ea1a4: 0x46086a02  mul.s       $f8, $f13, $f8
    ctx->pc = 0x2ea1a4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[13], ctx->f[8]);
    // 0x2ea1a8: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x2ea1a8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ea1ac: 0x460a7000  add.s       $f0, $f14, $f10
    ctx->pc = 0x2ea1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
    // 0x2ea1b0: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x2ea1b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ea1b4: 0xe7a7008c  swc1        $f7, 0x8C($sp)
    ctx->pc = 0x2ea1b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2ea1b8: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x2ea1b8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x2ea1bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ea1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2ea1c0: 0x8e220578  lw          $v0, 0x578($s1)
    ctx->pc = 0x2ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1400)));
    // 0x2ea1c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ea1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ea1c8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2EA1C8u;
    {
        const bool branch_taken_0x2ea1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1C8u;
        // 0x2ea1cc: 0xe7a80090  swc1        $f8, 0x90($sp) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1c8) {
            ctx->pc = 0x2EA2A4u;
            goto label_2ea2a4;
        }
    }
    ctx->pc = 0x2EA1D0u;
    // 0x2ea1d0: 0x16e00034  bnez        $s7, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EA1D0u;
    {
        const bool branch_taken_0x2ea1d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1D0u;
        // 0x2ea1d4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1d0) {
            ctx->pc = 0x2EA2A4u;
            goto label_2ea2a4;
        }
    }
    ctx->pc = 0x2EA1D8u;
    // 0x2ea1d8: 0x0  nop
    ctx->pc = 0x2ea1d8u;
    // NOP
    // 0x2ea1dc: 0x0  nop
    ctx->pc = 0x2ea1dcu;
    // NOP
    // 0x2ea1e0: 0x460b8183  div.s       $f6, $f16, $f11
    ctx->pc = 0x2ea1e0u;
    ctx->f[6] = ps2FpuDivide(ctx->fcr31, ctx->f[16], ctx->f[11]);
    // 0x2ea1e4: 0xc4401188  lwc1        $f0, 0x1188($v0)
    ctx->pc = 0x2ea1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea1ec: 0x0  nop
    ctx->pc = 0x2ea1ecu;
    // NOP
    // 0x2ea1f0: 0x0  nop
    ctx->pc = 0x2ea1f0u;
    // NOP
    // 0x2ea1f4: 0x460b89c3  div.s       $f7, $f17, $f11
    ctx->pc = 0x2ea1f4u;
    ctx->f[7] = ps2FpuDivide(ctx->fcr31, ctx->f[17], ctx->f[11]);
    // 0x2ea1f8: 0x0  nop
    ctx->pc = 0x2ea1f8u;
    // NOP
    // 0x2ea1fc: 0x0  nop
    ctx->pc = 0x2ea1fcu;
    // NOP
    // 0x2ea200: 0x460b7a03  div.s       $f8, $f15, $f11
    ctx->pc = 0x2ea200u;
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[15], ctx->f[11]);
    // 0x2ea204: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x2ea204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x2ea208: 0x0  nop
    ctx->pc = 0x2ea208u;
    // NOP
    // 0x2ea20c: 0x0  nop
    ctx->pc = 0x2ea20cu;
    // NOP
    // 0x2ea210: 0x460b4a43  div.s       $f9, $f9, $f11
    ctx->pc = 0x2ea210u;
    ctx->f[9] = ps2FpuDivide(ctx->fcr31, ctx->f[9], ctx->f[11]);
    // 0x2ea214: 0x0  nop
    ctx->pc = 0x2ea214u;
    // NOP
    // 0x2ea218: 0x0  nop
    ctx->pc = 0x2ea218u;
    // NOP
    // 0x2ea21c: 0x460b6903  div.s       $f4, $f13, $f11
    ctx->pc = 0x2ea21cu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[11]);
    // 0x2ea220: 0x4600b042  mul.s       $f1, $f22, $f0
    ctx->pc = 0x2ea220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2ea224: 0x46009882  mul.s       $f2, $f19, $f0
    ctx->pc = 0x2ea224u;
    ctx->f[2] = FPU_MUL_S(ctx->f[19], ctx->f[0]);
    // 0x2ea228: 0x460090c2  mul.s       $f3, $f18, $f0
    ctx->pc = 0x2ea228u;
    ctx->f[3] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x2ea22c: 0x4600a942  mul.s       $f5, $f21, $f0
    ctx->pc = 0x2ea22cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2ea230: 0x46096240  add.s       $f9, $f12, $f9
    ctx->pc = 0x2ea230u;
    ctx->f[9] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x2ea234: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x2ea234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2ea238: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x2ea238u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2ea23c: 0x4606a180  add.s       $f6, $f20, $f6
    ctx->pc = 0x2ea23cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[20], ctx->f[6]);
    // 0x2ea240: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x2ea240u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2ea244: 0x4607a1c0  add.s       $f7, $f20, $f7
    ctx->pc = 0x2ea244u;
    ctx->f[7] = FPU_ADD_S(ctx->f[20], ctx->f[7]);
    // 0x2ea248: 0x4603a0c0  add.s       $f3, $f20, $f3
    ctx->pc = 0x2ea248u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[3]);
    // 0x2ea24c: 0x46086200  add.s       $f8, $f12, $f8
    ctx->pc = 0x2ea24cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[12], ctx->f[8]);
    // 0x2ea250: 0x46056140  add.s       $f5, $f12, $f5
    ctx->pc = 0x2ea250u;
    ctx->f[5] = FPU_ADD_S(ctx->f[12], ctx->f[5]);
    // 0x2ea254: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x2ea254u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
    // 0x2ea258: 0x460a0840  add.s       $f1, $f1, $f10
    ctx->pc = 0x2ea258u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
    // 0x2ea25c: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x2ea25cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2ea260: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x2ea260u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
    // 0x2ea264: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x2ea264u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ea268: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x2ea268u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
    // 0x2ea26c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2ea26cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ea270: 0x460a18c0  add.s       $f3, $f3, $f10
    ctx->pc = 0x2ea270u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[10]);
    // 0x2ea274: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x2ea274u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ea278: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x2ea278u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
    // 0x2ea27c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2ea27cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ea280: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x2ea280u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x2ea284: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x2ea284u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ea288: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x2ea288u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x2ea28c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2ea28cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2ea290: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x2ea290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2ea294: 0xe7a80088  swc1        $f8, 0x88($sp)
    ctx->pc = 0x2ea294u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ea298: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x2ea298u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2ea29c: 0xe7a9008c  swc1        $f9, 0x8C($sp)
    ctx->pc = 0x2ea29cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2ea2a0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2ea2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2ea2a4:
    // 0x2ea2a4: 0x6a82018f  ldl         $v0, 0x18F($s4)
    ctx->pc = 0x2ea2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ea2a8: 0x6e820188  ldr         $v0, 0x188($s4)
    ctx->pc = 0x2ea2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ea2ac: 0x6a830197  ldl         $v1, 0x197($s4)
    ctx->pc = 0x2ea2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ea2b0: 0x6e830190  ldr         $v1, 0x190($s4)
    ctx->pc = 0x2ea2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ea2b4: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x2ea2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea2b8: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x2ea2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea2bc: 0xb3a300af  sdl         $v1, 0xAF($sp)
    ctx->pc = 0x2ea2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea2c0: 0xb7a300a8  sdr         $v1, 0xA8($sp)
    ctx->pc = 0x2ea2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea2c4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2ea2c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ea2c8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2ea2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea2cc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2ea2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ea2d0: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x2ea2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ea2d4: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x2ea2d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
    // 0x2ea2d8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2ea2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea2dc: 0x461a1082  mul.s       $f2, $f2, $f26
    ctx->pc = 0x2ea2dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[26]);
    // 0x2ea2e0: 0x461a18c2  mul.s       $f3, $f3, $f26
    ctx->pc = 0x2ea2e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[26]);
    // 0x2ea2e4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ea2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ea2e8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2ea2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ea2ec: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x2ea2ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x2ea2f0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2ea2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ea2f4: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x2ea2f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ea2f8: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x2ea2f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ea2fc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2ea2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2ea300: 0x6bae00a7  ldl         $t6, 0xA7($sp)
    ctx->pc = 0x2ea300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2ea304: 0x6fae00a0  ldr         $t6, 0xA0($sp)
    ctx->pc = 0x2ea304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2ea308: 0x6ba200af  ldl         $v0, 0xAF($sp)
    ctx->pc = 0x2ea308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ea30c: 0x6fa200a8  ldr         $v0, 0xA8($sp)
    ctx->pc = 0x2ea30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ea310: 0xb3ae0077  sdl         $t6, 0x77($sp)
    ctx->pc = 0x2ea310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea314: 0xb7ae0070  sdr         $t6, 0x70($sp)
    ctx->pc = 0x2ea314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea318: 0xb3a2007f  sdl         $v0, 0x7F($sp)
    ctx->pc = 0x2ea318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea31c: 0xb7a20078  sdr         $v0, 0x78($sp)
    ctx->pc = 0x2ea31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ea320: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2ea320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea324: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2ea324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea328: 0x0  nop
    ctx->pc = 0x2ea328u;
    // NOP
    // 0x2ea32c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA32Cu;
    {
        const bool branch_taken_0x2ea32c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea32c) {
            ctx->pc = 0x2EA330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA32Cu;
            // 0x2ea330: 0xe7a40070  swc1        $f4, 0x70($sp) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA334u;
            goto label_2ea334;
        }
    }
    ctx->pc = 0x2EA334u;
label_2ea334:
    // 0x2ea334: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2ea334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea338: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2ea338u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea33c: 0x0  nop
    ctx->pc = 0x2ea33cu;
    // NOP
    // 0x2ea340: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA340u;
    {
        const bool branch_taken_0x2ea340 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea340) {
            ctx->pc = 0x2EA344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA340u;
            // 0x2ea344: 0xe7a40074  swc1        $f4, 0x74($sp) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA348u;
            goto label_2ea348;
        }
    }
    ctx->pc = 0x2EA348u;
label_2ea348:
    // 0x2ea348: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2ea348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea34c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2ea34cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea350: 0x0  nop
    ctx->pc = 0x2ea350u;
    // NOP
    // 0x2ea354: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA354u;
    {
        const bool branch_taken_0x2ea354 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea354) {
            ctx->pc = 0x2EA358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA354u;
            // 0x2ea358: 0xe7a40078  swc1        $f4, 0x78($sp) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA35Cu;
            goto label_2ea35c;
        }
    }
    ctx->pc = 0x2EA35Cu;
label_2ea35c:
    // 0x2ea35c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2ea35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea360: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2ea360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea364: 0x0  nop
    ctx->pc = 0x2ea364u;
    // NOP
    // 0x2ea368: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA368u;
    {
        const bool branch_taken_0x2ea368 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea368) {
            ctx->pc = 0x2EA36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA368u;
            // 0x2ea36c: 0xe7a4007c  swc1        $f4, 0x7C($sp) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA370u;
            goto label_2ea370;
        }
    }
    ctx->pc = 0x2EA370u;
label_2ea370:
    // 0x2ea370: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2ea370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea374: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ea374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea378: 0x0  nop
    ctx->pc = 0x2ea378u;
    // NOP
    // 0x2ea37c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA37Cu;
    {
        const bool branch_taken_0x2ea37c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea37c) {
            ctx->pc = 0x2EA380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA37Cu;
            // 0x2ea380: 0xe7a50070  swc1        $f5, 0x70($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA384u;
            goto label_2ea384;
        }
    }
    ctx->pc = 0x2EA384u;
label_2ea384:
    // 0x2ea384: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2ea384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea388: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ea388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea38c: 0x0  nop
    ctx->pc = 0x2ea38cu;
    // NOP
    // 0x2ea390: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA390u;
    {
        const bool branch_taken_0x2ea390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea390) {
            ctx->pc = 0x2EA394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA390u;
            // 0x2ea394: 0xe6650004  swc1        $f5, 0x4($s3) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA398u;
            goto label_2ea398;
        }
    }
    ctx->pc = 0x2EA398u;
label_2ea398:
    // 0x2ea398: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2ea398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea39c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ea39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea3a0: 0x0  nop
    ctx->pc = 0x2ea3a0u;
    // NOP
    // 0x2ea3a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA3A4u;
    {
        const bool branch_taken_0x2ea3a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea3a4) {
            ctx->pc = 0x2EA3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA3A4u;
            // 0x2ea3a8: 0xe6650008  swc1        $f5, 0x8($s3) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA3ACu;
            goto label_2ea3ac;
        }
    }
    ctx->pc = 0x2EA3ACu;
label_2ea3ac:
    // 0x2ea3ac: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2ea3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea3b0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ea3b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ea3b4: 0x0  nop
    ctx->pc = 0x2ea3b4u;
    // NOP
    // 0x2ea3b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EA3B8u;
    {
        const bool branch_taken_0x2ea3b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ea3b8) {
            ctx->pc = 0x2EA3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA3B8u;
            // 0x2ea3bc: 0xe665000c  swc1        $f5, 0xC($s3) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA3C0u;
            goto label_2ea3c0;
        }
    }
    ctx->pc = 0x2EA3C0u;
label_2ea3c0:
    // 0x2ea3c0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2ea3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea3c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ea3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3c8: 0x7fb900c0  sq          $t9, 0xC0($sp)
    ctx->pc = 0x2ea3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 25));
    // 0x2ea3cc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2ea3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3d0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x2ea3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x2ea3d4: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2ea3d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2ea3d8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2ea3d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea3dc: 0xc0ba9e6  jal         func_2EA798
    ctx->pc = 0x2EA3DCu;
    SET_GPR_U32(ctx, 31, 0x2EA3E4u);
    ctx->pc = 0x2EA3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA3DCu;
    // 0x2ea3e0: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA798u, 0x2EA3DCu, 0x2EA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA3E4u;
label_2ea3e4:
    // 0x2ea3e4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2ea3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea3e8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x2ea3ec: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x2ea3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ea3f0: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x2ea3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x2ea3f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea3f8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x2ea3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ea3fc: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2ea3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea400: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2ea400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2ea404: 0x3463001c  ori         $v1, $v1, 0x1C
    ctx->pc = 0x2ea404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
    // 0x2ea408: 0x3c0e0062  lui         $t6, 0x62
    ctx->pc = 0x2ea408u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)98 << 16));
    // 0x2ea40c: 0x34048176  ori         $a0, $zero, 0x8176
    ctx->pc = 0x2ea40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33142);
    // 0x2ea410: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2ea410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2ea414: 0x3484801b  ori         $a0, $a0, 0x801B
    ctx->pc = 0x2ea414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32795);
    // 0x2ea418: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x2ea418u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2ea41c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ea420: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2ea420u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2ea424: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x2ea424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ea428: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2ea428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2ea42c: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x2ea42cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ea430: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2ea430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2ea434: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea434u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x2ea438: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2ea438u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ea43c: 0xadc0b7a0  sw          $zero, -0x4860($t6)
    ctx->pc = 0x2ea43cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294948768), GPR_U32(ctx, 0));
    // 0x2ea440: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x2ea440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x2ea444: 0x34c6000c  ori         $a2, $a2, 0xC
    ctx->pc = 0x2ea444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12);
    // 0x2ea448: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x2ea448u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x2ea44c: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x2ea44cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x2ea450: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ea454: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2ea454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea458: 0xae450008  sw          $a1, 0x8($s2)
    ctx->pc = 0x2ea458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 5));
    // 0x2ea45c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2ea45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2ea460: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2ea460u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea464: 0xfe070028  sd          $a3, 0x28($s0)
    ctx->pc = 0x2ea464u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 7));
    // 0x2ea468: 0x3c0e3a00  lui         $t6, 0x3A00
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)14848 << 16));
    // 0x2ea46c: 0x35ce00f8  ori         $t6, $t6, 0xF8
    ctx->pc = 0x2ea46cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)248);
    // 0x2ea470: 0xfe080038  sd          $t0, 0x38($s0)
    ctx->pc = 0x2ea470u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 8));
    // 0x2ea474: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x2ea474u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ea478: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x2ea478u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
    // 0x2ea47c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea47cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea480: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2ea480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ea484: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x2ea484u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x2ea488: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ea488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ea48c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2ea48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ea490: 0x340aff00  ori         $t2, $zero, 0xFF00
    ctx->pc = 0x2ea490u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ea494: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x2ea494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x2ea498: 0x354a0070  ori         $t2, $t2, 0x70
    ctx->pc = 0x2ea498u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)112);
    // 0x2ea49c: 0x2408003b  addiu       $t0, $zero, 0x3B
    ctx->pc = 0x2ea49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2ea4a0: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2ea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2ea4a4: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x2ea4a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ea4a8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2ea4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ea4ac: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2ea4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea4b0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2ea4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2ea4b4: 0xfe030048  sd          $v1, 0x48($s0)
    ctx->pc = 0x2ea4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
    // 0x2ea4b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ea4b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ea4bc: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x2ea4bcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ea4c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea4c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ea4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4c8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2ea4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2ea4cc: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2ea4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2ea4d0: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x2ea4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x2ea4d4: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x2ea4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2ea4d8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2ea4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ea4dc: 0x7bb900c0  lq          $t9, 0xC0($sp)
    ctx->pc = 0x2ea4dcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ea4e0: 0x8f261180  lw          $a2, 0x1180($t9)
    ctx->pc = 0x2ea4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2ea4e4: 0xfe020058  sd          $v0, 0x58($s0)
    ctx->pc = 0x2ea4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 2));
    // 0x2ea4e8: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x2ea4ec: 0x3c6182a  slt         $v1, $fp, $a2
    ctx->pc = 0x2ea4ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ea4f0: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x2ea4f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2ea4f4: 0xfe070060  sd          $a3, 0x60($s0)
    ctx->pc = 0x2ea4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 7));
    // 0x2ea4f8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ea4f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ea4fc: 0xfe080068  sd          $t0, 0x68($s0)
    ctx->pc = 0x2ea4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 8));
    // 0x2ea500: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ea500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ea504: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2ea504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2ea508: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x2ea508u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x2ea50c: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2EA50Cu;
    SET_GPR_U32(ctx, 31, 0x2EA514u);
    ctx->pc = 0x2EA510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA50Cu;
    // 0x2ea510: 0x7fb900c0  sq          $t9, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2EA50Cu, 0x2EA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA514u;
label_2ea514:
    // 0x2ea514: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2EA514u;
    {
        const bool branch_taken_0x2ea514 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA514u;
        // 0x2ea518: 0x7bb900c0  lq          $t9, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea514) {
            ctx->pc = 0x2EA55Cu;
            goto label_2ea55c;
        }
    }
    ctx->pc = 0x2EA51Cu;
    // 0x2ea51c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ea51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ea520: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2ea520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ea524: 0x52ef8  dsll        $a1, $a1, 27
    ctx->pc = 0x2ea524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 27);
    // 0x2ea528: 0x34a5cc82  ori         $a1, $a1, 0xCC82
    ctx->pc = 0x2ea528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52354);
    // 0x2ea52c: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x2ea52cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x2ea530: 0x8c431188  lw          $v1, 0x1188($v0)
    ctx->pc = 0x2ea530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4488)));
    // 0x2ea534: 0x3c3202a  slt         $a0, $fp, $v1
    ctx->pc = 0x2ea534u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ea538: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ea538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ea53c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2ea53cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ea540: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ea540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ea544: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ea544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ea548: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2ea548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2ea54c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ea54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ea550: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x2ea550u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x2ea554: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA554u;
    {
        const bool branch_taken_0x2ea554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA554u;
        // 0x2ea558: 0xfe430008  sd          $v1, 0x8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea554) {
            ctx->pc = 0x2EA580u;
            goto label_2ea580;
        }
    }
    ctx->pc = 0x2EA55Cu;
label_2ea55c:
    // 0x2ea55c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2ea55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ea560: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x2ea560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x2ea564: 0x3442c402  ori         $v0, $v0, 0xC402
    ctx->pc = 0x2ea564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50178);
    // 0x2ea568: 0x214b8  dsll        $v0, $v0, 18
    ctx->pc = 0x2ea568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 18);
    // 0x2ea56c: 0x34429e00  ori         $v0, $v0, 0x9E00
    ctx->pc = 0x2ea56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40448);
    // 0x2ea570: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2ea570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2ea574: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ea574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ea578: 0xfe020080  sd          $v0, 0x80($s0)
    ctx->pc = 0x2ea578u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 2));
    // 0x2ea57c: 0xfe440008  sd          $a0, 0x8($s2)
    ctx->pc = 0x2ea57cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 4));
label_2ea580:
    // 0x2ea580: 0x26120090  addiu       $s2, $s0, 0x90
    ctx->pc = 0x2ea580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ea584: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2ea584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2ea588: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2ea588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea58c: 0xc4a2b640  lwc1        $f2, -0x49C0($a1)
    ctx->pc = 0x2ea58cu;
    { uint32_t bits = FAST_READ32(0x61B640u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ea590: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea594: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2ea594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea598: 0x132238  dsll        $a0, $s3, 8
    ctx->pc = 0x2ea598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << 8);
    // 0x2ea59c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ea59cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ea5a0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x2ea5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x2ea5a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ea5a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ea5a8: 0x161438  dsll        $v0, $s6, 16
    ctx->pc = 0x2ea5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << 16);
    // 0x2ea5ac: 0x2a42025  or          $a0, $s5, $a0
    ctx->pc = 0x2ea5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x2ea5b0: 0x111e38  dsll        $v1, $s1, 24
    ctx->pc = 0x2ea5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << 24);
    // 0x2ea5b4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2ea5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ea5b8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ea5b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ea5bc: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2ea5bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ea5c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2ea5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ea5c4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2ea5c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5c8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ea5c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ea5cc: 0x9ca2b640  lwu         $v0, -0x49C0($a1)
    ctx->pc = 0x2ea5ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294948416)));
    // 0x2ea5d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ea5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea5d4: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x2ea5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x2ea5d8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ea5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea5dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea5e0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2ea5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2ea5e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2ea5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2ea5e8: 0x2471b7a8  addiu       $s1, $v1, -0x4858
    ctx->pc = 0x2ea5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948776));
    // 0x2ea5ec: 0xfe440000  sd          $a0, 0x0($s2)
    ctx->pc = 0x2ea5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 4));
    // 0x2ea5f0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2ea5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2ea5f4: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ea5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ea5f8: 0x24a93b80  addiu       $t1, $a1, 0x3B80
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
    // 0x2ea5fc: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2ea5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2ea600: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ea600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea604: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ea608: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2ea608u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea60c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2ea60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea610: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ea610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ea614: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ea614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ea618: 0x8fab00b4  lw          $t3, 0xB4($sp)
    ctx->pc = 0x2ea618u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2ea61c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ea61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ea620: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea624: 0x8faa00b8  lw          $t2, 0xB8($sp)
    ctx->pc = 0x2ea624u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ea628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ea628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ea62c: 0xfe460008  sd          $a2, 0x8($s2)
    ctx->pc = 0x2ea62cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 6));
    // 0x2ea630: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x2ea630u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea634: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x2ea634u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x2ea638: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x2ea638u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ea63c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ea63cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2ea640:
    // 0x2ea640: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ea644: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ea644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ea648: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2ea648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2ea64c: 0x2d070005  sltiu       $a3, $t0, 0x5
    ctx->pc = 0x2ea64cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ea650: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea654: 0x1422021  addu        $a0, $t2, $v0
    ctx->pc = 0x2ea654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2ea658: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x2ea658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ea65c: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x2ea65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2ea660: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2ea660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea664: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2ea664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ea668: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2ea668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ea66c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2ea66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea670: 0x3a33021  addu        $a2, $sp, $v1
    ctx->pc = 0x2ea670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2ea674: 0xfe4f0008  sd          $t7, 0x8($s2)
    ctx->pc = 0x2ea674u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 15));
    // 0x2ea678: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea67c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ea67cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ea680: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2ea680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2ea684: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x2ea684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2ea688: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ea688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ea68c: 0x9ca20000  lwu         $v0, 0x0($a1)
    ctx->pc = 0x2ea68cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ea690: 0xfe4e0008  sd          $t6, 0x8($s2)
    ctx->pc = 0x2ea690u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 14));
    // 0x2ea694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea698: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x2ea698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x2ea69c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2ea69cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2ea6a0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ea6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ea6a4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x2ea6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2ea6a8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2ea6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ea6ac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2ea6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ea6b0: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2ea6b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2ea6b4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ea6b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ea6b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ea6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ea6bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ea6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ea6c0: 0xfe4d0008  sd          $t5, 0x8($s2)
    ctx->pc = 0x2ea6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 13));
    // 0x2ea6c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea6c8: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x2ea6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x2ea6cc: 0x14e0ffdc  bnez        $a3, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2EA6CCu;
    {
        const bool branch_taken_0x2ea6cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6CCu;
        // 0x2ea6d0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea6cc) {
            ctx->pc = 0x2EA640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ea640;
        }
    }
    ctx->pc = 0x2EA6D4u;
    // 0x2ea6d4: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ea6d8: 0x3c0e3a00  lui         $t6, 0x3A00
    ctx->pc = 0x2ea6d8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)14848 << 16));
    // 0x2ea6dc: 0x35ce00f8  ori         $t6, $t6, 0xF8
    ctx->pc = 0x2ea6dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)248);
    // 0x2ea6e0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x2ea6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x2ea6e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2ea6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ea6e8: 0xfe4e0000  sd          $t6, 0x0($s2)
    ctx->pc = 0x2ea6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 14));
    // 0x2ea6ec: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x2ea6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ea6f0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ea6f4: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x2ea6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ea6f8: 0x8f231180  lw          $v1, 0x1180($t9)
    ctx->pc = 0x2ea6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 4480)));
    // 0x2ea6fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ea6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea700: 0xfe450008  sd          $a1, 0x8($s2)
    ctx->pc = 0x2ea700u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 5));
    // 0x2ea704: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ea704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea708: 0xe3382a  slt         $a3, $a3, $v1
    ctx->pc = 0x2ea708u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ea70c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ea70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ea710: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x2ea710u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ea714: 0x8fb700bc  lw          $s7, 0xBC($sp)
    ctx->pc = 0x2ea714u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2ea718: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ea71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea720: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ea720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ea724: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ea724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea728: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2ea728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2ea72c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2ea72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea730: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2ea730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea734: 0xc0bfe28  jal         func_2FF8A0
    ctx->pc = 0x2EA734u;
    SET_GPR_U32(ctx, 31, 0x2EA73Cu);
    ctx->pc = 0x2EA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA734u;
    // 0x2ea738: 0xfe420000  sd          $v0, 0x0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF8A0u, 0x2EA734u, 0x2EA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA73Cu;
label_2ea73c:
    // 0x2ea73c: 0x6e1fdac  bgez        $s7, . + 4 + (-0x254 << 2)
    ctx->pc = 0x2EA73Cu;
    {
        const bool branch_taken_0x2ea73c = (GPR_S64(ctx, 23) >= 0);
        if (branch_taken_0x2ea73c) {
            ctx->pc = 0x2E9DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9df0;
        }
    }
    ctx->pc = 0x2EA744u;
label_2ea744:
    // 0x2ea744: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2ea744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2ea748:
    // 0x2ea748: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2ea748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2ea74c:
    // 0x2ea74c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2ea74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2ea750: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2ea750u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2ea754: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2ea754u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ea758: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2ea758u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ea75c: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2ea75cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ea760: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2ea760u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ea764: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2ea764u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ea768: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2ea768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ea76c: 0xc7bb01a8  lwc1        $f27, 0x1A8($sp)
    ctx->pc = 0x2ea76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2ea770: 0xc7ba01a0  lwc1        $f26, 0x1A0($sp)
    ctx->pc = 0x2ea770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2ea774: 0xc7b90198  lwc1        $f25, 0x198($sp)
    ctx->pc = 0x2ea774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2ea778: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x2ea778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2ea77c: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x2ea77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2ea780: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x2ea780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ea784: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2ea784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ea788: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2ea788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ea78c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA78Cu;
        // 0x2ea790: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA794u;
    // 0x2ea794: 0x0  nop
    ctx->pc = 0x2ea794u;
    // NOP
    ctx->pc = 0x2ea798u;
}
