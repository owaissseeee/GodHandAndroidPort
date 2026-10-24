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

// Function: cEm00_setGoto
// Address: 0x26e988 - 0x26ea28
void cEm00_setGoto_0x26e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setGoto_0x26e988");
#endif

    switch (ctx->pc) {
        case 0x26e9f0u: goto label_26e9f0;
        case 0x26ea10u: goto label_26ea10;
        default: break;
    }

    ctx->pc = 0x26e988u;

    // 0x26e988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e98c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e994: 0x260216b0  addiu       $v0, $s0, 0x16B0
    ctx->pc = 0x26e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 5808));
    // 0x26e998: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26E998u;
    {
        const bool branch_taken_0x26e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x26E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E998u;
        // 0x26e99c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e998) {
            ctx->pc = 0x26E9B8u;
            goto label_26e9b8;
        }
    }
    ctx->pc = 0x26E9A0u;
    // 0x26e9a0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x26e9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e9a4: 0xe60016b0  swc1        $f0, 0x16B0($s0)
    ctx->pc = 0x26e9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5808), bits); }
    // 0x26e9a8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x26e9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e9ac: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x26e9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26e9b0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x26e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e9b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x26e9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_26e9b8:
    // 0x26e9b8: 0xe60c16c0  swc1        $f12, 0x16C0($s0)
    ctx->pc = 0x26e9b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5824), bits); }
    // 0x26e9bc: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E9BCu;
    {
        const bool branch_taken_0x26e9bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E9BCu;
        // 0x26e9c0: 0xae0616c4  sw          $a2, 0x16C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5828), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e9bc) {
            ctx->pc = 0x26E9D8u;
            goto label_26e9d8;
        }
    }
    ctx->pc = 0x26E9C4u;
    // 0x26e9c4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x26e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e9c8: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x26e9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e9cc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x26e9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e9d0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x26e9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e9d4: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x26e9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_26e9d8:
    // 0x26e9d8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x26e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x26e9dc: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E9DCu;
    {
        const bool branch_taken_0x26e9dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x26e9dc) {
            ctx->pc = 0x26E9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26E9DCu;
            // 0x26e9e0: 0x8e040738  lw          $a0, 0x738($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EA00u;
            goto label_26ea00;
        }
    }
    ctx->pc = 0x26E9E4u;
    // 0x26e9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9e8: 0xc09cf4a  jal         func_273D28
    ctx->pc = 0x26E9E8u;
    SET_GPR_U32(ctx, 31, 0x26E9F0u);
    ctx->pc = 0x26E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E9E8u;
    // 0x26e9ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D28u, 0x26E9E8u, 0x26E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9F0u;
label_26e9f0:
    // 0x26e9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e9f4: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x26e9f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x26e9f8: 0xa6020548  sh          $v0, 0x548($s0)
    ctx->pc = 0x26e9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x26e9fc: 0x8e040738  lw          $a0, 0x738($s0)
    ctx->pc = 0x26e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1848)));
label_26ea00:
    // 0x26ea00: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26EA00u;
    {
        const bool branch_taken_0x26ea00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea00) {
            ctx->pc = 0x26EA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EA00u;
            // 0x26ea04: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EA18u;
            goto label_26ea18;
        }
    }
    ctx->pc = 0x26EA08u;
    // 0x26ea08: 0xc074102  jal         func_1D0408
    ctx->pc = 0x26EA08u;
    SET_GPR_U32(ctx, 31, 0x26EA10u);
    ctx->pc = 0x1D0408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0408u, 0x26EA08u, 0x26EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA10u;
label_26ea10:
    // 0x26ea10: 0xae000738  sw          $zero, 0x738($s0)
    ctx->pc = 0x26ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1848), GPR_U32(ctx, 0));
    // 0x26ea14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26ea14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26ea18:
    // 0x26ea18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x26EA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EA1Cu;
        // 0x26ea20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EA24u;
    // 0x26ea24: 0x0  nop
    ctx->pc = 0x26ea24u;
    // NOP
    ctx->pc = 0x26ea28u;
}
