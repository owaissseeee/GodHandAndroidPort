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

// Function: func_001B1BD0
// Address: 0x1b1bd0 - 0x1b1c78
void func_001B1BD0_0x1b1bd0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1BD0_0x1b1bd0");
#endif

    if (__builtin_expect(ctx->pc != 0x1b1bd0u, 0)) {
        switch (ctx->pc) {
            case 0x1b1be8u: goto label_1b1be8;
            case 0x1b1c18u: goto label_1b1c18;
            case 0x1b1c58u: goto label_1b1c58;
            default: break;
        }
    }


    // 0x1b1bd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b1bd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b1bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b1bd8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b1bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b1bdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1be0: 0xc06dbee  jal         func_1B6FB8
    SET_GPR_U32(ctx, 31, 0x1B1BE8u);
    ctx->pc = 0x1B1BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BE0u;
    // 0x1b1be4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001B6FB8_0x1b6fb8, 0x1b6fb8u, 0x1b1be8u)) {
        return;
    }
label_1b1be8:
    // 0x1b1be8: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b1be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x1b1bec: 0x3c100046  lui         $s0, 0x46
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1b1bf0: 0x26102fc0  addiu       $s0, $s0, 0x2FC0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x1b1bf4: 0x3c013dcc  lui         $at, 0x3DCC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b1bf8: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b1bfc: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1c00: 0x34630008  ori         $v1, $v1, 0x8
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1b1c04: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c08: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1b1c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1b1c0c: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c10: 0xc04d1be  jal         func_1346F8
    SET_GPR_U32(ctx, 31, 0x1B1C18u);
    ctx->pc = 0x1B1C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C10u;
    // 0x1b1c14: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCollisionSolidManage_CreateUnit_0x1346f8, 0x1346f8u, 0x1b1c18u)) {
        return;
    }
label_1b1c18:
    // 0x1b1c18: 0x3c013f00  lui         $at, 0x3F00
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b1c1c: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1c20: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c24: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1c28: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b1c2c: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c30: 0x3c013ecc  lui         $at, 0x3ECC
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1b1c34: 0x3421cccd  ori         $at, $at, 0xCCCD
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b1c38: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b1c3c: 0x26260080  addiu       $a2, $s1, 0x80
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1b1c40: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b1c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b1c44: 0x3a0382d  daddu       $a3, $sp, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c48: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1b1c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b1c4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b1c50: 0xc04d220  jal         func_134880
    SET_GPR_U32(ctx, 31, 0x1B1C58u);
    ctx->pc = 0x1B1C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C50u;
    // 0x1b1c54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCollisionSolidManage_CreateSphere_0x134880, 0x134880u, 0x1b1c58u)) {
        return;
    }
label_1b1c58:
    // 0x1b1c58: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1b1c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b1c5c: 0x24020001  addiu       $v0, $zero, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1c60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b1c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1c64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C6Cu;
        // 0x1b1c70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1b1c74: 0x0  nop
    // NOP
    ctx->pc = 0x1b1c78u;
}