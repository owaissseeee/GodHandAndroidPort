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

// Function: cScenario_beginKurohukuBattle
// Address: 0x2c4a70 - 0x2c4b78
void cScenario_beginKurohukuBattle_0x2c4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_beginKurohukuBattle_0x2c4a70");
#endif

    switch (ctx->pc) {
        case 0x2c4b18u: goto label_2c4b18;
        case 0x2c4b60u: goto label_2c4b60;
        default: break;
    }

    ctx->pc = 0x2c4a70u;

    // 0x2c4a70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c4a74: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c4a78: 0x8c628240  lw          $v0, -0x7DC0($v1)
    ctx->pc = 0x2c4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x568240u));
    // 0x2c4a7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c4a80: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4a80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2c4a84: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2c4a84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2c4a88: 0x3c014086  lui         $at, 0x4086
    ctx->pc = 0x2c4a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16518 << 16));
    // 0x2c4a8c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2c4a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2c4a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4a94: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2c4a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2c4a98: 0x3c01c230  lui         $at, 0xC230
    ctx->pc = 0x2c4a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49712 << 16));
    // 0x2c4a9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2c4a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2c4aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4aa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4aa8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2c4aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2c4aac: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x2c4aacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c4ab0: 0xac628240  sw          $v0, -0x7DC0($v1)
    ctx->pc = 0x2c4ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x568240u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x568240u, _value); } while (0);
    // 0x2c4ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4ab8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c4ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c4abc: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2c4abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c4ac0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c4ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c4ac4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x2c4ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c4ac8: 0xa4800016  sh          $zero, 0x16($a0)
    ctx->pc = 0x2c4ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4acc: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x2c4accu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x2c4ad0: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4AD0u;
    {
        const bool branch_taken_0x2c4ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2C4AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AD0u;
        // 0x2c4ad4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ad0) {
            ctx->pc = 0x2C4AF0u;
            goto label_2c4af0;
        }
    }
    ctx->pc = 0x2C4AD8u;
    // 0x2c4ad8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c4ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c4adc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4ae0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c4ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c4ae4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c4ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4ae8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c4ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c4aec: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x2c4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_2c4af0:
    // 0x2c4af0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c4af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2c4af4: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2c4af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2c4af8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2c4afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b0c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c4b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2c4b10: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x2C4B10u;
    SET_GPR_U32(ctx, 31, 0x2C4B18u);
    ctx->pc = 0x2C4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B10u;
    // 0x2c4b14: 0x8c64264c  lw          $a0, 0x264C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x2C4B10u, 0x2C4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B18u;
label_2c4b18:
    // 0x2c4b18: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x2c4b18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x2c4b1c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2c4b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2c4b20: 0x8d227a24  lw          $v0, 0x7A24($t1)
    ctx->pc = 0x2c4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x2c4b24: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x2c4b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4b28: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x2c4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x2c4b2c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2c4b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4b34: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2c4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2c4b38: 0xad227a24  sw          $v0, 0x7A24($t1)
    ctx->pc = 0x2c4b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
    // 0x2c4b3c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x2c4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x2c4b40: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2c4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2c4b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b48: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2c4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2c4b4c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2c4b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2c4b50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c4b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4b54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c4b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4b58: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x2C4B58u;
    SET_GPR_U32(ctx, 31, 0x2C4B60u);
    ctx->pc = 0x2C4B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4B58u;
    // 0x2c4b5c: 0xe554000c  swc1        $f20, 0xC($t2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x2C4B58u, 0x2C4B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4B60u;
label_2c4b60:
    // 0x2c4b60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c4b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4b64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4b68: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B6Cu;
        // 0x2c4b70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4B74u;
    // 0x2c4b74: 0x0  nop
    ctx->pc = 0x2c4b74u;
    // NOP
    ctx->pc = 0x2c4b78u;
}
