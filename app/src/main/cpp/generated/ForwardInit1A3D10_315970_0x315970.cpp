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

// Function: ForwardInit1A3D10_315970
// Address: 0x315970 - 0x3159e0
void ForwardInit1A3D10_315970_0x315970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A3D10_315970_0x315970");
#endif

    switch (ctx->pc) {
        case 0x3159a4u: goto label_3159a4;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c4u: goto label_3159c4;
        default: break;
    }

    ctx->pc = 0x315970u;

    // 0x315970: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315974: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315974u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315978: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315978u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31597c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31597cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315984: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315988: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315988u;
    {
        const bool branch_taken_0x315988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315988u;
        // 0x31598c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315988) {
            ctx->pc = 0x3159CCu;
            goto label_3159cc;
        }
    }
    ctx->pc = 0x315990u;
    // 0x315990: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315990u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315994: 0x24040980  addiu       $a0, $zero, 0x980
    ctx->pc = 0x315994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    // 0x315998: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31599c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31599Cu;
    SET_GPR_U32(ctx, 31, 0x3159A4u);
    ctx->pc = 0x3159A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31599Cu;
    // 0x3159a0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31599Cu, 0x3159A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159A4u;
label_3159a4:
    // 0x3159a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3159a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3159a8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3159A8u;
    {
        const bool branch_taken_0x3159a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159A8u;
        // 0x3159ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159a8) {
            ctx->pc = 0x3159CCu;
            goto label_3159cc;
        }
    }
    ctx->pc = 0x3159B0u;
    // 0x3159b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3159b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3159b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3159B4u;
    SET_GPR_U32(ctx, 31, 0x3159BCu);
    ctx->pc = 0x3159B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159B4u;
    // 0x3159b8: 0x24060980  addiu       $a2, $zero, 0x980 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3159B4u, 0x3159BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159BCu;
label_3159bc:
    // 0x3159bc: 0xc068f44  jal         func_1A3D10
    ctx->pc = 0x3159BCu;
    SET_GPR_U32(ctx, 31, 0x3159C4u);
    ctx->pc = 0x3159C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3159BCu;
    // 0x3159c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3D10u, 0x3159BCu, 0x3159C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3159C4u;
label_3159c4:
    // 0x3159c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3159C4u;
    {
        const bool branch_taken_0x3159c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C4u;
        // 0x3159c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159c4) {
            ctx->pc = 0x3159D4u;
            goto label_3159d4;
        }
    }
    ctx->pc = 0x3159CCu;
label_3159cc:
    // 0x3159cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3159ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3159d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3159d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3159d4:
    // 0x3159d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3159d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3159d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3159D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3159DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159D8u;
        // 0x3159dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3159D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3159E0u;
}
