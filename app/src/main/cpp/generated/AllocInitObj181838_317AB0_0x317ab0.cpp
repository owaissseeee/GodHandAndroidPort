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

// Function: AllocInitObj181838_317AB0
// Address: 0x317ab0 - 0x317b20
void AllocInitObj181838_317AB0_0x317ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj181838_317AB0_0x317ab0");
#endif

    switch (ctx->pc) {
        case 0x317ae4u: goto label_317ae4;
        case 0x317afcu: goto label_317afc;
        case 0x317b04u: goto label_317b04;
        default: break;
    }

    ctx->pc = 0x317ab0u;

    // 0x317ab0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317ab4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317ab8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317abc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317ac0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317ac4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317ac8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317AC8u;
    {
        const bool branch_taken_0x317ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AC8u;
        // 0x317acc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ac8) {
            ctx->pc = 0x317B0Cu;
            goto label_317b0c;
        }
    }
    ctx->pc = 0x317AD0u;
    // 0x317ad0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317ad4: 0x240408a0  addiu       $a0, $zero, 0x8A0
    ctx->pc = 0x317ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    // 0x317ad8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317adc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317ADCu;
    SET_GPR_U32(ctx, 31, 0x317AE4u);
    ctx->pc = 0x317AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317ADCu;
    // 0x317ae0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317ADCu, 0x317AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AE4u;
label_317ae4:
    // 0x317ae4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ae8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317AE8u;
    {
        const bool branch_taken_0x317ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AE8u;
        // 0x317aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ae8) {
            ctx->pc = 0x317B0Cu;
            goto label_317b0c;
        }
    }
    ctx->pc = 0x317AF0u;
    // 0x317af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317af4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317AF4u;
    SET_GPR_U32(ctx, 31, 0x317AFCu);
    ctx->pc = 0x317AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317AF4u;
    // 0x317af8: 0x240608a0  addiu       $a2, $zero, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317AF4u, 0x317AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AFCu;
label_317afc:
    // 0x317afc: 0xc06060e  jal         func_181838
    ctx->pc = 0x317AFCu;
    SET_GPR_U32(ctx, 31, 0x317B04u);
    ctx->pc = 0x317B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317AFCu;
    // 0x317b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181838u, 0x317AFCu, 0x317B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B04u;
label_317b04:
    // 0x317b04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317B04u;
    {
        const bool branch_taken_0x317b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B04u;
        // 0x317b08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b04) {
            ctx->pc = 0x317B14u;
            goto label_317b14;
        }
    }
    ctx->pc = 0x317B0Cu;
label_317b0c:
    // 0x317b0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317b0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317b14:
    // 0x317b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317b18: 0x3e00008  jr          $ra
    ctx->pc = 0x317B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B18u;
        // 0x317b1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317B20u;
}
