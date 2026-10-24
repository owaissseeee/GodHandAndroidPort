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

// Function: cHeatSys_SubHeatGage
// Address: 0x2a9ad0 - 0x2a9b50
void cHeatSys_SubHeatGage_0x2a9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cHeatSys_SubHeatGage_0x2a9ad0");
#endif

    switch (ctx->pc) {
        case 0x2a9b10u: goto label_2a9b10;
        default: break;
    }

    ctx->pc = 0x2a9ad0u;

    // 0x2a9ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9ad4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a9ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a9ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a9adc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a9adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a9ae4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a9ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ae8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9aec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a9aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9af0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x2a9af0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2a9af4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a9af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9af8: 0x0  nop
    ctx->pc = 0x2a9af8u;
    // NOP
    // 0x2a9afc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9AFCu;
    {
        const bool branch_taken_0x2a9afc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9AFCu;
        // 0x2a9b00: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9afc) {
            ctx->pc = 0x2A9B08u;
            goto label_2a9b08;
        }
    }
    ctx->pc = 0x2A9B04u;
    // 0x2a9b04: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a9b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a9b08:
    // 0x2a9b08: 0xc0aa6d4  jal         func_2A9B50
    ctx->pc = 0x2A9B08u;
    SET_GPR_U32(ctx, 31, 0x2A9B10u);
    ctx->pc = 0x2A9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9B08u;
    // 0x2a9b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9B50u, 0x2A9B08u, 0x2A9B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9B10u;
label_2a9b10:
    // 0x2a9b10: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9B10u;
    {
        const bool branch_taken_0x2a9b10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B10u;
        // 0x2a9b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b10) {
            ctx->pc = 0x2A9B3Cu;
            goto label_2a9b3c;
        }
    }
    ctx->pc = 0x2A9B18u;
    // 0x2a9b18: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2a9b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b1c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2a9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b20: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2a9b20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9b24: 0x0  nop
    ctx->pc = 0x2a9b24u;
    // NOP
    // 0x2a9b28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9B28u;
    {
        const bool branch_taken_0x2a9b28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B28u;
        // 0x2a9b2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b28) {
            ctx->pc = 0x2A9B38u;
            goto label_2a9b38;
        }
    }
    ctx->pc = 0x2A9B30u;
    // 0x2a9b30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9B30u;
    {
        const bool branch_taken_0x2a9b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B30u;
        // 0x2a9b34: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b30) {
            ctx->pc = 0x2A9B3Cu;
            goto label_2a9b3c;
        }
    }
    ctx->pc = 0x2A9B38u;
label_2a9b38:
    // 0x2a9b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a9b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b3c:
    // 0x2a9b3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a9b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9b40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9b40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B48u;
        // 0x2a9b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9B50u;
}
