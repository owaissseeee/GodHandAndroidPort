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

// Function: func_00377ED0
// Address: 0x377ed0 - 0x377fa0
void func_00377ED0_0x377ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377ED0_0x377ed0");
#endif

    switch (ctx->pc) {
        case 0x377ef4u: goto label_377ef4;
        case 0x377f08u: goto label_377f08;
        case 0x377f1cu: goto label_377f1c;
        case 0x377f28u: goto label_377f28;
        case 0x377f60u: goto label_377f60;
        default: break;
    }

    ctx->pc = 0x377ed0u;

    // 0x377ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377ed4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ed8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377edc: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x377edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x377ee0: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x377ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x377ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377ee8: 0x2610b9c0  addiu       $s0, $s0, -0x4640
    ctx->pc = 0x377ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949312));
    // 0x377eec: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377EECu;
    SET_GPR_U32(ctx, 31, 0x377EF4u);
    ctx->pc = 0x377EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377EECu;
    // 0x377ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377EECu, 0x377EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377EF4u;
label_377ef4:
    // 0x377ef4: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377ef8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377efc: 0x2484c8c0  addiu       $a0, $a0, -0x3740
    ctx->pc = 0x377efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953152));
    // 0x377f00: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377F00u;
    SET_GPR_U32(ctx, 31, 0x377F08u);
    ctx->pc = 0x377F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F00u;
    // 0x377f04: 0x24060660  addiu       $a2, $zero, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377F00u, 0x377F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F08u;
label_377f08:
    // 0x377f08: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f10: 0x2484cf20  addiu       $a0, $a0, -0x30E0
    ctx->pc = 0x377f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954784));
    // 0x377f14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377F14u;
    SET_GPR_U32(ctx, 31, 0x377F1Cu);
    ctx->pc = 0x377F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377F14u;
    // 0x377f18: 0x24060ff0  addiu       $a2, $zero, 0xFF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377F14u, 0x377F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377F1Cu;
label_377f1c:
    // 0x377f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x377f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x377f20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x377f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377f24: 0x0  nop
    ctx->pc = 0x377f24u;
    // NOP
label_377f28:
    // 0x377f28: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x377f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x377f2c: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x377f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f30: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x377f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x377f34: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x377f34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f38: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x377f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x377f3c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x377f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x377f40: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x377f40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x377f44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x377F44u;
    {
        const bool branch_taken_0x377f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F44u;
        // 0x377f48: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f44) {
            ctx->pc = 0x377F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377f28;
        }
    }
    ctx->pc = 0x377F4Cu;
    // 0x377f4c: 0x3c030077  lui         $v1, 0x77
    ctx->pc = 0x377f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)119 << 16));
    // 0x377f50: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377f54: 0x2445cf20  addiu       $a1, $v0, -0x30E0
    ctx->pc = 0x377f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x377f58: 0x2463c8c0  addiu       $v1, $v1, -0x3740
    ctx->pc = 0x377f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953152));
    // 0x377f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x377f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377f60:
    // 0x377f60: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x377f60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x377f64: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x377f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x377f68: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x377f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x377f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x377f70: 0xa0600005  sb          $zero, 0x5($v1)
    ctx->pc = 0x377f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f74: 0x28820033  slti        $v0, $a0, 0x33
    ctx->pc = 0x377f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x377f78: 0xa060001e  sb          $zero, 0x1E($v1)
    ctx->pc = 0x377f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f7c: 0xa0a00004  sb          $zero, 0x4($a1)
    ctx->pc = 0x377f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x377f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x377f84: 0xa0a00005  sb          $zero, 0x5($a1)
    ctx->pc = 0x377f84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x377f88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x377F88u;
    {
        const bool branch_taken_0x377f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F88u;
        // 0x377f8c: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f88) {
            ctx->pc = 0x377F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377f60;
        }
    }
    ctx->pc = 0x377F90u;
    // 0x377f90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377f98: 0x3e00008  jr          $ra
    ctx->pc = 0x377F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F98u;
        // 0x377f9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377FA0u;
}
