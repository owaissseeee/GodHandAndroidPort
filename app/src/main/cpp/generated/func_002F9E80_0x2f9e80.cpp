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

// Function: func_002F9E80
// Address: 0x2f9e80 - 0x2fa018
void func_002F9E80_0x2f9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F9E80_0x2f9e80");
#endif

    switch (ctx->pc) {
        case 0x2f9f78u: goto label_2f9f78;
        case 0x2f9f9cu: goto label_2f9f9c;
        case 0x2f9ff4u: goto label_2f9ff4;
        default: break;
    }

    ctx->pc = 0x2f9e80u;

    // 0x2f9e80: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f9e84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9e84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e88: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2f9e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2f9e8c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2f9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2f9e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e94: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2f9e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2f9e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f9e9c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2f9e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2f9ea0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2f9ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2f9ea4: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x2f9ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2f9ea8: 0x8e2402b4  lw          $a0, 0x2B4($s1)
    ctx->pc = 0x2f9ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x2f9eac: 0x90a302b4  lbu         $v1, 0x2B4($a1)
    ctx->pc = 0x2f9eacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 692)));
    // 0x2f9eb0: 0x4800002  bltz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9EB0u;
    {
        const bool branch_taken_0x2f9eb0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F9EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EB0u;
        // 0x2f9eb4: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9eb0) {
            ctx->pc = 0x2F9EBCu;
            goto label_2f9ebc;
        }
    }
    ctx->pc = 0x2F9EB8u;
    // 0x2f9eb8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2f9eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2f9ebc:
    // 0x2f9ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f9ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f9ec0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9EC0u;
    {
        const bool branch_taken_0x2f9ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EC0u;
        // 0x2f9ec4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ec0) {
            ctx->pc = 0x2F9ED8u;
            goto label_2f9ed8;
        }
    }
    ctx->pc = 0x2F9EC8u;
    // 0x2f9ec8: 0x8ca30278  lw          $v1, 0x278($a1)
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 632)));
    // 0x2f9ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f9ed0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9ED0u;
    {
        const bool branch_taken_0x2f9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ED0u;
        // 0x2f9ed4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ed0) {
            ctx->pc = 0x2F9EDCu;
            goto label_2f9edc;
        }
    }
    ctx->pc = 0x2F9ED8u;
label_2f9ed8:
    // 0x2f9ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f9ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9edc:
    // 0x2f9edc: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x2f9edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f9ee0: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2f9ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9ee4: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2f9ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9ee8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f9ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f9eec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f9eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f9ef0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f9ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f9ef4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2f9ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f9ef8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2f9ef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f9efc: 0xe7b5003c  swc1        $f21, 0x3C($sp)
    ctx->pc = 0x2f9efcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2f9f00: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x2f9f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2f9f04: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2f9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f9f08: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f9f08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9f0c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2f9f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f9f10: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f9f10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9f14: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x2f9f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f9f18: 0xc62002b0  lwc1        $f0, 0x2B0($s1)
    ctx->pc = 0x2f9f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9f1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f9f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9f20: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2f9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9f24: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2f9f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f9f28: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x2f9f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x2f9f2c: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x2f9f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f9f30: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x2f9f30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x2f9f34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f9f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f9f38: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2f9f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2f9f3c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2f9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f9f40: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2f9f40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2f9f44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2f9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2f9f48: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2f9f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f9f4c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2f9f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2f9f50: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f9f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2f9f54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f9f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f58: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x2f9f58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f9f5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f9f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f60: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2f9f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2f9f64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f9f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f9f68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f9f68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f9f6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f70: 0xc04c784  jal         func_131E10
    ctx->pc = 0x2F9F70u;
    SET_GPR_U32(ctx, 31, 0x2F9F78u);
    ctx->pc = 0x2F9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F70u;
    // 0x2f9f74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x2F9F70u, 0x2F9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F78u;
label_2f9f78:
    // 0x2f9f78: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9F78u;
    {
        const bool branch_taken_0x2f9f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F78u;
        // 0x2f9f7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f78) {
            ctx->pc = 0x2F9F94u;
            goto label_2f9f94;
        }
    }
    ctx->pc = 0x2F9F80u;
    // 0x2f9f80: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2f9f84: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f9f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9f88: 0xc4410140  lwc1        $f1, 0x140($v0)
    ctx->pc = 0x2f9f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9f8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f9f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f9f90: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f9f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_2f9f94:
    // 0x2f9f94: 0xc0ad8a2  jal         func_2B6288
    ctx->pc = 0x2F9F94u;
    SET_GPR_U32(ctx, 31, 0x2F9F9Cu);
    ctx->pc = 0x2F9F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9F94u;
    // 0x2f9f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6288u, 0x2F9F94u, 0x2F9F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9F9Cu;
label_2f9f9c:
    // 0x2f9f9c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2f9f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9fa0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2f9fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9fa4: 0xc62202b8  lwc1        $f2, 0x2B8($s1)
    ctx->pc = 0x2f9fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f9fa8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2f9fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f9fac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f9facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9fb0: 0x0  nop
    ctx->pc = 0x2f9fb0u;
    // NOP
    // 0x2f9fb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9FB4u;
    {
        const bool branch_taken_0x2f9fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F9FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FB4u;
        // 0x2f9fb8: 0xc6340194  lwc1        $f20, 0x194($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fb4) {
            ctx->pc = 0x2F9FD0u;
            goto label_2f9fd0;
        }
    }
    ctx->pc = 0x2F9FBCu;
    // 0x2f9fbc: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2f9fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2f9fc0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2f9fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2f9fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f9fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9fc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9FC8u;
    {
        const bool branch_taken_0x2f9fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FC8u;
        // 0x2f9fcc: 0xc6200194  lwc1        $f0, 0x194($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fc8) {
            ctx->pc = 0x2F9FE4u;
            goto label_2f9fe4;
        }
    }
    ctx->pc = 0x2F9FD0u;
label_2f9fd0:
    // 0x2f9fd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f9fd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f9fd4: 0xc62102bc  lwc1        $f1, 0x2BC($s1)
    ctx->pc = 0x2f9fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9fd8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2f9fd8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2f9fdc: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x2f9fdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2f9fe0: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x2f9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f9fe4:
    // 0x2f9fe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fe8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f9fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f9fec: 0xc0bfac6  jal         func_2FEB18
    ctx->pc = 0x2F9FECu;
    SET_GPR_U32(ctx, 31, 0x2F9FF4u);
    ctx->pc = 0x2F9FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FECu;
    // 0x2f9ff0: 0xe6200194  swc1        $f0, 0x194($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEB18u, 0x2F9FECu, 0x2F9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FF4u;
label_2f9ff4:
    // 0x2f9ff4: 0xe6340194  swc1        $f20, 0x194($s1)
    ctx->pc = 0x2f9ff4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x2f9ff8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2f9ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f9ffc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2f9ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fa000: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2fa000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fa004: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2fa004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fa008: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2fa008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fa00c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2fa00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fa010: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA010u;
        // 0x2fa014: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA018u;
}
