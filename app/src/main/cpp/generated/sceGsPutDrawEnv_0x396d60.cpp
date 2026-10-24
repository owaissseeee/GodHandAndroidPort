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

// Function: sceGsPutDrawEnv
// Address: 0x396d60 - 0x396e48
void sceGsPutDrawEnv_0x396d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsPutDrawEnv_0x396d60");
#endif

    switch (ctx->pc) {
        case 0x396d98u: goto label_396d98;
        case 0x396e0cu: goto label_396e0c;
        default: break;
    }

    ctx->pc = 0x396d60u;

    // 0x396d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x396d64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x396d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x396d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396d6c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x396d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x396d70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x396d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396d74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x396d74u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000A000u));
    // 0x396d78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x396d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x396d7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x396D7Cu;
    {
        const bool branch_taken_0x396d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D7Cu;
        // 0x396d80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d7c) {
            ctx->pc = 0x396DB4u;
            goto label_396db4;
        }
    }
    ctx->pc = 0x396D84u;
    // 0x396d84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x396d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x396d88: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x396d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x396d8c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x396d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x396d90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x396d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396d94: 0x0  nop
    ctx->pc = 0x396d94u;
    // NOP
label_396d98:
    // 0x396d98: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x396d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x396d9c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x396D9Cu;
    {
        const bool branch_taken_0x396d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396D9Cu;
        // 0x396da0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396d9c) {
            ctx->pc = 0x396E00u;
            goto label_396e00;
        }
    }
    ctx->pc = 0x396DA4u;
    // 0x396da4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x396da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x396da8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x396da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x396dac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x396DACu;
    {
        const bool branch_taken_0x396dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x396DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DACu;
        // 0x396db0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396dac) {
            ctx->pc = 0x396D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_396d98;
        }
    }
    ctx->pc = 0x396DB4u;
label_396db4:
    // 0x396db4: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x396db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x396db8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x396db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x396dbc: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x396dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
    // 0x396dc0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x396dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x396dc4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x396dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x396dc8: 0xc42824  and         $a1, $a2, $a0
    ctx->pc = 0x396dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x396dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x396dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x396dd0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x396dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x396dd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x396dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x396dd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x396dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x396ddc: 0x14a4000d  bne         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x396DDCu;
    {
        const bool branch_taken_0x396ddc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x396DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DDCu;
        // 0x396de0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396ddc) {
            ctx->pc = 0x396E14u;
            goto label_396e14;
        }
    }
    ctx->pc = 0x396DE4u;
    // 0x396de4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x396de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x396de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x396de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x396dec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x396decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x396df0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x396df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x396df4: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x396df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x396df8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x396DF8u;
    {
        const bool branch_taken_0x396df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DF8u;
        // 0x396dfc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396df8) {
            ctx->pc = 0x396E24u;
            goto label_396e24;
        }
    }
    ctx->pc = 0x396E00u;
label_396e00:
    // 0x396e00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x396e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x396e04: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x396E04u;
    SET_GPR_U32(ctx, 31, 0x396E0Cu);
    ctx->pc = 0x396E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396E04u;
    // 0x396e08: 0x2484df98  addiu       $a0, $a0, -0x2068 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x396E04u, 0x396E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396E0Cu;
label_396e0c:
    // 0x396e0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x396E0Cu;
    {
        const bool branch_taken_0x396e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E0Cu;
        // 0x396e10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396e0c) {
            ctx->pc = 0x396E3Cu;
            goto label_396e3c;
        }
    }
    ctx->pc = 0x396E14u;
label_396e14:
    // 0x396e14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x396e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x396e18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x396e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x396e1c: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x396e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
    // 0x396e20: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x396e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_396e24:
    // 0x396e24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x396e24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x396e28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x396e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x396e2c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x396e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x396e30: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x396e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x396e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x396e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396e38: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x396e38u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 4));
label_396e3c:
    // 0x396e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396e40: 0x3e00008  jr          $ra
    ctx->pc = 0x396E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E40u;
        // 0x396e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396E48u;
}
