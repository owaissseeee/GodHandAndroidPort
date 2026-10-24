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

// Function: cOl1b_setCloseFix
// Address: 0x17b718 - 0x17b810
void cOl1b_setCloseFix_0x17b718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl1b_setCloseFix_0x17b718");
#endif

    ctx->pc = 0x17b718u;

    // 0x17b718: 0x90820601  lbu         $v0, 0x601($a0)
    ctx->pc = 0x17b718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1537)));
    // 0x17b71c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b720: 0x14430038  bne         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x17B720u;
    {
        const bool branch_taken_0x17b720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B720u;
        // 0x17b724: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b720) {
            ctx->pc = 0x17B804u;
            goto label_17b804;
        }
    }
    ctx->pc = 0x17B728u;
    // 0x17b728: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17b728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17b72c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B72Cu;
    {
        const bool branch_taken_0x17b72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B72Cu;
        // 0x17b730: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b72c) {
            ctx->pc = 0x17B740u;
            goto label_17b740;
        }
    }
    ctx->pc = 0x17B734u;
    // 0x17b734: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B738u;
    {
        const bool branch_taken_0x17b738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B738u;
        // 0x17b73c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b738) {
            ctx->pc = 0x17B744u;
            goto label_17b744;
        }
    }
    ctx->pc = 0x17B740u;
label_17b740:
    // 0x17b740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b744:
    // 0x17b744: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B744u;
    {
        const bool branch_taken_0x17b744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b744) {
            ctx->pc = 0x17B748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B744u;
            // 0x17b748: 0x908302b4  lbu         $v1, 0x2B4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B788u;
            goto label_17b788;
        }
    }
    ctx->pc = 0x17B74Cu;
    // 0x17b74c: 0x908202b4  lbu         $v0, 0x2B4($a0)
    ctx->pc = 0x17b74cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17b750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B750u;
    {
        const bool branch_taken_0x17b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B750u;
        // 0x17b754: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b750) {
            ctx->pc = 0x17B764u;
            goto label_17b764;
        }
    }
    ctx->pc = 0x17B758u;
    // 0x17b758: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b75c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B75Cu;
    {
        const bool branch_taken_0x17b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B75Cu;
        // 0x17b760: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b75c) {
            ctx->pc = 0x17B768u;
            goto label_17b768;
        }
    }
    ctx->pc = 0x17B764u;
label_17b764:
    // 0x17b764: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b768:
    // 0x17b768: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x17b768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
    // 0x17b76c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x17b76cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x17b770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b774: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x17b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x17b778: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x17b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x17b77c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17b780: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17b780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17b784: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x17b784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
label_17b788:
    // 0x17b788: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b78c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17b78cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17b790: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B790u;
    {
        const bool branch_taken_0x17b790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B790u;
        // 0x17b794: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b790) {
            ctx->pc = 0x17B7A4u;
            goto label_17b7a4;
        }
    }
    ctx->pc = 0x17B798u;
    // 0x17b798: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b79c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B79Cu;
    {
        const bool branch_taken_0x17b79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B79Cu;
        // 0x17b7a0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b79c) {
            ctx->pc = 0x17B7A8u;
            goto label_17b7a8;
        }
    }
    ctx->pc = 0x17B7A4u;
label_17b7a4:
    // 0x17b7a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17b7a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b7a8:
    // 0x17b7a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B7A8u;
    {
        const bool branch_taken_0x17b7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7A8u;
        // 0x17b7ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7a8) {
            ctx->pc = 0x17B7ECu;
            goto label_17b7ec;
        }
    }
    ctx->pc = 0x17B7B0u;
    // 0x17b7b0: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x17b7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x17b7b4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17b7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17b7b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B7B8u;
    {
        const bool branch_taken_0x17b7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7B8u;
        // 0x17b7bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7b8) {
            ctx->pc = 0x17B7CCu;
            goto label_17b7cc;
        }
    }
    ctx->pc = 0x17B7C0u;
    // 0x17b7c0: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x17b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x17b7c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17B7C4u;
    {
        const bool branch_taken_0x17b7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B7C4u;
        // 0x17b7c8: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b7c4) {
            ctx->pc = 0x17B7D0u;
            goto label_17b7d0;
        }
    }
    ctx->pc = 0x17B7CCu;
label_17b7cc:
    // 0x17b7cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17b7ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b7d0:
    // 0x17b7d0: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x17b7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
    // 0x17b7d4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x17b7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x17b7d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b7dc: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x17b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x17b7e0: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x17b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x17b7e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x17b7e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x17b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_17b7ec:
    // 0x17b7ec: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x17b7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b7f0: 0xa0800601  sb          $zero, 0x601($a0)
    ctx->pc = 0x17b7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1537), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b7f4: 0xa0800600  sb          $zero, 0x600($a0)
    ctx->pc = 0x17b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1536), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b7f8: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x17b7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b7fc: 0xa08002f5  sb          $zero, 0x2F5($a0)
    ctx->pc = 0x17b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17b800: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x17b800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_17b804:
    // 0x17b804: 0x3e00008  jr          $ra
    ctx->pc = 0x17B804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B804u;
        // 0x17b808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B80Cu;
    // 0x17b80c: 0x0  nop
    ctx->pc = 0x17b80cu;
    // NOP
    ctx->pc = 0x17b810u;
}
