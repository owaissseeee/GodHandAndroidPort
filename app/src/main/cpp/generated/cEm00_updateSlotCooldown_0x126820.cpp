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

// Function: cEm00_updateSlotCooldown
// Address: 0x126820 - 0x1268b0
void cEm00_updateSlotCooldown_0x126820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_updateSlotCooldown_0x126820");
#endif

    switch (ctx->pc) {
        case 0x12685cu: goto label_12685c;
        case 0x126878u: goto label_126878;
        case 0x126884u: goto label_126884;
        case 0x12689cu: goto label_12689c;
        default: break;
    }

    ctx->pc = 0x126820u;

    // 0x126820: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x126820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x126824: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126828: 0x8c6374a8  lw          $v1, 0x74A8($v1)
    ctx->pc = 0x126828u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7474A8u));
    // 0x12682c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x126830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126834: 0x30620090  andi        $v0, $v1, 0x90
    ctx->pc = 0x126834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)144);
    // 0x126838: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x126838u;
    {
        const bool branch_taken_0x126838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126838u;
        // 0x12683c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126838) {
            ctx->pc = 0x126864u;
            goto label_126864;
        }
    }
    ctx->pc = 0x126840u;
    // 0x126840: 0x8e021658  lw          $v0, 0x1658($s0)
    ctx->pc = 0x126840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5720)));
    // 0x126844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x126844u;
    {
        const bool branch_taken_0x126844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126844u;
        // 0x126848: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126844) {
            ctx->pc = 0x126854u;
            goto label_126854;
        }
    }
    ctx->pc = 0x12684Cu;
    // 0x12684c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12684Cu;
    {
        const bool branch_taken_0x12684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12684Cu;
        // 0x126850: 0xae021658  sw          $v0, 0x1658($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12684c) {
            ctx->pc = 0x12689Cu;
            goto label_12689c;
        }
    }
    ctx->pc = 0x126854u;
label_126854:
    // 0x126854: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x126854u;
    SET_GPR_U32(ctx, 31, 0x12685Cu);
    ctx->pc = 0x126858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126854u;
    // 0x126858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x126854u, 0x12685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12685Cu;
label_12685c:
    // 0x12685c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12685Cu;
    {
        const bool branch_taken_0x12685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12685Cu;
        // 0x126860: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12685c) {
            ctx->pc = 0x1268A0u;
            goto label_1268a0;
        }
    }
    ctx->pc = 0x126864u;
label_126864:
    // 0x126864: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x126864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x126868: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126868u;
    {
        const bool branch_taken_0x126868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126868u;
        // 0x12686c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126868) {
            ctx->pc = 0x12688Cu;
            goto label_12688c;
        }
    }
    ctx->pc = 0x126870u;
    // 0x126870: 0xc049a3c  jal         func_1268F0
    ctx->pc = 0x126870u;
    SET_GPR_U32(ctx, 31, 0x126878u);
    ctx->pc = 0x126874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126870u;
    // 0x126874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268F0u, 0x126870u, 0x126878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126878u;
label_126878:
    // 0x126878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12687c: 0xc049a2c  jal         func_1268B0
    ctx->pc = 0x12687Cu;
    SET_GPR_U32(ctx, 31, 0x126884u);
    ctx->pc = 0x126880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12687Cu;
    // 0x126880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268B0u, 0x12687Cu, 0x126884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126884u;
label_126884:
    // 0x126884: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x126884u;
    {
        const bool branch_taken_0x126884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126884u;
        // 0x126888: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126884) {
            ctx->pc = 0x1268A0u;
            goto label_1268a0;
        }
    }
    ctx->pc = 0x12688Cu;
label_12688c:
    // 0x12688c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12688Cu;
    {
        const bool branch_taken_0x12688c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12688Cu;
        // 0x126890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12688c) {
            ctx->pc = 0x12689Cu;
            goto label_12689c;
        }
    }
    ctx->pc = 0x126894u;
    // 0x126894: 0xc049a2c  jal         func_1268B0
    ctx->pc = 0x126894u;
    SET_GPR_U32(ctx, 31, 0x12689Cu);
    ctx->pc = 0x126898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126894u;
    // 0x126898: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1268B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1268B0u, 0x126894u, 0x12689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12689Cu;
label_12689c:
    // 0x12689c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12689cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1268a0:
    // 0x1268a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1268a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1268a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1268A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1268A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268A4u;
        // 0x1268a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1268A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1268ACu;
    // 0x1268ac: 0x0  nop
    ctx->pc = 0x1268acu;
    // NOP
    ctx->pc = 0x1268b0u;
}
