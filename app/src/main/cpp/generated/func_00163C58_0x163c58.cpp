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

// Function: func_00163C58
// Address: 0x163c58 - 0x163f00
void func_00163C58_0x163c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00163C58_0x163c58");
#endif

    switch (ctx->pc) {
        case 0x163cd0u: goto label_163cd0;
        case 0x163cfcu: goto label_163cfc;
        case 0x163dc4u: goto label_163dc4;
        case 0x163e00u: goto label_163e00;
        case 0x163ebcu: goto label_163ebc;
        default: break;
    }

    ctx->pc = 0x163c58u;

    // 0x163c58: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x163c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x163c5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x163c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163c64: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x163c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x163c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163c6c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x163c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x163c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x163c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163c74: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x163c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x163c78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x163c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x163c7c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x163c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x163c80: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x163c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x163c84: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x163c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x163c88: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x163c88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x163c8c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x163c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x163c90: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x163c90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x163c94: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x163c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x163c98: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x163c98u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x163c9c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x163c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x163ca0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x163ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163ca4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x163ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x163ca8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x163ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x163cac: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x163cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163cb0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x163cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x163cb4: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x163cb4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x163cb8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x163cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x163cbc: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x163cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x163cc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x163cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163cc4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x163cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x163cc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x163cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x163ccc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x163cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_163cd0:
    // 0x163cd0: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x163cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x163cd4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x163cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x163cd8: 0x0  nop
    ctx->pc = 0x163cd8u;
    // NOP
    // 0x163cdc: 0x0  nop
    ctx->pc = 0x163cdcu;
    // NOP
    // 0x163ce0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x163CE0u;
    {
        const bool branch_taken_0x163ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x163CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CE0u;
        // 0x163ce4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ce0) {
            ctx->pc = 0x163CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163cd0;
        }
    }
    ctx->pc = 0x163CE8u;
    // 0x163ce8: 0x8ec42388  lw          $a0, 0x2388($s6)
    ctx->pc = 0x163ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9096)));
    // 0x163cec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x163cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x163cf0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x163cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x163cf4: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x163CF4u;
    SET_GPR_U32(ctx, 31, 0x163CFCu);
    ctx->pc = 0x163CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163CF4u;
    // 0x163cf8: 0x26120080  addiu       $s2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x163CF4u, 0x163CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163CFCu;
label_163cfc:
    // 0x163cfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x163cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x163d00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x163d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163d04: 0x820300f0  lb          $v1, 0xF0($s0)
    ctx->pc = 0x163d04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x163d08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d0c: 0xc6040108  lwc1        $f4, 0x108($s0)
    ctx->pc = 0x163d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163d10: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x163d10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163d14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x163d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x163d18: 0xc6030100  lwc1        $f3, 0x100($s0)
    ctx->pc = 0x163d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x163d1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163d20: 0xc6020104  lwc1        $f2, 0x104($s0)
    ctx->pc = 0x163d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163d24: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x163d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x163d28: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x163d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x163d2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x163d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163d34: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x163d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x163d38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163d3c: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x163d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d40: 0x24083800  addiu       $t0, $zero, 0x3800
    ctx->pc = 0x163d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    // 0x163d44: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x163d44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x163d48: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x163d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x163d4c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x163d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x163d50: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x163d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x163d54: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x163d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x163d58: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x163d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x163d5c: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x163d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x163d60: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x163d60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163d64: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x163d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x163d68: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x163d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x163d6c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x163d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x163d70: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x163d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x163d74: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x163d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x163d78: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x163d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163d7c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x163d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163d80: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x163d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x163d84: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x163d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x163d88: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x163d88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x163d8c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x163d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x163d90: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x163d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x163d94: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x163d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x163d98: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x163d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x163d9c: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x163d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x163da0: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x163da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163da4: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x163da4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x163da8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x163da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x163dac: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x163dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x163db0: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x163db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x163db4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x163db4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x163db8: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x163db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x163dbc: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x163DBCu;
    SET_GPR_U32(ctx, 31, 0x163DC4u);
    ctx->pc = 0x163DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163DBCu;
    // 0x163dc0: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x163DBCu, 0x163DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163DC4u;
label_163dc4:
    // 0x163dc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163dc8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x163DC8u;
    {
        const bool branch_taken_0x163dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x163dc8) {
            ctx->pc = 0x163DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163DC8u;
            // 0x163dcc: 0xc6000118  lwc1        $f0, 0x118($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x163DE0u;
            goto label_163de0;
        }
    }
    ctx->pc = 0x163DD0u;
    // 0x163dd0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x163dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x163dd4: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x163dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x163dd8: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x163dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
    // 0x163ddc: 0xc6000118  lwc1        $f0, 0x118($s0)
    ctx->pc = 0x163ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_163de0:
    // 0x163de0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x163de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x163de4: 0x8ec42388  lw          $a0, 0x2388($s6)
    ctx->pc = 0x163de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9096)));
    // 0x163de8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x163de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163dec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x163decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x163df0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x163df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x163df4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x163df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x163df8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x163DF8u;
    SET_GPR_U32(ctx, 31, 0x163E00u);
    ctx->pc = 0x163DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163DF8u;
    // 0x163dfc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x163DF8u, 0x163E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E00u;
label_163e00:
    // 0x163e00: 0x820300f0  lb          $v1, 0xF0($s0)
    ctx->pc = 0x163e00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x163e04: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x163e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x163e08: 0xc6040110  lwc1        $f4, 0x110($s0)
    ctx->pc = 0x163e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e10: 0xc6030114  lwc1        $f3, 0x114($s0)
    ctx->pc = 0x163e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x163e14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x163e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x163e18: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x163e18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x163e1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163e20: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x163e20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x163e24: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x163e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x163e28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x163e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163e2c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x163e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x163e30: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x163e30u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163e34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x163e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163e38: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x163e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x163e3c: 0x24083800  addiu       $t0, $zero, 0x3800
    ctx->pc = 0x163e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    // 0x163e40: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x163e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x163e44: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x163e44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x163e48: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x163e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x163e4c: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x163e4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x163e50: 0xc6020118  lwc1        $f2, 0x118($s0)
    ctx->pc = 0x163e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163e54: 0xc5800068  lwc1        $f0, 0x68($t4)
    ctx->pc = 0x163e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e58: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x163e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x163e5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x163e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x163e60: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x163e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x163e64: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x163e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x163e68: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x163e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x163e6c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x163e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x163e70: 0xc580006c  lwc1        $f0, 0x6C($t4)
    ctx->pc = 0x163e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e74: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x163e74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x163e78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x163e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x163e7c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x163e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x163e80: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x163e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x163e84: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x163e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x163e88: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x163e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x163e8c: 0xc580006c  lwc1        $f0, 0x6C($t4)
    ctx->pc = 0x163e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e90: 0xc5810068  lwc1        $f1, 0x68($t4)
    ctx->pc = 0x163e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x163e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x163e98: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x163e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x163e9c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x163e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x163ea0: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x163ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x163ea4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x163ea4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x163ea8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x163ea8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x163eac: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x163eacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x163eb0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x163eb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x163eb4: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x163EB4u;
    SET_GPR_U32(ctx, 31, 0x163EBCu);
    ctx->pc = 0x163EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163EB4u;
    // 0x163eb8: 0xe6b4000c  swc1        $f20, 0xC($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x163EB4u, 0x163EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163EBCu;
label_163ebc:
    // 0x163ebc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ec0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x163EC0u;
    {
        const bool branch_taken_0x163ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EC0u;
        // 0x163ec4: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ec0) {
            ctx->pc = 0x163ED4u;
            goto label_163ed4;
        }
    }
    ctx->pc = 0x163EC8u;
    // 0x163ec8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x163ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x163ecc: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x163eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x163ed0: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x163ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_163ed4:
    // 0x163ed4: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x163ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x163ed8: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x163ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x163edc: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x163edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x163ee0: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x163ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x163ee4: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x163ee4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x163ee8: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x163ee8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x163eec: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x163eecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x163ef0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x163ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x163ef4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x163ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x163EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163EF8u;
        // 0x163efc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163F00u;
}
