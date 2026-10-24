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

// Function: func_002A6CA8
// Address: 0x2a6ca8 - 0x2a6da8
void func_002A6CA8_0x2a6ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A6CA8_0x2a6ca8");
#endif

    switch (ctx->pc) {
        case 0x2a6cc0u: goto label_2a6cc0;
        case 0x2a6cc8u: goto label_2a6cc8;
        case 0x2a6d60u: goto label_2a6d60;
        case 0x2a6d70u: goto label_2a6d70;
        case 0x2a6d78u: goto label_2a6d78;
        default: break;
    }

    ctx->pc = 0x2a6ca8u;

    // 0x2a6ca8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a6ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a6cac: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2a6cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2a6cb0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2a6cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2a6cb4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2a6cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x2a6cb8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2A6CB8u;
    {
        const bool branch_taken_0x2a6cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CB8u;
        // 0x2a6cbc: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cb8) {
            ctx->pc = 0x2A6D70u;
            goto label_2a6d70;
        }
    }
    ctx->pc = 0x2A6CC0u;
label_2a6cc0:
    // 0x2a6cc0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2A6CC0u;
    SET_GPR_U32(ctx, 31, 0x2A6CC8u);
    ctx->pc = 0x2A6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6CC0u;
    // 0x2a6cc4: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2A6CC0u, 0x2A6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6CC8u;
label_2a6cc8:
    // 0x2a6cc8: 0x8faa0040  lw          $t2, 0x40($sp)
    ctx->pc = 0x2a6cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a6ccc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a6cd0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a6cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a6cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6cd8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2a6cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2a6cdc: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2a6cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2a6ce0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a6ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a6ce4: 0x354a0020  ori         $t2, $t2, 0x20
    ctx->pc = 0x2a6ce4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32);
    // 0x2a6ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6cec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a6cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a6cf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a6cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6cf4: 0xc4441184  lwc1        $f4, 0x1184($v0)
    ctx->pc = 0x2a6cf4u;
    { uint32_t bits = FAST_READ32(0x3C1184u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a6cf8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2a6cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2a6cfc: 0xc4631190  lwc1        $f3, 0x1190($v1)
    ctx->pc = 0x2a6cfcu;
    { uint32_t bits = FAST_READ32(0x3C1190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a6d00: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2a6d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2a6d04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a6d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d08: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2a6d08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a6d0c: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2a6d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a6d10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a6d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d14: 0xafaa0040  sw          $t2, 0x40($sp)
    ctx->pc = 0x2a6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 10));
    // 0x2a6d18: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x2a6d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x2a6d1c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2a6d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a6d20: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2a6d20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a6d24: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2a6d24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a6d28: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2a6d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a6d2c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2a6d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2a6d30: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a6d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a6d34: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2a6d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a6d38: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a6d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a6d3c: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x2a6d3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a6d40: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2a6d40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2a6d44: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2a6d44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a6d48: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2a6d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a6d4c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2a6d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a6d50: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2a6d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2a6d54: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2a6d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a6d58: 0xc056e20  jal         func_15B880
    ctx->pc = 0x2A6D58u;
    SET_GPR_U32(ctx, 31, 0x2A6D60u);
    ctx->pc = 0x2A6D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D58u;
    // 0x2a6d5c: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x2A6D58u, 0x2A6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D60u;
label_2a6d60:
    // 0x2a6d60: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x2a6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x2a6d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a6d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d68: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A6D68u;
    SET_GPR_U32(ctx, 31, 0x2A6D70u);
    ctx->pc = 0x2A6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D68u;
    // 0x2a6d6c: 0x8c642c04  lw          $a0, 0x2C04($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A6D68u, 0x2A6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D70u;
label_2a6d70:
    // 0x2a6d70: 0xc080658  jal         func_201960
    ctx->pc = 0x2A6D70u;
    SET_GPR_U32(ctx, 31, 0x2A6D78u);
    ctx->pc = 0x2A6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6D70u;
    // 0x2a6d74: 0x26243f20  addiu       $a0, $s1, 0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201960u, 0x2A6D70u, 0x2A6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6D78u;
label_2a6d78:
    // 0x2a6d78: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2a6d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a6d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6d88: 0x1043ffcd  beq         $v0, $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2A6D88u;
    {
        const bool branch_taken_0x2a6d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D88u;
        // 0x2a6d8c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6d88) {
            ctx->pc = 0x2A6CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a6cc0;
        }
    }
    ctx->pc = 0x2A6D90u;
    // 0x2a6d90: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2a6d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a6d94: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2a6d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a6d98: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a6d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a6d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D9Cu;
        // 0x2a6da0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6DA4u;
    // 0x2a6da4: 0x0  nop
    ctx->pc = 0x2a6da4u;
    // NOP
    ctx->pc = 0x2a6da8u;
}
