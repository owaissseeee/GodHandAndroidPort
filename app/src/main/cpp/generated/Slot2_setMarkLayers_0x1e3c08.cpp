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

// Function: Slot2_setMarkLayers
// Address: 0x1e3c08 - 0x1e3cb0
void Slot2_setMarkLayers_0x1e3c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_setMarkLayers_0x1e3c08");
#endif

    switch (ctx->pc) {
        case 0x1e3c44u: goto label_1e3c44;
        case 0x1e3c50u: goto label_1e3c50;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c68u: goto label_1e3c68;
        case 0x1e3c7cu: goto label_1e3c7c;
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3c94u: goto label_1e3c94;
        case 0x1e3ca0u: goto label_1e3ca0;
        default: break;
    }

    ctx->pc = 0x1e3c08u;

    // 0x1e3c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3c0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c18: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3C18u;
    {
        const bool branch_taken_0x1e3c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C18u;
        // 0x1e3c1c: 0xa60004a6  sh          $zero, 0x4A6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1190), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c18) {
            ctx->pc = 0x1E3C28u;
            goto label_1e3c28;
        }
    }
    ctx->pc = 0x1E3C20u;
    // 0x1e3c20: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e3c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3c24: 0xa60204a6  sh          $v0, 0x4A6($s0)
    ctx->pc = 0x1e3c24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1190), (uint16_t)GPR_U32(ctx, 2));
label_1e3c28:
    // 0x1e3c28: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3C28u;
    {
        const bool branch_taken_0x1e3c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C28u;
        // 0x1e3c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c28) {
            ctx->pc = 0x1E3C70u;
            goto label_1e3c70;
        }
    }
    ctx->pc = 0x1E3C30u;
    // 0x1e3c30: 0x960204a6  lhu         $v0, 0x4A6($s0)
    ctx->pc = 0x1e3c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1190)));
    // 0x1e3c34: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3c38: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e3c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e3c3c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C3Cu;
    SET_GPR_U32(ctx, 31, 0x1E3C44u);
    ctx->pc = 0x1E3C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C3Cu;
    // 0x1e3c40: 0xa60204a6  sh          $v0, 0x4A6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1190), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C3Cu, 0x1E3C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C44u;
label_1e3c44:
    // 0x1e3c44: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3c48: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C48u;
    SET_GPR_U32(ctx, 31, 0x1E3C50u);
    ctx->pc = 0x1E3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C48u;
    // 0x1e3c4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C48u, 0x1E3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C50u;
label_1e3c50:
    // 0x1e3c50: 0x8e040474  lw          $a0, 0x474($s0)
    ctx->pc = 0x1e3c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x1e3c54: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C54u;
    SET_GPR_U32(ctx, 31, 0x1E3C5Cu);
    ctx->pc = 0x1E3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C54u;
    // 0x1e3c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C54u, 0x1E3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C5Cu;
label_1e3c5c:
    // 0x1e3c5c: 0x8e040478  lw          $a0, 0x478($s0)
    ctx->pc = 0x1e3c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1144)));
    // 0x1e3c60: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C60u;
    SET_GPR_U32(ctx, 31, 0x1E3C68u);
    ctx->pc = 0x1E3C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C60u;
    // 0x1e3c64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C60u, 0x1E3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C68u;
label_1e3c68:
    // 0x1e3c68: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3C68u;
    {
        const bool branch_taken_0x1e3c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3C68u;
        // 0x1e3c6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c68) {
            ctx->pc = 0x1E3CA4u;
            goto label_1e3ca4;
        }
    }
    ctx->pc = 0x1E3C70u;
label_1e3c70:
    // 0x1e3c70: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3c74: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C74u;
    SET_GPR_U32(ctx, 31, 0x1E3C7Cu);
    ctx->pc = 0x1E3C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C74u;
    // 0x1e3c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C74u, 0x1E3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C7Cu;
label_1e3c7c:
    // 0x1e3c7c: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3c80: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C80u;
    SET_GPR_U32(ctx, 31, 0x1E3C88u);
    ctx->pc = 0x1E3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C80u;
    // 0x1e3c84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C80u, 0x1E3C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C88u;
label_1e3c88:
    // 0x1e3c88: 0x8e040474  lw          $a0, 0x474($s0)
    ctx->pc = 0x1e3c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1140)));
    // 0x1e3c8c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C8Cu;
    SET_GPR_U32(ctx, 31, 0x1E3C94u);
    ctx->pc = 0x1E3C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C8Cu;
    // 0x1e3c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C8Cu, 0x1E3C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3C94u;
label_1e3c94:
    // 0x1e3c94: 0x8e040478  lw          $a0, 0x478($s0)
    ctx->pc = 0x1e3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1144)));
    // 0x1e3c98: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3C98u;
    SET_GPR_U32(ctx, 31, 0x1E3CA0u);
    ctx->pc = 0x1E3C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3C98u;
    // 0x1e3c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3C98u, 0x1E3CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3CA0u;
label_1e3ca0:
    // 0x1e3ca0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3ca4:
    // 0x1e3ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3CA8u;
        // 0x1e3cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3CB0u;
}
