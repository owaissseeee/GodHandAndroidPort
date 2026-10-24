#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r702_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r702
{
// Function: func_00799FD8
// Address: 0x799fd8 - 0x79a058
void func_00799FD8_0x799fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799FD8_0x799fd8");
#endif

    switch (ctx->pc) {
        case 0x79a038u: goto label_79a038;
        case 0x79a044u: goto label_79a044;
        default: break;
    }

    ctx->pc = 0x799fd8u;

    // 0x799fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799fdc: 0x3c014226  lui         $at, 0x4226
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16934 << 16));
    // 0x799fe0: 0x3421ce3c  ori         $at, $at, 0xCE3C
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52796);
    // 0x799fe4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x799fe8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799fec: 0x24050703  addiu       $a1, $zero, 0x703
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
    // 0x799ff0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x799ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x799ff4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799ff8: 0x3c01c280  lui         $at, 0xC280
    ctx->pc = 0x799ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49792 << 16));
    // 0x799ffc: 0x342175d0  ori         $at, $at, 0x75D0
    ctx->pc = 0x799ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30160);
    // 0x79a000: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a004: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a010: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a014: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a018: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a01c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x79a01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79a020: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a028: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79a028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79a02c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x79a02cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a030: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79A030u;
    SET_GPR_U32(ctx, 31, 0x79A038u);
    ctx->pc = 0x79A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A030u;
    // 0x79a034: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79A030u, 0x79A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A038u;
label_79a038:
    // 0x79a038: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79a03c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A03Cu;
    SET_GPR_U32(ctx, 31, 0x79A044u);
    ctx->pc = 0x79A040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A03Cu;
    // 0x79a040: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A03Cu, 0x79A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A044u;
label_79a044:
    // 0x79a044: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a04c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A054u;
    // 0x79a054: 0x0  nop
    ctx->pc = 0x79a054u;
    // NOP
    ctx->pc = 0x79a058u;
}
} // namespace gh_r702
