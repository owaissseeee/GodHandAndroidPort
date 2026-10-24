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

// Function: Slot2_setMarkLayersAt464
// Address: 0x1e3928 - 0x1e39d0
void Slot2_setMarkLayersAt464_0x1e3928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_setMarkLayersAt464_0x1e3928");
#endif

    switch (ctx->pc) {
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39c0u: goto label_1e39c0;
        default: break;
    }

    ctx->pc = 0x1e3928u;

    // 0x1e3928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e392c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e392cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e3930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3934: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3938: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3938u;
    {
        const bool branch_taken_0x1e3938 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3938u;
        // 0x1e393c: 0xa60004a2  sh          $zero, 0x4A2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1186), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3938) {
            ctx->pc = 0x1E3948u;
            goto label_1e3948;
        }
    }
    ctx->pc = 0x1E3940u;
    // 0x1e3940: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e3944: 0xa60204a2  sh          $v0, 0x4A2($s0)
    ctx->pc = 0x1e3944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1186), (uint16_t)GPR_U32(ctx, 2));
label_1e3948:
    // 0x1e3948: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3948u;
    {
        const bool branch_taken_0x1e3948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3948u;
        // 0x1e394c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3948) {
            ctx->pc = 0x1E3990u;
            goto label_1e3990;
        }
    }
    ctx->pc = 0x1E3950u;
    // 0x1e3950: 0x960204a2  lhu         $v0, 0x4A2($s0)
    ctx->pc = 0x1e3950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1186)));
    // 0x1e3954: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3958: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e3958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e395c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E395Cu;
    SET_GPR_U32(ctx, 31, 0x1E3964u);
    ctx->pc = 0x1E3960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E395Cu;
    // 0x1e3960: 0xa60204a2  sh          $v0, 0x4A2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1186), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E395Cu, 0x1E3964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3964u;
label_1e3964:
    // 0x1e3964: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e3964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e3968: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3968u;
    SET_GPR_U32(ctx, 31, 0x1E3970u);
    ctx->pc = 0x1E396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3968u;
    // 0x1e396c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3968u, 0x1E3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3970u;
label_1e3970:
    // 0x1e3970: 0x8e040464  lw          $a0, 0x464($s0)
    ctx->pc = 0x1e3970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1e3974: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3974u;
    SET_GPR_U32(ctx, 31, 0x1E397Cu);
    ctx->pc = 0x1E3978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3974u;
    // 0x1e3978: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3974u, 0x1E397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E397Cu;
label_1e397c:
    // 0x1e397c: 0x8e040468  lw          $a0, 0x468($s0)
    ctx->pc = 0x1e397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1e3980: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3980u;
    SET_GPR_U32(ctx, 31, 0x1E3988u);
    ctx->pc = 0x1E3984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3980u;
    // 0x1e3984: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3980u, 0x1E3988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3988u;
label_1e3988:
    // 0x1e3988: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3988u;
    {
        const bool branch_taken_0x1e3988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3988u;
        // 0x1e398c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3988) {
            ctx->pc = 0x1E39C4u;
            goto label_1e39c4;
        }
    }
    ctx->pc = 0x1E3990u;
label_1e3990:
    // 0x1e3990: 0x8e040430  lw          $a0, 0x430($s0)
    ctx->pc = 0x1e3990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x1e3994: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E3994u;
    SET_GPR_U32(ctx, 31, 0x1E399Cu);
    ctx->pc = 0x1E3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3994u;
    // 0x1e3998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E3994u, 0x1E399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E399Cu;
label_1e399c:
    // 0x1e399c: 0x8e04047c  lw          $a0, 0x47C($s0)
    ctx->pc = 0x1e399cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1148)));
    // 0x1e39a0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E39A0u;
    SET_GPR_U32(ctx, 31, 0x1E39A8u);
    ctx->pc = 0x1E39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E39A0u;
    // 0x1e39a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E39A0u, 0x1E39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39A8u;
label_1e39a8:
    // 0x1e39a8: 0x8e040464  lw          $a0, 0x464($s0)
    ctx->pc = 0x1e39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1e39ac: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E39ACu;
    SET_GPR_U32(ctx, 31, 0x1E39B4u);
    ctx->pc = 0x1E39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E39ACu;
    // 0x1e39b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E39ACu, 0x1E39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39B4u;
label_1e39b4:
    // 0x1e39b4: 0x8e040468  lw          $a0, 0x468($s0)
    ctx->pc = 0x1e39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1e39b8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E39B8u;
    SET_GPR_U32(ctx, 31, 0x1E39C0u);
    ctx->pc = 0x1E39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E39B8u;
    // 0x1e39bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E39B8u, 0x1E39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39C0u;
label_1e39c0:
    // 0x1e39c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e39c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e39c4:
    // 0x1e39c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e39c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e39c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E39C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E39C8u;
        // 0x1e39cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E39C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E39D0u;
}
