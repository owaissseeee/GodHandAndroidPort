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

// Function: func_00377E28
// Address: 0x377e28 - 0x377ed0
void func_00377E28_0x377e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00377E28_0x377e28");
#endif

    switch (ctx->pc) {
        case 0x377e48u: goto label_377e48;
        case 0x377e60u: goto label_377e60;
        case 0x377e74u: goto label_377e74;
        case 0x377e80u: goto label_377e80;
        case 0x377ea8u: goto label_377ea8;
        default: break;
    }

    ctx->pc = 0x377e28u;

    // 0x377e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x377e2c: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377e30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x377e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x377e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377e3c: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x377e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x377e40: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377E40u;
    SET_GPR_U32(ctx, 31, 0x377E48u);
    ctx->pc = 0x377E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E40u;
    // 0x377e44: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377E40u, 0x377E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E48u;
label_377e48:
    // 0x377e48: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x377e48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x377e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e50: 0x2610f050  addiu       $s0, $s0, -0xFB0
    ctx->pc = 0x377e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963280));
    // 0x377e54: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x377e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x377e58: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377E58u;
    SET_GPR_U32(ctx, 31, 0x377E60u);
    ctx->pc = 0x377E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E58u;
    // 0x377e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377E58u, 0x377E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E60u;
label_377e60:
    // 0x377e60: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x377e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x377e64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377e68: 0x24840850  addiu       $a0, $a0, 0x850
    ctx->pc = 0x377e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2128));
    // 0x377e6c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x377E6Cu;
    SET_GPR_U32(ctx, 31, 0x377E74u);
    ctx->pc = 0x377E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E6Cu;
    // 0x377e70: 0x24062a00  addiu       $a2, $zero, 0x2A00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x377E6Cu, 0x377E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377E74u;
label_377e74:
    // 0x377e74: 0x261017c2  addiu       $s0, $s0, 0x17C2
    ctx->pc = 0x377e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6082));
    // 0x377e78: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x377e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x377e7c: 0x0  nop
    ctx->pc = 0x377e7cu;
    // NOP
label_377e80:
    // 0x377e80: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x377e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x377e84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x377e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x377e88: 0x0  nop
    ctx->pc = 0x377e88u;
    // NOP
    // 0x377e8c: 0x0  nop
    ctx->pc = 0x377e8cu;
    // NOP
    // 0x377e90: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377E90u;
    {
        const bool branch_taken_0x377e90 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x377E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E90u;
        // 0x377e94: 0x2610ffc0  addiu       $s0, $s0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e90) {
            ctx->pc = 0x377E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377e80;
        }
    }
    ctx->pc = 0x377E98u;
    // 0x377e98: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x377e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x377e9c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x377e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x377ea0: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x377ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x377ea4: 0x24422922  addiu       $v0, $v0, 0x2922
    ctx->pc = 0x377ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10530));
label_377ea8:
    // 0x377ea8: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x377ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x377eac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x377eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x377eb0: 0x0  nop
    ctx->pc = 0x377eb0u;
    // NOP
    // 0x377eb4: 0x0  nop
    ctx->pc = 0x377eb4u;
    // NOP
    // 0x377eb8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377EB8u;
    {
        const bool branch_taken_0x377eb8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x377EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EB8u;
        // 0x377ebc: 0x2442ff20  addiu       $v0, $v0, -0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377eb8) {
            ctx->pc = 0x377EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377ea8;
        }
    }
    ctx->pc = 0x377EC0u;
    // 0x377ec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x377ec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x377EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EC8u;
        // 0x377ecc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377ED0u;
}
