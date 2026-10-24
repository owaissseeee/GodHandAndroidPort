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

// Function: func_002F4BE0
// Address: 0x2f4be0 - 0x2f4d28
void func_002F4BE0_0x2f4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F4BE0_0x2f4be0");
#endif

    switch (ctx->pc) {
        case 0x2f4be0u: goto label_2f4be0;
        case 0x2f4be4u: goto label_2f4be4;
        case 0x2f4be8u: goto label_2f4be8;
        case 0x2f4becu: goto label_2f4bec;
        case 0x2f4bf0u: goto label_2f4bf0;
        case 0x2f4bf4u: goto label_2f4bf4;
        case 0x2f4bf8u: goto label_2f4bf8;
        case 0x2f4bfcu: goto label_2f4bfc;
        case 0x2f4c00u: goto label_2f4c00;
        case 0x2f4c04u: goto label_2f4c04;
        case 0x2f4c08u: goto label_2f4c08;
        case 0x2f4c0cu: goto label_2f4c0c;
        case 0x2f4c10u: goto label_2f4c10;
        case 0x2f4c14u: goto label_2f4c14;
        case 0x2f4c18u: goto label_2f4c18;
        case 0x2f4c1cu: goto label_2f4c1c;
        case 0x2f4c20u: goto label_2f4c20;
        case 0x2f4c24u: goto label_2f4c24;
        case 0x2f4c28u: goto label_2f4c28;
        case 0x2f4c2cu: goto label_2f4c2c;
        case 0x2f4c30u: goto label_2f4c30;
        case 0x2f4c34u: goto label_2f4c34;
        case 0x2f4c38u: goto label_2f4c38;
        case 0x2f4c3cu: goto label_2f4c3c;
        case 0x2f4c40u: goto label_2f4c40;
        case 0x2f4c44u: goto label_2f4c44;
        case 0x2f4c48u: goto label_2f4c48;
        case 0x2f4c4cu: goto label_2f4c4c;
        case 0x2f4c50u: goto label_2f4c50;
        case 0x2f4c54u: goto label_2f4c54;
        case 0x2f4c58u: goto label_2f4c58;
        case 0x2f4c5cu: goto label_2f4c5c;
        case 0x2f4c60u: goto label_2f4c60;
        case 0x2f4c64u: goto label_2f4c64;
        case 0x2f4c68u: goto label_2f4c68;
        case 0x2f4c6cu: goto label_2f4c6c;
        case 0x2f4c70u: goto label_2f4c70;
        case 0x2f4c74u: goto label_2f4c74;
        case 0x2f4c78u: goto label_2f4c78;
        case 0x2f4c7cu: goto label_2f4c7c;
        case 0x2f4c80u: goto label_2f4c80;
        case 0x2f4c84u: goto label_2f4c84;
        case 0x2f4c88u: goto label_2f4c88;
        case 0x2f4c8cu: goto label_2f4c8c;
        case 0x2f4c90u: goto label_2f4c90;
        case 0x2f4c94u: goto label_2f4c94;
        case 0x2f4c98u: goto label_2f4c98;
        case 0x2f4c9cu: goto label_2f4c9c;
        case 0x2f4ca0u: goto label_2f4ca0;
        case 0x2f4ca4u: goto label_2f4ca4;
        case 0x2f4ca8u: goto label_2f4ca8;
        case 0x2f4cacu: goto label_2f4cac;
        case 0x2f4cb0u: goto label_2f4cb0;
        case 0x2f4cb4u: goto label_2f4cb4;
        case 0x2f4cb8u: goto label_2f4cb8;
        case 0x2f4cbcu: goto label_2f4cbc;
        case 0x2f4cc0u: goto label_2f4cc0;
        case 0x2f4cc4u: goto label_2f4cc4;
        case 0x2f4cc8u: goto label_2f4cc8;
        case 0x2f4cccu: goto label_2f4ccc;
        case 0x2f4cd0u: goto label_2f4cd0;
        case 0x2f4cd4u: goto label_2f4cd4;
        case 0x2f4cd8u: goto label_2f4cd8;
        case 0x2f4cdcu: goto label_2f4cdc;
        case 0x2f4ce0u: goto label_2f4ce0;
        case 0x2f4ce4u: goto label_2f4ce4;
        case 0x2f4ce8u: goto label_2f4ce8;
        case 0x2f4cecu: goto label_2f4cec;
        case 0x2f4cf0u: goto label_2f4cf0;
        case 0x2f4cf4u: goto label_2f4cf4;
        case 0x2f4cf8u: goto label_2f4cf8;
        case 0x2f4cfcu: goto label_2f4cfc;
        case 0x2f4d00u: goto label_2f4d00;
        case 0x2f4d04u: goto label_2f4d04;
        case 0x2f4d08u: goto label_2f4d08;
        case 0x2f4d0cu: goto label_2f4d0c;
        case 0x2f4d10u: goto label_2f4d10;
        case 0x2f4d14u: goto label_2f4d14;
        case 0x2f4d18u: goto label_2f4d18;
        case 0x2f4d1cu: goto label_2f4d1c;
        case 0x2f4d20u: goto label_2f4d20;
        case 0x2f4d24u: goto label_2f4d24;
        default: break;
    }

    ctx->pc = 0x2f4be0u;

label_2f4be0:
    // 0x2f4be0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2f4be4:
    // 0x2f4be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f4be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f4be8:
    // 0x2f4be8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2f4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2f4bec:
    // 0x2f4bec: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f4becu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2f4bf0:
    // 0x2f4bf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f4bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f4bf4:
    // 0x2f4bf4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2f4bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2f4bf8:
    // 0x2f4bf8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2f4bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2f4bfc:
    // 0x2f4bfc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2f4bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2f4c00:
    // 0x2f4c00: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f4c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f4c04:
    // 0x2f4c04: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2f4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_2f4c08:
    // 0x2f4c08: 0xc4410144  lwc1        $f1, 0x144($v0)
    ctx->pc = 0x2f4c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4c0c:
    // 0x2f4c0c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f4c0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f4c10:
    // 0x2f4c10: 0x0  nop
    ctx->pc = 0x2f4c10u;
    // NOP
label_2f4c14:
    // 0x2f4c14: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2f4c18:
    if (ctx->pc == 0x2F4C18u) {
        ctx->pc = 0x2F4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C14u;
        // 0x2f4c18: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C1Cu;
        goto label_2f4c1c;
    }
    ctx->pc = 0x2F4C14u;
    {
        const bool branch_taken_0x2f4c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C14u;
        // 0x2f4c18: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c14) {
            ctx->pc = 0x2F4C24u;
            goto label_2f4c24;
        }
    }
    ctx->pc = 0x2F4C1Cu;
label_2f4c1c:
    // 0x2f4c1c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f4c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2f4c20:
    // 0x2f4c20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f4c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2f4c24:
    // 0x2f4c24: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2f4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_2f4c28:
    // 0x2f4c28: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2f4c28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2f4c2c:
    // 0x2f4c2c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2f4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2f4c30:
    // 0x2f4c30: 0x60f809  jalr        $v1
label_2f4c34:
    if (ctx->pc == 0x2F4C34u) {
        ctx->pc = 0x2F4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C30u;
        // 0x2f4c34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C38u;
        goto label_2f4c38;
    }
    ctx->pc = 0x2F4C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4C38u);
        ctx->pc = 0x2F4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C30u;
        // 0x2f4c34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4C30u, 0x2F4C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4C38u;
label_2f4c38:
    // 0x2f4c38: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f4c3c:
    // 0x2f4c3c: 0xc0ad858  jal         func_2B6160
label_2f4c40:
    if (ctx->pc == 0x2F4C40u) {
        ctx->pc = 0x2F4C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C3Cu;
        // 0x2f4c40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4C44u;
        goto label_2f4c44;
    }
    ctx->pc = 0x2F4C3Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C44u);
    ctx->pc = 0x2F4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C3Cu;
    // 0x2f4c40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F4C3Cu, 0x2F4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4C44u;
label_2f4c44:
    // 0x2f4c44: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2f4c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2f4c48:
    // 0x2f4c48: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f4c48u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4c4c:
    // 0x2f4c4c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2f4c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f4c50:
    // 0x2f4c50: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2f4c50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4c54:
    // 0x2f4c54: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2f4c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_2f4c58:
    // 0x2f4c58: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2f4c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_2f4c5c:
    // 0x2f4c5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f4c60:
    // 0x2f4c60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f4c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f4c64:
    // 0x2f4c64: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2f4c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2f4c68:
    // 0x2f4c68: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2f4c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4c6c:
    // 0x2f4c6c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4c70:
    // 0x2f4c70: 0x4602a0c0  add.s       $f3, $f20, $f2
    ctx->pc = 0x2f4c70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_2f4c74:
    // 0x2f4c74: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2f4c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4c78:
    // 0x2f4c78: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f4c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2f4c7c:
    // 0x2f4c7c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2f4c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2f4c80:
    // 0x2f4c80: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f4c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2f4c84:
    // 0x2f4c84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2f4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2f4c88:
    // 0x2f4c88: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2f4c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_2f4c8c:
    // 0x2f4c8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2f4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2f4c90:
    // 0x2f4c90: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2f4c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2f4c94:
    // 0x2f4c94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f4c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c98:
    // 0x2f4c98: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2f4c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2f4c9c:
    // 0x2f4c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ca0:
    // 0x2f4ca0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f4ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2f4ca4:
    // 0x2f4ca4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f4ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f4ca8:
    // 0x2f4ca8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2f4ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f4cac:
    // 0x2f4cac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f4cacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4cb0:
    // 0x2f4cb0: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2f4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_2f4cb4:
    // 0x2f4cb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f4cb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4cb8:
    // 0x2f4cb8: 0xc04c784  jal         func_131E10
label_2f4cbc:
    if (ctx->pc == 0x2F4CBCu) {
        ctx->pc = 0x2F4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CB8u;
        // 0x2f4cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CC0u;
        goto label_2f4cc0;
    }
    ctx->pc = 0x2F4CB8u;
    SET_GPR_U32(ctx, 31, 0x2F4CC0u);
    ctx->pc = 0x2F4CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CB8u;
    // 0x2f4cbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2F4CB8u, 0x2F4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CC0u;
label_2f4cc0:
    // 0x2f4cc0: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
label_2f4cc4:
    if (ctx->pc == 0x2F4CC4u) {
        ctx->pc = 0x2F4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CC0u;
        // 0x2f4cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CC8u;
        goto label_2f4cc8;
    }
    ctx->pc = 0x2F4CC0u;
    {
        const bool branch_taken_0x2f4cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CC0u;
        // 0x2f4cc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cc0) {
            ctx->pc = 0x2F4CE0u;
            goto label_2f4ce0;
        }
    }
    ctx->pc = 0x2F4CC8u;
label_2f4cc8:
    // 0x2f4cc8: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x2f4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_2f4ccc:
    // 0x2f4ccc: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2f4cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4cd0:
    // 0x2f4cd0: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f4cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f4cd4:
    // 0x2f4cd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f4cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f4cd8:
    // 0x2f4cd8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f4cdc:
    if (ctx->pc == 0x2F4CDCu) {
        ctx->pc = 0x2F4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CD8u;
        // 0x2f4cdc: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CE0u;
        goto label_2f4ce0;
    }
    ctx->pc = 0x2F4CD8u;
    {
        const bool branch_taken_0x2f4cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CD8u;
        // 0x2f4cdc: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cd8) {
            ctx->pc = 0x2F4CFCu;
            goto label_2f4cfc;
        }
    }
    ctx->pc = 0x2F4CE0u;
label_2f4ce0:
    // 0x2f4ce0: 0x10b30006  beq         $a1, $s3, . + 4 + (0x6 << 2)
label_2f4ce4:
    if (ctx->pc == 0x2F4CE4u) {
        ctx->pc = 0x2F4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CE0u;
        // 0x2f4ce4: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4CE8u;
        goto label_2f4ce8;
    }
    ctx->pc = 0x2F4CE0u;
    {
        const bool branch_taken_0x2f4ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        ctx->pc = 0x2F4CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CE0u;
        // 0x2f4ce4: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ce0) {
            ctx->pc = 0x2F4CFCu;
            goto label_2f4cfc;
        }
    }
    ctx->pc = 0x2F4CE8u;
label_2f4ce8:
    // 0x2f4ce8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2f4ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f4cec:
    // 0x2f4cec: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2f4cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2f4cf0:
    // 0x2f4cf0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x2f4cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2f4cf4:
    // 0x2f4cf4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2f4cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2f4cf8:
    // 0x2f4cf8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f4cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2f4cfc:
    // 0x2f4cfc: 0xc0ad8a2  jal         func_2B6288
label_2f4d00:
    if (ctx->pc == 0x2F4D00u) {
        ctx->pc = 0x2F4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CFCu;
        // 0x2f4d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D04u;
        goto label_2f4d04;
    }
    ctx->pc = 0x2F4CFCu;
    SET_GPR_U32(ctx, 31, 0x2F4D04u);
    ctx->pc = 0x2F4D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CFCu;
    // 0x2f4d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F4CFCu, 0x2F4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4D04u;
label_2f4d04:
    // 0x2f4d04: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2f4d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2f4d08:
    // 0x2f4d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4d0c:
    // 0x2f4d0c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2f4d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2f4d10:
    // 0x2f4d10: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2f4d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2f4d14:
    // 0x2f4d14: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2f4d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2f4d18:
    // 0x2f4d18: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f4d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f4d1c:
    // 0x2f4d1c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f4d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2f4d20:
    // 0x2f4d20: 0x3e00008  jr          $ra
label_2f4d24:
    if (ctx->pc == 0x2F4D24u) {
        ctx->pc = 0x2F4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D20u;
        // 0x2f4d24: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4D28u;
        goto label_fallthrough_0x2f4d20;
    }
    ctx->pc = 0x2F4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4D20u;
        // 0x2f4d24: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f4d20:
    ctx->pc = 0x2F4D28u;
}
