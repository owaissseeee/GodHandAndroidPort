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

// Function: cSnd_DieDemoStart
// Address: 0x2ca718 - 0x2ca798
void cSnd_DieDemoStart_0x2ca718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_DieDemoStart_0x2ca718");
#endif

    switch (ctx->pc) {
        case 0x2ca740u: goto label_2ca740;
        case 0x2ca758u: goto label_2ca758;
        default: break;
    }

    ctx->pc = 0x2ca718u;

    // 0x2ca718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ca718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ca71c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ca71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ca720: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ca720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ca724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ca724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca72c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ca72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ca730: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x2ca730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2ca734: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA734u;
    {
        const bool branch_taken_0x2ca734 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA734u;
        // 0x2ca738: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca734) {
            ctx->pc = 0x2CA764u;
            goto label_2ca764;
        }
    }
    ctx->pc = 0x2CA73Cu;
    // 0x2ca73c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2ca73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2ca740:
    // 0x2ca740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca744: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2ca744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2ca748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ca748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ca74c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2ca74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x2ca750: 0xc0b352a  jal         func_2CD4A8
    ctx->pc = 0x2CA750u;
    SET_GPR_U32(ctx, 31, 0x2CA758u);
    ctx->pc = 0x2CA754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA750u;
    // 0x2ca754: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A8u, 0x2CA750u, 0x2CA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA758u;
label_2ca758:
    // 0x2ca758: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2ca758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2ca75c: 0x5600fff8  bnel        $s0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CA75Cu;
    {
        const bool branch_taken_0x2ca75c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca75c) {
            ctx->pc = 0x2CA760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA75Cu;
            // 0x2ca760: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca740;
        }
    }
    ctx->pc = 0x2CA764u;
label_2ca764:
    // 0x2ca764: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2ca768: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2ca768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2ca76c: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x2ca76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2ca770: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ca770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ca774: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ca774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ca778: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ca778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ca77c: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x2ca77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
    // 0x2ca780: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x2ca780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
    // 0x2ca784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ca784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca788: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ca788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca790: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA790u;
        // 0x2ca794: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA798u;
}
