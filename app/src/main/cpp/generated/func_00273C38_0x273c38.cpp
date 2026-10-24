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

// Function: func_00273C38
// Address: 0x273c38 - 0x273d28
void func_00273C38_0x273c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273C38_0x273c38");
#endif

    switch (ctx->pc) {
        case 0x273ca0u: goto label_273ca0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cfcu: goto label_273cfc;
        default: break;
    }

    ctx->pc = 0x273c38u;

    // 0x273c38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x273c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x273c3c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x273c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x273c40: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x273c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x273c44: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x273c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x273c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x273c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x273c4c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x273c4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x273c50: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x273c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x273c54: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x273c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x273c58: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x273c5c: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x273c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x273c60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273C60u;
    {
        const bool branch_taken_0x273c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C60u;
        // 0x273c64: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c60) {
            ctx->pc = 0x273C70u;
            goto label_273c70;
        }
    }
    ctx->pc = 0x273C68u;
    // 0x273c68: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x273C68u;
    {
        const bool branch_taken_0x273c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C68u;
        // 0x273c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c68) {
            ctx->pc = 0x273D08u;
            goto label_273d08;
        }
    }
    ctx->pc = 0x273C70u;
label_273c70:
    // 0x273c70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x273c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x273c74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x273c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x273c78: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x273c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x273c7c: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x273c80: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x273c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x273c84: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x273c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x273c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c8c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x273c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x273c90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x273c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273c98: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273C98u;
    SET_GPR_U32(ctx, 31, 0x273CA0u);
    ctx->pc = 0x273C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273C98u;
    // 0x273c9c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273C98u, 0x273CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CA0u;
label_273ca0:
    // 0x273ca0: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x273ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x273ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273ca8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x273ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x273cac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x273cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cb0: 0xe7b40044  swc1        $f20, 0x44($sp)
    ctx->pc = 0x273cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x273cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x273cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cb8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x273cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x273cbc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x273CBCu;
    SET_GPR_U32(ctx, 31, 0x273CC4u);
    ctx->pc = 0x273CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CBCu;
    // 0x273cc0: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x273CBCu, 0x273CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CC4u;
label_273cc4:
    // 0x273cc4: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x273cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x273cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ccc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x273cd0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x273cd4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x273cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x273cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cdc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x273cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x273ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ce4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x273ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x273ce8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x273ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273cec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cf0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273cf0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273cf4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x273CF4u;
    SET_GPR_U32(ctx, 31, 0x273CFCu);
    ctx->pc = 0x273CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273CF4u;
    // 0x273cf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x273CF4u, 0x273CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273CFCu;
label_273cfc:
    // 0x273cfc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x273cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x273d00: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x273d00u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x273d04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x273d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273d08:
    // 0x273d08: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x273d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x273d0c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x273d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273d10: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x273d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273d14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x273d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273d18: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x273d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x273d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x273D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D1Cu;
        // 0x273d20: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273D24u;
    // 0x273d24: 0x0  nop
    ctx->pc = 0x273d24u;
    // NOP
    ctx->pc = 0x273d28u;
}
