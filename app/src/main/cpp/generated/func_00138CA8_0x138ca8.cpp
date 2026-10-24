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

// Function: func_00138CA8
// Address: 0x138ca8 - 0x138d40
void func_00138CA8_0x138ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00138CA8_0x138ca8");
#endif

    switch (ctx->pc) {
        case 0x138d18u: goto label_138d18;
        default: break;
    }

    ctx->pc = 0x138ca8u;

    // 0x138ca8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x138ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x138cac: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x138cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x138cb0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x138CB0u;
    {
        const bool branch_taken_0x138cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CB0u;
        // 0x138cb4: 0x24a30210  addiu       $v1, $a1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cb0) {
            ctx->pc = 0x138CDCu;
            goto label_138cdc;
        }
    }
    ctx->pc = 0x138CB8u;
    // 0x138cb8: 0x24c20210  addiu       $v0, $a2, 0x210
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
    // 0x138cbc: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138CBCu;
    {
        const bool branch_taken_0x138cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138cbc) {
            ctx->pc = 0x138CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138CBCu;
            // 0x138cc0: 0x30e20002  andi        $v0, $a3, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x138CE0u;
            goto label_138ce0;
        }
    }
    ctx->pc = 0x138CC4u;
    // 0x138cc4: 0xc4c00210  lwc1        $f0, 0x210($a2)
    ctx->pc = 0x138cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138cc8: 0xe4a00210  swc1        $f0, 0x210($a1)
    ctx->pc = 0x138cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 528), bits); }
    // 0x138ccc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x138cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138cd0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x138cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x138cd4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x138cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138cd8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x138cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_138cdc:
    // 0x138cdc: 0x30e20002  andi        $v0, $a3, 0x2
    ctx->pc = 0x138cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_138ce0:
    // 0x138ce0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x138CE0u;
    {
        const bool branch_taken_0x138ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CE0u;
        // 0x138ce4: 0x24a30200  addiu       $v1, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ce0) {
            ctx->pc = 0x138D0Cu;
            goto label_138d0c;
        }
    }
    ctx->pc = 0x138CE8u;
    // 0x138ce8: 0x24c20200  addiu       $v0, $a2, 0x200
    ctx->pc = 0x138ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x138cec: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138CECu;
    {
        const bool branch_taken_0x138cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138cec) {
            ctx->pc = 0x138CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138CECu;
            // 0x138cf0: 0x30e20008  andi        $v0, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x138D10u;
            goto label_138d10;
        }
    }
    ctx->pc = 0x138CF4u;
    // 0x138cf4: 0xc4c00200  lwc1        $f0, 0x200($a2)
    ctx->pc = 0x138cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138cf8: 0xe4a00200  swc1        $f0, 0x200($a1)
    ctx->pc = 0x138cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 512), bits); }
    // 0x138cfc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x138cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138d00: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x138d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x138d04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x138d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138d08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x138d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_138d0c:
    // 0x138d0c: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x138d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_138d10:
    // 0x138d10: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x138D10u;
    {
        const bool branch_taken_0x138d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D10u;
        // 0x138d14: 0x24c20360  addiu       $v0, $a2, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d10) {
            ctx->pc = 0x138D34u;
            goto label_138d34;
        }
    }
    ctx->pc = 0x138D18u;
label_138d18:
    // 0x138d18: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x138d18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x138d1c: 0x78c40010  lq          $a0, 0x10($a2)
    ctx->pc = 0x138d1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x138d20: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x138d20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x138d24: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x138d24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x138d28: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x138d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x138d2c: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138D2Cu;
    {
        const bool branch_taken_0x138d2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x138D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D2Cu;
        // 0x138d30: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d2c) {
            ctx->pc = 0x138D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138d18;
        }
    }
    ctx->pc = 0x138D34u;
label_138d34:
    // 0x138d34: 0x3e00008  jr          $ra
    ctx->pc = 0x138D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138D3Cu;
    // 0x138d3c: 0x0  nop
    ctx->pc = 0x138d3cu;
    // NOP
    ctx->pc = 0x138d40u;
}
