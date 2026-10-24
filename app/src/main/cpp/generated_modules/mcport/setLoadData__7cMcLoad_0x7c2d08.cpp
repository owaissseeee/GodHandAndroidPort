#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: setLoadData__7cMcLoad
// Address: 0x7c2d08 - 0x7c2de8
void setLoadData__7cMcLoad_0x7c2d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setLoadData__7cMcLoad_0x7c2d08");
#endif

    switch (ctx->pc) {
        case 0x7c2d34u: goto label_7c2d34;
        case 0x7c2d68u: goto label_7c2d68;
        case 0x7c2dc8u: goto label_7c2dc8;
        case 0x7c2dd4u: goto label_7c2dd4;
        default: break;
    }

    ctx->pc = 0x7c2d08u;

    // 0x7c2d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c2d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c2d0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x7c2d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2d10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c2d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c2d14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7c2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7c2d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c2d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c2d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c2d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2d20: 0x8c42264c  lw          $v0, 0x264C($v0)
    ctx->pc = 0x7c2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x7c2d24: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x7c2d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x7c2d28: 0x8ca300f8  lw          $v1, 0xF8($a1)
    ctx->pc = 0x7c2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x7c2d2c: 0x246414c0  addiu       $a0, $v1, 0x14C0
    ctx->pc = 0x7c2d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x7c2d30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_7c2d34:
    // 0x7c2d34: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x7c2d34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2d38: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x7c2d38u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c2d3c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x7c2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x7c2d40: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x7c2d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x7c2d44: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7c2d48: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C2D48u;
    {
        const bool branch_taken_0x7c2d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2D48u;
        // 0x7c2d4c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2d48) {
            ctx->pc = 0x7C2D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c2d34;
        }
    }
    ctx->pc = 0x7C2D50u;
    // 0x7c2d50: 0x8ca300f8  lw          $v1, 0xF8($a1)
    ctx->pc = 0x7c2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x7c2d54: 0x34049c20  ori         $a0, $zero, 0x9C20
    ctx->pc = 0x7c2d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39968);
    // 0x7c2d58: 0x8e02264c  lw          $v0, 0x264C($s0)
    ctx->pc = 0x7c2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9804)));
    // 0x7c2d5c: 0x246314c0  addiu       $v1, $v1, 0x14C0
    ctx->pc = 0x7c2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x7c2d60: 0x244214a0  addiu       $v0, $v0, 0x14A0
    ctx->pc = 0x7c2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5280));
    // 0x7c2d64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x7c2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_7c2d68:
    // 0x7c2d68: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x7c2d68u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2d6c: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x7c2d6cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c2d70: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x7c2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x7c2d74: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x7c2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x7c2d78: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7c2d7c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C2D7Cu;
    {
        const bool branch_taken_0x7c2d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2D7Cu;
        // 0x7c2d80: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c2d7c) {
            ctx->pc = 0x7C2D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c2d68;
        }
    }
    ctx->pc = 0x7C2D84u;
    // 0x7c2d84: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x7c2d84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c2d88: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x7c2d88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x7c2d8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x7c2d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c2d90: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x7c2d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x7c2d94: 0x8ca500f8  lw          $a1, 0xF8($a1)
    ctx->pc = 0x7c2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x7c2d98: 0x8e06264c  lw          $a2, 0x264C($s0)
    ctx->pc = 0x7c2d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9804)));
    // 0x7c2d9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c2d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c2da0: 0x78a330f0  lq          $v1, 0x30F0($a1)
    ctx->pc = 0x7c2da0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 12528)));
    // 0x7c2da4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x7c2da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x7c2da8: 0x7cc330d0  sq          $v1, 0x30D0($a2)
    ctx->pc = 0x7c2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 12496), GPR_VEC(ctx, 3));
    // 0x7c2dac: 0x78a23100  lq          $v0, 0x3100($a1)
    ctx->pc = 0x7c2dacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 12544)));
    // 0x7c2db0: 0x7cc230e0  sq          $v0, 0x30E0($a2)
    ctx->pc = 0x7c2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 12512), GPR_VEC(ctx, 2));
    // 0x7c2db4: 0x8ce37a24  lw          $v1, 0x7A24($a3)
    ctx->pc = 0x7c2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 31268)));
    // 0x7c2db8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x7c2db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x7c2dbc: 0xace37a24  sw          $v1, 0x7A24($a3)
    ctx->pc = 0x7c2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 31268), GPR_U32(ctx, 3));
    // 0x7c2dc0: 0xc1f2442  jal         func_7C9108
    ctx->pc = 0x7C2DC0u;
    SET_GPR_U32(ctx, 31, 0x7C2DC8u);
    ctx->pc = 0x7C2DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2DC0u;
    // 0x7c2dc4: 0x8c8500f8  lw          $a1, 0xF8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9108u, 0x7C2DC0u, 0x7C2DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2DC8u;
label_7c2dc8:
    // 0x7c2dc8: 0x8e04264c  lw          $a0, 0x264C($s0)
    ctx->pc = 0x7c2dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9804)));
    // 0x7c2dcc: 0xc0b01b4  jal         func_2C06D0
    ctx->pc = 0x7C2DCCu;
    SET_GPR_U32(ctx, 31, 0x7C2DD4u);
    ctx->pc = 0x7C2DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C2DCCu;
    // 0x7c2dd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C06D0u, 0x7C2DCCu, 0x7C2DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C2DD4u;
label_7c2dd4:
    // 0x7c2dd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c2dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c2dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c2dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c2ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x7C2DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C2DDCu;
        // 0x7c2de0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C2DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C2DE4u;
    // 0x7c2de4: 0x0  nop
    ctx->pc = 0x7c2de4u;
    // NOP
    ctx->pc = 0x7c2de8u;
}
} // namespace gh_mcport
