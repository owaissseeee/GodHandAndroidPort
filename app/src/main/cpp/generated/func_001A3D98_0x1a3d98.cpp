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

// Function: func_001A3D98
// Address: 0x1a3d98 - 0x1a3e10
void func_001A3D98_0x1a3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A3D98_0x1a3d98");
#endif

    switch (ctx->pc) {
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3dfcu: goto label_1a3dfc;
        default: break;
    }

    ctx->pc = 0x1a3d98u;

    // 0x1a3d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3d9c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1a3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1a3da0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a3da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a3da4: 0x24427148  addiu       $v0, $v0, 0x7148
    ctx->pc = 0x1a3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29000));
    // 0x1a3da8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a3dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3db4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1a3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1a3db8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x1a3db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1a3dbc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3DBCu;
    {
        const bool branch_taken_0x1a3dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DBCu;
        // 0x1a3dc0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3dbc) {
            ctx->pc = 0x1A3DD8u;
            goto label_1a3dd8;
        }
    }
    ctx->pc = 0x1A3DC4u;
    // 0x1a3dc4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1a3dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1a3dc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a3dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3dcc: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1A3DCCu;
    SET_GPR_U32(ctx, 31, 0x1A3DD4u);
    ctx->pc = 0x1A3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DCCu;
    // 0x1a3dd0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1A3DCCu, 0x1A3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DD4u;
label_1a3dd4:
    // 0x1a3dd4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x1a3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_1a3dd8:
    // 0x1a3dd8: 0x8e050604  lw          $a1, 0x604($s0)
    ctx->pc = 0x1a3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x1a3ddc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3DDCu;
    {
        const bool branch_taken_0x1a3ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3DDCu;
        // 0x1a3de0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3ddc) {
            ctx->pc = 0x1A3DF0u;
            goto label_1a3df0;
        }
    }
    ctx->pc = 0x1A3DE4u;
    // 0x1a3de4: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1A3DE4u;
    SET_GPR_U32(ctx, 31, 0x1A3DECu);
    ctx->pc = 0x1A3DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DE4u;
    // 0x1a3de8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1A3DE4u, 0x1A3DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DECu;
label_1a3dec:
    // 0x1a3dec: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x1a3decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
label_1a3df0:
    // 0x1a3df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3df4: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x1A3DF4u;
    SET_GPR_U32(ctx, 31, 0x1A3DFCu);
    ctx->pc = 0x1A3DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DF4u;
    // 0x1a3df8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x1A3DF4u, 0x1A3DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DFCu;
label_1a3dfc:
    // 0x1a3dfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a3dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a3e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3E08u;
        // 0x1a3e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3E10u;
}
