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

// Function: cOl22_setCloseFix
// Address: 0x17e738 - 0x17e7d0
void cOl22_setCloseFix_0x17e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl22_setCloseFix_0x17e738");
#endif

    ctx->pc = 0x17e738u;

    // 0x17e738: 0x90830601  lbu         $v1, 0x601($a0)
    ctx->pc = 0x17e738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x17e73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e740: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x17E740u;
    {
        const bool branch_taken_0x17e740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17E744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E740u;
        // 0x17e744: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e740) {
            ctx->pc = 0x17E7C4u;
            goto label_17e7c4;
        }
    }
    ctx->pc = 0x17E748u;
    // 0x17e748: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17e748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17e74c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x17e74cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17e750: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E750u;
    {
        const bool branch_taken_0x17e750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E750u;
        // 0x17e754: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e750) {
            ctx->pc = 0x17E764u;
            goto label_17e764;
        }
    }
    ctx->pc = 0x17E758u;
    // 0x17e758: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17e75c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E75Cu;
    {
        const bool branch_taken_0x17e75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E75Cu;
        // 0x17e760: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e75c) {
            ctx->pc = 0x17E768u;
            goto label_17e768;
        }
    }
    ctx->pc = 0x17E764u;
label_17e764:
    // 0x17e764: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e768:
    // 0x17e768: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17E768u;
    {
        const bool branch_taken_0x17e768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E768u;
        // 0x17e76c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e768) {
            ctx->pc = 0x17E7ACu;
            goto label_17e7ac;
        }
    }
    ctx->pc = 0x17E770u;
    // 0x17e770: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x17e770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17e774: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17e774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17e778: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E778u;
    {
        const bool branch_taken_0x17e778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E778u;
        // 0x17e77c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e778) {
            ctx->pc = 0x17E78Cu;
            goto label_17e78c;
        }
    }
    ctx->pc = 0x17E780u;
    // 0x17e780: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17e784: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17E784u;
    {
        const bool branch_taken_0x17e784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E784u;
        // 0x17e788: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e784) {
            ctx->pc = 0x17E790u;
            goto label_17e790;
        }
    }
    ctx->pc = 0x17E78Cu;
label_17e78c:
    // 0x17e78c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17e78cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e790:
    // 0x17e790: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x17e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x17e794: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x17e794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x17e798: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17e798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17e79c: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x17e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x17e7a0: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x17e7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x17e7a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17e7a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17e7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_17e7ac:
    // 0x17e7ac: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17e7acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e7b0: 0xa0800601  sb          $zero, 0x601($a0)
    ctx->pc = 0x17e7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1537), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e7b4: 0xa0800600  sb          $zero, 0x600($a0)
    ctx->pc = 0x17e7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e7b8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x17e7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e7bc: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17e7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e7c0: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17e7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17e7c4:
    // 0x17e7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17E7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7C4u;
        // 0x17e7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7CCu;
    // 0x17e7cc: 0x0  nop
    ctx->pc = 0x17e7ccu;
    // NOP
    ctx->pc = 0x17e7d0u;
}
