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

// Function: cCollisionShape_setPos
// Address: 0x2baaa8 - 0x2baaf8
void cCollisionShape_setPos_0x2baaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionShape_setPos_0x2baaa8");
#endif

    switch (ctx->pc) {
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        default: break;
    }

    ctx->pc = 0x2baaa8u;

label_2baaa8:
    // 0x2baaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2baaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2baaac:
    // 0x2baaac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2baaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2baab0:
    // 0x2baab0: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x2baab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_2baab4:
    // 0x2baab4: 0x10450007  beq         $v0, $a1, . + 4 + (0x7 << 2)
label_2baab8:
    if (ctx->pc == 0x2BAAB8u) {
        ctx->pc = 0x2BAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB4u;
        // 0x2baab8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAABCu;
        goto label_2baabc;
    }
    ctx->pc = 0x2BAAB4u;
    {
        const bool branch_taken_0x2baab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2BAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB4u;
        // 0x2baab8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baab4) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAABCu;
label_2baabc:
    // 0x2baabc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2baabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2baac0:
    // 0x2baac0: 0xe4c00110  swc1        $f0, 0x110($a2)
    ctx->pc = 0x2baac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
label_2baac4:
    // 0x2baac4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2baac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2baac8:
    // 0x2baac8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2baac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2baacc:
    // 0x2baacc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2baaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2baad0:
    // 0x2baad0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2baad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2baad4:
    // 0x2baad4: 0x8cc20100  lw          $v0, 0x100($a2)
    ctx->pc = 0x2baad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
label_2baad8:
    // 0x2baad8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2baad8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2baadc:
    // 0x2baadc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2baadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2baae0:
    // 0x2baae0: 0x60f809  jalr        $v1
label_2baae4:
    if (ctx->pc == 0x2BAAE4u) {
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE8u;
        goto label_2baae8;
    }
    ctx->pc = 0x2BAAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BAAE8u);
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAAE0u, 0x2BAAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAAE8u;
label_2baae8:
    // 0x2baae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2baae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2baaec:
    // 0x2baaec: 0x3e00008  jr          $ra
label_2baaf0:
    if (ctx->pc == 0x2BAAF0u) {
        ctx->pc = 0x2BAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAECu;
        // 0x2baaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAF4u;
        goto label_2baaf4;
    }
    ctx->pc = 0x2BAAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAECu;
        // 0x2baaf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAAF4u;
label_2baaf4:
    // 0x2baaf4: 0x0  nop
    ctx->pc = 0x2baaf4u;
    // NOP
    ctx->pc = 0x2baaf8u;
}
