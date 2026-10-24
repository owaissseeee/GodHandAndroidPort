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

// Function: func_002E4E70
// Address: 0x2e4e70 - 0x2e6318
void func_002E4E70_0x2e4e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E4E70_0x2e4e70");
#endif

    switch (ctx->pc) {
        case 0x2e4ff4u: goto label_2e4ff4;
        case 0x2e5018u: goto label_2e5018;
        case 0x2e5028u: goto label_2e5028;
        case 0x2e52e0u: goto label_2e52e0;
        case 0x2e53f4u: goto label_2e53f4;
        case 0x2e54dcu: goto label_2e54dc;
        case 0x2e557cu: goto label_2e557c;
        case 0x2e55b8u: goto label_2e55b8;
        case 0x2e5600u: goto label_2e5600;
        case 0x2e5638u: goto label_2e5638;
        case 0x2e5648u: goto label_2e5648;
        case 0x2e5654u: goto label_2e5654;
        case 0x2e5764u: goto label_2e5764;
        case 0x2e5774u: goto label_2e5774;
        case 0x2e5780u: goto label_2e5780;
        case 0x2e58dcu: goto label_2e58dc;
        case 0x2e58ecu: goto label_2e58ec;
        case 0x2e58f8u: goto label_2e58f8;
        case 0x2e5a68u: goto label_2e5a68;
        case 0x2e5a78u: goto label_2e5a78;
        case 0x2e5a84u: goto label_2e5a84;
        case 0x2e5be8u: goto label_2e5be8;
        case 0x2e5c30u: goto label_2e5c30;
        case 0x2e5c80u: goto label_2e5c80;
        case 0x2e5c90u: goto label_2e5c90;
        case 0x2e5c9cu: goto label_2e5c9c;
        case 0x2e5db4u: goto label_2e5db4;
        case 0x2e5dc4u: goto label_2e5dc4;
        case 0x2e5dd0u: goto label_2e5dd0;
        case 0x2e5f2cu: goto label_2e5f2c;
        case 0x2e5f3cu: goto label_2e5f3c;
        case 0x2e5f48u: goto label_2e5f48;
        case 0x2e60bcu: goto label_2e60bc;
        case 0x2e60ccu: goto label_2e60cc;
        case 0x2e60d8u: goto label_2e60d8;
        case 0x2e62c8u: goto label_2e62c8;
        default: break;
    }

    ctx->pc = 0x2e4e70u;

    // 0x2e4e70: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2e4e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2e4e74: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x2e4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x2e4e78: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x2e4e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x2e4e7c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x2e4e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x2e4e80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e4e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e84: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x2e4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x2e4e88: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x2e4e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x2e4e8c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x2e4e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x2e4e90: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x2e4e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x2e4e94: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x2e4e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x2e4e98: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x2e4e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x2e4e9c: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x2e4e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x2e4ea0: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2e4ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2e4ea4: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x2e4ea4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2e4ea8: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2e4ea8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2e4eac: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2e4eacu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2e4eb0: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2e4eb0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2e4eb4: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2e4eb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2e4eb8: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2e4eb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2e4ebc: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2e4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2e4ec0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e4ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e4ec4: 0x14400501  bnez        $v0, . + 4 + (0x501 << 2)
    ctx->pc = 0x2E4EC4u;
    {
        const bool branch_taken_0x2e4ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EC4u;
        // 0x2e4ec8: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ec4) {
            ctx->pc = 0x2E62CCu;
            goto label_2e62cc;
        }
    }
    ctx->pc = 0x2E4ECCu;
    // 0x2e4ecc: 0x8e820114  lw          $v0, 0x114($s4)
    ctx->pc = 0x2e4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2e4ed0: 0x104004ff  beqz        $v0, . + 4 + (0x4FF << 2)
    ctx->pc = 0x2E4ED0u;
    {
        const bool branch_taken_0x2e4ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4ED0u;
        // 0x2e4ed4: 0x7bb10170  lq          $s1, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ed0) {
            ctx->pc = 0x2E62D0u;
            goto label_2e62d0;
        }
    }
    ctx->pc = 0x2E4ED8u;
    // 0x2e4ed8: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2e4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e4edc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e4edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e4ee0: 0x144004fc  bnez        $v0, . + 4 + (0x4FC << 2)
    ctx->pc = 0x2E4EE0u;
    {
        const bool branch_taken_0x2e4ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EE0u;
        // 0x2e4ee4: 0x7bb20160  lq          $s2, 0x160($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ee0) {
            ctx->pc = 0x2E62D4u;
            goto label_2e62d4;
        }
    }
    ctx->pc = 0x2E4EE8u;
    // 0x2e4ee8: 0x9282024c  lbu         $v0, 0x24C($s4)
    ctx->pc = 0x2e4ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 588)));
    // 0x2e4eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4ef0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e4ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e4ef4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4EF4u;
    {
        const bool branch_taken_0x2e4ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EF4u;
        // 0x2e4ef8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ef4) {
            ctx->pc = 0x2E4F24u;
            goto label_2e4f24;
        }
    }
    ctx->pc = 0x2E4EFCu;
    // 0x2e4efc: 0x9283024d  lbu         $v1, 0x24D($s4)
    ctx->pc = 0x2e4efcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 589)));
    // 0x2e4f00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e4f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e4f04: 0x0  nop
    ctx->pc = 0x2e4f04u;
    // NOP
    // 0x2e4f08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e4f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e4f0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f14: 0x0  nop
    ctx->pc = 0x2e4f14u;
    // NOP
    // 0x2e4f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4f1c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2e4f1cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2e4f20: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2e4f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_2e4f24:
    // 0x2e4f24: 0x8e8202fc  lw          $v0, 0x2FC($s4)
    ctx->pc = 0x2e4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 764)));
    // 0x2e4f28: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2e4f28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f2c: 0x8e850314  lw          $a1, 0x314($s4)
    ctx->pc = 0x2e4f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 788)));
    // 0x2e4f30: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x2e4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2e4f34: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x2e4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
    // 0x2e4f38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e4f3c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e4f40: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x2e4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2e4f44: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e4f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e4f48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4F48u;
    {
        const bool branch_taken_0x2e4f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F48u;
        // 0x2e4f4c: 0x24530030  addiu       $s3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f48) {
            ctx->pc = 0x2E4F5Cu;
            goto label_2e4f5c;
        }
    }
    ctx->pc = 0x2E4F50u;
    // 0x2e4f50: 0x8e820330  lw          $v0, 0x330($s4)
    ctx->pc = 0x2e4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 816)));
    // 0x2e4f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4F54u;
    {
        const bool branch_taken_0x2e4f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F54u;
        // 0x2e4f58: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f54) {
            ctx->pc = 0x2E4F64u;
            goto label_2e4f64;
        }
    }
    ctx->pc = 0x2E4F5Cu;
label_2e4f5c:
    // 0x2e4f5c: 0x8e840334  lw          $a0, 0x334($s4)
    ctx->pc = 0x2e4f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
    // 0x2e4f60: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x2e4f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_2e4f64:
    // 0x2e4f64: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2e4f68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2e4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2e4f6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e4f70: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2e4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e4f74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e4f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e4f78: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2e4f7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e4f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e4f80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e4f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e4f84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e4f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e4f88: 0x34048152  ori         $a0, $zero, 0x8152
    ctx->pc = 0x2e4f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2e4f8c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2e4f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2e4f90: 0x34848007  ori         $a0, $a0, 0x8007
    ctx->pc = 0x2e4f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32775);
    // 0x2e4f94: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2e4f94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2e4f98: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x2e4f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2e4f9c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2e4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2e4fa0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e4fa4: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x2e4fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x2e4fa8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2e4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2e4fac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2e4facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2e4fb0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2e4fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2e4fb4: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2e4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2e4fb8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2e4fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2e4fbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4FBCu;
    {
        const bool branch_taken_0x2e4fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4fbc) {
            ctx->pc = 0x2E4FD4u;
            goto label_2e4fd4;
        }
    }
    ctx->pc = 0x2E4FC4u;
    // 0x2e4fc4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2e4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2e4fc8: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x2e4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2e4fcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4FCCu;
    {
        const bool branch_taken_0x2e4fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FCCu;
        // 0x2e4fd0: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4fcc) {
            ctx->pc = 0x2E4FE0u;
            goto label_2e4fe0;
        }
    }
    ctx->pc = 0x2E4FD4u;
label_2e4fd4:
    // 0x2e4fd4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2e4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2e4fd8: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x2e4fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x2e4fdc: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x2e4fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_2e4fe0:
    // 0x2e4fe0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2e4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2e4fe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e4fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fe8: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x2e4fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x2e4fec: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2E4FECu;
    SET_GPR_U32(ctx, 31, 0x2E4FF4u);
    ctx->pc = 0x2E4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FECu;
    // 0x2e4ff0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2E4FECu, 0x2E4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FF4u;
label_2e4ff4:
    // 0x2e4ff4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e4ff8: 0xfe200030  sd          $zero, 0x30($s1)
    ctx->pc = 0x2e4ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 0));
    // 0x2e4ffc: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x2e4ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x2e5000: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2e5000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2e5004: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2e5004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2e5008: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e5008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e500c: 0x8e850118  lw          $a1, 0x118($s4)
    ctx->pc = 0x2e500cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
    // 0x2e5010: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2E5010u;
    SET_GPR_U32(ctx, 31, 0x2E5018u);
    ctx->pc = 0x2E5014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5010u;
    // 0x2e5014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2E5010u, 0x2E5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5018u;
label_2e5018:
    // 0x2e5018: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e501c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5020: 0xc0544da  jal         func_151368
    ctx->pc = 0x2E5020u;
    SET_GPR_U32(ctx, 31, 0x2E5028u);
    ctx->pc = 0x2E5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5020u;
    // 0x2e5024: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2E5020u, 0x2E5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5028u;
label_2e5028:
    // 0x2e5028: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e5028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e502c: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x2e502cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x2e5030: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x2e5030u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
    // 0x2e5034: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e5034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e5038: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2e5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e503c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e5040: 0x8ca31180  lw          $v1, 0x1180($a1)
    ctx->pc = 0x2e5040u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e5044: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2e5044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e5048: 0xfe220078  sd          $v0, 0x78($s1)
    ctx->pc = 0x2e5048u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 2));
    // 0x2e504c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2e504cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5050: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e5054: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2e5054u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e5058: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2e5058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2e505c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2e505cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e5060: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e5060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e5064: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2e5064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e5068: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e5068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e506c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2e506cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2e5070: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e5070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e5074: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e5074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e5078: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x2e5078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x2e507c: 0x6a86018f  ldl         $a2, 0x18F($s4)
    ctx->pc = 0x2e507cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2e5080: 0x6e860188  ldr         $a2, 0x188($s4)
    ctx->pc = 0x2e5080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e5084: 0x6a870197  ldl         $a3, 0x197($s4)
    ctx->pc = 0x2e5084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2e5088: 0x6e870190  ldr         $a3, 0x190($s4)
    ctx->pc = 0x2e5088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2e508c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x2e508cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e5090: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x2e5090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e5094: 0xb3a7001f  sdl         $a3, 0x1F($sp)
    ctx->pc = 0x2e5094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e5098: 0xb7a70018  sdr         $a3, 0x18($sp)
    ctx->pc = 0x2e5098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e509c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2e509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e50a0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2e50a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e50a4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2e50a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e50a8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2e50a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e50ac: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e50acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e50b0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2e50b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2e50b4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2e50b4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2e50b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e50b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e50bc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2e50bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e50c0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2e50c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e50c4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2e50c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e50c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e50c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e50cc: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x2e50ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2e50d0: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x2e50d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2e50d4: 0x6ba5001f  ldl         $a1, 0x1F($sp)
    ctx->pc = 0x2e50d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2e50d8: 0x6fa50018  ldr         $a1, 0x18($sp)
    ctx->pc = 0x2e50d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2e50dc: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x2e50dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e50e0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x2e50e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e50e4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x2e50e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e50e8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x2e50e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e50ec: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e50ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e50f0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2e50f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e50f4: 0x0  nop
    ctx->pc = 0x2e50f4u;
    // NOP
    // 0x2e50f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E50F8u;
    {
        const bool branch_taken_0x2e50f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e50f8) {
            ctx->pc = 0x2E50FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E50F8u;
            // 0x2e50fc: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5100u;
            goto label_2e5100;
        }
    }
    ctx->pc = 0x2E5100u;
label_2e5100:
    // 0x2e5100: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e5100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5104: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2e5104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5108: 0x0  nop
    ctx->pc = 0x2e5108u;
    // NOP
    // 0x2e510c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E510Cu;
    {
        const bool branch_taken_0x2e510c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e510c) {
            ctx->pc = 0x2E5110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E510Cu;
            // 0x2e5110: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5114u;
            goto label_2e5114;
        }
    }
    ctx->pc = 0x2E5114u;
label_2e5114:
    // 0x2e5114: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e5114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5118: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2e5118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e511c: 0x0  nop
    ctx->pc = 0x2e511cu;
    // NOP
    // 0x2e5120: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5120u;
    {
        const bool branch_taken_0x2e5120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5120) {
            ctx->pc = 0x2E5124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5120u;
            // 0x2e5124: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5128u;
            goto label_2e5128;
        }
    }
    ctx->pc = 0x2E5128u;
label_2e5128:
    // 0x2e5128: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2e5128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e512c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2e512cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5130: 0x0  nop
    ctx->pc = 0x2e5130u;
    // NOP
    // 0x2e5134: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5134u;
    {
        const bool branch_taken_0x2e5134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5134) {
            ctx->pc = 0x2E5138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5134u;
            // 0x2e5138: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E513Cu;
            goto label_2e513c;
        }
    }
    ctx->pc = 0x2E513Cu;
label_2e513c:
    // 0x2e513c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5140: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2e5140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5144: 0x0  nop
    ctx->pc = 0x2e5144u;
    // NOP
    // 0x2e5148: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5148u;
    {
        const bool branch_taken_0x2e5148 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5148) {
            ctx->pc = 0x2E514Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5148u;
            // 0x2e514c: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5150u;
            goto label_2e5150;
        }
    }
    ctx->pc = 0x2E5150u;
label_2e5150:
    // 0x2e5150: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5154: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2e5154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5158: 0x0  nop
    ctx->pc = 0x2e5158u;
    // NOP
    // 0x2e515c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E515Cu;
    {
        const bool branch_taken_0x2e515c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e515c) {
            ctx->pc = 0x2E5160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E515Cu;
            // 0x2e5160: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5164u;
            goto label_2e5164;
        }
    }
    ctx->pc = 0x2E5164u;
label_2e5164:
    // 0x2e5164: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e5164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5168: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2e5168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e516c: 0x0  nop
    ctx->pc = 0x2e516cu;
    // NOP
    // 0x2e5170: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5170u;
    {
        const bool branch_taken_0x2e5170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5170) {
            ctx->pc = 0x2E5174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5170u;
            // 0x2e5174: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5178u;
            goto label_2e5178;
        }
    }
    ctx->pc = 0x2E5178u;
label_2e5178:
    // 0x2e5178: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2e5178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e517c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2e517cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5180: 0x0  nop
    ctx->pc = 0x2e5180u;
    // NOP
    // 0x2e5184: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5184u;
    {
        const bool branch_taken_0x2e5184 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5184) {
            ctx->pc = 0x2E5188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5184u;
            // 0x2e5188: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E518Cu;
            goto label_2e518c;
        }
    }
    ctx->pc = 0x2E518Cu;
label_2e518c:
    // 0x2e518c: 0x8e850114  lw          $a1, 0x114($s4)
    ctx->pc = 0x2e518cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x2e5190: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E5190u;
    {
        const bool branch_taken_0x2e5190 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5190u;
        // 0x2e5194: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5190) {
            ctx->pc = 0x2E520Cu;
            goto label_2e520c;
        }
    }
    ctx->pc = 0x2E5198u;
    // 0x2e5198: 0x9282011c  lbu         $v0, 0x11C($s4)
    ctx->pc = 0x2e5198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2e519c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2e519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2e51a0: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E51A0u;
    {
        const bool branch_taken_0x2e51a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e51a0) {
            ctx->pc = 0x2E51A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E51A0u;
            // 0x2e51a4: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5210u;
            goto label_2e5210;
        }
    }
    ctx->pc = 0x2E51A8u;
    // 0x2e51a8: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2e51a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2e51ac: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2e51acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2e51b0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e51b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e51b4: 0x0  nop
    ctx->pc = 0x2e51b4u;
    // NOP
    // 0x2e51b8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e51b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e51bc: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2e51bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2e51c0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e51c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e51c4: 0x0  nop
    ctx->pc = 0x2e51c4u;
    // NOP
    // 0x2e51c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e51c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e51cc: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2e51ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e51d0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2e51d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e51d4: 0x0  nop
    ctx->pc = 0x2e51d4u;
    // NOP
    // 0x2e51d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e51d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e51dc: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2e51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e51e0: 0x0  nop
    ctx->pc = 0x2e51e0u;
    // NOP
    // 0x2e51e4: 0x0  nop
    ctx->pc = 0x2e51e4u;
    // NOP
    // 0x2e51e8: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x2e51e8u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[6]);
    // 0x2e51ec: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x2e51ecu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[6]);
    // 0x2e51f0: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2e51f0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2e51f4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e51f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e51f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e51f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e51fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e51fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5200: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2e5200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e5204: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5204u;
    {
        const bool branch_taken_0x2e5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5204u;
        // 0x2e5208: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5204) {
            ctx->pc = 0x2E5214u;
            goto label_2e5214;
        }
    }
    ctx->pc = 0x2E520Cu;
label_2e520c:
    // 0x2e520c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e520cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2e5210:
    // 0x2e5210: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2e5210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2e5214:
    // 0x2e5214: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2e5214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5218: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e521c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2e521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e5220: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2e5220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2e5224: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x2e5224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x2e5228: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e5228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e522c: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e522cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e5230: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2e5230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e5234: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2e5234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5238: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e523c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e523cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e5240: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e5244: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2e5244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e5248: 0xfe260058  sd          $a2, 0x58($s1)
    ctx->pc = 0x2e5248u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 6));
    // 0x2e524c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e524cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e5250: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2e5250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e5254: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e5254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5258: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e5258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e525c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5260: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2e5260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e5264: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5268: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e526c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2e526cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e5270: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e5270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e5274: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2e5274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2e5278: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e5278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e527c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2e527cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2e5280: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2e5280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2e5284: 0x3c090a00  lui         $t1, 0xA00
    ctx->pc = 0x2e5284u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)2560 << 16));
    // 0x2e5288: 0x352900f8  ori         $t1, $t1, 0xF8
    ctx->pc = 0x2e5288u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)248);
    // 0x2e528c: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x2e528cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
    // 0x2e5290: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x2e5290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e5294: 0x26a874a0  addiu       $t0, $s5, 0x74A0
    ctx->pc = 0x2e5294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x2e5298: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2e5298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2e529c: 0x8e82011c  lw          $v0, 0x11C($s4)
    ctx->pc = 0x2e529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2e52a0: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2e52a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2e52a4: 0xfe240068  sd          $a0, 0x68($s1)
    ctx->pc = 0x2e52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 4));
    // 0x2e52a8: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x2e52a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2e52ac: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e52acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e52b0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2e52b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e52b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e52b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e52b8: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x2e52b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x2e52bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e52bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e52c0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2e52c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2e52c4: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x2e52c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
    // 0x2e52c8: 0x8d040210  lw          $a0, 0x210($t0)
    ctx->pc = 0x2e52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 528)));
    // 0x2e52cc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e52ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e52d0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2e52d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e52d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e52d8: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2E52D8u;
    SET_GPR_U32(ctx, 31, 0x2E52E0u);
    ctx->pc = 0x2E52DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E52D8u;
    // 0x2e52dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2E52D8u, 0x2E52E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E52E0u;
label_2e52e0:
    // 0x2e52e0: 0x92840245  lbu         $a0, 0x245($s4)
    ctx->pc = 0x2e52e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 581)));
    // 0x2e52e4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2e52e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2e52e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2e52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e52ec: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E52ECu;
    {
        const bool branch_taken_0x2e52ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e52ec) {
            ctx->pc = 0x2E52F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E52ECu;
            // 0x2e52f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E52F4u;
            goto label_2e52f4;
        }
    }
    ctx->pc = 0x2E52F4u;
label_2e52f4:
    // 0x2e52f4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2e52f4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e52f8: 0x92850246  lbu         $a1, 0x246($s4)
    ctx->pc = 0x2e52f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 582)));
    // 0x2e52fc: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2e5300: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e5300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5304: 0x0  nop
    ctx->pc = 0x2e5304u;
    // NOP
    // 0x2e5308: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e5308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e530c: 0x82820244  lb          $v0, 0x244($s4)
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 580)));
    // 0x2e5310: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e5310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5314: 0x0  nop
    ctx->pc = 0x2e5314u;
    // NOP
    // 0x2e5318: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e5318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e531c: 0x8e88011c  lw          $t0, 0x11C($s4)
    ctx->pc = 0x2e531cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
    // 0x2e5320: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2e5320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2e5324: 0x3812  mflo        $a3
    ctx->pc = 0x2e5324u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2e5328: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2e5328u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e532c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2e532cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5330: 0x0  nop
    ctx->pc = 0x2e5330u;
    // NOP
    // 0x2e5334: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5338: 0x46030603  div.s       $f24, $f0, $f3
    ctx->pc = 0x2e5338u;
    ctx->f[24] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e533c: 0x2812  mflo        $a1
    ctx->pc = 0x2e533cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2e5340: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2e5340u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e5344: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2e5344u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5348: 0x0  nop
    ctx->pc = 0x2e5348u;
    // NOP
    // 0x2e534c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e534cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5350: 0x46020e43  div.s       $f25, $f1, $f2
    ctx->pc = 0x2e5350u;
    ctx->f[25] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2e5354: 0x1012  mflo        $v0
    ctx->pc = 0x2e5354u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e5358: 0x1810  mfhi        $v1
    ctx->pc = 0x2e5358u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e535c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e535cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5360: 0x0  nop
    ctx->pc = 0x2e5360u;
    // NOP
    // 0x2e5364: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e5368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e536c: 0x0  nop
    ctx->pc = 0x2e536cu;
    // NOP
    // 0x2e5370: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e5370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e5374: 0x46180582  mul.s       $f22, $f0, $f24
    ctx->pc = 0x2e5374u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2e5378: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5378u;
    {
        const bool branch_taken_0x2e5378 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E537Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5378u;
        // 0x2e537c: 0x46190d42  mul.s       $f21, $f1, $f25 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5378) {
            ctx->pc = 0x2E5388u;
            goto label_2e5388;
        }
    }
    ctx->pc = 0x2E5380u;
    // 0x2e5380: 0x4618b580  add.s       $f22, $f22, $f24
    ctx->pc = 0x2e5380u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x2e5384: 0x4600c607  neg.s       $f24, $f24
    ctx->pc = 0x2e5384u;
    ctx->f[24] = FPU_NEG_S(ctx->f[24]);
label_2e5388:
    // 0x2e5388: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2e5388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2e538c: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2e538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2e5390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5390u;
    {
        const bool branch_taken_0x2e5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5390u;
        // 0x2e5394: 0x131102  srl         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5390) {
            ctx->pc = 0x2E53A0u;
            goto label_2e53a0;
        }
    }
    ctx->pc = 0x2E5398u;
    // 0x2e5398: 0x4619ad40  add.s       $f21, $f21, $f25
    ctx->pc = 0x2e5398u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x2e539c: 0x4600ce47  neg.s       $f25, $f25
    ctx->pc = 0x2e539cu;
    ctx->f[25] = FPU_NEG_S(ctx->f[25]);
label_2e53a0:
    // 0x2e53a0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2e53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e53a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2e53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e53a8: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x2e53a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e53ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e53acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e53b0: 0x24630090  addiu       $v1, $v1, 0x90
    ctx->pc = 0x2e53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x2e53b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e53b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e53b8: 0x3404816e  ori         $a0, $zero, 0x816E
    ctx->pc = 0x2e53b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33134);
    // 0x2e53bc: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2e53bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2e53c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e53c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e53c4: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x2e53c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x2e53c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e53c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e53cc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2e53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e53d0: 0xfca20090  sd          $v0, 0x90($a1)
    ctx->pc = 0x2e53d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 144), GPR_U64(ctx, 2));
    // 0x2e53d4: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x2e53d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x2e53d8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2e53d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e53dc: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2e53dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e53e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e53e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53e4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2e53e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2e53e8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2e53e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x2e53ec: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2E53ECu;
    SET_GPR_U32(ctx, 31, 0x2E53F4u);
    ctx->pc = 0x2E53F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53ECu;
    // 0x2e53f0: 0x8e25aff0  lw          $a1, -0x5010($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2E53ECu, 0x2E53F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53F4u;
label_2e53f4:
    // 0x2e53f4: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2e53f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e53f8: 0x8e82032c  lw          $v0, 0x32C($s4)
    ctx->pc = 0x2e53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 812)));
    // 0x2e53fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E53FCu;
    {
        const bool branch_taken_0x2e53fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53FCu;
        // 0x2e5400: 0x8e840114  lw          $a0, 0x114($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53fc) {
            ctx->pc = 0x2E5424u;
            goto label_2e5424;
        }
    }
    ctx->pc = 0x2E5404u;
    // 0x2e5404: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e5404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5408: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e5408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e540c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e540cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5410: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E5410u;
    {
        const bool branch_taken_0x2e5410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5410u;
        // 0x2e5414: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5410) {
            ctx->pc = 0x2E5444u;
            goto label_2e5444;
        }
    }
    ctx->pc = 0x2E5418u;
    // 0x2e5418: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e541c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E541Cu;
    {
        const bool branch_taken_0x2e541c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E541Cu;
        // 0x2e5420: 0x8c430020  lw          $v1, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e541c) {
            ctx->pc = 0x2E5448u;
            goto label_2e5448;
        }
    }
    ctx->pc = 0x2E5424u;
label_2e5424:
    // 0x2e5424: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e5424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e5428: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x2e5428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x2e542c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e542cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5430: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5430u;
    {
        const bool branch_taken_0x2e5430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5430u;
        // 0x2e5434: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5430) {
            ctx->pc = 0x2E5444u;
            goto label_2e5444;
        }
    }
    ctx->pc = 0x2E5438u;
    // 0x2e5438: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x2e5438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x2e543c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E543Cu;
    {
        const bool branch_taken_0x2e543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E543Cu;
        // 0x2e5440: 0x8c430040  lw          $v1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e543c) {
            ctx->pc = 0x2E5448u;
            goto label_2e5448;
        }
    }
    ctx->pc = 0x2E5444u;
label_2e5444:
    // 0x2e5444: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e5444u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e5448:
    // 0x2e5448: 0xc46100b0  lwc1        $f1, 0xB0($v1)
    ctx->pc = 0x2e5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e544c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2e544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5450: 0xc46000b4  lwc1        $f0, 0xB4($v1)
    ctx->pc = 0x2e5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5454: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x2e5454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e5458: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e5458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e545c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e545cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5460: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2e5460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e5464: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2e5464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2e5468: 0xe7a30068  swc1        $f3, 0x68($sp)
    ctx->pc = 0x2e5468u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2e546c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2e546cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2e5470: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2e5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5474: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2e5474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5478: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2e5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e547c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e547cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5480: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e5480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5484: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e5484u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e5488: 0xc6800254  lwc1        $f0, 0x254($s4)
    ctx->pc = 0x2e5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e548c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2e548cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e5490: 0x0  nop
    ctx->pc = 0x2e5490u;
    // NOP
    // 0x2e5494: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x2e5494u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5498: 0x0  nop
    ctx->pc = 0x2e5498u;
    // NOP
    // 0x2e549c: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x2E549Cu;
    {
        const bool branch_taken_0x2e549c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E54A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E549Cu;
        // 0x2e54a0: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e549c) {
            ctx->pc = 0x2E556Cu;
            goto label_2e556c;
        }
    }
    ctx->pc = 0x2E54A4u;
    // 0x2e54a4: 0x8e22aff0  lw          $v0, -0x5010($s1)
    ctx->pc = 0x2e54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x2e54a8: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2e54a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e54ac: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2e54acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2e54b0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2e54b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e54b4: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2e54b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2e54b8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2e54b8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e54bc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e54bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e54c0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e54c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e54c4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2e54c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e54c8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2e54c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e54cc: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x2e54ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e54d0: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x2e54d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e54d4: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2E54D4u;
    SET_GPR_U32(ctx, 31, 0x2E54DCu);
    ctx->pc = 0x2E54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E54D4u;
    // 0x2e54d8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2E54D4u, 0x2E54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54DCu;
label_2e54dc:
    // 0x2e54dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e54dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e54e0: 0x0  nop
    ctx->pc = 0x2e54e0u;
    // NOP
    // 0x2e54e4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E54E4u;
    {
        const bool branch_taken_0x2e54e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54E4u;
        // 0x2e54e8: 0xc7a40060  lwc1        $f4, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54e4) {
            ctx->pc = 0x2E5528u;
            goto label_2e5528;
        }
    }
    ctx->pc = 0x2E54ECu;
    // 0x2e54ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e54ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e54f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e54f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e54f4: 0x0  nop
    ctx->pc = 0x2e54f4u;
    // NOP
    // 0x2e54f8: 0x0  nop
    ctx->pc = 0x2e54f8u;
    // NOP
    // 0x2e54fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2e54fcu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2e5500: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x2e5500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e5504: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2e5504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5508: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e5508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e550c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2e550cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2e5510: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e5510u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e5514: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2e5514u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2e5518: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2e5518u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2e551c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x2e551cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2e5520: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x2e5520u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e5524: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x2e5524u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2e5528:
    // 0x2e5528: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2e5528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e552c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e552cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5530: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2e5530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e5534: 0xc6800254  lwc1        $f0, 0x254($s4)
    ctx->pc = 0x2e5534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5538: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2e5538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e553c: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e5540: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e5540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e5544: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e5544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e5548: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e5548u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e554c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e554cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e5550: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2e5550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e5554: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2e5554u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5558: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2e5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e555c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2e555cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5560: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2e5560u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5564: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2e5564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e5568: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2e5568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2e556c:
    // 0x2e556c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e5570: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e5570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5574: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E5574u;
    SET_GPR_U32(ctx, 31, 0x2E557Cu);
    ctx->pc = 0x2E5578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5574u;
    // 0x2e5578: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E5574u, 0x2E557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E557Cu;
label_2e557c:
    // 0x2e557c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e557cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5580: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e5580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5584: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2e5584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5588: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e5588u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e558c: 0x0  nop
    ctx->pc = 0x2e558cu;
    // NOP
    // 0x2e5590: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E5590u;
    {
        const bool branch_taken_0x2e5590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5590) {
            ctx->pc = 0x2E5594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5590u;
            // 0x2e5594: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5598u;
            goto label_2e5598;
        }
    }
    ctx->pc = 0x2E5598u;
label_2e5598:
    // 0x2e5598: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e559c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x2e559cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2e55a0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2e55a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e55a4: 0x8e820308  lw          $v0, 0x308($s4)
    ctx->pc = 0x2e55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x2e55a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e55a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e55ac: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
    ctx->pc = 0x2E55ACu;
    {
        const bool branch_taken_0x2e55ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55ACu;
        // 0x2e55b0: 0xafa000d8  sw          $zero, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55ac) {
            ctx->pc = 0x2E5BD8u;
            goto label_2e5bd8;
        }
    }
    ctx->pc = 0x2E55B4u;
    // 0x2e55b4: 0x8e8302f8  lw          $v1, 0x2F8($s4)
    ctx->pc = 0x2e55b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
label_2e55b8:
    // 0x2e55b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2e55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e55bc: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2e55bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2e55c0: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x2e55c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e55c4: 0x8e820304  lw          $v0, 0x304($s4)
    ctx->pc = 0x2e55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 772)));
    // 0x2e55c8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2e55c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2e55cc: 0x2812  mflo        $a1
    ctx->pc = 0x2e55ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2e55d0: 0x1040017c  beqz        $v0, . + 4 + (0x17C << 2)
    ctx->pc = 0x2E55D0u;
    {
        const bool branch_taken_0x2e55d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E55D0u;
        // 0x2e55d4: 0xafa500dc  sw          $a1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e55d0) {
            ctx->pc = 0x2E5BC4u;
            goto label_2e5bc4;
        }
    }
    ctx->pc = 0x2E55D8u;
    // 0x2e55d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e55dc: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2e55dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e55e0: 0x2456b7a8  addiu       $s6, $v0, -0x4858
    ctx->pc = 0x2e55e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948776));
    // 0x2e55e4: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x2e55e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e55e8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x2e55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2e55ec: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x2e55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2e55f0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2e55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2e55f4: 0x59900  sll         $s3, $a1, 4
    ctx->pc = 0x2e55f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e55f8: 0x678821  addu        $s1, $v1, $a3
    ctx->pc = 0x2e55f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2e55fc: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2e55fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e5600:
    // 0x2e5600: 0x8e8202bc  lw          $v0, 0x2BC($s4)
    ctx->pc = 0x2e5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
    // 0x2e5604: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2e5604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e5608: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5608u;
    {
        const bool branch_taken_0x2e5608 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5608u;
        // 0x2e560c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5608) {
            ctx->pc = 0x2E5628u;
            goto label_2e5628;
        }
    }
    ctx->pc = 0x2E5610u;
    // 0x2e5610: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5614: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e5614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5618: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e5618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e561c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e561cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5620: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e5620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5624: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e5628:
    // 0x2e5628: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e5628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e562c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e562cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5630: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E5630u;
    SET_GPR_U32(ctx, 31, 0x2E5638u);
    ctx->pc = 0x2E5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5630u;
    // 0x2e5634: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E5630u, 0x2E5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5638u;
label_2e5638:
    // 0x2e5638: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e5638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e563c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e563cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5640: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E5640u;
    SET_GPR_U32(ctx, 31, 0x2E5648u);
    ctx->pc = 0x2E5644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5640u;
    // 0x2e5644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E5640u, 0x2E5648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5648u;
label_2e5648:
    // 0x2e5648: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e564c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E564Cu;
    SET_GPR_U32(ctx, 31, 0x2E5654u);
    ctx->pc = 0x2E5650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E564Cu;
    // 0x2e5650: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E564Cu, 0x2E5654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5654u;
label_2e5654:
    // 0x2e5654: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5658: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5658u;
    {
        const bool branch_taken_0x2e5658 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5658u;
        // 0x2e565c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5658) {
            ctx->pc = 0x2E56D8u;
            goto label_2e56d8;
        }
    }
    ctx->pc = 0x2E5660u;
    // 0x2e5660: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5664: 0x8c661180  lw          $a2, 0x1180($v1)
    ctx->pc = 0x2e5664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2e5668: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e5668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e566c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5670: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e5670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e5674: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e5674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5678: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e5678u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e567c: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e567cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5680: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e5680u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e5684: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e5684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5688: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5688u;
    {
        const bool branch_taken_0x2e5688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5688u;
        // 0x2e568c: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5688) {
            ctx->pc = 0x2E56D8u;
            goto label_2e56d8;
        }
    }
    ctx->pc = 0x2E5690u;
    // 0x2e5690: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e5690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5694: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e5698: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e5698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e569c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E569Cu;
    {
        const bool branch_taken_0x2e569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e569c) {
            ctx->pc = 0x2E56A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E569Cu;
            // 0x2e56a0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E56DCu;
            goto label_2e56dc;
        }
    }
    ctx->pc = 0x2E56A4u;
    // 0x2e56a4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e56a8: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e56ac: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e56acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e56b0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e56b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e56b4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E56B4u;
    {
        const bool branch_taken_0x2e56b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e56b4) {
            ctx->pc = 0x2E56B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E56B4u;
            // 0x2e56b8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E56DCu;
            goto label_2e56dc;
        }
    }
    ctx->pc = 0x2E56BCu;
    // 0x2e56bc: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e56bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e56c0: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e56c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e56c8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e56cc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e56ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e56d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E56D0u;
    {
        const bool branch_taken_0x2e56d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E56D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56D0u;
        // 0x2e56d4: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56d0) {
            ctx->pc = 0x2E56E0u;
            goto label_2e56e0;
        }
    }
    ctx->pc = 0x2E56D8u;
label_2e56d8:
    // 0x2e56d8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2e56d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e56dc:
    // 0x2e56dc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e56e0:
    // 0x2e56e0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e56e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e56e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e56e8: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2e56e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2e56ec: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e56f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e56f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e56f4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e56f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e56f8: 0xfe260028  sd          $a2, 0x28($s1)
    ctx->pc = 0x2e56f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 6));
    // 0x2e56fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e56fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5700: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e5700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e5704: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5708: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x2e5708u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x2e570c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e570cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5710: 0xc4e0b7a8  lwc1        $f0, -0x4858($a3)
    ctx->pc = 0x2e5710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5714: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2e5714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e5718: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2e5718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2e571c: 0xc4e1b7a8  lwc1        $f1, -0x4858($a3)
    ctx->pc = 0x2e571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5720: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x2e5720u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x2e5724: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2e5724u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e5728: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2e5728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2e572c: 0x8e8202bc  lw          $v0, 0x2BC($s4)
    ctx->pc = 0x2e572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
    // 0x2e5730: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2e5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e5734: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2e5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2e5738: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5738u;
    {
        const bool branch_taken_0x2e5738 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5738u;
        // 0x2e573c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5738) {
            ctx->pc = 0x2E5758u;
            goto label_2e5758;
        }
    }
    ctx->pc = 0x2E5740u;
    // 0x2e5740: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5744: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e5744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5748: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e5748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e574c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e574cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5750: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e5750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5754: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e5758:
    // 0x2e5758: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e575c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E575Cu;
    SET_GPR_U32(ctx, 31, 0x2E5764u);
    ctx->pc = 0x2E5760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E575Cu;
    // 0x2e5760: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E575Cu, 0x2E5764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5764u;
label_2e5764:
    // 0x2e5764: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e5764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5768: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e576c: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E576Cu;
    SET_GPR_U32(ctx, 31, 0x2E5774u);
    ctx->pc = 0x2E5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E576Cu;
    // 0x2e5770: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E576Cu, 0x2E5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5774u;
label_2e5774:
    // 0x2e5774: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5778: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E5778u;
    SET_GPR_U32(ctx, 31, 0x2E5780u);
    ctx->pc = 0x2E577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5778u;
    // 0x2e577c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E5778u, 0x2E5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5780u;
label_2e5780:
    // 0x2e5780: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5784: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5784u;
    {
        const bool branch_taken_0x2e5784 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5784u;
        // 0x2e5788: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5784) {
            ctx->pc = 0x2E5804u;
            goto label_2e5804;
        }
    }
    ctx->pc = 0x2E578Cu;
    // 0x2e578c: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5790: 0x8c661180  lw          $a2, 0x1180($v1)
    ctx->pc = 0x2e5790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2e5794: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e5794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e5798: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e579c: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e579cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e57a0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e57a4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e57a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e57a8: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e57a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e57ac: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e57acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e57b0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e57b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e57b4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E57B4u;
    {
        const bool branch_taken_0x2e57b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E57B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57B4u;
        // 0x2e57b8: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57b4) {
            ctx->pc = 0x2E5804u;
            goto label_2e5804;
        }
    }
    ctx->pc = 0x2E57BCu;
    // 0x2e57bc: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e57bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e57c0: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e57c4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e57c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e57c8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E57C8u;
    {
        const bool branch_taken_0x2e57c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57c8) {
            ctx->pc = 0x2E57CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E57C8u;
            // 0x2e57cc: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5808u;
            goto label_2e5808;
        }
    }
    ctx->pc = 0x2E57D0u;
    // 0x2e57d0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e57d4: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e57d8: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e57dc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e57dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e57e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E57E0u;
    {
        const bool branch_taken_0x2e57e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57e0) {
            ctx->pc = 0x2E57E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E57E0u;
            // 0x2e57e4: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5808u;
            goto label_2e5808;
        }
    }
    ctx->pc = 0x2E57E8u;
    // 0x2e57e8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e57e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e57ec: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e57f0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e57f4: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e57f8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e57f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e57fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E57FCu;
    {
        const bool branch_taken_0x2e57fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E57FCu;
        // 0x2e5800: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57fc) {
            ctx->pc = 0x2E580Cu;
            goto label_2e580c;
        }
    }
    ctx->pc = 0x2E5804u;
label_2e5804:
    // 0x2e5804: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x2e5804u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_2e5808:
    // 0x2e5808: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e580c:
    // 0x2e580c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5810: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5814: 0x4619a880  add.s       $f2, $f21, $f25
    ctx->pc = 0x2e5814u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x2e5818: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e581c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e581cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5820: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e5820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e5824: 0x8fbe00e8  lw          $fp, 0xE8($sp)
    ctx->pc = 0x2e5824u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e5828: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e5828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e582c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5834: 0xfe260048  sd          $a2, 0x48($s1)
    ctx->pc = 0x2e5834u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 6));
    // 0x2e5838: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x2e5838u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x2e583c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e583cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5840: 0x460015c6  mov.s       $f23, $f2
    ctx->pc = 0x2e5840u;
    ctx->f[23] = FPU_MOV_S(ctx->f[2]);
    // 0x2e5844: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2e5844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5848: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2e5848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e584c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2e584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2e5850: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x2e5850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5854: 0xfe270038  sd          $a3, 0x38($s1)
    ctx->pc = 0x2e5854u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 7));
    // 0x2e5858: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e5858u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e585c: 0xfe260088  sd          $a2, 0x88($s1)
    ctx->pc = 0x2e585cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 6));
    // 0x2e5860: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2e5860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2e5864: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5868: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e586c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5870: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5874: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e5874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e5878: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e587c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e5880: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5884: 0xfe230080  sd          $v1, 0x80($s1)
    ctx->pc = 0x2e5884u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 3));
    // 0x2e5888: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2e5888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e588c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2e588cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e5890: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2e5890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2e5894: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x2e5894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5898: 0xfe270078  sd          $a3, 0x78($s1)
    ctx->pc = 0x2e5898u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 7));
    // 0x2e589c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e589cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e58a0: 0xe6220074  swc1        $f2, 0x74($s1)
    ctx->pc = 0x2e58a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2e58a4: 0x8e8202bc  lw          $v0, 0x2BC($s4)
    ctx->pc = 0x2e58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
    // 0x2e58a8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2e58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e58ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e58b0: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E58B0u;
    {
        const bool branch_taken_0x2e58b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58B0u;
        // 0x2e58b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58b0) {
            ctx->pc = 0x2E58D0u;
            goto label_2e58d0;
        }
    }
    ctx->pc = 0x2E58B8u;
    // 0x2e58b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e58b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e58bc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e58bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e58c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e58c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e58c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e58c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e58c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e58c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e58cc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e58ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e58d0:
    // 0x2e58d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e58d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58d4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E58D4u;
    SET_GPR_U32(ctx, 31, 0x2E58DCu);
    ctx->pc = 0x2E58D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E58D4u;
    // 0x2e58d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E58D4u, 0x2E58DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58DCu;
label_2e58dc:
    // 0x2e58dc: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e58dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e58e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e58e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58e4: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E58E4u;
    SET_GPR_U32(ctx, 31, 0x2E58ECu);
    ctx->pc = 0x2E58E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E58E4u;
    // 0x2e58e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E58E4u, 0x2E58ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58ECu;
label_2e58ec:
    // 0x2e58ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e58f0: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E58F0u;
    SET_GPR_U32(ctx, 31, 0x2E58F8u);
    ctx->pc = 0x2E58F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E58F0u;
    // 0x2e58f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E58F0u, 0x2E58F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58F8u;
label_2e58f8:
    // 0x2e58f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e58fc: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E58FCu;
    {
        const bool branch_taken_0x2e58fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58FCu;
        // 0x2e5900: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58fc) {
            ctx->pc = 0x2E597Cu;
            goto label_2e597c;
        }
    }
    ctx->pc = 0x2E5904u;
    // 0x2e5904: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5908: 0x8c461180  lw          $a2, 0x1180($v0)
    ctx->pc = 0x2e5908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2e590c: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e590cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e5910: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5914: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e5914u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e5918: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e5918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e591c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5920: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e5920u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5924: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e5924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e5928: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e5928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e592c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E592Cu;
    {
        const bool branch_taken_0x2e592c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E592Cu;
        // 0x2e5930: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e592c) {
            ctx->pc = 0x2E597Cu;
            goto label_2e597c;
        }
    }
    ctx->pc = 0x2E5934u;
    // 0x2e5934: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e5934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5938: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e593c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e593cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5940: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5940u;
    {
        const bool branch_taken_0x2e5940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5940) {
            ctx->pc = 0x2E5944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5940u;
            // 0x2e5944: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5980u;
            goto label_2e5980;
        }
    }
    ctx->pc = 0x2E5948u;
    // 0x2e5948: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e5948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e594c: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e594cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e5950: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e5950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e5954: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e5954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5958: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5958u;
    {
        const bool branch_taken_0x2e5958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5958) {
            ctx->pc = 0x2E595Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5958u;
            // 0x2e595c: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5980u;
            goto label_2e5980;
        }
    }
    ctx->pc = 0x2E5960u;
    // 0x2e5960: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e5960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e5964: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e5964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e5968: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e5968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e596c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e5970: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e5970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e5974: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5974u;
    {
        const bool branch_taken_0x2e5974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5974u;
        // 0x2e5978: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5974) {
            ctx->pc = 0x2E5984u;
            goto label_2e5984;
        }
    }
    ctx->pc = 0x2E597Cu;
label_2e597c:
    // 0x2e597c: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x2e597cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_2e5980:
    // 0x2e5980: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e5984:
    // 0x2e5984: 0x1e2980  sll         $a1, $fp, 6
    ctx->pc = 0x2e5984u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x2e5988: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e598c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2e598cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5990: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5994: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5998: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2e5998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e599c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e599cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e59a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e59a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e59a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e59a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e59a8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e59ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e59acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e59b0: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x2e59b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x2e59b4: 0x4618b080  add.s       $f2, $f22, $f24
    ctx->pc = 0x2e59b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x2e59b8: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x2e59b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x2e59bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e59bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e59c0: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2e59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e59c4: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2e59c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2e59c8: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e59cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e59ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e59d0: 0x24570002  addiu       $s7, $v0, 0x2
    ctx->pc = 0x2e59d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2e59d4: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2e59d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2e59d8: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2e59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e59dc: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x2e59dcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x2e59e0: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2e59e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e59e4: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x2e59e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2e59e8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e59ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e59f0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e59f4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e59f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e59f8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e59f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e59fc: 0xfe2700a8  sd          $a3, 0xA8($s1)
    ctx->pc = 0x2e59fcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 168), GPR_U64(ctx, 7));
    // 0x2e5a00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e5a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e5a04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5a08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5a0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5a10: 0xfe2300a0  sd          $v1, 0xA0($s1)
    ctx->pc = 0x2e5a10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 3));
    // 0x2e5a14: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2e5a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2e5a18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e5a1c: 0xe6220090  swc1        $f2, 0x90($s1)
    ctx->pc = 0x2e5a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2e5a20: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2e5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a24: 0xfe240098  sd          $a0, 0x98($s1)
    ctx->pc = 0x2e5a24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 152), GPR_U64(ctx, 4));
    // 0x2e5a28: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2e5a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2e5a2c: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2e5a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2e5a30: 0x8e8202bc  lw          $v0, 0x2BC($s4)
    ctx->pc = 0x2e5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 700)));
    // 0x2e5a34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2e5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e5a38: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2e5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2e5a3c: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5A3Cu;
    {
        const bool branch_taken_0x2e5a3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A3Cu;
        // 0x2e5a40: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a3c) {
            ctx->pc = 0x2E5A5Cu;
            goto label_2e5a5c;
        }
    }
    ctx->pc = 0x2E5A44u;
    // 0x2e5a44: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a48: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e5a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5a4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5a50: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e5a50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5a54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e5a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5a58: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e5a5c:
    // 0x2e5a5c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a60: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E5A60u;
    SET_GPR_U32(ctx, 31, 0x2E5A68u);
    ctx->pc = 0x2E5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A60u;
    // 0x2e5a64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E5A60u, 0x2E5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A68u;
label_2e5a68:
    // 0x2e5a68: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e5a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5a70: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E5A70u;
    SET_GPR_U32(ctx, 31, 0x2E5A78u);
    ctx->pc = 0x2E5A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A70u;
    // 0x2e5a74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E5A70u, 0x2E5A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A78u;
label_2e5a78:
    // 0x2e5a78: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5a7c: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E5A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E5A84u);
    ctx->pc = 0x2E5A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5A7Cu;
    // 0x2e5a80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E5A7Cu, 0x2E5A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A84u;
label_2e5a84:
    // 0x2e5a84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5a88: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5A88u;
    {
        const bool branch_taken_0x2e5a88 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5A88u;
        // 0x2e5a8c: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a88) {
            ctx->pc = 0x2E5B08u;
            goto label_2e5b08;
        }
    }
    ctx->pc = 0x2E5A90u;
    // 0x2e5a90: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5a94: 0x8ca61180  lw          $a2, 0x1180($a1)
    ctx->pc = 0x2e5a94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4480)));
    // 0x2e5a98: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e5a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e5a9c: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5aa0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e5aa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e5aa4: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e5aa8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5aac: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e5aacu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5ab0: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e5ab4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e5ab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5ab8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5AB8u;
    {
        const bool branch_taken_0x2e5ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5AB8u;
        // 0x2e5abc: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ab8) {
            ctx->pc = 0x2E5B08u;
            goto label_2e5b08;
        }
    }
    ctx->pc = 0x2E5AC0u;
    // 0x2e5ac0: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5ac4: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e5ac8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e5ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5acc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5ACCu;
    {
        const bool branch_taken_0x2e5acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5acc) {
            ctx->pc = 0x2E5AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5ACCu;
            // 0x2e5ad0: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B0Cu;
            goto label_2e5b0c;
        }
    }
    ctx->pc = 0x2E5AD4u;
    // 0x2e5ad4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e5ad8: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e5adc: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e5adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e5ae0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e5ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5ae4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5AE4u;
    {
        const bool branch_taken_0x2e5ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ae4) {
            ctx->pc = 0x2E5AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5AE4u;
            // 0x2e5ae8: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B0Cu;
            goto label_2e5b0c;
        }
    }
    ctx->pc = 0x2E5AECu;
    // 0x2e5aec: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e5aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e5af0: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e5af4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5af8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e5afc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e5afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e5b00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B00u;
    {
        const bool branch_taken_0x2e5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B00u;
        // 0x2e5b04: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b00) {
            ctx->pc = 0x2E5B10u;
            goto label_2e5b10;
        }
    }
    ctx->pc = 0x2E5B08u;
label_2e5b08:
    // 0x2e5b08: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x2e5b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_2e5b0c:
    // 0x2e5b0c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2e5b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e5b10:
    // 0x2e5b10: 0x172180  sll         $a0, $s7, 6
    ctx->pc = 0x2e5b10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x2e5b14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5b18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2e5b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5b1c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5b20: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e5b20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2e5b24: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2e5b24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e5b28: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2e5b28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2e5b2c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e5b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e5b30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e5b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e5b34: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2e5b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2e5b38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5b3c: 0xfc820040  sd          $v0, 0x40($a0)
    ctx->pc = 0x2e5b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 2));
    // 0x2e5b40: 0xfc870048  sd          $a3, 0x48($a0)
    ctx->pc = 0x2e5b40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 7));
    // 0x2e5b44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5b48: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x2e5b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5b4c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e5b4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e5b50: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2e5b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2e5b54: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x2e5b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b58: 0xfc820038  sd          $v0, 0x38($a0)
    ctx->pc = 0x2e5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 2));
    // 0x2e5b5c: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x2e5b5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x2e5b60: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E5B60u;
    {
        const bool branch_taken_0x2e5b60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5B60u;
        // 0x2e5b64: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b60) {
            ctx->pc = 0x2E5B8Cu;
            goto label_2e5b8c;
        }
    }
    ctx->pc = 0x2E5B68u;
    // 0x2e5b68: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2e5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e5b6c: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x2e5b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x2e5b70: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x2e5b70u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
    // 0x2e5b74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e5b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5b78: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x2e5b78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
    // 0x2e5b7c: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x2e5b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x2e5b80: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x2e5b80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x2e5b84: 0xfc830048  sd          $v1, 0x48($a0)
    ctx->pc = 0x2e5b84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
    // 0x2e5b88: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x2e5b88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
label_2e5b8c:
    // 0x2e5b8c: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x2e5b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2e5b90: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2e5b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2e5b94: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e5b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e5b98: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2e5b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e5b9c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2e5b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e5ba0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e5ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e5ba4: 0x8e820304  lw          $v0, 0x304($s4)
    ctx->pc = 0x2e5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 772)));
    // 0x2e5ba8: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x2e5ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2e5bac: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x2e5bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2e5bb0: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x2e5bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x2e5bb4: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x2e5bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x2e5bb8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2e5bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e5bbc: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x2E5BBCu;
    {
        const bool branch_taken_0x2e5bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BBCu;
        // 0x2e5bc0: 0xafa600d8  sw          $a2, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bbc) {
            ctx->pc = 0x2E5600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5600;
        }
    }
    ctx->pc = 0x2E5BC4u;
label_2e5bc4:
    // 0x2e5bc4: 0x8e820308  lw          $v0, 0x308($s4)
    ctx->pc = 0x2e5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 776)));
    // 0x2e5bc8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2e5bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e5bcc: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2e5bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e5bd0: 0x5440fe79  bnel        $v0, $zero, . + 4 + (-0x187 << 2)
    ctx->pc = 0x2E5BD0u;
    {
        const bool branch_taken_0x2e5bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5bd0) {
            ctx->pc = 0x2E5BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5BD0u;
            // 0x2e5bd4: 0x8e8302f8  lw          $v1, 0x2F8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E55B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e55b8;
        }
    }
    ctx->pc = 0x2E5BD8u;
label_2e5bd8:
    // 0x2e5bd8: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x2e5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
    // 0x2e5bdc: 0x1040019e  beqz        $v0, . + 4 + (0x19E << 2)
    ctx->pc = 0x2E5BDCu;
    {
        const bool branch_taken_0x2e5bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5BDCu;
        // 0x2e5be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5bdc) {
            ctx->pc = 0x2E6258u;
            goto label_2e6258;
        }
    }
    ctx->pc = 0x2E5BE4u;
    // 0x2e5be4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e5be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e5be8:
    // 0x2e5be8: 0x8e83031c  lw          $v1, 0x31C($s4)
    ctx->pc = 0x2e5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
    // 0x2e5bec: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2e5becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e5bf0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x2e5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x2e5bf4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2e5bf8: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2e5bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x2e5bfc: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x2e5bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2e5c00: 0x2012  mflo        $a0
    ctx->pc = 0x2e5c00u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2e5c04: 0x1060018f  beqz        $v1, . + 4 + (0x18F << 2)
    ctx->pc = 0x2E5C04u;
    {
        const bool branch_taken_0x2e5c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C04u;
        // 0x2e5c08: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c04) {
            ctx->pc = 0x2E6244u;
            goto label_2e6244;
        }
    }
    ctx->pc = 0x2E5C0Cu;
    // 0x2e5c0c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x2e5c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e5c10: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2e5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2e5c14: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2e5c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e5c18: 0x2456b7a8  addiu       $s6, $v0, -0x4858
    ctx->pc = 0x2e5c18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948776));
    // 0x2e5c1c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x2e5c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5c20: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x2e5c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x2e5c24: 0xafa700e4  sw          $a3, 0xE4($sp)
    ctx->pc = 0x2e5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 7));
    // 0x2e5c28: 0x668821  addu        $s1, $v1, $a2
    ctx->pc = 0x2e5c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e5c2c: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2e5c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2e5c30:
    // 0x2e5c30: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2e5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2e5c34: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e5c38: 0x8e8302c0  lw          $v1, 0x2C0($s4)
    ctx->pc = 0x2e5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
    // 0x2e5c3c: 0x800013  mtlo        $a0
    ctx->pc = 0x2e5c3cu;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x2e5c40: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x2e5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2e5c44: 0x70829800  madd        $s3, $a0, $v0
    ctx->pc = 0x2e5c44u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x2e5c48: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x2e5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e5c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e5c50: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5C50u;
    {
        const bool branch_taken_0x2e5c50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5C50u;
        // 0x2e5c54: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c50) {
            ctx->pc = 0x2E5C70u;
            goto label_2e5c70;
        }
    }
    ctx->pc = 0x2E5C58u;
    // 0x2e5c58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5c5c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e5c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5c60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e5c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5c64: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e5c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5c68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e5c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5c6c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e5c70:
    // 0x2e5c70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e5c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5c74: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c78: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E5C78u;
    SET_GPR_U32(ctx, 31, 0x2E5C80u);
    ctx->pc = 0x2E5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C78u;
    // 0x2e5c7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E5C78u, 0x2E5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C80u;
label_2e5c80:
    // 0x2e5c80: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5c84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c88: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E5C88u;
    SET_GPR_U32(ctx, 31, 0x2E5C90u);
    ctx->pc = 0x2E5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C88u;
    // 0x2e5c8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E5C88u, 0x2E5C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C90u;
label_2e5c90:
    // 0x2e5c90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5c94: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E5C94u;
    SET_GPR_U32(ctx, 31, 0x2E5C9Cu);
    ctx->pc = 0x2E5C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5C94u;
    // 0x2e5c98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E5C94u, 0x2E5C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C9Cu;
label_2e5c9c:
    // 0x2e5c9c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5ca0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5CA0u;
    {
        const bool branch_taken_0x2e5ca0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CA0u;
        // 0x2e5ca4: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5ca0) {
            ctx->pc = 0x2E5D20u;
            goto label_2e5d20;
        }
    }
    ctx->pc = 0x2E5CA8u;
    // 0x2e5ca8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5cac: 0x8ca61180  lw          $a2, 0x1180($a1)
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4480)));
    // 0x2e5cb0: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e5cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e5cb4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5cb8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e5cb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e5cbc: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e5cc0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5cc4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e5cc4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5cc8: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e5ccc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e5cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5cd0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5CD0u;
    {
        const bool branch_taken_0x2e5cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5CD0u;
        // 0x2e5cd4: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cd0) {
            ctx->pc = 0x2E5D20u;
            goto label_2e5d20;
        }
    }
    ctx->pc = 0x2E5CD8u;
    // 0x2e5cd8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5cdc: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e5ce0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e5ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5ce4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5CE4u;
    {
        const bool branch_taken_0x2e5ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ce4) {
            ctx->pc = 0x2E5CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5CE4u;
            // 0x2e5ce8: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5D24u;
            goto label_2e5d24;
        }
    }
    ctx->pc = 0x2E5CECu;
    // 0x2e5cec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e5cf0: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e5cf4: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e5cf8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e5cf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5cfc: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5CFCu;
    {
        const bool branch_taken_0x2e5cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5cfc) {
            ctx->pc = 0x2E5D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5CFCu;
            // 0x2e5d00: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5D24u;
            goto label_2e5d24;
        }
    }
    ctx->pc = 0x2E5D04u;
    // 0x2e5d04: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e5d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e5d08: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e5d0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e5d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5d10: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e5d14: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e5d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e5d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5D18u;
    {
        const bool branch_taken_0x2e5d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D18u;
        // 0x2e5d1c: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d18) {
            ctx->pc = 0x2E5D28u;
            goto label_2e5d28;
        }
    }
    ctx->pc = 0x2E5D20u;
label_2e5d20:
    // 0x2e5d20: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2e5d20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e5d24:
    // 0x2e5d24: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e5d28:
    // 0x2e5d28: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e5d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5d2c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e5d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5d30: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2e5d30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2e5d34: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e5d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5d38: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5d3c: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2e5d3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2e5d40: 0xfe260028  sd          $a2, 0x28($s1)
    ctx->pc = 0x2e5d40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 6));
    // 0x2e5d44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e5d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e5d48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e5d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e5d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e5d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e5d50: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x2e5d50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x2e5d54: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x2e5d54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
    // 0x2e5d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5d5c: 0xc4e0b7a8  lwc1        $f0, -0x4858($a3)
    ctx->pc = 0x2e5d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5d60: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2e5d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e5d64: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2e5d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2e5d68: 0xc4e1b7a8  lwc1        $f1, -0x4858($a3)
    ctx->pc = 0x2e5d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294948776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5d6c: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x2e5d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x2e5d70: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2e5d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e5d74: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x2e5d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2e5d78: 0x8e8202c0  lw          $v0, 0x2C0($s4)
    ctx->pc = 0x2e5d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
    // 0x2e5d7c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2e5d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2e5d80: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2e5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e5d84: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5D84u;
    {
        const bool branch_taken_0x2e5d84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5D84u;
        // 0x2e5d88: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5d84) {
            ctx->pc = 0x2E5DA4u;
            goto label_2e5da4;
        }
    }
    ctx->pc = 0x2E5D8Cu;
    // 0x2e5d8c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5d90: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e5d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5d94: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5d98: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e5d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5d9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e5d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5da0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e5da4:
    // 0x2e5da4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5da8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5dac: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E5DACu;
    SET_GPR_U32(ctx, 31, 0x2E5DB4u);
    ctx->pc = 0x2E5DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DACu;
    // 0x2e5db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E5DACu, 0x2E5DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DB4u;
label_2e5db4:
    // 0x2e5db4: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e5db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5db8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5dbc: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E5DBCu;
    SET_GPR_U32(ctx, 31, 0x2E5DC4u);
    ctx->pc = 0x2E5DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DBCu;
    // 0x2e5dc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E5DBCu, 0x2E5DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DC4u;
label_2e5dc4:
    // 0x2e5dc4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5dc8: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E5DC8u;
    SET_GPR_U32(ctx, 31, 0x2E5DD0u);
    ctx->pc = 0x2E5DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5DC8u;
    // 0x2e5dcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E5DC8u, 0x2E5DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DD0u;
label_2e5dd0:
    // 0x2e5dd0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5dd4: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5DD4u;
    {
        const bool branch_taken_0x2e5dd4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5DD4u;
        // 0x2e5dd8: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5dd4) {
            ctx->pc = 0x2E5E54u;
            goto label_2e5e54;
        }
    }
    ctx->pc = 0x2E5DDCu;
    // 0x2e5ddc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5de0: 0x8c661180  lw          $a2, 0x1180($v1)
    ctx->pc = 0x2e5de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2e5de4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e5de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e5de8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5dec: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e5decu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e5df0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5df4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e5df4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e5df8: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e5df8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5dfc: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e5e00: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e5e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5e04: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5E04u;
    {
        const bool branch_taken_0x2e5e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E04u;
        // 0x2e5e08: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e04) {
            ctx->pc = 0x2E5E54u;
            goto label_2e5e54;
        }
    }
    ctx->pc = 0x2E5E0Cu;
    // 0x2e5e0c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e5e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5e10: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e5e14: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e5e14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5e18: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5E18u;
    {
        const bool branch_taken_0x2e5e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e18) {
            ctx->pc = 0x2E5E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5E18u;
            // 0x2e5e1c: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5E58u;
            goto label_2e5e58;
        }
    }
    ctx->pc = 0x2E5E20u;
    // 0x2e5e20: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e5e24: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e5e28: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e5e2c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e5e2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5e30: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5E30u;
    {
        const bool branch_taken_0x2e5e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e30) {
            ctx->pc = 0x2E5E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5E30u;
            // 0x2e5e34: 0x36100004  ori         $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5E58u;
            goto label_2e5e58;
        }
    }
    ctx->pc = 0x2E5E38u;
    // 0x2e5e38: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e5e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e5e3c: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e5e40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e5e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5e44: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e5e48: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e5e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e5e4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5E4Cu;
    {
        const bool branch_taken_0x2e5e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5E4Cu;
        // 0x2e5e50: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5e4c) {
            ctx->pc = 0x2E5E5Cu;
            goto label_2e5e5c;
        }
    }
    ctx->pc = 0x2E5E54u;
label_2e5e54:
    // 0x2e5e54: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x2e5e54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_2e5e58:
    // 0x2e5e58: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e5e5c:
    // 0x2e5e5c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2e5e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5e60: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5e64: 0x4619a880  add.s       $f2, $f21, $f25
    ctx->pc = 0x2e5e64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    // 0x2e5e68: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5e6c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5e70: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e5e70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e5e74: 0x8fbe00e4  lw          $fp, 0xE4($sp)
    ctx->pc = 0x2e5e74u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2e5e78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e5e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e5e7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5e80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5e84: 0xfe260048  sd          $a2, 0x48($s1)
    ctx->pc = 0x2e5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 6));
    // 0x2e5e88: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x2e5e88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x2e5e8c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e5e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5e90: 0x460015c6  mov.s       $f23, $f2
    ctx->pc = 0x2e5e90u;
    ctx->f[23] = FPU_MOV_S(ctx->f[2]);
    // 0x2e5e94: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2e5e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5e98: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2e5e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e5e9c: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2e5e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2e5ea0: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x2e5ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ea4: 0xfe270038  sd          $a3, 0x38($s1)
    ctx->pc = 0x2e5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 7));
    // 0x2e5ea8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2e5ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e5eac: 0xfe260088  sd          $a2, 0x88($s1)
    ctx->pc = 0x2e5eacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 6));
    // 0x2e5eb0: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2e5eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2e5eb4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5eb8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5ebc: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5ec0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5ec4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e5ec4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e5ec8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5ecc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e5eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e5ed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5ed4: 0xfe230080  sd          $v1, 0x80($s1)
    ctx->pc = 0x2e5ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 3));
    // 0x2e5ed8: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x2e5ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5edc: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2e5edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2e5ee0: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2e5ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2e5ee4: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x2e5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ee8: 0xfe270078  sd          $a3, 0x78($s1)
    ctx->pc = 0x2e5ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 7));
    // 0x2e5eec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2e5eecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2e5ef0: 0xe6220074  swc1        $f2, 0x74($s1)
    ctx->pc = 0x2e5ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2e5ef4: 0x8e8202c0  lw          $v0, 0x2C0($s4)
    ctx->pc = 0x2e5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
    // 0x2e5ef8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2e5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e5efc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e5f00: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5F00u;
    {
        const bool branch_taken_0x2e5f00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E5F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F00u;
        // 0x2e5f04: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f00) {
            ctx->pc = 0x2E5F20u;
            goto label_2e5f20;
        }
    }
    ctx->pc = 0x2E5F08u;
    // 0x2e5f08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2e5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f0c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e5f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e5f10: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2e5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5f14: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e5f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e5f18: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2e5f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f1c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2e5f20:
    // 0x2e5f20: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f24: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E5F24u;
    SET_GPR_U32(ctx, 31, 0x2E5F2Cu);
    ctx->pc = 0x2E5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F24u;
    // 0x2e5f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E5F24u, 0x2E5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F2Cu;
label_2e5f2c:
    // 0x2e5f2c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e5f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f34: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E5F34u;
    SET_GPR_U32(ctx, 31, 0x2E5F3Cu);
    ctx->pc = 0x2E5F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F34u;
    // 0x2e5f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E5F34u, 0x2E5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F3Cu;
label_2e5f3c:
    // 0x2e5f3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e5f40: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E5F40u;
    SET_GPR_U32(ctx, 31, 0x2E5F48u);
    ctx->pc = 0x2E5F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F40u;
    // 0x2e5f44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E5F40u, 0x2E5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F48u;
label_2e5f48:
    // 0x2e5f48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5f4c: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E5F4Cu;
    {
        const bool branch_taken_0x2e5f4c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F4Cu;
        // 0x2e5f50: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f4c) {
            ctx->pc = 0x2E5FCCu;
            goto label_2e5fcc;
        }
    }
    ctx->pc = 0x2E5F54u;
    // 0x2e5f54: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5f58: 0x8c461180  lw          $a2, 0x1180($v0)
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2e5f5c: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e5f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e5f60: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e5f64: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e5f64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e5f68: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e5f6c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5f70: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e5f70u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e5f74: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e5f78: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e5f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5f7c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E5F7Cu;
    {
        const bool branch_taken_0x2e5f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5F7Cu;
        // 0x2e5f80: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5f7c) {
            ctx->pc = 0x2E5FCCu;
            goto label_2e5fcc;
        }
    }
    ctx->pc = 0x2E5F84u;
    // 0x2e5f84: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5f88: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e5f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e5f8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e5f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5f90: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E5F90u;
    {
        const bool branch_taken_0x2e5f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f90) {
            ctx->pc = 0x2E5F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5F90u;
            // 0x2e5f94: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5FD0u;
            goto label_2e5fd0;
        }
    }
    ctx->pc = 0x2E5F98u;
    // 0x2e5f98: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e5f9c: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e5fa0: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e5fa4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e5fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5fa8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5FA8u;
    {
        const bool branch_taken_0x2e5fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5fa8) {
            ctx->pc = 0x2E5FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5FA8u;
            // 0x2e5fac: 0x36100008  ori         $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5FD0u;
            goto label_2e5fd0;
        }
    }
    ctx->pc = 0x2E5FB0u;
    // 0x2e5fb0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e5fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e5fb4: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e5fb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5fbc: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e5fc0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e5fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e5fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5FC4u;
    {
        const bool branch_taken_0x2e5fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5FC4u;
        // 0x2e5fc8: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5fc4) {
            ctx->pc = 0x2E5FD4u;
            goto label_2e5fd4;
        }
    }
    ctx->pc = 0x2E5FCCu;
label_2e5fcc:
    // 0x2e5fcc: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x2e5fccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_2e5fd0:
    // 0x2e5fd0: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e5fd4:
    // 0x2e5fd4: 0x1e2980  sll         $a1, $fp, 6
    ctx->pc = 0x2e5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x2e5fd8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e5fdc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2e5fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e5fe0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5fe4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e5fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e5fe8: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x2e5fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e5fec: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e5fecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e5ff0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e5ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e5ff4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5ff8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2e5ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e5ffc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e6000: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x2e6000u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x2e6004: 0x4618b080  add.s       $f2, $f22, $f24
    ctx->pc = 0x2e6004u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[24]);
    // 0x2e6008: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x2e6008u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x2e600c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e600cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6010: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2e6010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6014: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x2e6014u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
    // 0x2e6018: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e601c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e601cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e6020: 0x24570002  addiu       $s7, $v0, 0x2
    ctx->pc = 0x2e6020u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2e6024: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2e6024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2e6028: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x2e6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e602c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x2e602cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x2e6030: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2e6030u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2e6034: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x2e6034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2e6038: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e603c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e6040: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e6040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6044: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e6044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e6048: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e6048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e604c: 0xfe2700a8  sd          $a3, 0xA8($s1)
    ctx->pc = 0x2e604cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 168), GPR_U64(ctx, 7));
    // 0x2e6050: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e6050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e6054: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e6054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e6058: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e6058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e605c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e6060: 0xfe2300a0  sd          $v1, 0xA0($s1)
    ctx->pc = 0x2e6060u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 3));
    // 0x2e6064: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2e6064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6068: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2e6068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e606c: 0xe6220090  swc1        $f2, 0x90($s1)
    ctx->pc = 0x2e606cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2e6070: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x2e6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6074: 0xfe240098  sd          $a0, 0x98($s1)
    ctx->pc = 0x2e6074u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 152), GPR_U64(ctx, 4));
    // 0x2e6078: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2e6078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2e607c: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2e607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2e6080: 0x8e8202c0  lw          $v0, 0x2C0($s4)
    ctx->pc = 0x2e6080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
    // 0x2e6084: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x2e6084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2e6088: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x2e6088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2e608c: 0x52a50008  beql        $s5, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E608Cu;
    {
        const bool branch_taken_0x2e608c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e608c) {
            ctx->pc = 0x2E6090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E608Cu;
            // 0x2e6090: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E60B0u;
            goto label_2e60b0;
        }
    }
    ctx->pc = 0x2E6094u;
    // 0x2e6094: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2e6094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6098: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e6098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e609c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2e609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e60a0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e60a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e60a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2e60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e60a8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e60a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e60ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2e60acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e60b0:
    // 0x2e60b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e60b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60b4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2E60B4u;
    SET_GPR_U32(ctx, 31, 0x2E60BCu);
    ctx->pc = 0x2E60B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60B4u;
    // 0x2e60b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2E60B4u, 0x2E60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60BCu;
label_2e60bc:
    // 0x2e60bc: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e60bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e60c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e60c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e60c4: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2E60C4u;
    SET_GPR_U32(ctx, 31, 0x2E60CCu);
    ctx->pc = 0x2E60C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60C4u;
    // 0x2e60c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2E60C4u, 0x2E60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60CCu;
label_2e60cc:
    // 0x2e60cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2e60ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e60d0: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2E60D0u;
    SET_GPR_U32(ctx, 31, 0x2E60D8u);
    ctx->pc = 0x2E60D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E60D0u;
    // 0x2e60d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2E60D0u, 0x2E60D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E60D8u;
label_2e60d8:
    // 0x2e60d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e60dc: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E60DCu;
    {
        const bool branch_taken_0x2e60dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2E60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E60DCu;
        // 0x2e60e0: 0x3c05003c  lui         $a1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e60dc) {
            ctx->pc = 0x2E615Cu;
            goto label_2e615c;
        }
    }
    ctx->pc = 0x2E60E4u;
    // 0x2e60e4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e60e8: 0x8ca61180  lw          $a2, 0x1180($a1)
    ctx->pc = 0x2e60e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4480)));
    // 0x2e60ec: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2e60ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e60f0: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e60f4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2e60f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2e60f8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2e60fc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2e60fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e6100: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2e6100u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e6104: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2e6104u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2e6108: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e6108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e610c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E610Cu;
    {
        const bool branch_taken_0x2e610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E610Cu;
        // 0x2e6110: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e610c) {
            ctx->pc = 0x2E615Cu;
            goto label_2e615c;
        }
    }
    ctx->pc = 0x2E6114u;
    // 0x2e6114: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e6114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e6118: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2e6118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2e611c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2e611cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e6120: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6120u;
    {
        const bool branch_taken_0x2e6120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6120) {
            ctx->pc = 0x2E6124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6120u;
            // 0x2e6124: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6160u;
            goto label_2e6160;
        }
    }
    ctx->pc = 0x2E6128u;
    // 0x2e6128: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2e6128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2e612c: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2e612cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2e6130: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2e6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2e6134: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2e6134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6138: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6138u;
    {
        const bool branch_taken_0x2e6138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e6138) {
            ctx->pc = 0x2E613Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6138u;
            // 0x2e613c: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6160u;
            goto label_2e6160;
        }
    }
    ctx->pc = 0x2E6140u;
    // 0x2e6140: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e6140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e6144: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2e6144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2e6148: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e614c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2e614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2e6150: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2e6150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e6154: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6154u;
    {
        const bool branch_taken_0x2e6154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6154u;
        // 0x2e6158: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6154) {
            ctx->pc = 0x2E6164u;
            goto label_2e6164;
        }
    }
    ctx->pc = 0x2E615Cu;
label_2e615c:
    // 0x2e615c: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x2e615cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_2e6160:
    // 0x2e6160: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2e6160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e6164:
    // 0x2e6164: 0x172180  sll         $a0, $s7, 6
    ctx->pc = 0x2e6164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x2e6168: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2e6168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e616c: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x2e616cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e6170: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x2e6170u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x2e6174: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2e6174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6178: 0x3193b  dsra        $v1, $v1, 4
    ctx->pc = 0x2e6178u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 4);
    // 0x2e617c: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x2e617cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2e6180: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e6180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e6184: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e6184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e6188: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2e6188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e618c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e618cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e6190: 0xfcc40048  sd          $a0, 0x48($a2)
    ctx->pc = 0x2e6190u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 4));
    // 0x2e6194: 0xfcc20040  sd          $v0, 0x40($a2)
    ctx->pc = 0x2e6194u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 2));
    // 0x2e6198: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e6198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e619c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2e619cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e61a0: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2e61a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2e61a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e61a8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2e61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e61ac: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e61acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e61b0: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e61b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e61b4: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x2e61b4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
    // 0x2e61b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e61b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e61bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e61bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e61c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e61c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e61c4: 0xfcc30040  sd          $v1, 0x40($a2)
    ctx->pc = 0x2e61c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 3));
    // 0x2e61c8: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x2e61c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e61cc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e61ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2e61d0: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x2e61d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2e61d4: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x2e61d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e61d8: 0xfcc70038  sd          $a3, 0x38($a2)
    ctx->pc = 0x2e61d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 7));
    // 0x2e61dc: 0x4601b842  mul.s       $f1, $f23, $f1
    ctx->pc = 0x2e61dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x2e61e0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E61E0u;
    {
        const bool branch_taken_0x2e61e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E61E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E61E0u;
        // 0x2e61e4: 0xe4c10034  swc1        $f1, 0x34($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e61e0) {
            ctx->pc = 0x2E6210u;
            goto label_2e6210;
        }
    }
    ctx->pc = 0x2E61E8u;
    // 0x2e61e8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2e61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e61ec: 0x1e1180  sll         $v0, $fp, 6
    ctx->pc = 0x2e61ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 6));
    // 0x2e61f0: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x2e61f0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
    // 0x2e61f4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x2e61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e61f8: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x2e61f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
    // 0x2e61fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e6200: 0xfc430048  sd          $v1, 0x48($v0)
    ctx->pc = 0x2e6200u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 3));
    // 0x2e6204: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x2e6204u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x2e6208: 0xfcc30048  sd          $v1, 0x48($a2)
    ctx->pc = 0x2e6208u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 3));
    // 0x2e620c: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x2e620cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
label_2e6210:
    // 0x2e6210: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2e6210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2e6214: 0x263100c0  addiu       $s1, $s1, 0xC0
    ctx->pc = 0x2e6214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x2e6218: 0x8fa600e4  lw          $a2, 0xE4($sp)
    ctx->pc = 0x2e6218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x2e621c: 0x8fa700d8  lw          $a3, 0xD8($sp)
    ctx->pc = 0x2e621cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e6220: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6224: 0x8e82031c  lw          $v0, 0x31C($s4)
    ctx->pc = 0x2e6224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 796)));
    // 0x2e6228: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x2e6228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x2e622c: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x2e622cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2e6230: 0xafa500d4  sw          $a1, 0xD4($sp)
    ctx->pc = 0x2e6230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
    // 0x2e6234: 0xafa600e4  sw          $a2, 0xE4($sp)
    ctx->pc = 0x2e6234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 6));
    // 0x2e6238: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2e6238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e623c: 0x1440fe7c  bnez        $v0, . + 4 + (-0x184 << 2)
    ctx->pc = 0x2E623Cu;
    {
        const bool branch_taken_0x2e623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E623Cu;
        // 0x2e6240: 0xafa700d8  sw          $a3, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e623c) {
            ctx->pc = 0x2E5C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5c30;
        }
    }
    ctx->pc = 0x2E6244u;
label_2e6244:
    // 0x2e6244: 0x8e820320  lw          $v0, 0x320($s4)
    ctx->pc = 0x2e6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
    // 0x2e6248: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2e6248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2e624c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2e624cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e6250: 0x1440fe65  bnez        $v0, . + 4 + (-0x19B << 2)
    ctx->pc = 0x2E6250u;
    {
        const bool branch_taken_0x2e6250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6250u;
        // 0x2e6254: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6250) {
            ctx->pc = 0x2E5BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e5be8;
        }
    }
    ctx->pc = 0x2E6258u;
label_2e6258:
    // 0x2e6258: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2e625c: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2e625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e6260: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x2e6260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e6264: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2e6264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2e6268: 0x24180  sll         $t0, $v0, 6
    ctx->pc = 0x2e6268u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2e626c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2e626cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e6270: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x2e6270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x2e6274: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x2e6274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x2e6278: 0x344200f8  ori         $v0, $v0, 0xF8
    ctx->pc = 0x2e6278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2e627c: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x2e627cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2e6280: 0x240a0070  addiu       $t2, $zero, 0x70
    ctx->pc = 0x2e6280u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e6284: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x2e6284u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x2e6288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e628c: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x2e628cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x2e6290: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2e6290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e6294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e6294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6298: 0x8cc31180  lw          $v1, 0x1180($a2)
    ctx->pc = 0x2e6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4480)));
    // 0x2e629c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2e629cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e62a0: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x2e62a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2e62a4: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x2e62a4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e62a8: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x2e62a8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x2e62ac: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e62acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e62b0: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2e62b0u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e62b4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e62b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e62b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e62b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e62bc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2e62bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2e62c0: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2E62C0u;
    SET_GPR_U32(ctx, 31, 0x2E62C8u);
    ctx->pc = 0x2E62C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E62C0u;
    // 0x2e62c4: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2E62C0u, 0x2E62C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62C8u;
label_2e62c8:
    // 0x2e62c8: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x2e62c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_2e62cc:
    // 0x2e62cc: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x2e62ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_2e62d0:
    // 0x2e62d0: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x2e62d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2e62d4:
    // 0x2e62d4: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x2e62d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e62d8: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x2e62d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e62dc: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x2e62dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e62e0: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x2e62e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2e62e4: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x2e62e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2e62e8: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x2e62e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2e62ec: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2e62ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2e62f0: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x2e62f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2e62f4: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x2e62f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e62f8: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x2e62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e62fc: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x2e62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e6300: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2e6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e6304: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2e6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6308: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6308u;
        // 0x2e630c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6310u;
    // 0x2e6310: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e6310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e6314: 0x0  nop
    ctx->pc = 0x2e6314u;
    // NOP
    ctx->pc = 0x2e6318u;
}
