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

// Function: func_002D3C78
// Address: 0x2d3c78 - 0x2d3d88
void func_002D3C78_0x2d3c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3C78_0x2d3c78");
#endif

    switch (ctx->pc) {
        case 0x2d3cecu: goto label_2d3cec;
        case 0x2d3d44u: goto label_2d3d44;
        case 0x2d3d6cu: goto label_2d3d6c;
        default: break;
    }

    ctx->pc = 0x2d3c78u;

    // 0x2d3c78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d3c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d3c7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d3c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d3c80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d3c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d3c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c90: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x2d3c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d3c94: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x2d3c94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3c98: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x2d3c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d3c9c: 0xa603001e  sh          $v1, 0x1E($s0)
    ctx->pc = 0x2d3c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3ca0: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x2d3ca0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d3ca4: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x2d3ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3ca8: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x2d3ca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2d3cac: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x2d3cacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3cb0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2d3cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d3cb4: 0xa6020024  sh          $v0, 0x24($s0)
    ctx->pc = 0x2d3cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d3cb8: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x2d3cb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2d3cbc: 0xa6030026  sh          $v1, 0x26($s0)
    ctx->pc = 0x2d3cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3cc0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2d3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2d3cc4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2d3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2d3cc8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2d3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2d3ccc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x2d3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x2d3cd0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2d3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2d3cd4: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2d3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x2d3cd8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2d3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d3cdc: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2d3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x2d3ce0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2d3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2d3ce4: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x2D3CE4u;
    SET_GPR_U32(ctx, 31, 0x2D3CECu);
    ctx->pc = 0x2D3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3CE4u;
    // 0x2d3ce8: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x2D3CE4u, 0x2D3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3CECu;
label_2d3cec:
    // 0x2d3cec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3cf0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3CF0u;
    {
        const bool branch_taken_0x2d3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2d3cf0) {
            ctx->pc = 0x2D3D08u;
            goto label_2d3d08;
        }
    }
    ctx->pc = 0x2D3CF8u;
    // 0x2d3cf8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2d3cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d3cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d3d00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3D00u;
    {
        const bool branch_taken_0x2d3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D00u;
        // 0x2d3d04: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d00) {
            ctx->pc = 0x2D3D14u;
            goto label_2d3d14;
        }
    }
    ctx->pc = 0x2D3D08u;
label_2d3d08:
    // 0x2d3d08: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2d3d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3d0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d3d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d3d10: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2d3d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_2d3d14:
    // 0x2d3d14: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2d3d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2d3d18: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2d3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2d3d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d3d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d3d24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d3d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d3d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3d2c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2d3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2d3d30: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2d3d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2d3d34: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x2d3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2d3d38: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2d3d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2d3d3c: 0xc0b4f62  jal         func_2D3D88
    ctx->pc = 0x2D3D3Cu;
    SET_GPR_U32(ctx, 31, 0x2D3D44u);
    ctx->pc = 0x2D3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D3Cu;
    // 0x2d3d40: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3D88u, 0x2D3D3Cu, 0x2D3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D44u;
label_2d3d44:
    // 0x2d3d44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3D44u;
    {
        const bool branch_taken_0x2d3d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d3d44) {
            ctx->pc = 0x2D3D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3D44u;
            // 0x2d3d48: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3D54u;
            goto label_2d3d54;
        }
    }
    ctx->pc = 0x2D3D4Cu;
    // 0x2d3d4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D3D4Cu;
    {
        const bool branch_taken_0x2d3d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D4Cu;
        // 0x2d3d50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d4c) {
            ctx->pc = 0x2D3D70u;
            goto label_2d3d70;
        }
    }
    ctx->pc = 0x2D3D54u;
label_2d3d54:
    // 0x2d3d54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d3d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d3d58: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3D58u;
    {
        const bool branch_taken_0x2d3d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D58u;
        // 0x2d3d5c: 0xae000060  sw          $zero, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3d58) {
            ctx->pc = 0x2D3D6Cu;
            goto label_2d3d6c;
        }
    }
    ctx->pc = 0x2D3D60u;
    // 0x2d3d60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3d64: 0xc0d17d2  jal         func_345F48
    ctx->pc = 0x2D3D64u;
    SET_GPR_U32(ctx, 31, 0x2D3D6Cu);
    ctx->pc = 0x2D3D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3D64u;
    // 0x2d3d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345F48u, 0x2D3D64u, 0x2D3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3D6Cu;
label_2d3d6c:
    // 0x2d3d6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3d70:
    // 0x2d3d70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d3d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d3d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3D7Cu;
        // 0x2d3d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3D84u;
    // 0x2d3d84: 0x0  nop
    ctx->pc = 0x2d3d84u;
    // NOP
    ctx->pc = 0x2d3d88u;
}
