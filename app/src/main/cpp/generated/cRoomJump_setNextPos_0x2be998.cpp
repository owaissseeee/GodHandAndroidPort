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

// Function: cRoomJump_setNextPos
// Address: 0x2be998 - 0x2beaa8
void cRoomJump_setNextPos_0x2be998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomJump_setNextPos_0x2be998");
#endif

    switch (ctx->pc) {
        case 0x2be9bcu: goto label_2be9bc;
        default: break;
    }

    ctx->pc = 0x2be998u;

    // 0x2be998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2be998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2be99c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2be99cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2be9a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2be9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2be9a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2be9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2be9a8: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2be9a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2be9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be9b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2be9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9b4: 0xc0afac0  jal         func_2BEB00
    ctx->pc = 0x2BE9B4u;
    SET_GPR_U32(ctx, 31, 0x2BE9BCu);
    ctx->pc = 0x2BE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE9B4u;
    // 0x2be9b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB00u, 0x2BE9B4u, 0x2BE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE9BCu;
label_2be9bc:
    // 0x2be9bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2be9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be9c0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2BE9C0u;
    {
        const bool branch_taken_0x2be9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9C0u;
        // 0x2be9c4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9c0) {
            ctx->pc = 0x2BEA40u;
            goto label_2bea40;
        }
    }
    ctx->pc = 0x2BE9C8u;
    // 0x2be9c8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2be9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9cc: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x2be9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2be9d0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2be9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2be9d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2be9d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2be9d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2be9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2be9dc: 0xe4a005c0  swc1        $f0, 0x5C0($a1)
    ctx->pc = 0x2be9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1472), bits); }
    // 0x2be9e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2be9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2be9e4: 0xe4a005c4  swc1        $f0, 0x5C4($a1)
    ctx->pc = 0x2be9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1476), bits); }
    // 0x2be9e8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2be9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be9ec: 0xe4a105c8  swc1        $f1, 0x5C8($a1)
    ctx->pc = 0x2be9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1480), bits); }
    // 0x2be9f0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2be9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be9f4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2be9f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2be9f8: 0x0  nop
    ctx->pc = 0x2be9f8u;
    // NOP
    // 0x2be9fc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x2BE9FCu;
    {
        const bool branch_taken_0x2be9fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE9FCu;
        // 0x2bea00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be9fc) {
            ctx->pc = 0x2BEA24u;
            goto label_2bea24;
        }
    }
    ctx->pc = 0x2BEA04u;
    // 0x2bea04: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2bea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2bea08: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2bea08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2bea0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bea0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bea10: 0x0  nop
    ctx->pc = 0x2bea10u;
    // NOP
    // 0x2bea14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bea14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bea18: 0x0  nop
    ctx->pc = 0x2bea18u;
    // NOP
    // 0x2bea1c: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2BEA1Cu;
    {
        const bool branch_taken_0x2bea1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bea1c) {
            ctx->pc = 0x2BEA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEA1Cu;
            // 0x2bea20: 0xe4a105d0  swc1        $f1, 0x5D0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1488), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEA58u;
            goto label_2bea58;
        }
    }
    ctx->pc = 0x2BEA24u;
label_2bea24:
    // 0x2bea24: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2bea24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2bea28: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x2bea28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2bea2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bea2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bea30: 0x0  nop
    ctx->pc = 0x2bea30u;
    // NOP
    // 0x2bea34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bea34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bea38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BEA38u;
    {
        const bool branch_taken_0x2bea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA38u;
        // 0x2bea3c: 0xe4a005d0  swc1        $f0, 0x5D0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1488), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea38) {
            ctx->pc = 0x2BEA58u;
            goto label_2bea58;
        }
    }
    ctx->pc = 0x2BEA40u;
label_2bea40:
    // 0x2bea40: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2bea40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2bea44: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2bea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2bea48: 0xac4005d0  sw          $zero, 0x5D0($v0)
    ctx->pc = 0x2bea48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x747A70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A70u, _value); } while (0);
    // 0x2bea4c: 0xac4005c0  sw          $zero, 0x5C0($v0)
    ctx->pc = 0x2bea4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x747A60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A60u, _value); } while (0);
    // 0x2bea50: 0xac4005c4  sw          $zero, 0x5C4($v0)
    ctx->pc = 0x2bea50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x747A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A64u, _value); } while (0);
    // 0x2bea54: 0xac4005c8  sw          $zero, 0x5C8($v0)
    ctx->pc = 0x2bea54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x747A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A68u, _value); } while (0);
label_2bea58:
    // 0x2bea58: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BEA58u;
    {
        const bool branch_taken_0x2bea58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA58u;
        // 0x2bea5c: 0x246274a0  addiu       $v0, $v1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bea58) {
            ctx->pc = 0x2BEA80u;
            goto label_2bea80;
        }
    }
    ctx->pc = 0x2BEA60u;
    // 0x2bea60: 0xc44005d0  lwc1        $f0, 0x5D0($v0)
    ctx->pc = 0x2bea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bea64: 0xc44105c0  lwc1        $f1, 0x5C0($v0)
    ctx->pc = 0x2bea64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bea68: 0xc44205c4  lwc1        $f2, 0x5C4($v0)
    ctx->pc = 0x2bea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bea6c: 0xc44305c8  lwc1        $f3, 0x5C8($v0)
    ctx->pc = 0x2bea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bea70: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2bea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2bea74: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2bea74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bea78: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2bea78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bea7c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x2bea7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bea80:
    // 0x2bea80: 0x246274a0  addiu       $v0, $v1, 0x74A0
    ctx->pc = 0x2bea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2bea84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bea84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bea88: 0xa45105b4  sh          $s1, 0x5B4($v0)
    ctx->pc = 0x2bea88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1460), (uint16_t)GPR_U32(ctx, 17));
    // 0x2bea8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bea8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bea90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bea90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bea94: 0xa04005ba  sb          $zero, 0x5BA($v0)
    ctx->pc = 0x2bea94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1466), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bea98: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEA98u;
        // 0x2bea9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEAA0u;
    // 0x2beaa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2beaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2beaa4: 0x0  nop
    ctx->pc = 0x2beaa4u;
    // NOP
    ctx->pc = 0x2beaa8u;
}
